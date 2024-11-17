private ["_side", "_u"];

_side = _this;

missionNamespace setVariable [format["CTI_%1_Commander", _side], "ru_vdv_des_officer"];
missionNamespace setVariable [format["CTI_%1_Worker", _side], "ru_vdv_des_worker"];

missionNamespace setVariable [format["CTI_%1_Diver", _side], "O_diver_F"];
missionNamespace setVariable [format["CTI_%1_Soldier", _side], "ru_vdv_des_rifleman_ak74m"];
missionNamespace setVariable [format["CTI_%1_Crew", _side], "ru_vdv_des_tank_crewman"];
missionNamespace setVariable [format["CTI_%1_Pilot", _side], "ru_vdv_des_heli_pilot"];
missionNamespace setVariable [format["CTI_%1_UAV_AI", _side], "O_UAV_AI"];
missionNamespace setVariable [Format["CTI_%1FLAG", _side], "\rhsafrf\addons\rhs_main\data\Flag_rus_CO.paa"];

// missionNamespace setVariable [format["CTI_%1_Vehicles_Startup", _side], [ 
// 	["rhs_tigr_3camo_vdv", [
// 		["rhs_weap_ak74m", 2], ["rhs_30Rnd_762x39mm", 50],
// 		["rhs_weap_akm", 2], ["rhs_30Rnd_762x39mm_tracer", 25],
// 		["rhs_weap_rpg7", 3], ["rhs_rpg7_PG7V_mag", 12], 
// 		["rhs_mag_rgo", 20], 
// 		["firstaidkit", 20],
// 		["rhs_acc_1p29", 5],
// 		["rhs_acc_ekp1", 3],
// 		["optic_Holosight", 2],
// 		["rhs_acc_pso1m2", 1]
// 	]], 
// 	["RHS_Ural_Open_MSV_01", [
// 		["rhs_weap_ak74m", 2], ["rhs_30Rnd_762x39mm", 50],
// 		["rhs_weap_akm", 2], ["rhs_30Rnd_762x39mm_tracer", 25],
// 		["rhs_weap_rpg7", 3], ["rhs_rpg7_PG7V_mag", 12], 
// 		["rhs_mag_rgo", 20], 
// 		["firstaidkit", 20],
// 		["rhs_acc_1p29", 5],
// 		["rhs_acc_ekp1", 3],
// 		["optic_Holosight", 2],
// 		["rhs_acc_pso1m2", 1]
// 	]]
// ]];

//--- Units - Barracks
_u 			= ["ru_vdv_des_rifleman_ak74m"];
_u = _u		+ ["ru_vdv_des_rifleman_ak12"];
_u = _u		+ ["ru_vdv_des_rifleman_ak103"];
_u = _u		+ ["ru_vdv_des_grenadier_gp34"];
_u = _u		+ ["ru_vdv_des_grenadier_rpg"];
_u = _u		+ ["ru_vdv_des_efreitor_ak12"];
_u = _u		+ ["ru_vdv_des_efreitor_ak74m"];
_u = _u		+ ["ru_vdv_des_medic"];
_u = _u		+ ["ru_vdv_des_engineer"];
_u = _u		+ ["ru_vdv_des_autorifleman"];
_u = _u		+ ["ru_vdv_des_machinegunner"];
_u = _u		+ ["ru_vdv_des_marksman"];
_u = _u		+ ["ru_vdv_des_sergeant"];
_u = _u		+ ["ru_vdv_des_at_specialist"];
_u = _u		+ ["ru_vdv_des_aa_specialist"];
_u = _u		+ ["ru_vdv_des_mortarman_gun"];
_u = _u		+ ["ru_vdv_des_mortarman_bipod"];
_u = _u		+ ["ru_vdv_des_uav_operator"];
_u = _u		+ ["ru_vdv_des_driver"];
_u = _u		+ ["ru_vdv_des_officer"];
_u = _u		+ ["ru_vdv_des_crewman"];
_u = _u		+ ["ru_vdv_des_tank_crewman"];
_u = _u		+ ["ru_vdv_des_heli_pilot"];
_u = _u		+ ["ru_vdv_des_heli_crewman"];
_u = _u		+ ["ru_vdv_des_jet_pilot"];
_u = _u		+ ["ru_vdv_spetsnaz_ak104"];
_u = _u		+ ["ru_vdv_spetsnaz_ak12"];
_u = _u		+ ["ru_vdv_spetsnaz_ak15"];
_u = _u		+ ["ru_vdv_spetsnaz_ak74m"];
_u = _u		+ ["ru_vdv_spetsnaz_aks74u"];
_u = _u		+ ["ru_vdv_spetsnaz_svd"];
_u = _u		+ ["ru_vdv_spetsnaz_pilot"];


missionNamespace setVariable [format ["CTI_%1_%2Units", _side, CTI_BARRACKS], _u];

_u 			= ["ru_msv_uaz"];
_u = _u		+ ["ru_msv_uaz_open"];
_u = _u		+ ["ru_msv_gaz_unarmed"];
_u = _u		+ ["ru_msv_gaz_normal"];
_u = _u		+ ["ru_msv_gaz_armed"];
_u = _u		+ ["ru_msv_ural_normal"];
_u = _u		+ ["ru_msv_ural_flatbed"];
_u = _u		+ ["ru_msv_ural_open"];
_u = _u		+ ["ru_msv_ural_open_flatbed"];
_u = _u		+ ["ru_msv_ural_aa"];
_u = _u		+ ["ru_vdv_kamaz"];
_u = _u		+ ["ru_vdv_kamaz_open"];
_u = _u		+ ["ru_msv_brdm"];
_u = _u		+ ["ru_msv_brdm_at"];
_u = _u		+ ["ru_msv_btr70"]; 
_u = _u		+ ["ru_msv_btr80a"]; 
_u = _u		+ ["ru_msv_bmp1"];
_u = _u		+ ["ru_msv_bmp2"];
_u = _u		+ ["ru_msv_bmp3"];
_u = _u		+ ["ru_msv_bmp3_vesna"]; 
_u = _u		+ ["ru_vdv_bmd4"];
_u = _u		+ ["ru_vdv_bmd4m"];

missionNamespace setVariable [format ["CTI_%1_%2Units", _side, CTI_LIGHT], _u];

_u 			= ["ru_msv_bm21"];
_u = _u		+ ["ru_rva_tochka_he"];
_u = _u		+ ["ru_rva_tochka_nuke"];
_u = _u		+ ["ru_msv_t72b_1989"];
_u = _u		+ ["ru_msv_t72b3_2012"];
_u = _u		+ ["ru_msv_t80u"];
_u = _u		+ ["ru_msv_t80um"];
_u = _u		+ ["ru_msv_t90_1992"];
_u = _u		+ ["ru_msv_t90a_2006"];
_u = _u		+ ["ru_msv_t90sm"];

missionNamespace setVariable [format ["CTI_%1_%2Units", _side, CTI_HEAVY], _u];

_u 			= ["ru_vdv_ka60"];
_u = _u	    + ["ru_vdv_mi8t"];
_u = _u		+ ["ru_vdv_mi8mt"];
_u = _u		+ ["ru_vdv_mi8mtv3"];
_u = _u		+ ["ru_vdv_mi24g"];
_u = _u		+ ["ru_vdv_mi28n"];
_u = _u		+ ["ru_vdv_ka52"]; 
_u = _u		+ ["ru_vdv_mig29sm"];
_u = _u		+ ["ru_vdv_su35"];
_u = _u		+ ["ru_vdv_tu95ms6"];
// _u = _u	    + ["ru_vdv_k40a"];
// _u = _u	    + ["ru_vdv_k40b"];

missionNamespace setVariable [format ["CTI_%1_%2Units", _side, CTI_AIR], _u];

_u =		+ ["CTI_Salvager_East"];
_u = _u		+ ["ru_msv_ural_repair"];
_u = _u		+ ["ru_msv_ural_fuel"];

missionNamespace setVariable [format ["CTI_%1_%2Units", _side, CTI_REPAIR], _u];

_u 			= ["ru_msv_ural_ammo"];
_u = _u		+ ["ru_vdv_kamaz_ammo"];
_u = _u		+ ["BOX_IND_AmmoVeh_F"];

missionNamespace setVariable [format ["CTI_%1_%2Units", _side, CTI_AMMO], _u];

_u 			= ["O_Boat_Transport_01_F"];
_u = _u		+ ["O_Boat_Armed_01_hmg_F"];

missionNamespace setVariable [format ["CTI_%1_%2Units", _side, CTI_NAVAL], _u];

_u 			= ["ru_msv_uaz"];
_u = _u		+ ["ru_msv_gaz_normal"];
_u = _u		+ ["ru_msv_ural_normal"];
_u = _u		+ ["ru_msv_ural_ammo"];
_u = _u		+ ["C_Quadbike_01_F"];
if ((missionNamespace getVariable "CTI_UNITS_TOWN_PURCHASE") > 0) then {
 	_u = _u		+ [missionNamespace getVariable format ["CTI_%1_SOLDIER", _side]];
	_u = _u		+ ["ru_vdv_des_rifleman_ak12"];
	_u = _u		+ ["ru_vdv_des_rifleman_ak103"];
	_u = _u		+ ["ru_vdv_des_grenadier_gp34"];
	_u = _u		+ ["ru_vdv_des_grenadier_rpg"];
	_u = _u		+ ["ru_vdv_des_efreitor_ak12"];
	_u = _u		+ ["ru_vdv_des_efreitor_ak74m"];
	_u = _u		+ ["ru_vdv_des_machinegunner"];
	_u = _u		+ ["ru_vdv_des_medic"];
	_u = _u		+ ["ru_vdv_des_engineer"];
};
missionNamespace setVariable [format ["CTI_%1_%2Units", _side, CTI_DEPOT], _u];