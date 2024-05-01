private ["_side", "_u"];

_side = _this;

missionNamespace setVariable [format["CTI_%1_Commander", _side], "rhs_msv_officer_armored"];
missionNamespace setVariable [format["CTI_%1_Worker", _side], "rhs_msv_driver"];

missionNamespace setVariable [format["CTI_%1_Diver", _side], "O_diver_F"];
missionNamespace setVariable [format["CTI_%1_Soldier", _side], "rhs_msv_rifleman"];
missionNamespace setVariable [format["CTI_%1_Crew", _side], "rhs_msv_crew"];
missionNamespace setVariable [format["CTI_%1_Pilot", _side], "rhs_pilot_combat_heli"];

missionNamespace setVariable [format["CTI_%1_Vehicles_Startup", _side], [
	["RHS_Ural_MSV_01", [
		["rhs_weap_rpg26", 5],
		["rhs_rpg26_mag", 5],
		["rhs_30Rnd_545x39_7n10_AK", 20],
		["FirstAidKit", 4]
	]],
	["rhs_tigr_msv", [
		["rhs_weap_rpg26", 1],
		["rhs_rpg26_mag", 1],
		["rhs_30Rnd_545x39_7n10_AK", 20],
		["FirstAidKit", 4]
	]]
]];

//-- -Units - Barracks
_u 	= ['rhs_msv_rifleman'];
_u pushBack 'rhs_msv_lat';
_u pushBack 'rhs_msv_rshg2';
_u pushBack 'rhs_msv_at';
_u pushBack 'rhs_msv_strelok_rpg_assist';
_u pushBack 'rhs_msv_aa';
_u pushBack 'rhs_msv_grenadier';
_u pushBack 'rhs_msv_marksman';
_u pushBack 'rhs_msv_machinegunner';
_u pushBack 'rhs_msv_machinegunner_assistant';
_u pushBack 'rhs_msv_medic';
_u pushBack 'rhs_msv_engineer';
_u pushBack 'rhs_msv_crew';
//vdv stuff
_u pushBack 'rhs_vdv_rifleman';
_u pushBack 'rhs_vdv_lat';
_u pushBack 'rhs_vdv_rshg2';
_u pushBack 'rhs_vdv_at';
_u pushBack 'rhs_vdv_strelok_rpg_assist';
_u pushBack 'rhs_vdv_aa';
_u pushBack 'rhs_vdv_grenadier';
_u pushBack 'rhs_vdv_marksman';
_u pushBack 'rhs_vdv_machinegunner';
_u pushBack 'rhs_vdv_machinegunner_assistant';
_u pushBack 'rhs_vdv_medic';
_u pushBack 'rhs_vdv_engineer';
_u pushBack 'rhs_vdv_crew';

_u pushBack 'rhs_pilot_combat_heli';
missionNamespace setVariable [format ["CTI_%1_%2Units", _side, CTI_BARRACKS], _u];

_u 	= ['O_Quadbike_01_F'];
_u pushBack 'RHS_UAZ_MSV_01';
_u pushBack 'RHS_UAZ_Open_MSV_01';
_u pushBack 'rhs_tigr_msv';
_u pushBack 'rhs_tigr_3camo_msv';
_u pushBack 'rhs_tigr_3camo_msv';
_u pushBack 'rhs_tigr_sts_msv';
_u pushBack 'rhs_tigr_m_vdv';

_u pushBack 'rhs_gaz66o_msv';
_u pushBack 'rhs_gaz66_msv';
_u pushBack 'rhs_gaz66_r142_msv';
_u pushBack 'rhs_gaz66_ap2_msv';
_u pushBack 'RHS_Ural_Open_MSV_01';
_u pushBack 'RHS_Ural_MSV_01';
_u pushBack 'rhs_typhoon_vdv';
_u pushBack 'RHS_BM21_MSV_01';
_u pushBack "rhs_btr60_msv";
_u pushBack "rhs_btr70_msv";
_u pushBack "rhs_btr80_msv";
_u pushBack "rhs_btr80a_msv";
missionNamespace setVariable [format ["CTI_%1_%2Units", _side, CTI_LIGHT], _u];

_u 	= ["rhs_bmp1_msv"];
_u pushBack "rhs_bmp1p_msv";
_u pushBack "rhs_bmp1d_msv";
_u pushBack "rhs_bmp1k_msv";
_u pushBack "rhs_prp3_msv";
_u pushBack "rhs_brm1k_msv";
_u pushBack "rhs_bmp2_msv";
_u pushBack "rhs_bmp2d_msv";
_u pushBack "rhs_bmp2e_msv";
_u pushBack "rhs_bmp2k_msv";
_u pushBack "rhs_bmp3_msv";
_u pushBack "rhs_bmp3_late_msv";
_u pushBack "rhs_bmp3m_msv";
_u pushBack "rhs_bmp3mera_msv";
//vdv stuff
_u pushBack "rhs_bmd1";
_u pushBack "rhs_bmd1k";
_u pushBack "rhs_bmd1p";
_u pushBack "rhs_bmd1pk";
_u pushBack "rhs_bmd1r";
_u pushBack "rhs_bmd2";
_u pushBack "rhs_bmd2k";
_u pushBack "rhs_bmd2m";
_u pushBack "rhs_bmd4_vdv";
_u pushBack "rhs_bmd4m_vdv";
_u pushBack "rhs_bmd4ma_vdv";
_u pushBack "rhs_sprut_vdv";

_u pushBack "rhs_t72ba_tv";
_u pushBack "rhs_t72bb_tv";
_u pushBack "rhs_t72bc_tv";
//lv2
_u pushBack "rhs_t72bd_tv";
_u pushBack "rhs_t80b";
_u pushBack "rhs_t80bk";
_u pushBack "rhs_t80bv";
_u pushBack "rhs_t80bvk";
_u pushBack "rhs_t80a";
_u pushBack "rhs_t80u";
//lv3
_u pushBack "rhs_t80um";
_u pushBack "rhs_t80u45m";
_u pushBack "rhs_t80ue1";
_u pushBack "rhs_t90_tv";
_u pushBack "rhs_t90a_tv";
_u pushBack "rhs_zsu234_aa";
_u pushBack "rhs_2s3_tv";
_u pushBack "rhs_9k79";
missionNamespace setVariable [format ["CTI_%1_%2Units", _side, CTI_HEAVY], _u];

_u 			= ['RHS_Mi8mt_vvs'];
_u pushBack 'RHS_Mi8MTV3_vvsc';
_u pushBack 'RHS_Mi8AMT_vvsc';
_u pushBack 'RHS_Mi8AMTSh_vvsc';

_u pushBack 'RHS_Mi8MTV3_UPK23_vvsc';
_u pushBack 'RHS_Mi8AMTSh_UPK23_vvsc';

_u pushBack 'RHS_Mi24P_vvsc';
_u pushBack 'RHS_Mi24V_vvsc';
_u pushBack 'RHS_Mi24Vt_vvs';
_u pushBack 'RHS_Mi24P_CAS_vvsc';
_u pushBack 'RHS_Mi24V_UPK23_vvsc';
_u pushBack 'RHS_Ka52_vvsc';
_u pushBack 'RHS_Ka52_UPK23_vvsc';

_u pushBack 'RHS_Su25SM_vvsc';
_u pushBack 'RHS_Su25SM_KH29_vvsc';
missionNamespace setVariable [format ["CTI_%1_%2Units", _side, CTI_AIR], _u];

_u 			= ["rhs_gaz66_repair_msv"];
_u pushBack "CTI_Salvager_East";
_u pushBack "CTI_Salvager_Independent_East";
_u pushBack "RHS_Ural_Fuel_MSV_01";
missionNamespace setVariable [format ["CTI_%1_%2Units", _side, CTI_REPAIR], _u];

_u 			= ["rhs_gaz66_repair_vv"];
missionNamespace setVariable [format ["CTI_%1_%2Units", _side, CTI_AMMO], _u];

_u 			= ['O_Boat_Transport_01_F'];
_u pushBack 'O_Boat_Armed_01_hmg_F';
missionNamespace setVariable [format ["CTI_%1_%2Units", _side, CTI_NAVAL], _u];