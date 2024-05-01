private ["_side", "_u"];

_side = _this;

missionNamespace setVariable [format["CTI_%1_Commander", _side], "rhsusf_army_ocp_squadleader"];
missionNamespace setVariable [format["CTI_%1_Worker", _side], "rhsusf_army_ocp_crewman"];

missionNamespace setVariable [format["CTI_%1_Diver", _side], "B_diver_f"];
missionNamespace setVariable [format["CTI_%1_Soldier", _side], "rhsusf_army_ocp_rifleman"];
missionNamespace setVariable [format["CTI_%1_Crew", _side], "rhsusf_army_ocp_crewman"];
missionNamespace setVariable [format["CTI_%1_Pilot", _side], "rhsusf_army_ocp_helipilot"];

missionNamespace setVariable [format["CTI_%1_Vehicles_Startup", _side], [
	["B_Truck_01_transport_F", [
		["rhs_weap_M136", 5],
		["rhs_m136_mag", 5],
		["rhs_mag_30Rnd_556x45_Mk318_Stanag", 20],
		["FirstAidKit", 20]
	]],
	["rhsusf_m998_w_4dr", [
		["rhs_weap_M136", 1],
		["rhs_m136_mag", 1],
		["rhs_mag_30Rnd_556x45_Mk318_Stanag", 20],
		["FirstAidKit", 20]
	]]
]];

//--- Units - Barracks
_u 			= ["rhsusf_army_ocp_rifleman"];
_u pushback "rhsusf_army_ocp_rifleman_m16";
_u pushback "rhsusf_army_ocp_rifleman_m590";
_u pushback "rhsusf_army_ocp_riflemanat";
_u pushback "rhsusf_army_ocp_javelin";
_u pushback "rhsusf_army_ocp_aa";
_u pushback "rhsusf_army_ocp_autorifleman";
_u pushback "rhsusf_army_ocp_autoriflemana";
_u pushback "rhsusf_army_ocp_autorifleman_02";
_u pushback "rhsusf_army_ocp_machinegunner";
_u pushback "rhsusf_army_ocp_machinegunnera";
_u pushback "rhsusf_army_ocp_marksman";
_u pushback "rhsusf_army_ocp_sniper";
_u pushback "rhsusf_army_ocp_medic";
_u pushback "rhsusf_army_ocp_engineer";
_u pushback "rhsusf_army_ocp_grenadier";
_u pushback "rhsusf_army_ocp_medic";
_u pushback "rhsusf_army_ocp_crewman";
_u pushback "rhsusf_army_ocp_helipilot";
//mariens
_u pushback "rhsusf_usmc_marpat_wd_rifleman";
_u pushback "rhsusf_usmc_marpat_wd_rifleman_m4";
_u pushback "rhsusf_usmc_marpat_wd_grenadier";
_u pushback "rhsusf_usmc_marpat_wd_riflemanat";
_u pushback "rhsusf_usmc_marpat_wd_rifleman_m590";
_u pushback "rhsusf_usmc_marpat_wd_autorifleman";
_u pushback "rhsusf_usmc_marpat_wd_autorifleman_m249";
_u pushback "rhsusf_usmc_marpat_wd_autorifleman_m249_ass";
_u pushback "rhsusf_usmc_marpat_wd_machinegunner";
_u pushback "rhsusf_usmc_marpat_wd_machinegunner_ass";
_u pushback "rhsusf_usmc_marpat_wd_officer";
_u pushback "rhsusf_usmc_marpat_wd_squadleader";
_u pushback "rhsusf_usmc_marpat_wd_teamleader";
_u pushback "rhsusf_usmc_marpat_wd_engineer";
_u pushback "rhsusf_usmc_marpat_wd_uav";
_u pushback "rhsusf_usmc_marpat_wd_javelin";
_u pushback "rhsusf_usmc_marpat_wd_stinger";
_u pushback "rhsusf_usmc_marpat_wd_marksman";
_u pushback "rhsusf_usmc_marpat_wd_spotter";
_u pushback "rhsusf_usmc_marpat_wd_sniper";
_u pushback "rhsusf_usmc_marpat_wd_crewman";
_u pushback "rhsusf_usmc_marpat_wd_combatcrewman";
_u pushback "rhsusf_usmc_marpat_wd_driver";
_u pushback "rhsusf_usmc_marpat_wd_helipilot";
_u pushback "rhsusf_usmc_marpat_wd_helicrew";

missionNamespace setVariable [format ["CTI_%1_%2Units", _side, CTI_BARRACKS], _u];

_u 			= ["B_Quadbike_01_F"];
_u pushback "rhsusf_m998_w_4dr_fulltop";
_u pushback "rhsusf_m998_w_4dr_halftop";
_u pushback "rhsusf_m998_w_4dr";
_u pushback "rhsusf_m998_w_2dr";
_u pushback "rhsusf_m998_w_2dr_halftop";
_u pushback "rhsusf_m998_w_2dr_fulltop";
_u pushback "rhsusf_m1025_w";
_u pushback "rhsusf_m1025_w_m2";
_u pushback "rhsusf_m1025_w_mk19";
_u pushback "B_Truck_01_medical_F";
_u pushback "rhsusf_M1078A1P2_wd_fmtv_usarmy";
_u pushback "rhsusf_M1078A1P2_B_wd_fmtv_usarmy";
_u pushback "rhsusf_M1083A1P2_wd_fmtv_usarmy";
_u pushback "rhsusf_M1083A1P2_B_wd_fmtv_usarmy";
_u pushback "rhsusf_M1078A1P2_B_M2_wd_fmtv_usarmy";
_u pushback "rhsusf_M1083A1P2_B_M2_wd_fmtv_usarmy";
_u pushback "rhsusf_M977A2_usarmy_wd";
missionNamespace setVariable [format ["CTI_%1_%2Units", _side, CTI_LIGHT], _u];

_u = ["rhsusf_m113_usarmy"];
_u pushback "rhsusf_m113_usarmy_M240";
_u pushback "rhsusf_m113_usarmy_MK19";
_u pushback "rhsusf_m113_usarmy_unarmed";
_u pushback "RHS_M2A2_wd";
_u pushback "RHS_M2A2_BUSHKI_wd";
_u pushback "RHS_M2A3_wd";
_u pushback "RHS_M2A3_BUSKI_wd";
_u pushback "RHS_M2A3_BUSHKIII_wd";
_u pushback "rhsusf_m1a1aimwd_usarmy";
_u pushback "rhsusf_m1a1aim_tuski_wd";
_u pushback "rhsusf_m1a1fep_d";
_u pushback "rhsusf_m1a1fep_wd";
_u pushback "rhsusf_m1a1fep_od";
_u pushback "rhsusf_m1a2sep1wd_usarmy";
_u pushback "rhsusf_m1a2sep1tuskiwd_usarmy";
_u pushback "rhsusf_m1a2sep1tuskiiwd_usarmy";
_u pushback "RHS_M6_wd";
_u pushback "rhsusf_m109_usarmy";
missionNamespace setVariable [format ["CTI_%1_%2Units", _side, CTI_HEAVY], _u];

_u 			= ["rhs_uh60m"];
_u pushback "rhs_uh60m_mev";
_u pushback "rhs_uh60m_mev2";
_u pushback "rhs_ch_47f";
_u pushback "rhs_ah64d_wd";
_u pushback "RHS_AH64D_GS";
_u pushback "RHS_AH64D_CS";
_u pushback "RHS_AH64DGrey";

_u pushback "RHS_UH1Y";
_u pushback "RHS_UH1Y_FFAR";
_u pushback "RHS_UH1Y_UNARMED";
_u pushback "RHS_AH1Z_wd";
_u pushback "RHS_AH1Z_GS_wd";
_u pushback "RHS_AH1Z_CS_wd";

_u pushback "RHS_A10";
_u pushback "RHS_C130j";
missionNamespace setVariable [format ["CTI_%1_%2Units", _side, CTI_AIR], _u];

_u 			= ["B_Truck_01_Repair_F"];
_u pushback "CTI_Salvager_West";
_u pushback "rhsusf_M978A2_usarmy_wd";
missionNamespace setVariable [format ["CTI_%1_%2Units", _side, CTI_REPAIR], _u];

_u 			= ["B_Truck_01_ammo_F"];
missionNamespace setVariable [format ["CTI_%1_%2Units", _side, CTI_AMMO], _u];

_u 			= ["B_Boat_Transport_01_F"];
_u pushback "B_Boat_Armed_01_minigun_F";
missionNamespace setVariable [format ["CTI_%1_%2Units", _side, CTI_NAVAL], _u];