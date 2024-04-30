/*
	Defenses Definition, define the available town defenses.
*/

Private ["_classes","_headers","_side"];

_side = "GUER";
_headers = []; 
_classes = [];

//--- Defenses (Statics)

_headers = _headers 		+ ["MG"];
_classes = _classes 		+ ["RHS_M2StaticMG_MiniTripod_D"];

_headers = _headers 		+ ["MG"];
_classes = _classes 		+ ["RHS_M2StaticMG_D"];

_headers = _headers 		+ ["GL"];
_classes = _classes 		+ ["RHS_AGS30_TriPod_MSV"];

_headers = _headers 		+ ["AA"];
_classes = _classes 		+ ["RHS_Stinger_AA_pod_D"];

_headers = _headers 		+ ["AT"];
_classes = _classes 		+ ["rhs_Metis_9k115_2_msv"];

_headers = _headers 		+ ["Mortar"];
_classes = _classes 		+ ["rhs_2b14_82mm_msv"];


//--- Defenses management for towns.
if (isServer) then {[_side, _classes, _headers] Call Compile preprocessFile "Common\Config\Config_Defenses_Towns.sqf"};