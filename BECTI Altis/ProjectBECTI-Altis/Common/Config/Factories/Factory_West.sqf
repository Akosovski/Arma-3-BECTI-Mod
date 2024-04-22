private ["_side", "_u"];

_side = _this;

missionNamespace setVariable [format["CTI_%1_Commander", _side], "rhsusf_usmc_marpat_wd_officer"];
missionNamespace setVariable [format["CTI_%1_Worker", _side], "rhsusf_usmc_marpat_wd_crewman"];

missionNamespace setVariable [format["CTI_%1_Diver", _side], "B_diver_f"];
missionNamespace setVariable [format["CTI_%1_Soldier", _side], "rhsusf_usmc_marpat_wd_rifleman"];
missionNamespace setVariable [format["CTI_%1_Crew", _side], "rhsusf_usmc_marpat_wd_crewman"];
missionNamespace setVariable [format["CTI_%1_Pilot", _side], "rhsusf_usmc_marpat_wd_helipilot"];
missionNamespace setVariable [format["CTI_%1_UAV_AI", _side], "B_UAV_AI"];
missionNamespace setVariable [Format["CTI_%1FLAG", _side], "\A3\Data_F\Flags\Flag_us_CO.paa"];

missionNamespace setVariable [format["CTI_%1_Vehicles_Startup", _side], [ 
	["rhsusf_M1151_mk19crows_usmc_wd", [
		["rhs_weap_m4a1_carryhandle", 2], ["30Rnd_556x45_Stanag", 50],
		["rhs_weap_m4a1_carryhandle_pmag", 1], ["rhs_weap_M136", 8],
		["HandGrenade", 20], 
		["firstaidkit", 20],
		["optic_MRCO", 1],
		["acc_flashlight", 5],
		["optic_Holosight", 2]
	]], 
	["rhsusf_M1151_m2crows_usmc_wd", [
		["rhs_weap_m4a1_carryhandle", 2], ["30Rnd_556x45_Stanag", 50],
		["rhs_weap_m4a1_carryhandle_pmag", 1], ["rhs_weap_M136", 3],
		["HandGrenade", 10], 
		["firstaidkit", 20],
		["optic_MRCO", 1]
	]]
]];

//--- Units - Barracks
_u 			= ["rhsusf_usmc_marpat_wd_rifleman"];
_u = _u		+ ["rhsusf_usmc_marpat_wd_rifleman_m4"];
_u = _u		+ ["rhsusf_usmc_marpat_wd_rifleman_law"];
_u = _u		+ ["rhsusf_usmc_marpat_wd_riflemanat"];
_u = _u		+ ["rhsusf_usmc_marpat_wd_smaw"];
_u = _u		+ ["rhsusf_usmc_marpat_wd_grenadier"];
_u = _u		+ ["rhsusf_usmc_marpat_wd_autorifleman"];
_u = _u		+ ["rhsusf_usmc_marpat_wd_autorifleman_m249"];
_u = _u		+ ["rhsusf_usmc_marpat_wd_machinegunner"];
_u = _u		+ ["rhsusf_usmc_marpat_wd_squadleader"];
_u = _u		+ ["rhsusf_usmc_marpat_wd_teamleader"];
_u = _u		+ ["rhsusf_usmc_marpat_wd_javelin"];
_u = _u		+ ["rhsusf_usmc_marpat_wd_javelin_assistant"];
_u = _u		+ ["rhsusf_usmc_marpat_wd_stinger"];
_u = _u		+ ["rhsusf_usmc_marpat_wd_marksman"];
_u = _u		+ ["rhsusf_navy_marpat_wd_medic"];
_u = _u		+ ["rhsusf_usmc_marpat_wd_engineer"];
_u = _u		+ ["rhsusf_usmc_marpat_wd_fso"];
_u = _u		+ ["rhsusf_usmc_marpat_wd_sniper"];
_u = _u		+ ["rhsusf_usmc_marpat_wd_sniper_m110"];
_u = _u		+ ["rhsusf_usmc_marpat_wd_sniper_m107"];
_u = _u		+ ["rhsusf_usmc_marpat_wd_officer"];
_u = _u		+ ["rhsusf_usmc_marpat_wd_helicrew"];
_u = _u		+ ["rhsusf_usmc_marpat_wd_helipilot"];
_u = _u		+ ["rhsusf_usmc_marpat_wd_crewman"];
_u = _u		+ ["rhsusf_usmc_marpat_wd_combatcrewman"];
_u = _u		+ ["rhsusf_usmc_marpat_wd_explosives"];
_u = _u		+ ["rhsusf_airforce_jetpilot"];
_u = _u		+ ["rhsusf_socom_marsoc_teamchief"];
_u = _u		+ ["rhsusf_socom_marsoc_cso"];
_u = _u		+ ["rhsusf_socom_marsoc_cso_cqb"];
_u = _u		+ ["rhsusf_socom_marsoc_cso_mk17"];
_u = _u		+ ["rhsusf_socom_marsoc_sarc"];
_u = _u		+ ["rhsusf_socom_marsoc_cso_mechanic"];
_u = _u		+ ["rhsusf_socom_marsoc_marksman"];
_u = _u		+ ["rhsusf_socom_marsoc_jtac"];
missionNamespace setVariable [format ["CTI_%1_%2Units", _side, CTI_BARRACKS], _u];

_u 			= ["B_Quadbike_01_F"];
_u = _u		+ ["rhsusf_m1025_w_m2"];
_u = _u		+ ["rhsusf_m1025_w_mk19"];
_u = _u		+ ["rhsusf_m1045_w_s"];
_u = _u		+ ["rhsusf_m1151_m2crows_usmc_wd"];
_u = _u		+ ["rhsusf_m1151_mk19crows_usmc_wd"];
_u = _u		+ ["rhsusf_m998_w_2dr_fulltop"];
_u = _u		+ ["rhsusf_m998_w_2dr_halftop"];
_u = _u		+ ["rhsusf_m998_w_2dr"];
_u = _u		+ ["rhsusf_m998_w_4dr_fulltop"];
_u = _u		+ ["rhsusf_m998_w_4dr_halftop"];
_u = _u		+ ["rhsusf_m998_w_4dr"];
_u = _u		+ ["rhsusf_m1232_usarmy_wd"];
_u = _u		+ ["rhsusf_m1232_M2_usarmy_wd"];
_u = _u		+ ["rhsusf_m1232_MK19_usarmy_wd"];
_u = _u		+ ["rhsusf_m1237_M2_usarmy_wd"];
_u = _u		+ ["rhsusf_m1237_MK19_usarmy_wd"];
_u = _u		+ ["rhsusf_M1078A1P2_wd_fmtv_usarmy"];
_u = _u		+ ["rhsusf_M1078A1P2_wd_flatbed_fmtv_usarmy"];
_u = _u		+ ["rhsusf_M1078A1P2_wd_open_fmtv_usarmy"];
missionNamespace setVariable [format ["CTI_%1_%2Units", _side, CTI_LIGHT], _u];


_u  		= ["rhsusf_m113_usarmy"];
_u = _u		+ ["rhsusf_m113_usarmy_unarmed"];
_u = _u		+ ["rhsusf_m113_usarmy_M240"];
_u = _u		+ ["rhsusf_m113_usarmy_MK19"];
_u = _u		+ ["RHS_M2A2_wd"];
_u = _u		+ ["RHS_M2A3_wd"];
_u = _u		+ ["RHS_M2A2_BUSKI_wd"];
_u = _u		+ ["RHS_M2A3_BUSKI_wd"];
_u = _u		+ ["RHS_M2A3_BUSKIII_wd"];
_u = _u		+ ["rhsusf_m1a1fep_wd"];
_u = _u 	+ ["rhsusf_m1a2sep1wd_usarmy"];
_u = _u 	+ ["rhsusf_m1a2sep1tuksiwd_usarmy"];
_u = _u 	+ ["rhsusf_m1a2sep1tuksiiwd_usarmy"];
_u = _u 	+ ["rhsusf_m1a2sep2wd_usarmy"];
_u = _u		+ ["rhsusf_m109_usarmy"];
_u = _u		+ ["rhsusf_M142_usarmy_WD"];
missionNamespace setVariable [format ["CTI_%1_%2Units", _side, CTI_HEAVY], _u];

_u 			= ["RHS_UH60M"];
_u = _u		+ ["RHS_UH60M_MEV"];
_u = _u		+ ["RHS_UH60M_MEV2"];
_u = _u		+ ["RHS_UH1Y_UNARMED"];
_u = _u		+ ["RHS_UH1Y_FFAR"];
_u = _u		+ ["RHS_UH1Y"];
_u = _u		+ ["RHS_AH1Z_wd"];
_u = _u		+ ["RHS_MELB_H6M"];
_u = _u		+ ["RHS_MELB_MH6M"];
_u = _u		+ ["RHS_MELB_AH6M_L"];
_u = _u		+ ["RHS_MELB_AH6M_M"];
_u = _u		+ ["RHS_MELB_AH6M_H"];
_u = _u		+ ["RHS_CH_47F"];
_u = _u		+ ["RHS_AH64D_AA"];
_u = _u		+ ["RHS_AH64D_noradar_AA"];
_u = _u		+ ["RHS_AH64D_CS"];
_u = _u		+ ["RHS_AH64D_noradar_CS"];
_u = _u		+ ["RHS_AH64D_GS"];
_u = _u		+ ["RHS_AH64D_noradar_GS"];
_u = _u		+ ["RHS_AH64D"];
_u = _u		+ ["RHS_AH64D_noradar"];
_u = _u		+ ["RHS_A10"];
_u = _u		+ ["RHS_A10_AT"];
_u = _u		+ ["RHSGREF_A29B_HIDF"];
_u = _u		+ ["RHSUSF_f22"];
_u = _u		+ ["RHS_C130J"];
missionNamespace setVariable [format ["CTI_%1_%2Units", _side, CTI_AIR], _u];

_u 			= ["rhsusf_M977A4_REPAIR_usarmy_wd"];
_u = _u		+ ["rhsusf_M977A4_REPAIR_BKIT_usarmy_wd"];
_u = _u		+ ["rhsusf_M977A4_REPAIR_BKIT_M2_usarmy_wd"];
_u = _u		+ ["rhsusf_M978A4_usarmy_wd"];
_u = _u		+ ["rhsusf_M978A4_BKIT_usarmy_wd"];
_u = _u		+ ["CTI_Salvager_West"];
missionNamespace setVariable [format ["CTI_%1_%2Units", _side, CTI_REPAIR], _u];

_u 			= ["rhsusf_M977A4_AMMO_usarmy_wd"];
_u = _u		+ ["rhsusf_M977A4_AMMO_BKIT_usarmy_wd"];
_u = _u		+ ["rhsusf_M977A4_AMMO_BKIT_M2_usarmy_wd"];
missionNamespace setVariable [format ["CTI_%1_%2Units", _side, CTI_AMMO], _u];

_u 			= ["B_Boat_Transport_01_F"];
_u = _u		+ ["B_Boat_Armed_01_minigun_F"];
missionNamespace setVariable [format ["CTI_%1_%2Units", _side, CTI_NAVAL], _u];

_u 			= ["C_Quadbike_01_F"];
_u = _u		+ ["C_Offroad_01_F"];
_u = _u		+ ["C_Offroad_02_unarmed_F"];
_u = _u		+ ["C_Hatchback_01_F"];
_u = _u		+ ["C_SUV_01_F"];
_u = _u		+ ["C_Van_01_transport_F"];
if ((missionNamespace getVariable "CTI_UNITS_TOWN_PURCHASE") > 0) then {
 	_u = _u		+ [missionNamespace getVariable format ["CTI_%1_SOLDIER", _side]];
	_u = _u		+ ["rhsusf_usmc_marpat_wd_engineer"];
	_u = _u		+ ["rhsusf_usmc_marpat_wd_stinger"];
    _u = _u		+ ["rhsusf_usmc_marpat_wd_smaw"];
};
missionNamespace setVariable [format ["CTI_%1_%2Units", _side, CTI_DEPOT], _u];