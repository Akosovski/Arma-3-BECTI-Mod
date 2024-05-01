_side = _this;

_v = [];
_t = [];
_p = [];
_f = [];
_m = [];
_c = [];
_s = [];

//--- Commander will assign those orders based on the force and the probability [type, strenght, {probability}, {Max per side}]
missionNamespace setVariable [format["CTI_SQUADS_%1_CATEGORY_INFANTRY", _side], [["Infantry", 4], ["InfantryAT", 2], ["InfantryAA", 2, 40, .10], ["InfantryRanged", 1, 60, .05]]];
missionNamespace setVariable [format["CTI_SQUADS_%1_CATEGORY_LIGHT", _side], [["Motorized", 1, 75, .12], ["Mechanized", 1, 20, .15], ["MechanizedIFV", 1, 40, .15]]];
missionNamespace setVariable [format["CTI_SQUADS_%1_CATEGORY_HEAVY", _side], [["Mechanized", 1, 15], ["MechanizedIFV", 1, 50],["AntiAir", 1, 25, .10], ["MechanizedIFVHeavy", 1,40], ["Armored", 3,40], ["Armored2", 3,40]]];
missionNamespace setVariable [format["CTI_SQUADS_%1_CATEGORY_AIR", _side], [["AirAttack", 1]]];

missionNamespace setVariable [format["CTI_SQUADS_%1_TOWN_DEFENSE", _side], ["InfantryAT", "InfantryAA"]];

//--- Those are used by the commander to determine the kind of unit an AI team has
missionNamespace setVariable [format["CTI_SQUADS_%1_KIND_INFANTRY", _side], ["Infantry", "InfantryAT", "InfantryAA", "InfantryRanged"]];
missionNamespace setVariable [format["CTI_SQUADS_%1_KIND_LIGHT", _side], ["Motorized"]];
missionNamespace setVariable [format["CTI_SQUADS_%1_KIND_HEAVY", _side], ["Mechanized", "MechanizedIFV", "MechanizedIFVHeavy", "Armored", "AntiAir"]];
missionNamespace setVariable [format["CTI_SQUADS_%1_KIND_AIR", _side], ["AirAttack"]];

_v pushBack "Infantry";
_t pushBack "Infantry";
_p pushBack [["rhsusf_M1083A1P2_B_M2_wd_fmtv_usarmy",1,0],["rhsusf_army_ocp_rifleman", 5],["rhsusf_army_ocp_grenadier", 2], ["rhsusf_army_ocp_autorifleman", 2, 80], ["rhsusf_army_ocp_medic", 1], ["rhsusf_army_ocp_riflemanat", 2, 70]];
_f pushBack CTI_BARRACKS;
_m pushBack 500;
_c pushBack "Infantry";
_s pushBack [];

_v pushBack "InfantryAT";
_t pushBack "Infantry - AT";
_p pushBack [["rhsusf_M1083A1P2_B_M2_wd_fmtv_usarmy",1,0],["rhsusf_army_ocp_javelin", 2, 85],["rhsusf_army_ocp_rifleman", 7], ["rhsusf_army_ocp_autorifleman", 2, 80], ["rhsusf_army_ocp_medic", 1]];
_f pushBack CTI_BARRACKS;
_m pushBack 800;
_c pushBack "InfantryAT";
_s pushBack [];

_v pushBack "InfantryAA";
_t pushBack "Infantry - AA";
_p pushBack [["rhsusf_M1083A1P2_B_M2_wd_fmtv_usarmy",1,0],["rhsusf_army_ocp_aa", 5, 85], ["rhsusf_army_ocp_medic", 1], ["rhsusf_army_ocp_rifleman", 2]];
_f pushBack CTI_BARRACKS;
_m pushBack 800;
_c pushBack "InfantryAA";
_s pushBack [];

_v pushBack "InfantryRanged";
_t pushBack "Infantry - Snipers";
_p pushBack [["rhsusf_M1083A1P2_B_M2_wd_fmtv_usarmy",1],["rhsusf_army_ocp_marksman", 2], ["rhsusf_army_ocp_rifleman", 1]];
_f pushBack CTI_BARRACKS;
_m pushBack 900;
_c pushBack "InfantryAdvanced";
_s pushBack [];

// _v pushBack "Motorized";
// _t pushBack "Motorized - Transport";
// _p pushBack [["B_Truck_01_transport_F", 1]];
// _f pushBack CTI_LIGHT;
// _m pushBack 1000;
// _c pushBack "MotorizedTransport";
// _s pushBack [["Transport"], ["TransportFitCargo", 40]];

_v pushBack "Motorized";
_t pushBack "Motorized - MPRAP";
_p pushBack [["rhsusf_m1025_w_m2", 3]];
_f pushBack CTI_LIGHT;
_m pushBack 800;
_c pushBack "Motorized";
_s pushBack [];

_v pushBack "Mechanized";
_t pushBack "Mechanized - APC (M113)";
_p pushBack [["rhsusf_m113_usarmy", 1], ["rhsusf_army_ocp_rifleman", 2],["rhsusf_army_ocp_grenadier", 2], ["rhsusf_army_ocp_autorifleman", 2, 80], ["rhsusf_army_ocp_medic", 1], ["rhsusf_army_ocp_riflemanat", 2, 70]];
_f pushBack CTI_HEAVY;
_m pushBack 1500;
_c pushBack "Mechanized";
_s pushBack [];

_v pushBack "MechanizedIFV";
_t pushBack "Mechanized - IFV (M2A2)";
_p pushBack [["RHS_M2A2_wd", 1]];
_f pushBack CTI_HEAVY;
_m pushBack 2000;
_c pushBack "MechanizedIFV";
_s pushBack [];

_v pushBack "MechanizedIFVHeavy";
_t pushBack "Mechanized - IFV (M2A3 BUSK I)";
_p pushBack [["RHS_M2A3_BUSKI_wd", 2], ["rhsusf_army_ocp_rifleman", 2],["rhsusf_army_ocp_grenadier", 2], ["rhsusf_army_ocp_autorifleman", 2, 80], ["rhsusf_army_ocp_medic", 1], ["rhsusf_army_ocp_riflemanat", 2, 70]];
_f pushBack CTI_HEAVY;
_m pushBack 2500;
_c pushBack "MechanizedIFVHeavy";
_s pushBack [];

_v pushBack "Armored";
_t pushBack "Armored - MBT (M1A1AIM)";
_p pushBack [["rhsusf_m1a1aimwd_usarmy", 3]];
_f pushBack CTI_HEAVY;
_m pushBack 4500;
_c pushBack "Armored";
_s pushBack [];

_v pushBack "Armored2";
_t pushBack "Armored - MBT (M1A2SEPv1 TUSK I)";
_p pushBack [["rhsusf_m1a2sep1tuskiwd_usarmy", 3]];
_f pushBack CTI_HEAVY;
_m pushBack 7500;
_c pushBack "Armored2";
_s pushBack [];

_v pushBack "AntiAir";
_t pushBack "Armored - Anti Air";
_p pushBack [["RHS_M6_wd", 1]];
_f pushBack CTI_HEAVY;
_m pushBack 6500;
_c pushBack "AntiAir";
_s pushBack [];

_v pushBack "AirAttack";
_t pushBack "Air - Attack (AH-64D)";
_p pushBack [["rhs_ah64d_wd", 2]];
_f pushBack CTI_AIR;
_m pushBack 19000;
_c pushBack "Air";
_s pushBack [];

[_side, _v, _t, _p, _f, _m, _c, _s] call compile preprocessFileLineNumbers "Common\Config\Squads\Squads_Set.sqf";