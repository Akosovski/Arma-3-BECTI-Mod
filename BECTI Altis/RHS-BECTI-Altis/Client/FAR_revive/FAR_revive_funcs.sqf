////////////////////////////////////////////////
// Player Actions
////////////////////////////////////////////////
FAR_Player_Actions =
{
	if (alive (call rhs_fnc_findPlayer) && (call rhs_fnc_findPlayer) isKindOf "Man") then
	{
		// addAction args: title, filename, (arguments, priority, showWindow, hideOnUse, shortcut, condition, positionInModel, radius, radiusView, showIn3D, available, textDefault, textToolTip)
		(call rhs_fnc_findPlayer) addAction ["<t color=""#C90000"">" + "Revive" + "</t>", "Client\FAR_revive\FAR_handleAction.sqf", ["action_revive"], 10, true, true, "", "[_this,_target] call FAR_Check_Revive"];
		(call rhs_fnc_findPlayer) addAction ["<t color=""#C90000"">" + "Stabilize" + "</t>", "Client\FAR_revive\FAR_handleAction.sqf", ["action_stabilize"], 10, true, true, "", "[_this,_target] call FAR_Check_Stabilize"];
		(call rhs_fnc_findPlayer) addAction ["<t color=""#C90000"">" + "Suicide" + "</t>", "Client\FAR_revive\FAR_handleAction.sqf", ["action_suicide"], 9, false, true, "", "call FAR_Check_Suicide"];
		(call rhs_fnc_findPlayer) addAction ["<t color=""#C90000"">" + "Drag" + "</t>", "Client\FAR_revive\FAR_handleAction.sqf", ["action_drag"], 9, false, true, "", "[_this,_target] call FAR_Check_Dragging"];
	};
};

////////////////////////////////////////////////
// Handle Death
////////////////////////////////////////////////
FAR_HandleDamage_EH =
{
	private ["_unit", "_killer", "_amountOfDamage", "_isUnconscious","_bodyPart"];

	_unit = _this select 0;
	_bodyPart = _this select 1;
	_amountOfDamage = _this select 2;
	_killer = _this select 3;
	_isUnconscious = _unit getVariable "FAR_isUnconscious";

	if (alive _unit && _amountOfDamage >= 0.9 && _isUnconscious == 0 && _bodyPart in ["","head_hit","body"]) then
	{
		_unit setDamage 0;
		_unit allowDamage false;
		_amountOfDamage = 0;
		[_unit, _killer] spawn FAR_Player_Unconscious;
	};

	_amountOfDamage
};

////////////////////////////////////////////////
// Make Player Unconscious
////////////////////////////////////////////////
FAR_Player_Unconscious =
{
	private["_unit", "_killer"];
	_unit = _this select 0;
	_killer = _this select 1;

	// Death message
	if (FAR_EnableDeathMessages && !isNil "_killer" && ( _killer call rhs_fnc_isPlayer) && _killer != _unit) then
	{
		FAR_deathMessage = [_unit, _killer];
		publicVariable "FAR_deathMessage";
		["FAR_deathMessage", [_unit, _killer]] call FAR_public_EH;
	};

	if (( _unit call rhs_fnc_isPlayer)) then
	{
		disableUserInput true;
		titleText ["", "BLACK FADED"];
	};

	// Eject unit if inside vehicle
	while {vehicle _unit != _unit} do
	{
		unAssignVehicle _unit;
		_unit action ["eject", vehicle _unit];

		sleep 2;
	};

	_unit setDamage 0;
    _unit setVelocity [0,0,0];
    _unit allowDamage false;
	_unit setCaptive true;
    //_unit playMove "AinjPpneMstpSnonWrflDnon_rolltoback";
	[_unit,"AinjPpneMstpSnonWrflDnon_rolltoback"] remoteExec ["playmove"];

	sleep 4;

	if ((_unit call rhs_fnc_isPlayer) ) then
	{
		titleText ["", "BLACK IN", 1];
		disableUserInput false;

		// Mute ACRE
		_unit setVariable ["tf_unable_to_use_radio", true];
	};

	[_unit,"AinjPpneMstpSnonWrflDnon"] remoteExec ["switchMove"];
	//_unit switchMove "AinjPpneMstpSnonWrflDnon";
	[_unit,false] remoteExec ["enableSimulation"];
	_unit setVariable ["FAR_isUnconscious", 1, true];

	// Call this code only on players
	if ((_unit call rhs_fnc_isPlayer) ) then
	{
		_bleedOut = time + FAR_BleedOut;

		while { !isNull _unit && alive _unit && _unit getVariable "FAR_isUnconscious" == 1 && _unit getVariable "FAR_isStabilized" == 0 && (FAR_BleedOut <= 0 || time < _bleedOut) } do
		{
			hintSilent format["Bleedout in %1 seconds\n\n%2", round (_bleedOut - time), call FAR_CheckFriendlies];

			sleep 0.5;
		};

		if (_unit getVariable "FAR_isStabilized" == 1) then {
			//Unit has been stabilized. Disregard bleedout timer and umute player
			_unit setVariable ["tf_unable_to_use_radio", false];

			while { !isNull _unit && alive _unit && _unit getVariable "FAR_isUnconscious" == 1 } do
			{
				hintSilent format["You have been stabilized\n\n%1", call FAR_CheckFriendlies];

				sleep 0.5;
			};
		};

		// Player bled out
		if (FAR_BleedOut > 0 && {time > _bleedOut} && {_unit getVariable ["FAR_isStabilized",0] == 0}) then
		{
			_unit setDamage 1;
		}
		else
		{
			// Player got revived
			_unit setVariable ["FAR_isStabilized", 0, true];
			sleep 6;

			// Clear the "medic nearby" hint
			hintSilent "";

			// Unmute ACRE
			if (( _unit call rhs_fnc_isPlayer)) then
			{
				_unit setVariable ["tf_unable_to_use_radio", false];
			};

			[_unit,true] remoteExec ["enableSimulation"];
			//_unit enableSimulation true;
			_unit allowDamage true;
			_unit setDamage 0;
			_unit setCaptive false;

			_unit playMove "amovppnemstpsraswrfldnon";
			_unit playMove "";
		};
	}
	else
	{
		// [Debugging] Bleedout for AI
		_bleedOut = time + FAR_BleedOut;

		while { !isNull _unit && alive _unit && _unit getVariable "FAR_isUnconscious" == 1 && _unit getVariable "FAR_isStabilized" == 0 && (FAR_BleedOut <= 0 || time < _bleedOut) } do
		{
			sleep 0.5;
		};

		if (_unit getVariable "FAR_isStabilized" == 1) then {
			while { !isNull _unit && alive _unit && _unit getVariable "FAR_isUnconscious" == 1 } do
			{
				sleep 0.5;
			};
		};

		// AI bled out
		if (FAR_BleedOut > 0 && {time > _bleedOut} && {_unit getVariable ["FAR_isStabilized",0] == 0}) then
		{
			_unit setDamage 1;
			_unit setVariable ["FAR_isUnconscious", 0, true];
			_unit setVariable ["FAR_isDragged", 0, true];
		}
	};
};

////////////////////////////////////////////////
// Revive Player
////////////////////////////////////////////////
FAR_HandleRevive =
{
	private ["_target","_player"];

	_target = _this select 0;
	_player = (call rhs_fnc_findPlayer);

	if (alive _target) then
	{
		_player playMove "AinvPknlMstpSnonWnonDr_medic0";

		sleep 6;
		_target setVariable ["FAR_isUnconscious", 0, true];
		_target setVariable ["FAR_isDragged", 0, true];

		// [Debugging] Code below is only relevant if revive script is enabled for AI
		if (!(_target call rhs_fnc_isPlayer) ) then
		{
			sleep 6;
			[_target,true] remoteExec ["enableSimulation"];
			//_target enableSimulation true;
			_target allowDamage true;
			_target setDamage 0;
			_target setCaptive false;

			_target playMove "amovppnemstpsraswrfldnon";
		};
    	// If revive mode 3 is used and the player has no Medikit (therefore must have at least one FAK, since the action is unavailable otherwise), remove 1 FAK from the player's inventory.
		if ( FAR_ReviveMode == 3 && !("Medikit" in (items _player)) ) then
		{
			_player removeItem "FirstAidKit"
		};
	};
};

////////////////////////////////////////////////
// Stabilize Player
////////////////////////////////////////////////
FAR_HandleStabilize =
{
	private ["_target"];

	_target = _this select 0;

	if (alive _target) then
	{
		(call rhs_fnc_findPlayer) playMove "AinvPknlMstpSnonWnonDr_medic0";

		if (!("Medikit" in (items (call rhs_fnc_findPlayer))) ) then {
			(call rhs_fnc_findPlayer) removeItem "FirstAidKit";
		};

		_target setVariable ["FAR_isStabilized", 1, true];

		sleep 6;
	};
};

////////////////////////////////////////////////
// Drag Injured Player
////////////////////////////////////////////////
FAR_Drag =
{
	private ["_target", "_id","_player"];

	FAR_isDragging = true;

	_target = _this select 0;
	_player =(call rhs_fnc_findPlayer);

	_target attachTo [(call rhs_fnc_findPlayer), [0, 1.1, 0.092]];
	_target setDir 180;
	_target setVariable ["FAR_isDragged", 1, true];

	_player playMoveNow "AcinPknlMstpSrasWrflDnon";
	[_target,"AinjPpneMrunSnonWnonDb_grab"] remoteExecCall ["switchMove"];
	sleep 0.1;


	// Rotation fix
	FAR_isDragging_EH = _target;
	publicVariable "FAR_isDragging_EH";

	// Add release action and save its id so it can be removed
	_id = _player addAction ["<t color=""#C90000"">" + "Release" + "</t>", "Client\FAR_revive\FAR_handleAction.sqf", ["action_release"], 10, true, true, "", "true"];

	hint "Press 'C' if you can't move.";

	// Wait until release action is used
	waitUntil
	{
		!alive _player || _player getVariable ["FAR_isUnconscious",0] == 1 || !alive _target || _target getVariable "FAR_isUnconscious" == 0 || !FAR_isDragging || _target getVariable "FAR_isDragged" == 0
	};

	// Handle release action
	FAR_isDragging = false;

	if (!isNull _target && alive _target) then
	{
		//_target enableSimulation true;
		//_target switchmove "AinjPpneMrunSnonWnonDb_release";
		[_target,"AinjPpneMstpSnonWrflDnon"] remoteExecCall ["switchMove"];
		_target setVariable ["FAR_isDragged", 0, true];
		detach _target;
	};

	_player removeAction _id;
};

FAR_Release =
{
	// Switch back to default animation
	(call rhs_fnc_findPlayer) playMove "amovpknlmstpsraswrfldnon";

	FAR_isDragging = false;
};

////////////////////////////////////////////////
// Event handler for public variables
////////////////////////////////////////////////
FAR_public_EH =
{
	if(count _this < 2) exitWith {};

	_EH  = _this select 0;
	_target = _this select 1;

	// FAR_isDragging
	if (_EH == "FAR_isDragging_EH") then
	{
		_target setDir 180;
	};

	// FAR_deathMessage
	if (_EH == "FAR_deathMessage") then
	{
		_killed = _target select 0;
		_killer = _target select 1;

		if ((_killed call rhs_fnc_isPlayer)  && ( _killer call rhs_fnc_isPlayer)) then
		{
			systemChat format["%1 was injured by %2", name _killed, name _killer];
		};
	};
};

////////////////////////////////////////////////
// Revive Action Check
////////////////////////////////////////////////
FAR_Check_Revive =
{
	private ["_target", "_isTargetUnconscious", "_isDragged","_player"];

	_return = false;

	// Unit that will excute the action
	_player =(call rhs_fnc_findPlayer);
	_isPlayerUnconscious = _player getVariable ["FAR_isUnconscious",-1];
	_target = cursorTarget;

	// Make sure player is alive and target is an injured unit
	if((typeName _this) == "OBJECT")then{_this = [_this,_this]};
	if( isNil "_target" || {_isPlayerUnconscious == 1} || {!alive _target} || { !alive _player } || {FAR_isDragging} || {(_target distance _player) > 2}  || {( player == (_this select 1) ) && ( player != (_this select 0) )} ) exitWith
	{
		_return
	};

	_isMedic = getNumber (configfile >> "CfgVehicles" >> typeOf _player >> "attendant");
	_isTargetUnconscious = _target getVariable ["FAR_isUnconscious",-1];
	_isDragged = _target getVariable ["FAR_isDragged",-1];

	// Make sure target is unconscious and player is a medic
	if (_isTargetUnconscious == 1 && _isDragged == 0 && (_isMedic == 1 || FAR_ReviveMode > 0) ) then
	{
		_return = true;

		// [ReviveMode] Check if player has a Medikit
		if ( FAR_ReviveMode == 2 && !("Medikit" in (items _player)) ) then
		{
			_return = false;
		};
		if ( FAR_ReviveMode == 3 && !("Medikit" in (items _player)) ) then
		{
      		if !("FirstAidKit" in (items _player)) then
      		{
        			_return = false;
      		};
		};
	};

	_return
};

////////////////////////////////////////////////
// Stabilize Action Check
////////////////////////////////////////////////
FAR_Check_Stabilize =
{
	private ["_target", "_isTargetUnconscious", "_isDragged","_player"];

	_return = false;

	// Unit that will excute the action
	_player =(call rhs_fnc_findPlayer);
	_isPlayerUnconscious = _player getVariable "FAR_isUnconscious";
	_target = cursorTarget;

	// Make sure player is alive and target is an injured unit
	if((typeName _this) == "OBJECT")then{_this = [_this,_this]};
	if( isNil "_target" || {_isPlayerUnconscious == 1} || {!alive _target} || { !alive _player } || {FAR_isDragging} || {(_target distance _player) > 2}  || {( player == (_this select 1) ) && ( player != (_this select 0) )} ) exitWith
	{
		_return
	};

	_isTargetUnconscious = _target getVariable ["FAR_isUnconscious",-1];
	_isTargetStabilized = _target getVariable ["FAR_isStabilized",-1];
	_isDragged = _target getVariable ["FAR_isDragged",-1];

	// Make sure target is unconscious and hasn't been stabilized yet, and player has a FAK/Medikit
	if (_isTargetUnconscious == 1 && _isTargetStabilized == 0 && _isDragged == 0 && ( ("FirstAidKit" in (items _player)) || ("Medikit" in (items _player)) || FAR_ReviveMode == 1 ) ) then
	{
		_return = true;
	};

	_return
};

////////////////////////////////////////////////
// Suicide Action Check
////////////////////////////////////////////////
FAR_Check_Suicide =
{
	_return = false;
	_isPlayerUnconscious = (call rhs_fnc_findPlayer) getVariable ["FAR_isUnconscious",0];

	if (alive (call rhs_fnc_findPlayer) && _isPlayerUnconscious == 1) then
	{
		_return = true;
	};

	_return
};

////////////////////////////////////////////////
// Dragging Action Check
////////////////////////////////////////////////
FAR_Check_Dragging =
{
	private ["_target", "_isPlayerUnconscious", "_isDragged","_player"];

	_return = false;
	_target = cursorTarget;
	_player =(call rhs_fnc_findPlayer);
	_isPlayerUnconscious = _player getVariable ["FAR_isUnconscious",-1];
//{!alive _target} || {(!(_target call rhs_fnc_isPlayer)  && !FAR_Debugging)} ||

	if((typeName _this) == "OBJECT")then{_this = [_this,_this]};
	if( isNil "_target" || {_isPlayerUnconscious == 1} || { !alive _player } || {FAR_isDragging} || {(_target distance _player) > 2}  || {( player == (_this select 1) ) && ( player != (_this select 0) )} ) exitWith
	{
		_return;
	};

	// Target of the action
	_isTargetUnconscious = _target getVariable ["FAR_isUnconscious",-1];
	_isDragged = _target getVariable ["FAR_isDragged",-1];

	if(_isTargetUnconscious == 1 && _isDragged == 0) then
	{
		_return = true;
	};

	_return
};

////////////////////////////////////////////////
// Show Nearby Friendly Medics
////////////////////////////////////////////////
FAR_IsFriendlyMedic =
{
	private ["_unit"];

	_return = false;
	_unit = _this;
	_isMedic = getNumber (configfile >> "CfgVehicles" >> typeOf _unit >> "attendant");

	if ( alive _unit && ((_unit call rhs_fnc_isPlayer)  || FAR_Debugging) && side _unit == FAR_PlayerSide && _unit getVariable ["FAR_isUnconscious",-1] == 0 && (_isMedic == 1 || FAR_ReviveMode > 0) ) then
	{
		_return = true;
	};

	_return
};

FAR_CheckFriendlies =
{
	private ["_unit", "_units", "_medics", "_hintMsg"];

	_units = nearestObjects [getpos (call rhs_fnc_findPlayer), ["Man", "Car", "Air", "Ship"], 800];
	_medics = [];
	_dist = 800;
	_hintMsg = "";

	// Find nearby friendly medics
	if (count _units > 1) then
	{
		{
			if (_x isKindOf "Car" || _x isKindOf "Air" || _x isKindOf "Ship") then
			{
				if (alive _x && count (crew _x) > 0) then
				{
					{
						if (_x call FAR_IsFriendlyMedic) then
						{
							_medics = _medics + [_x];

							if (true) exitWith {};
						};
					} forEach crew _x;
				};
			}
			else
			{
				if (_x call FAR_IsFriendlyMedic) then
				{
					_medics = _medics + [_x];
				};
			};

		} forEach _units;
	};

	// Sort medics by distance
	if (count _medics > 0) then
	{
		{
			if ((call rhs_fnc_findPlayer) distance _x < _dist) then
			{
				_unit = _x;
				_dist = (call rhs_fnc_findPlayer) distance _x;
			};

		} forEach _medics;

		if (!isNull _unit) then
		{
			_unitName	= name _unit;
			_distance	= floor ((call rhs_fnc_findPlayer) distance _unit);

			_hintMsg = format["Nearby Medic:\n%1 is %2m away.", _unitName, _distance];
		};
	}
	else
	{
		_hintMsg = "No medic nearby.";
	};

	_hintMsg
};



