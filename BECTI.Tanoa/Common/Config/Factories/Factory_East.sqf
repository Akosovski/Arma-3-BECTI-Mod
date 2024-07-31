private ["_side", "_u"];

_side = _this;

missionNamespace setVariable [format["CTI_%1_Commander", _side], "ru_vmf_officer"];
missionNamespace setVariable [format["CTI_%1_Worker", _side], "ru_vmf_worker"];

missionNamespace setVariable [format["CTI_%1_Diver", _side], "O_diver_F"];
missionNamespace setVariable [format["CTI_%1_Soldier", _side], "ru_vmf_rifleman_ak15"];
missionNamespace setVariable [format["CTI_%1_Crew", _side], "ru_vmf_crewman"];
missionNamespace setVariable [format["CTI_%1_Pilot", _side], "ru_vmf_heli_pilot"];
missionNamespace setVariable [format["CTI_%1_UAV_AI", _side], "O_UAV_AI"];
missionNamespace setVariable [Format["CTI_%1FLAG", _side], "\rhsafrf\addons\rhs_main\data\Flag_rus_CO.paa"];

// Startup Vehicles may bug the AI (not moving after capturing a town)
// missionNamespace setVariable [format["CTI_%1_Vehicles_Startup", _side], [ 
// 	["ru_msv_gaz_armed", [
// 		["CUP_arifle_ak74m", 4], ["CUP_30Rnd_545x39_AK74M_M", 40],
// 		["rhs_weap_rpg7", 3], ["rhs_rpg7_PG7V_mag", 16], 
// 		["rhs_mag_rgo", 20], 
// 		["firstaidkit", 20]
// 	]], 
// 	["ru_msv_gaz_armed", [
// 		["CUP_arifle_ak74m", 4], ["CUP_30Rnd_545x39_AK74M_M", 40],
// 		["rhs_weap_rpg7", 3], ["rhs_rpg7_PG7V_mag", 16], 
// 		["rhs_mag_rgo", 20], 
// 		["firstaidkit", 20]
// 	]]
// ]];

//--- Units - Barracks
_u 		= ["ru_vmf_sergeant"];
_u = _u + ["ru_vmf_efreitor"];
_u = _u + ["ru_vmf_rifleman_ak12"];
_u = _u + ["ru_vmf_rifleman_ak15"];
_u = _u + ["ru_vmf_grenadier_gp34"];
_u = _u + ["ru_vmf_grenadier_rpg"];
_u = _u + ["ru_vmf_autorifleman"];
_u = _u + ["ru_vmf_machinegunner"];
_u = _u + ["ru_vmf_marksman"];
_u = _u + ["ru_vmf_engineer"];
_u = _u + ["ru_vmf_medic"];
_u = _u + ["ru_vmf_officer"];
_u = _u + ["ru_vmf_at_specialist"];
_u = _u + ["ru_vmf_aa_specialist"];
_u = _u + ["ru_vmf_crewman"];
_u = _u + ["ru_vmf_uav_operator"];
_u = _u + ["ru_vmf_driver"];
_u = _u + ["ru_vmf_mortarman_gun"];
_u = _u + ["ru_vmf_mortarman_bipod"];
_u = _u + ["ru_vmf_heli_pilot"];
_u = _u + ["ru_vmf_heli_crew"];
_u = _u + ["ru_vmf_jet_pilot"];
_u = _u + ["ru_vmf_spetsnaz_ak12"];
_u = _u + ["ru_vmf_spetsnaz_ak103"];
_u = _u + ["ru_vmf_spetsnaz_ak104"];
_u = _u + ["ru_vmf_spetsnaz_ak74m"];
_u = _u + ["ru_vmf_spetsnaz_rpk74m"];
_u = _u + ["ru_vmf_spetsnaz_svd"];
_u = _u + ["ru_vmf_spetsnaz_pilot"];


missionNamespace setVariable [format ["CTI_%1_%2Units", _side, CTI_BARRACKS], _u];

//--- Vehicles - Motor Pool
_u 		= ["ru_msv_uaz"];
_u = _u	+ ["ru_msv_uaz_open"];
_u = _u	+ ["ru_vmf_gaz_normal"];
_u = _u	+ ["ru_vmf_gaz_armed"];
_u = _u	+ ["ru_vmf_gaz_unarmed"];
_u = _u	+ ["ru_vmf_ural_normal"];
_u = _u	+ ["ru_vmf_ural_open"];
_u = _u	+ ["ru_vmf_brdm2"];
_u = _u	+ ["ru_vmf_brdm2_at"];
_u = _u	+ ["ru_vmf_ural_aa"];
_u = _u	+ ["ru_vmf_btr60pb"];
_u = _u	+ ["ru_vmf_btr70"];
_u = _u	+ ["ru_vmf_btr80a"];
_u = _u	+ ["ru_vmf_bmp1"];
_u = _u	+ ["ru_vmf_bmp2"];

missionNamespace setVariable [format ["CTI_%1_%2Units", _side, CTI_LIGHT], _u];

_u 			= ["ru_vmf_bm21"];
_u = _u		+ ["ru_vmf_t72b_1989"];
_u = _u		+ ["ru_vmf_t72b3_2016"];
_u = _u		+ ["ru_vmf_t80bv"];
_u = _u		+ ["ru_vmf_t80um"];
_u = _u		+ ["ru_vmf_t90sa_2004"];
_u = _u		+ ["ru_vmf_t90sm"];
_u = _u		+ ["ru_msv_t14"];

missionNamespace setVariable [format ["CTI_%1_%2Units", _side, CTI_HEAVY], _u];

_u 			= ["ru_vmf_ka60"];
_u = _u	    + ["ru_vmf_mi8_normal"];
_u = _u		+ ["ru_vmf_mi8_gunship"];
_u = _u		+ ["ru_vmf_mi24g"];
_u = _u		+ ["ru_vmf_su25"];
_u = _u		+ ["ru_vmf_mig29sm"];
_u = _u		+ ["ru_vmf_su35"];
// _u = _u	    + ["ru_vmf_k40a"];
// _u = _u	    + ["ru_vmf_k40b"];

missionNamespace setVariable [format ["CTI_%1_%2Units", _side, CTI_AIR], _u];

_u =		+ ["CTI_Salvager_East"];
_u = _u		+ ["ru_vmf_ural_repair"];
_u = _u		+ ["ru_vmf_ural_fuel"];

missionNamespace setVariable [format ["CTI_%1_%2Units", _side, CTI_REPAIR], _u];

_u 			= ["ru_vmf_ural_ammo"];

missionNamespace setVariable [format ["CTI_%1_%2Units", _side, CTI_AMMO], _u];

_u 			= ["O_Boat_Transport_01_F"];
_u = _u		+ ["O_Boat_Armed_01_hmg_F"];

missionNamespace setVariable [format ["CTI_%1_%2Units", _side, CTI_NAVAL], _u];

_u 			= ["ru_msv_uaz"];
_u = _u		+ ["ru_vmf_gaz_normal"];
_u = _u		+ ["ru_vmf_ural_normal"];
_u = _u		+ ["ru_vmf_ural_ammo"];
_u = _u		+ ["C_Quadbike_01_F"];
if ((missionNamespace getVariable "CTI_UNITS_TOWN_PURCHASE") > 0) then {
 	_u = _u		+ [missionNamespace getVariable format ["CTI_%1_SOLDIER", _side]];
	_u = _u + ["ru_vmf_rifleman_ak12"];
	_u = _u + ["ru_vmf_grenadier_gp34"];
	_u = _u + ["ru_vmf_grenadier_rpg"];
	_u = _u + ["ru_vmf_efreitor"];
	_u = _u + ["ru_vmf_autorifleman"];
	_u = _u + ["ru_vmf_machinegunner"];
	_u = _u + ["ru_vmf_engineer"];
	_u = _u + ["ru_vmf_medic"];
};
missionNamespace setVariable [format ["CTI_%1_%2Units", _side, CTI_DEPOT], _u];