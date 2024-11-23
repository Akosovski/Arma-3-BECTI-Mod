private ["_side", "_u"];

_side = _this;

missionNamespace setVariable [format["CTI_%1_Commander", _side], "us_usmc_des_officer"];
missionNamespace setVariable [format["CTI_%1_Worker", _side], "us_usmc_des_worker"];

missionNamespace setVariable [format["CTI_%1_Diver", _side], "B_diver_f"];
missionNamespace setVariable [format["CTI_%1_Soldier", _side], "us_usmc_des_rifleman_m4a1"];
missionNamespace setVariable [format["CTI_%1_Crew", _side], "us_usmc_des_crewman"];
missionNamespace setVariable [format["CTI_%1_Pilot", _side], "us_usmc_des_heli_pilot"];
missionNamespace setVariable [format["CTI_%1_UAV_AI", _side], "B_UAV_AI"];
missionNamespace setVariable [format["CTI_%1FLAG", _side], "\A3\Data_F\Flags\Flag_us_CO.paa"];

// Startup Vehicles may bug the AI (not moving after capturing a town)
// missionNamespace setVariable [format["CTI_%1_Vehicles_Startup", _side], [ 
// 	["us_usmc_m1151a1_crows_m2", [
// 		["JCA_arifle_M4A1_black_F", 3], ["30Rnd_556x45_Stanag", 30], 
// 		["rhsusf_acc_ACOG3", 3],
// 		["rhs_weap_M136", 8],
// 		["HandGrenade", 20], 
// 		["firstaidkit", 20]
// 	]], 
// 	["us_usmc_m1151a1_crows_mk19", [
// 		["JCA_arifle_M4A1_black_F", 3], ["30Rnd_556x45_Stanag", 30], 
// 		["rhsusf_acc_ACOG3", 3],
// 		["rhs_weap_M136", 8],
// 		["HandGrenade", 20], 
// 		["firstaidkit", 20]
// 	]]
// ]];

//--- Units - Barracks
_u 			= ["us_usmc_des_rifleman_m4a1"];
_u = _u		+ ["us_usmc_des_rifleman_m16"];
_u = _u		+ ["us_usmc_des_rifleman_at"];
_u = _u		+ ["us_usmc_des_grenadier_m16a4"];
_u = _u		+ ["us_usmc_des_grenadier_m4a1"];
_u = _u		+ ["us_usmc_des_missileman"];
_u = _u		+ ["us_usmc_des_autorifleman_m249"];
_u = _u		+ ["us_usmc_des_machinegunner"];
_u = _u		+ ["us_usmc_des_sergeant"];
_u = _u		+ ["us_usmc_des_lance_corporal"];
_u = _u		+ ["us_usmc_des_aa_specialist"];
_u = _u		+ ["us_usmc_des_at_specialist"];
_u = _u		+ ["us_usmc_des_mortarman_gun"];
_u = _u		+ ["us_usmc_des_mortarman_bipod"];
_u = _u		+ ["us_usmc_des_uav_operator"];
_u = _u		+ ["us_usmc_des_marksman"];
_u = _u		+ ["us_usmc_des_corpsman"];
_u = _u		+ ["us_usmc_des_engineer"];
_u = _u		+ ["us_usmc_des_sniper"];
_u = _u		+ ["us_usmc_des_officer"];
_u = _u		+ ["us_usmc_des_crewman"];
_u = _u		+ ["us_usmc_des_heli_pilot"];
_u = _u		+ ["us_usmc_des_heli_crewman"];
_u = _u		+ ["us_usmc_jet_pilot"];
_u = _u		+ ["us_usmc_forecon_chief"];
_u = _u		+ ["us_usmc_forecon_m4a4"];
_u = _u		+ ["us_usmc_forecon_mk16"];
_u = _u		+ ["us_usmc_forecon_mk17"];
_u = _u		+ ["us_usmc_forecon_m249"];
_u = _u		+ ["us_usmc_forecon_eglm"];
_u = _u		+ ["us_usmc_forecon_m136"];
_u = _u		+ ["us_usmc_forecon_marksman"];
_u = _u		+ ["us_usmc_forecon_eod"];
_u = _u		+ ["us_usmc_forecon_heli_pilot"];
missionNamespace setVariable [format ["CTI_%1_%2Units", _side, CTI_BARRACKS], _u];

_u 			= ["us_usmc_m1123"];
_u = _u		+ ["us_usmc_m1123_half"];
_u = _u		+ ["us_usmc_m1123_open"];
_u = _u		+ ["us_usmc_m1151a1"];
_u = _u		+ ["us_usmc_m1151a1_m240"];
_u = _u		+ ["us_usmc_m1151a1_m2"];
_u = _u		+ ["us_usmc_m1151a1_mk19"];
_u = _u		+ ["us_usmc_m1126_m2"];
_u = _u		+ ["us_usmc_m1126_mk19"];
_u = _u		+ ["us_usmc_m1134_aa"];
_u = _u		+ ["us_usmc_m1078a1"];
_u = _u		+ ["us_usmc_m1078a1_flatbed"];
_u = _u		+ ["us_usmc_m977a4"];
missionNamespace setVariable [format ["CTI_%1_%2Units", _side, CTI_LIGHT], _u];

_u  		= ["us_usmc_m142_clus"];
_u = _u		+ ["us_usmc_m142_he"];
_u = _u		+ ["us_usmc_m113a3_unarmed"];
_u = _u		+ ["us_usmc_m113a3_m2"];
_u = _u		+ ["us_usmc_m113a3_mk19"];
_u = _u		+ ["us_usmc_m2a3"];
_u = _u		+ ["us_usmc_m2a3_b1"];
_u = _u		+ ["us_usmc_m2a3_b2"];
_u = _u		+ ["us_usmc_m6a2_aa"];
_u = _u		+ ["us_usmc_m1a1fep"];
_u = _u 	+ ["us_usmc_m1a2sepv1_t1"];
_u = _u 	+ ["us_usmc_m1a2sepv1_t2"];
_u = _u 	+ ["us_usmc_m1a2sepv2"];
missionNamespace setVariable [format ["CTI_%1_%2Units", _side, CTI_HEAVY], _u];

_u 			= ["us_usmc_uh1y_unarmed"];
_u = _u		+ ["us_usmc_uh1y_rocket"];
_u = _u		+ ["us_usmc_uh1y_armed"];
_u = _u		+ ["us_usmc_uh60m"];
_u = _u		+ ["us_usmc_uh60m_ews"];
_u = _u		+ ["us_usmc_uh80"];
_u = _u		+ ["us_usmc_ah1z"];
_u = _u		+ ["us_usmc_ch53e"];
_u = _u		+ ["us_usmc_oh6m"];
_u = _u		+ ["us_usmc_mh6m"];
_u = _u		+ ["us_usmc_ah6m"];
_u = _u		+ ["us_usmc_ch47f"];
_u = _u		+ ["us_usaf_ah64d"];
_u = _u		+ ['us_usaf_f16c'];
_u = _u		+ ['us_usaf_f15ex'];
_u = _u 	+ ['us_usaf_f35c'];
_u = _u		+ ["us_usaf_f22a"];
_u = _u		+ ["us_usaf_c130j"];
// _u = _u		+ ["us_usaf_mq4a"];
// _u = _u		+ ["us_usaf_mq4b"];
missionNamespace setVariable [format ["CTI_%1_%2Units", _side, CTI_AIR], _u];

_u 			= ["CTI_Salvager_West"];
_u = _u		+ ["us_usmc_m977a4_fuel"];
_u = _u		+ ["us_usmc_m977a4_repair"];
missionNamespace setVariable [format ["CTI_%1_%2Units", _side, CTI_REPAIR], _u];

_u 			= ["us_usmc_m977a4_ammo"];
_u = _u		+ ["us_usmc_m113a3_ammo"];
_u = _u		+ ["us_usmc_m1152a1_ammo"];
_u = _u		+ ["BOX_NATO_AmmoVeh_F"];

missionNamespace setVariable [format ["CTI_%1_%2Units", _side, CTI_AMMO], _u];

_u 			= ["B_Boat_Transport_01_F"];
_u = _u		+ ["B_Boat_Armed_01_minigun_F"];
missionNamespace setVariable [format ["CTI_%1_%2Units", _side, CTI_NAVAL], _u];

_u 			= ["us_usmc_m1123"];
_u = _u		+ ["us_usmc_m1078a1"];
_u = _u		+ ["us_usmc_m1152a1_ammo"];
_u = _u		+ ["C_Quadbike_01_F"];
if ((missionNamespace getVariable "CTI_UNITS_TOWN_PURCHASE") > 0) then {
 	_u = _u		+ [missionNamespace getVariable format ["CTI_%1_SOLDIER", _side]];
	_u = _u		+ ["us_usmc_des_rifleman_m16"];
	_u = _u		+ ["us_usmc_des_rifleman_at"];
	_u = _u		+ ["us_usmc_des_grenadier_m16a4"];
	_u = _u		+ ["us_usmc_des_grenadier_m4a1"];
	_u = _u		+ ["us_usmc_des_autorifleman_m249"];
	_u = _u		+ ["us_usmc_des_machinegunner"];
    _u = _u		+ ["us_usmc_des_missileman"];
	_u = _u		+ ["us_usmc_des_corpsman"];
	_u = _u		+ ["us_usmc_des_engineer"];
};
missionNamespace setVariable [format ["CTI_%1_%2Units", _side, CTI_DEPOT], _u];