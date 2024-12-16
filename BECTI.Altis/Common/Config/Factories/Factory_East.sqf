private ["_side", "_u"];

_side = _this;

missionNamespace setVariable [format["CTI_%1_Commander", _side], "ru_msv_commander"];
missionNamespace setVariable [format["CTI_%1_Worker", _side], "ru_msv_worker"];

missionNamespace setVariable [format["CTI_%1_Diver", _side], "O_diver_F"];
missionNamespace setVariable [format["CTI_%1_Soldier", _side], "ru_msv_rifleman_ak74m"];
missionNamespace setVariable [format["CTI_%1_Crew", _side], "ru_msv_tank_crewman"];
missionNamespace setVariable [format["CTI_%1_Pilot", _side], "ru_vdv_heli_pilot"];
missionNamespace setVariable [format["CTI_%1_UAV_AI", _side], "O_UAV_AI"];
missionNamespace setVariable [format["CTI_%1FLAG", _side], "\rhsafrf\addons\rhs_main\data\Flag_rus_CO.paa"];

//--- Units - Barracks
_u 			= ["ru_msv_rifleman_ak74m"];
_u = _u		+ ["ru_msv_rifleman_ak12"];
_u = _u		+ ["ru_msv_rifleman_akm"];
_u = _u		+ ["ru_msv_grenadier_gp25"];
_u = _u		+ ["ru_msv_grenadier_gp34"];
_u = _u		+ ["ru_msv_grenadier_rpg"];
_u = _u		+ ["ru_msv_efreitor"];
_u = _u		+ ["ru_msv_medic"];
_u = _u		+ ["ru_msv_engineer"];
_u = _u		+ ["ru_msv_machinegunner"];
_u = _u		+ ["ru_msv_marksman"];
_u = _u		+ ["ru_msv_sergeant"];
_u = _u		+ ["ru_msv_at_specialist"];
_u = _u		+ ["ru_msv_aa_specialist"];
_u = _u		+ ["ru_msv_mortarman_gun"];
_u = _u		+ ["ru_msv_mortarman_bipod"];
_u = _u		+ ["ru_msv_uav_operator_he"];
_u = _u		+ ["ru_msv_uav_operator_rpg"];
_u = _u		+ ["ru_msv_driver"];
_u = _u		+ ["ru_msv_officer"];
_u = _u		+ ["ru_msv_crewman"];
_u = _u		+ ["ru_msv_tank_crewman"];
_u = _u		+ ["ru_vdv_rifleman_ak74m"];
_u = _u		+ ["ru_vdv_rifleman_ak12"];
_u = _u		+ ["ru_vdv_rifleman_akm"];
_u = _u		+ ["ru_vdv_rifleman_ak103"];
_u = _u		+ ["ru_vdv_grenadier_gp25"];
_u = _u		+ ["ru_vdv_grenadier_rpg"];
_u = _u		+ ["ru_vdv_efreitor"];
_u = _u		+ ["ru_vdv_medic"];
_u = _u		+ ["ru_vdv_engineer"];
_u = _u		+ ["ru_vdv_machinegunner"];
_u = _u		+ ["ru_vdv_marksman"];
_u = _u		+ ["ru_vdv_sergeant"];
_u = _u		+ ["ru_vdv_at_specialist"];
_u = _u		+ ["ru_vdv_aa_specialist"];
_u = _u		+ ["ru_vdv_mortarman_gun"];
_u = _u		+ ["ru_vdv_mortarman_bipod"];
_u = _u		+ ["ru_vdv_uav_operator_he"];
_u = _u		+ ["ru_vdv_uav_operator_rpg"];
_u = _u		+ ["ru_vdv_officer"];
_u = _u		+ ["ru_vdv_crewman"];
_u = _u		+ ["ru_vdv_heli_pilot"];
_u = _u		+ ["ru_vdv_heli_crewman"];
_u = _u		+ ["ru_vdv_jet_pilot"];

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
_u = _u	    + ["ru_vdv_ka60_rocket"];
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
_u = _u		+ ["ru_msv_d30a"];
_u = _u		+ ["BOX_IND_AmmoVeh_F"];

missionNamespace setVariable [format ["CTI_%1_%2Units", _side, CTI_AMMO], _u];

_u 			= ["ru_vmf_rifleman_ak74m"];
_u = _u		+ ["ru_vmf_rifleman_ak12"];
_u = _u		+ ["ru_vmf_rifleman_akm"];
_u = _u		+ ["ru_vmf_grenadier_gp25"];
_u = _u		+ ["ru_vmf_grenadier_rpg"];
_u = _u		+ ["ru_vmf_efreitor"];
_u = _u		+ ["ru_vmf_medic"];
_u = _u		+ ["ru_vmf_engineer"];
_u = _u		+ ["ru_vmf_machinegunner"];
_u = _u		+ ["ru_vmf_marksman"];
_u = _u		+ ["ru_vmf_sergeant"];
_u = _u		+ ["ru_vmf_at_specialist"];
_u = _u		+ ["ru_vmf_aa_specialist"];
_u = _u		+ ["ru_vmf_mortarman_gun"];
_u = _u		+ ["ru_vmf_mortarman_bipod"];
_u = _u		+ ["ru_vmf_uav_operator_he"];
_u = _u		+ ["ru_vmf_uav_operator_rpg"];
_u = _u		+ ["ru_vmf_officer"];
_u = _u		+ ["ru_vmf_crewman"];
_u = _u		+ ["ru_vmf_tank_crewman"];

missionNamespace setVariable [format ["CTI_%1_%2Units", _side, CTI_NAVAL], _u];

_u 			= ["ru_msv_uaz"];
_u = _u		+ ["ru_msv_gaz_normal"];
_u = _u		+ ["ru_msv_ural_normal"];
_u = _u		+ ["ru_msv_ural_ammo"];
_u = _u		+ ["ru_msv_ural_repair"];
_u = _u		+ ["ru_msv_ural_fuel"];
_u = _u		+ ["C_Quadbike_01_F"];
if ((missionNamespace getVariable "CTI_UNITS_TOWN_PURCHASE") > 0) then {
 	_u = _u		+ [missionNamespace getVariable format ["CTI_%1_SOLDIER", _side]];
	_u = _u		+ ["ru_msv_rifleman_ak12"];
	_u = _u		+ ["ru_msv_rifleman_akm"];
	_u = _u		+ ["ru_msv_grenadier_gp25"];
	_u = _u		+ ["ru_msv_grenadier_gp34"];
	_u = _u		+ ["ru_msv_grenadier_rpg"];
	_u = _u		+ ["ru_msv_efreitor"];
	_u = _u		+ ["ru_msv_machinegunner"];
	_u = _u		+ ["ru_msv_medic"];
	_u = _u		+ ["ru_msv_engineer"];
};
missionNamespace setVariable [format ["CTI_%1_%2Units", _side, CTI_DEPOT], _u];