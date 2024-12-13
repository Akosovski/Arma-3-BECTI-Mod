_side = _this;

_v = [];
_t = [];
_p = [];
_f = [];
_m = [];
_c = [];
_s = [];

//--- Commander will assign those orders based on the force and the probability [type, strength, {probability}, {Max per side}]
missionNamespace setVariable [format["CTI_SQUADS_%1_CATEGORY_INFANTRY", _side], [["Infantry", 1, 55], ["InfantryAT", 1, 55], ["InfantryAA", 1, 40], ["InfantryElite", 1, 85]]];
missionNamespace setVariable [format["CTI_SQUADS_%1_CATEGORY_LIGHT", _side], [["MotorizedHMWV", 1, 45]]];
missionNamespace setVariable [format["CTI_SQUADS_%1_CATEGORY_HEAVY", _side], [["Mechanized", 1, 70], ["MechanizedHeavy", 1, 40], ["Armored", 2, 95]]];
missionNamespace setVariable [format["CTI_SQUADS_%1_CATEGORY_AIR", _side], [["HeliAttack", 1, 90],["AirAttack", 2, 95]]];

missionNamespace setVariable [format["CTI_SQUADS_%1_TOWN_DEFENSE", _side], ["InfantryAT", "InfantryAA"]];

//--- Those are used by the commander to determine the kind of unit an AI team has
missionNamespace setVariable [format["CTI_SQUADS_%1_KIND_INFANTRY", _side], ["Infantry", "InfantryAT", "InfantryAA", "InfantryElite"]];
missionNamespace setVariable [format["CTI_SQUADS_%1_KIND_LIGHT", _side], ["MotorizedHMWV"]];
missionNamespace setVariable [format["CTI_SQUADS_%1_KIND_HEAVY", _side], ["Mechanized", "MechanizedHeavy", "Armored"]];
missionNamespace setVariable [format["CTI_SQUADS_%1_KIND_AIR", _side], ["HeliAttack", "AirAttack"]];

_v = _v		+ ["Infantry"];
_t = _t		+ ["Infantry"];
_p = _p		+ [[["us_rg_m1078a1", 1], ["us_rg_rifleman_m4a1", 2], ["us_rg_rifleman_mk17", 2], ["us_rg_corporal", 2], ["us_rg_autorifleman_m249", 2], ["us_rg_sergeant", 2], ["us_rg_machinegunner", 2], ["us_rg_at_specialist", 1]]];
_f = _f		+ [CTI_BARRACKS];
_m = _m		+ [2000];
_c = _c		+ ["Infantry"];
_s = _s		+ [[]];

_v = _v		+ ["InfantryAT"];
_t = _t		+ ["Infantry - AT"];
_p = _p		+ [[["us_rg_m1078a1", 1], ["us_rg_rifleman_mk17", 3], ["us_rg_at_specialist", 3], ["us_rg_corporal", 2]]];
_f = _f		+ [CTI_BARRACKS];
_m = _m		+ [2000];
_c = _c		+ ["InfantryAT"];
_s = _s		+ [[]];

_v = _v		+ ["InfantryAA"];
_t = _t		+ ["Infantry - AA"];
_p = _p		+ [[["us_rg_m1078a1", 1], ["us_rg_aa_specialist", 4], ["us_rg_corporal", 1], ["us_rg_rifleman_m4a1", 2]]];
_f = _f		+ [CTI_BARRACKS];
_m = _m		+ [2000];
_c = _c		+ ["InfantryAA"];
_s = _s		+ [[]];

_v = _v		+ ["InfantryElite"];
_t = _t		+ ["Infantry - DEVGRU"];
_p = _p		+ [[["us_rg_m1078a1", 1], ["us_dvg_operator_m4", 3], ["us_dvg_operator_mk16", 2], ["us_dvg_operator_mk17", 2], ["us_dvg_operator_mk48", 2], ["us_dvg_uav_operator", 2]]];
_f = _f		+ [CTI_BARRACKS];
_m = _m		+ [4000];
_c = _c		+ ["InfantryElite"];
_s = _s		+ [[]];

_v = _v		+ ["MotorizedHMWV"];
_t = _t		+ ["Motorized - CROWS"];
_p = _p		+ [[["us_usmc_m1151a1_crows_m2", 1], ["us_rg_m1151a1_crows_mk19", 1]]];
_f = _f		+ [CTI_LIGHT];
_m = _m		+ [3000];
_c = _c		+ ["MotorizedHMWV"];
_s = _s		+ [[]];

_v = _v		+ ["MechanizedHeavy"];
_t = _t		+ ["Mechanized - IFV"];
_p = _p		+ [[["us_rg_m2a3_b1", 1], ["us_rg_rifleman_m4a1", 2], ["us_rg_rifleman_mk17", 2], ["us_rg_corporal", 2], ["us_rg_autorifleman_m249", 2]]];
_f = _f		+ [CTI_HEAVY];
_m = _m		+ [6000];
_c = _c		+ ["Mechanized"];
_s = _s		+ [[]];

_v = _v		+ ["Armored"];
_t = _t		+ ["Armored - MBT"];
_p = _p		+ [[["us_rg_m1a2sepv1_t1", 1], ["us_rg_m1a2sepv1_t2", 1]]];
_f = _f		+ [CTI_HEAVY];
_m = _m		+ [8500];
_c = _c		+ ["Armored"];
_s = _s		+ [[]];

_v = _v		+ ["HeliAttack"];
_t = _t		+ ["Heli - Attack"];
_p = _p		+ [[["us_rg_ah64d", 1], ["us_rg_ah1z", 1]]];
_f = _f		+ [CTI_AIR];
_m = _m		+ [10000];
_c = _c		+ ["HeliAttack"];
_s = _s		+ [[]];

_v = _v		+ ["AirAttack"];
_t = _t		+ ["Heli - Airborne (DEVGRU)"];
_p = _p		+ [[["us_rg_uh60m", 1], ["us_dvg_operator_m4", 3], ["us_dvg_operator_mk16", 2], ["us_dvg_operator_mk17", 2], ["us_dvg_operator_mk48", 2], ["us_dvg_uav_operator", 2]]];
_f = _f		+ [CTI_AIR];
_m = _m		+ [10000];
_c = _c		+ ["AirAttack"];
_s = _s		+ [[]];



[_side, _v, _t, _p, _f, _m, _c, _s] call compile preprocessFileLineNumbers "Common\Config\Squads\Squads_Set.sqf";