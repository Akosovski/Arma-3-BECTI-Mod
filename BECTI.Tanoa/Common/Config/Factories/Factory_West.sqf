private ["_side", "_u"];

_side = _this;

missionNamespace setVariable [format["CTI_%1_Commander", _side], "us_rg_officer"];
missionNamespace setVariable [format["CTI_%1_Worker", _side], "us_rg_worker"];

missionNamespace setVariable [format["CTI_%1_Diver", _side], "B_diver_f"];
missionNamespace setVariable [format["CTI_%1_Soldier", _side], "us_rg_rifleman_m4"];
missionNamespace setVariable [format["CTI_%1_Crew", _side], "us_rg_crewman"];
missionNamespace setVariable [format["CTI_%1_Pilot", _side], "us_rg_helicopter_pilot"];
missionNamespace setVariable [format["CTI_%1_UAV_AI", _side], "B_UAV_AI"];
missionNamespace setVariable [format["CTI_%1FLAG", _side], "\A3\Data_F\Flags\Flag_us_CO.paa"];

// missionNamespace setVariable [format["CTI_%1_Vehicles_Startup", _side], [ 
// 	["rhsusf_M1151_mk19crows_rg_wd", [
// 		["rhs_weap_m4a1_carryhandle", 2], ["30Rnd_556x45_Stanag", 50],
// 		["rhs_weap_m4a1_carryhandle_pmag", 1], ["rhs_weap_M136", 8],
// 		["HandGrenade", 20], 
// 		["firstaidkit", 20],
// 		["optic_MRCO", 1],
// 		["acc_flashlight", 5],
// 		["optic_Holosight", 2]
// 	]], 
// 	["rhsusf_M1151_m2crows_rg_wd", [
// 		["rhs_weap_m4a1_carryhandle", 2], ["30Rnd_556x45_Stanag", 50],
// 		["rhs_weap_m4a1_carryhandle_pmag", 1], ["rhs_weap_M136", 3],
// 		["HandGrenade", 10], 
// 		["firstaidkit", 20],
// 		["optic_MRCO", 1]
// 	]]
// ]];

//--- Units - Barracks
_u = ["us_rg_rifleman_m4"];
_u = _u + ["us_rg_rifleman_mk16"];
_u = _u + ["us_rg_rifleman_mk17"];
_u = _u + ["us_rg_corporal"];
_u = _u + ["us_rg_sergeant"];
_u = _u + ["us_rg_auto_rifleman"];
_u = _u + ["us_rg_mortarman_gun"];
_u = _u + ["us_rg_mortarman_bipod"];
_u = _u + ["us_rg_officer"];
_u = _u + ["us_rg_medic"];
_u = _u + ["us_rg_crewman"];
_u = _u + ["us_rg_engineer"];
_u = _u + ["us_rg_marksman"];
_u = _u + ["us_rg_machine_gunner"];
_u = _u + ["us_rg_uav_operator"];
_u = _u + ["us_rg_aa_specialist"];
_u = _u + ["us_rg_at_specialist"];
_u = _u + ["us_rg_helicopter_pilot"];
_u = _u + ["us_rg_helicopter_crewman"];
_u = _u + ["us_rg_jet_pilot"];
_u = _u + ["us_dvg_operator_m4"];
_u = _u + ["us_dvg_operator_mk16"];
_u = _u + ["us_dvg_operator_mk17"];
_u = _u + ["us_dvg_operator_mk48"];
_u = _u + ["us_dvg_uav_operator"];
_u = _u + ["us_dvg_helicopter_pilot"];

missionNamespace setVariable [format ["CTI_%1_%2Units", _side, CTI_BARRACKS], _u];

_u 			= ["us_rg_m1123"];
_u = _u		+ ["us_rg_m1123_half"];
_u = _u		+ ["us_rg_m1123_open"];
_u = _u		+ ["us_rg_m1151a1"];
_u = _u		+ ["us_rg_m1151a1_m240"];
_u = _u		+ ["us_rg_m1151a1_m2"];
_u = _u		+ ["us_rg_m1151a1_mk19"];
_u = _u		+ ["us_rg_m1126_m2"];
_u = _u		+ ["us_rg_m1126_mk19"];
_u = _u		+ ["us_rg_m1134_aa"];
_u = _u		+ ["us_rg_m1078a1"];
_u = _u		+ ["us_rg_m1078a1_flatbed"];
_u = _u		+ ["us_rg_m977a4"];
missionNamespace setVariable [format ["CTI_%1_%2Units", _side, CTI_LIGHT], _u];


_u  		= ["us_rg_m142"];
_u = _u		+ ["us_rg_m113a3_unarmed"];
_u = _u		+ ["us_rg_m113a3_m2"];
_u = _u		+ ["us_rg_m113a3_mk19"];
_u = _u		+ ["us_rg_m2a3"];
_u = _u		+ ["us_rg_m2a3_b1"];
_u = _u		+ ["us_rg_m2a3_b2"];
_u = _u		+ ["us_rg_m6a2_aa"];
_u = _u		+ ["us_rg_m1a1fep"];
_u = _u 	+ ["us_rg_m1a2sepv1_t1"];
_u = _u 	+ ["us_rg_m1a2sepv1_t2"];
_u = _u 	+ ["us_rg_m1a2sepv2"];
missionNamespace setVariable [format ["CTI_%1_%2Units", _side, CTI_HEAVY], _u];

_u 			= ["us_usmc_uh1y_unarmed"];
_u = _u		+ ["us_usmc_uh1y_rocket"];
_u = _u		+ ["us_usmc_uh1y_armed"];
_u = _u		+ ["us_usmc_ah1z"];
_u = _u		+ ["us_usmc_ch53e"];
_u = _u		+ ["us_rg_uh60m"];
_u = _u		+ ["us_rg_uh60m_ews"];
_u = _u		+ ["us_rg_uh80"];
_u = _u		+ ["us_rg_ch47f"];
_u = _u		+ ["us_dvg_oh6m"];
_u = _u		+ ["us_dvg_mh6m"];
_u = _u		+ ["us_dvg_ah6m"];
_u = _u		+ ["us_usaf_ah64d"];
_u = _u		+ ["us_usaf_a10a"];
_u = _u		+ ["us_usaf_f22a"];
_u = _u		+ ["us_usaf_c130j"];
// _u = _u		+ ["us_usaf_mq4a"];
// _u = _u		+ ["us_usaf_mq4b"];
missionNamespace setVariable [format ["CTI_%1_%2Units", _side, CTI_AIR], _u];

_u 			= ["CTI_Salvager_West"];
_u = _u		+ ["us_rg_m977a4_fuel"];
_u = _u		+ ["us_rg_m977a4_repair"];
missionNamespace setVariable [format ["CTI_%1_%2Units", _side, CTI_REPAIR], _u];

_u 			= ["us_rg_m977a4_ammo"];
_u = _u		+ ["us_rg_m113a3_ammo"];
_u = _u		+ ["us_rg_m1152a1_ammo"];
missionNamespace setVariable [format ["CTI_%1_%2Units", _side, CTI_AMMO], _u];

_u 			= ["B_Boat_Transport_01_F"];
_u = _u		+ ["B_Boat_Armed_01_minigun_F"];
missionNamespace setVariable [format ["CTI_%1_%2Units", _side, CTI_NAVAL], _u];

_u 			= ["us_rg_m1123"];
_u = _u		+ ["us_rg_m1078a1"];
_u = _u		+ ["us_rg_m1152a1_ammo"];
_u = _u		+ ["C_Quadbike_01_F"];
if ((missionNamespace getVariable "CTI_UNITS_TOWN_PURCHASE") > 0) then {
 	_u = _u		+ [missionNamespace getVariable format ["CTI_%1_SOLDIER", _side]];
	_u = _u		+ ["us_rg_rifleman_mk16"];
	_u = _u		+ ["us_rg_rifleman_mk17"];
	_u = _u		+ ["us_rg_corporal"];
	_u = _u		+ ["us_rg_auto_rifleman"];
	_u = _u		+ ["us_rg_machine_gunner"];
    _u = _u		+ ["us_rg_at_specialist"];
	_u = _u		+ ["us_rg_medic"];
	_u = _u		+ ["us_rg_engineer"];
};
missionNamespace setVariable [format ["CTI_%1_%2Units", _side, CTI_DEPOT], _u];