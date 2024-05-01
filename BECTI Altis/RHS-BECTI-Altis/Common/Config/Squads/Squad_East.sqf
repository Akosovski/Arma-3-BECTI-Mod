_side = _this;

_v = [];
_t = [];
_p = [];
_f = [];
_m = [];
_c = [];
_s = [];

//--- Commander will assign those orders based on the force and the probability [type, strenght, {probability}, {Max per side}]
missionNamespace setVariable [format["CTI_SQUADS_%1_CATEGORY_INFANTRY", _side], [["Infantry", 5,50], ["InfantryAT", 2], ["InfantryAA", 2, 40, .10], ["InfantryRanged", 1, 60, .05]]];
missionNamespace setVariable [format["CTI_SQUADS_%1_CATEGORY_LIGHT", _side], [["Motorized", 1, 25, .12], ["Mechanized", 1, 70, .15], ["Mechanized1", 1, 20, .15], ["Mechanized2", 1, 20, .15]]];
missionNamespace setVariable [format["CTI_SQUADS_%1_CATEGORY_HEAVY", _side], [["MechanizedLight1", 0.5, 15],["MechanizedLight2", 1, 15],["MechanizedLight3", 1, 25], ["AntiAir", 1, 5, .10], ["MechanizedHeavy1", 2],["MechanizedHeavy2", 2], ["Armored", 3,35],["Armored1", 4,33],["Armored2", 5,31]]];
missionNamespace setVariable [format["CTI_SQUADS_%1_CATEGORY_AIR", _side], [["AirAttack", 1]]];

missionNamespace setVariable [format["CTI_SQUADS_%1_TOWN_DEFENSE", _side], ["InfantryAT", "InfantryAA"]];

//--- Those are used by the commander to determine the kind of unit an AI team has
missionNamespace setVariable [format["CTI_SQUADS_%1_KIND_INFANTRY", _side], ["Infantry", "InfantryAT", "InfantryAA", "InfantryRanged"]];
missionNamespace setVariable [format["CTI_SQUADS_%1_KIND_LIGHT", _side], ["Motorized","Mechanized","Mechanized1","Mechanized2","MechanizedLight1","MechanizedLight2","MechanizedLight3"]];
missionNamespace setVariable [format["CTI_SQUADS_%1_KIND_HEAVY", _side], ["Mechanized", "MechanizedHeavy1","MechanizedHeavy2", "Armored", "Armored1","Armored2","AntiAir"]];
missionNamespace setVariable [format["CTI_SQUADS_%1_KIND_AIR", _side], ["AirAttack"]];

_v pushBack "Infantry";
_t pushBack "Infantry";
_p pushBack [["RHS_Ural_MSV_01",1,0],["rhs_msv_rifleman", 5],["rhs_msv_grenadier", 1],["rhs_msv_machinegunner", 2, 80], ["rhs_msv_medic", 1], ["rhs_msv_at", 2, 70]];
_f pushBack CTI_BARRACKS;
_m pushBack 500;
_c pushBack "Infantry";
_s pushBack [];

_v pushBack "InfantryAT";
_t pushBack "Infantry - AT";
_p pushBack [["RHS_Ural_MSV_01",1,0],["rhs_msv_at", 5, 85], ["rhs_msv_machinegunner", 2, 80] ,["rhs_msv_grenadier", 2],["rhs_msv_medic", 1]];
_f pushBack CTI_BARRACKS;
_m pushBack 800;
_c pushBack "InfantryAT";
_s pushBack [];

_v pushBack "InfantryAA";
_t pushBack "Infantry - AA";
_p pushBack [["RHS_Ural_MSV_01",1,0],["rhs_msv_aa", 5, 85], ["rhs_msv_medic", 1],["rhs_msv_grenadier", 1], ["rhs_msv_rifleman", 2]];
_f pushBack CTI_BARRACKS;
_m pushBack 800;
_c pushBack "InfantryAA";
_s pushBack [];

_v pushBack "InfantryRanged";
_t pushBack "Infantry - Snipers";
_p pushBack [["RHS_Ural_MSV_01",1,0],["rhs_msv_marksman", 3],["rhs_msv_grenadier", 3], ["rhs_msv_RSHG2", 2]];
_f pushBack CTI_BARRACKS;
_m pushBack 900;
_c pushBack "InfantryAdvanced";
_s pushBack [];

// _v pushBack "Motorized";
// _t pushBack "Motorized - Transport";
// _p pushBack [["O_Truck_02_transport_F", 1]];
// _f pushBack CTI_LIGHT;
// _m pushBack 1000;
// _c pushBack "MotorizedTransport";
// _s pushBack [["Transport"], ["TransportFitCargo", 40]];

_v pushBack "Motorized";
_t pushBack "Motorized - MPRAP (Tigr)";
_p pushBack [["rhs_tigr_sts_msv", 2],["rhs_msv_rifleman", 2],["rhs_msv_machinegunner", 1] ,["rhs_msv_at", 1],["rhs_msv_strelok_rpg_assist", 1]];
_f pushBack CTI_LIGHT;
_m pushBack 1200;
_c pushBack "Motorized";
_s pushBack [];

_v pushBack "Mechanized";
_t pushBack "Mechanized - APC (BTR-70)";
_p pushBack [["rhs_btr70_msv", 1],["rhs_msv_rifleman", 3],["rhs_msv_machinegunner", 1] ,["rhs_msv_at", 1],["rhs_msv_strelok_rpg_assist", 1]];
_f pushBack CTI_HEAVY;
_m pushBack 1700;
_c pushBack "Mechanized";
_s pushBack [];

_v pushBack "Mechanized1";
_t pushBack "Mechanized - APC (BTR-80)";
_p pushBack [["rhs_btr80_msv", 1],["rhs_msv_rifleman", 3],["rhs_msv_machinegunner", 1] ,["rhs_msv_at", 1],["rhs_msv_strelok_rpg_assist", 1]];
_f pushBack CTI_HEAVY;
_m pushBack 1700;
_c pushBack "Mechanized1";
_s pushBack [];

_v pushBack "Mechanized2";
_t pushBack "Mechanized - APC (BTR-80a)";
_p pushBack [["rhs_btr80a_msv", 1],["rhs_msv_rifleman", 3],["rhs_msv_machinegunner", 1] ,["rhs_msv_at", 1],["rhs_msv_strelok_rpg_assist", 1]];
_f pushBack CTI_HEAVY;
_m pushBack 1800;
_c pushBack "Mechanized2";
_s pushBack [];

_v pushBack "MechanizedLight1";
_t pushBack "Mechanized - IFV (BMP1P)";
_p pushBack [["rhs_bmp1p_msv", 1],["rhs_msv_rifleman", 3],["rhs_msv_machinegunner", 1] ,["rhs_msv_at", 1],["rhs_msv_strelok_rpg_assist", 1]];
_f pushBack CTI_HEAVY;
_m pushBack 1700;
_c pushBack "MechanizedLight1";
_s pushBack [];

_v pushBack "MechanizedLight2";
_t pushBack "Mechanized - IFV (BMP2)";
_p pushBack [["rhs_bmp2_msv", 1],["rhs_msv_rifleman", 3],["rhs_msv_machinegunner", 1] ,["rhs_msv_at", 1],["rhs_msv_strelok_rpg_assist", 1]];
_f pushBack CTI_HEAVY;
_m pushBack 1900;
_c pushBack "MechanizedLight2";
_s pushBack [];

_v pushBack "MechanizedLight3";
_t pushBack "Mechanized - IFV (BMP2D)";
_p pushBack [["rhs_bmp2d_msv", 1],["rhs_msv_rifleman", 3],["rhs_msv_machinegunner", 1] ,["rhs_msv_at", 1],["rhs_msv_strelok_rpg_assist", 1]];
_f pushBack CTI_HEAVY;
_m pushBack 2000;
_c pushBack "MechanizedLight3";
_s pushBack [];

_v pushBack "MechanizedHeavy1";
_t pushBack "Mechanized - IFV (BMP3)";
_p pushBack [["rhs_bmp3_msv", 2],["rhs_msv_rifleman", 3],["rhs_msv_machinegunner", 1] ,["rhs_msv_at", 1],["rhs_msv_strelok_rpg_assist", 1]];
_f pushBack CTI_HEAVY;
_m pushBack 2350;
_c pushBack "MechanizedHeavy1";
_s pushBack [];

_v pushBack "MechanizedHeavy2";
_t pushBack "Mechanized - IFV (BMP3M)";
_p pushBack [["rhs_bmp3M_msv", 2],["rhs_msv_rifleman", 3],["rhs_msv_machinegunner", 1] ,["rhs_msv_at", 1],["rhs_msv_strelok_rpg_assist", 1]];
_f pushBack CTI_HEAVY;
_m pushBack 2500;
_c pushBack "MechanizedHeavy2";
_s pushBack [];

_v pushBack "Armored";
_t pushBack "Armored - MBT (T80B & T72B)";
_p pushBack [["rhs_t80bvk", 1],["rhs_t72bb_tv", 2],["rhs_zsu234_aa", 1, 40]];
_f pushBack CTI_HEAVY;
_m pushBack 3000;
_c pushBack "Armored";
_s pushBack [];

_v pushBack "Armored1";
_t pushBack "Armored - MBT (T80U)";
_p pushBack [["rhs_t80um", 1],["rhs_t80u", 2],["rhs_zsu234_aa", 1, 40]];
_f pushBack CTI_HEAVY;
_m pushBack 4500;
_c pushBack "Armored1";
_s pushBack [];

_v pushBack "Armored2";
_t pushBack "Armored - MBT (T90A)";
_p pushBack [["rhs_t90a_tv", 3],["rhs_zsu234_aa", 1, 40]];
_f pushBack CTI_HEAVY;
_m pushBack 6500;
_c pushBack "Armored2";
_s pushBack [];

_v pushBack "AntiAir";
_t pushBack "Armored - Anti Air";
_p pushBack [["rhs_zsu234_aa", 4]];
_f pushBack CTI_HEAVY;
_m pushBack 3500;
_c pushBack "AntiAir";
_s pushBack [];

_v pushBack "AirAttack";
_t pushBack "Air - Attack";
_p pushBack [["RHS_Mi24v_vvsc", 1],["RHS_Mi24V_UPK23_vvsc",1]];
_f pushBack CTI_AIR;
_m pushBack 18000;
_c pushBack "Air";
_s pushBack [];

[_side, _v, _t, _p, _f, _m, _c, _s] call compile preprocessFileLineNumbers "Common\Config\Squads\Squads_Set.sqf";