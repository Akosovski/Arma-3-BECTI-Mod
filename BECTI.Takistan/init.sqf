//--- Optional Mod Stuff
if (!isClass(configFile >> "CfgPatches" >> "ace_main")) then 
{  
//Start other 'plugins' if ACE is not running
 [] execVM "Client\Module\zlt\zlt_fieldrepair.sqf"; 
 [] execVM "Client\Module\zlt\zlt_fastrope.sqf";
 [player] execVM "Client\Module\earplugs\simpleEP.sqf";
}; 

if (isClass(configFile >> "CfgPatches" >> "task_force_radio")) then 
{ 
//TFAR mod is enabled
TF_give_personal_radio_to_regular_soldier = true;
tf_no_auto_long_range_radio = true;
TF_give_microdagr_to_soldier = false;
}; 

onMapSingleClick {true};

//--- Initial View Distance and Object View Distance for both clients and server
setViewDistance 2500;
setObjectViewDistance 2500;

//--- Early definition, will be override later on in the init files.
CTI_P_SideJoined = civilian;

// CTI_DEBUG = true;
CTI_DEBUG = false;

//--- Log levels
CTI_Log_Debug = 3;
CTI_Log_Information = 2;
CTI_Log_Warning = 1;
CTI_Log_Error = 0;

//--- Log level to use
CTI_Log_Level = CTI_Log_Information;

//--- We define the log function early so that we can use it
CTI_CO_FNC_Log = compile preprocessFileLineNumbers "Common\Functions\Common_Log.sqf";

//--- Global gameplay variables
CTI_GameOver = false;

//--- Determine which machine is running this init script
CTI_IsHostedServer = if (isServer && !isDedicated) then {true} else {false};
CTI_IsServer = if (isDedicated || CTI_IsHostedServer) then {true} else {false};
CTI_IsClient = if (CTI_IsHostedServer || !isDedicated) then {true} else {false};
CTI_IsHeadless = if !(hasInterface || isDedicated) then {true} else {false};

if (CTI_Log_Level >= CTI_Log_Information) then { //--- Information
	["INFORMATION", "FILE: init.sqf", format["Environment is Multiplayer? [%1]", isMultiplayer]] call CTI_CO_FNC_Log;
	["INFORMATION", "FILE: init.sqf", format["Current Actor is: Hosted Server [%1]? Dedicated [%2]? Client [%3]? Headless [%4]?", CTI_IsHostedServer, isDedicated, CTI_IsClient, CTI_IsHeadless]] call CTI_CO_FNC_Log
};

//--- Hide first to prevent spoils
if (CTI_IsClient && isMultiplayer) then {
	0 spawn {
		waitUntil {!(isNull player)};
		12452 cutText ["Receiving mission intel...", "BLACK FADED", 50000];
	};
};

//--- In MP, we get the parameters.
if (isMultiplayer) then {call Compile preprocessFileLineNumbers "Common\Init\Init_Parameters.sqf"};

//--- Server JIP/DC Handler
if (isMultiplayer && CTI_IsServer) then {
	CTI_SE_FNC_OnPlayerConnected = compileFinal preprocessFileLineNumbers "Server\Functions\Server_OnPlayerConnected.sqf";
	CTI_SE_FNC_OnPlayerDisconnected = compileFinal preprocessFileLineNumbers "Server\Functions\Server_OnPlayerDisconnected.sqf";

	onPlayerConnected {[_uid, _name, _id] spawn CTI_SE_FNC_OnPlayerConnected};
	onPlayerDisconnected {[_uid, _name, _id] call CTI_SE_FNC_OnPlayerDisconnected};
};

if (CTI_Log_Level >= CTI_Log_Information) then { ["INFORMATION", "FILE: init.sqf", "Running common initialization"] call CTI_CO_FNC_Log };

//--- Common Part execution
call compile preprocessFileLineNumbers "Common\Init\Init_CommonConstants.sqf";
call compile preprocessFileLineNumbers "Common\Init\Init_Common.sqf";



//--- JIP Part is over
CTI_Init_JIP = true;

//--- Towns init
execVM "Common\Init\Init_Locations.sqf";

//--- Common Part is over
CTI_Init_Common = true; 

//--- Server execution
if (CTI_IsServer) then {
	if (CTI_Log_Level >= CTI_Log_Information) then { ["INFORMATION", "FILE: init.sqf", "Running server initialization"] call CTI_CO_FNC_Log	};
	execVM "Server\Init\Init_Server.sqf";
};

//--- Pure client execution
if (CTI_IsClient && !CTI_IsHeadless) then {	
	if (CTI_Log_Level >= CTI_Log_Information) then { ["INFORMATION", "FILE: init.sqf", "Running client initialization"] call CTI_CO_FNC_Log	};
	
	waitUntil {!(isNull player)};
	
	execVM "Client\Init\Init_Client.sqf";
};
//--- Add the briefing (notes).
// [] ExecVM "briefing.sqf";

//--- Headless client execution
if (CTI_IsHeadless) then {
	if (CTI_Log_Level >= CTI_Log_Information) then { ["INFORMATION", "FILE: init.sqf", "Running headless client initialization"] call CTI_CO_FNC_Log };
	
	execVM "Client\Init\Init_Client_Headless.sqf";
};

//--- Set the group ID
execVM "Common\Init\Init_GroupsID.sqf";

