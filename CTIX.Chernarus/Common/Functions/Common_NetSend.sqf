/*
  # HEADER #
	Script: 		Common\Functions\Common_NetSend.sqf
	Alias:			CTI_CO_FNC_NetSend
	Description:	Send a message over the network to one or multiple targets (Clients, Client, Server)
					The content of the message is executed by the function CTI_CO_FNC_OnPVFReceived
					Public Functions (PVF) are defined in:
					 - Client\Init\Init_PublicVariables.sqf
					 - Server\Init\Init_PublicVariables.sqf
					Note that the local execution is only available for a wide broadcast (all)

					converted to remoteExec - r
	Author: 		Benny
	Creation Date:	13-05-2013
	Revision Date:	12-10-2015

  # PARAMETERS #
    0	[String / Array]: The destination
    1	[String]: The PVF which we want to call without the prefix
    2	[Array]: The parameters of the PVF
    3	{[Boolean]}: Also perform a local execution on the caller (PV only)

  # SYNTAX #
	[DESTINATION, FUNCTION] call CTI_CO_FNC_NetSend
	[DESTINATION, FUNCTION, PARAMETERS] call CTI_CO_FNC_NetSend
	[DESTINATION, FUNCTION, PARAMETERS, LOCAL EXEC] call CTI_CO_FNC_NetSend

  # DEPENDENCIES #
	Common Function: CTI_CO_FNC_OnPVFReceived

  # EXAMPLE #
	["CLIENT", "Client_OnTownCaptured", [_town, _newSideID, _currentSideID]] call CTI_CO_FNC_NetSend
	  -> Execute the Function "CTI_PVF_Client_OnTownCaptured" on all clients with some parameters
	["CLIENT", "Client_RemoveRuins", [_position, _ruins]] call CTI_CO_FNC_NetSend
	  -> Execute the Function "CTI_PVF_Client_RemoveRuins" on all clients with some parameters

	[["CLIENT", _side_killed], "Client_OnMessageReceived", ["penalty", [_var_name, _group_killer, _penalty]], _show_local] call CTI_CO_FNC_NetSend;
	  -> Execute the Function "CTI_PVF_Client_OnMessageReceived" on all clients of the given side with some parameters and call a local execution for the sender
	[["CLIENT", _killer], "Client_OnTeamkill"] call CTI_CO_FNC_NetSend
	  -> Execute the Function "CTI_PVF_Client_OnTeamkill" on a single player

	["SERVER", "Request_AddScore", [player, _score]] call CTI_CO_FNC_NetSend
	  -> Execute the Function "CTI_PVF_Request_AddScore" on the server with some parameters
	["SERVER", "Request_Building", [_placed, CTI_CL_VAR_SideJoined, getPos _preview, getDir _preview]] call CTI_CO_FNC_NetSend
	  -> Execute the Function "CTI_PVF_Request_Building" on the server with some parameters
	["SERVER", "Request_HQRepair", CTI_P_SideJoined] call CTI_CO_FNC_NetSend
	  -> Execute the Function "CTI_PVF_Request_HQRepair" on the server with a single parameter
*/

private ["_pv_destination", "_pv_exec_local", "_pv_name", "_pv_parameters", "_pv_target"];

_pv_destination = _this select 0;
_pv_name = format ["CTI_PVF_%1", _this select 1];
_pv_parameters = if (count _this > 2) then {_this select 2} else {[]};
//_pv_exec_local = if (count _this > 3) then {_this select 3} else {false};

_pv_target = 2;
if(typeName _pv_destination == "ARRAY")then{
	_pv_target=_pv_destination select 1;
}else{
	if(_pv_destination == "CLIENT")then{_pv_target = 0;};
};

_pv_parameters remoteExec [_pv_name,_pv_target];

