//
// Farooq's Revive 1.5
//

//------------------------------------------//
// Parameters - Feel free to edit these
//------------------------------------------//

// Seconds until unconscious unit bleeds out and dies. Set to 0 to disable.
FAR_BleedOut = 600;

// Enable teamkill notifications
FAR_EnableDeathMessages = true;

// If enabled, unconscious units will not be able to use ACRE radio, hear other people or use proximity chat
FAR_MuteACRE = false;


/*
	0 = Only medics can revive
	1 = All units can revive
	2 = Same as 1 but a medikit is required to revive
  	3 = Similar to 2. Requires either a FAK or a medikit to revive. If a FAK is used, it is removed from the inventory. (Added by Professor Cupcake)
*/


//------------------------------------------//

call compile preprocessFile "Client\FAR_revive\FAR_revive_funcs.sqf";

#define SCRIPT_VERSION "1.6"

FAR_isDragging = false;
FAR_isDragging_EH = [];
FAR_deathMessage = [];
FAR_Debugging = true;

if (isDedicated) exitWith {};

////////////////////////////////////////////////
// Player Initialization
////////////////////////////////////////////////
[] spawn
{
    waitUntil { !isNull player };

	// Public event handlers
	"FAR_isDragging_EH" addPublicVariableEventHandler FAR_public_EH;
	"FAR_deathMessage" addPublicVariableEventHandler FAR_public_EH;

	[] spawn FAR_Player_Init;

	if (FAR_MuteACRE) then
	{
		[] spawn FAR_Mute_ACRE;

		hintSilent format["Farooq's Revive %1 is initialized.%2", SCRIPT_VERSION, "\n\n Note: Unconscious units will not be able to use radio, hear other people or use proximity chat"];
	}
	else
	{
		hintSilent format["Farooq's Revive %1 is initialized.", SCRIPT_VERSION];
	};

	// Event Handlers
	player addEventHandler
	[
		"Respawn",
		{
			[] spawn FAR_Player_Init;
		}
	];
};

FAR_Player_Init =
{
	// Cache player's side
	_player=(call rhs_fnc_findPlayer);
	FAR_PlayerSide = side _player;

	// Clear event handler before adding it
	_player removeAllEventHandlers "HandleDamage";

	_player addEventHandler ["HandleDamage", FAR_HandleDamage_EH];
	_player addEventHandler
	[
		"Killed",
		{
			// Remove dead body of player (for missions with respawn enabled)
			_body = _this select 0;

			[_body] spawn
			{

				waitUntil { alive player };
				_body = _this select 0;
				deleteVehicle _body;
			}
		}
	];

	_player setVariable ["FAR_isUnconscious", 0, true];
	_player setVariable ["FAR_isStabilized", 0, true];
	_player setVariable ["FAR_isDragged", 0, true];
	_player setVariable ["ace_sys_wounds_uncon", false];
	_player setCaptive false;
	player enableStamina false; 
	player setCustomAimCoef 0.2; 
	player setUnitRecoilCoefficient 0.8;

	FAR_isDragging = false;

	[] spawn FAR_Player_Actions;
};

// Drag & Carry animation fix
[] spawn
{
	while {true} do
	{
		_remote=true;
		_player=(call rhs_fnc_findPlayer);
		if (animationState _player == "acinpknlmstpsraswrfldnon_acinpercmrunsraswrfldnon" || animationState _player == "helper_switchtocarryrfl" || animationState _player == "AcinPknlMstpSrasWrflDnon") then
		{
			if (FAR_isDragging) then
			{
				_player switchMove "AcinPknlMstpSrasWrflDnon";
			}
			else
			{
				_player switchMove "amovpknlmstpsraswrfldnon";
			};
		};
		if(player != _player AND (_player getVariable ["far_remote",TRUE]))then{
			_player spawn
			{
				//add actions and variables to remote controled unit
				_this setVariable ["far_remote",FALSE];
				_this setVariable ["FAR_isUnconscious", 0, true];
				_this setVariable ["FAR_isStabilized", 0, true];
				_this setVariable ["FAR_isDragged", 0, true];
				_this setVariable ["ace_sys_wounds_uncon", false];

				_this addAction ["<t color=""#C90000"">" + "Revive" + "</t>", "Client\FAR_revive\FAR_handleAction.sqf", ["action_revive"], 10, true, true, "", "call FAR_Check_Revive"];
				_this addAction ["<t color=""#C90000"">" + "Stabilize" + "</t>", "Client\FAR_revive\FAR_handleAction.sqf", ["action_stabilize"], 10, true, true, "", "call FAR_Check_Stabilize"];
				_this addAction ["<t color=""#C90000"">" + "Drag" + "</t>", "Client\FAR_revive\FAR_handleAction.sqf", ["action_drag"], 9, false, true, "", "call FAR_Check_Dragging"];

				waitUntil {_this != (call rhs_fnc_findPlayer)};
				//remove actions & variables
				removeAllActions _this;
				_this setVariable ["far_remote",NIL];
				_this setVariable ["FAR_isUnconscious", nil, true];
				_this setVariable ["FAR_isStabilized", nil, true];
				_this setVariable ["FAR_isDragged", nil, true];
			};
		};

		sleep 3;
	}
};

FAR_Mute_ACRE =
{
	waitUntil { time > 0 };

	waitUntil
	{
		if (alive (call rhs_fnc_findPlayer)) then
		{
			// player getVariable ["ace_sys_wounds_uncon", true/false];
			if (((call rhs_fnc_findPlayer) getVariable["ace_sys_wounds_uncon", false])) then
			{
				private["_saveVolume"];

				_saveVolume = acre_sys_core_globalVolume;

				(call rhs_fnc_findPlayer) setVariable ["acre_sys_core_isDisabled", true, true];

				waitUntil
				{
					acre_sys_core_globalVolume = 0;

					if (!((call rhs_fnc_findPlayer) getVariable["acre_sys_core_isDisabled", false])) then
					{
						(call rhs_fnc_findPlayer) setVariable ["acre_sys_core_isDisabled", true, true];
						[true] call acre_api_fnc_setSpectator;
					};

					!((call rhs_fnc_findPlayer) getVariable["ace_sys_wounds_uncon", false]);
				};

				if (((call rhs_fnc_findPlayer) getVariable["acre_sys_core_isDisabled", false])) then
				{
					(call rhs_fnc_findPlayer) setVariable ["acre_sys_core_isDisabled", false, true];
					[false] call acre_api_fnc_setSpectator;
				};

				acre_sys_core_globalVolume = _saveVolume;
			};
		}
		else
		{
			waitUntil { alive (call rhs_fnc_findPlayer) };
		};

		sleep 0.25;

		false
	};
};

////////////////////////////////////////////////
// [Debugging] Add revive to playable AI units
////////////////////////////////////////////////
if (!FAR_Debugging || isMultiplayer) exitWith {};

{
	if (!isPlayer _x) then
	{
		_x addEventHandler ["HandleDamage", FAR_HandleDamage_EH];
		_x setVariable ["FAR_isUnconscious", 0, true];
		_x setVariable ["FAR_isStabilized", 0, true];
		_x setVariable ["FAR_isDragged", 0, true];
	};
} forEach switchableUnits;