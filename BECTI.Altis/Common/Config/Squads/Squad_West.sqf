_side = _this;

_v = [];
_t = [];
_p = [];
_f = [];
_m = [];
_c = [];
_s = [];

//--- Commander will assign those orders based on the force and the probability [type, strength, {probability}, {Max per side}]
missionNamespace setVariable [format["CTI_SQUADS_%1_CATEGORY_INFANTRY", _side], [["Infantry", 2], ["InfantryAT", 1], ["InfantryAA", 1, 40, .10], ["InfantryElite", 1, 85]]];
missionNamespace setVariable [format["CTI_SQUADS_%1_CATEGORY_LIGHT", _side], [["Motorized", 1, 75, .12],["MotorizedHMWV", 1, 75, .12], ["Mechanized", 1, 90, .15]]];
missionNamespace setVariable [format["CTI_SQUADS_%1_CATEGORY_HEAVY", _side], [["Mechanized", 1, 50], ["MechanizedHeavy", 1], ["Armored", 2]]];
missionNamespace setVariable [format["CTI_SQUADS_%1_CATEGORY_AIR", _side], [["HeliAttack", 1],["AirAttack", 1, 55]]];

missionNamespace setVariable [format["CTI_SQUADS_%1_TOWN_DEFENSE", _side], ["InfantryAT", "InfantryAA"]];

//--- Those are used by the commander to determine the kind of unit an AI team has
missionNamespace setVariable [format["CTI_SQUADS_%1_KIND_INFANTRY", _side], ["Infantry", "InfantryAT", "InfantryAA", "InfantryElite"]];
missionNamespace setVariable [format["CTI_SQUADS_%1_KIND_LIGHT", _side], ["Motorized"]];
missionNamespace setVariable [format["CTI_SQUADS_%1_KIND_HEAVY", _side], ["Mechanized", "MechanizedHeavy", "Armored"]];
missionNamespace setVariable [format["CTI_SQUADS_%1_KIND_AIR", _side], ["HeliAttack", "AirAttack"]];

_v = _v		+ ["Infantry"];
_t = _t		+ ["Infantry"];
_p = _p		+ [[["us_usmc_m1078a1", 1], ["us_usmc_rifleman_m4a1", 2], ["us_usmc_rifleman_m16", 2], ["us_usmc_lance_corporal", 2], ["us_usmc_autorifleman_m249", 2], ["us_usmc_sergeant", 2], ["us_usmc_rifleman_at", 2], ["us_usmc_missileman", 1]]];
_f = _f		+ [CTI_BARRACKS];
_m = _m		+ [2000];
_c = _c		+ ["Infantry"];
_s = _s		+ [[]];

_v = _v		+ ["InfantryAT"];
_t = _t		+ ["Infantry - AT"];
_p = _p		+ [[["us_usmc_m1078a1", 1], ["us_usmc_rifleman_m16", 3], ["us_usmc_missileman", 2], ["us_usmc_rifleman_at", 2]]];
_f = _f		+ [CTI_BARRACKS];
_m = _m		+ [2000];
_c = _c		+ ["InfantryAT"];
_s = _s		+ [[]];

_v = _v		+ ["InfantryAA"];
_t = _t		+ ["Infantry - AA"];
_p = _p		+ [[["us_usmc_m1078a1", 1], ["us_usmc_aa_specialist", 4], ["us_usmc_lance_corporal", 1], ["us_usmc_rifleman_m4a1", 2]]];
_f = _f		+ [CTI_BARRACKS];
_m = _m		+ [2000];
_c = _c		+ ["InfantryAA"];
_s = _s		+ [[]];

_v = _v		+ ["InfantryElite"];
_t = _t		+ ["Infantry - Elite MARSOC"];
_p = _p		+ [[["us_usmc_m1078a1", 1], ["us_usmc_marsoc_chief", 1], ["us_usmc_marsoc_m4a4", 2], ["us_usmc_marsoc_mk16", 2], ["us_usmc_marsoc_mk17", 2], ["us_usmc_marsoc_m249", 2]]];
_f = _f		+ [CTI_BARRACKS];
_m = _m		+ [4000];
_c = _c		+ ["InfantryElite"];
_s = _s		+ [[]];

_v = _v		+ ["MotorizedHMWV"];
_t = _t		+ ["Motorized - HMWV"];
_p = _p		+ [[["us_usmc_m1151a1_crows_m2", 1], ["us_usmc_m1151a1_crows_mk19", 1]]];
_f = _f		+ [CTI_LIGHT];
_m = _m		+ [3000];
_c = _c		+ ["MotorizedHMWV"];
_s = _s		+ [[]];

_v = _v		+ ["Motorized"];
_t = _t		+ ["Motorized - MRAP"];
_p = _p		+ [[["us_usmc_m1126_m2", 1], ["us_usmc_m1126_mk19", 1, 95]]];
_f = _f		+ [CTI_LIGHT];
_m = _m		+ [3000];
_c = _c		+ ["Motorized"];
_s = _s		+ [[]];

_v = _v		+ ["Mechanized"];
_t = _t		+ ["Mechanized - APC"];
_p = _p		+ [[["us_usmc_m113a3_m2", 1], ["us_usmc_m113a3_mk19", 1, 90], ["us_usmc_m113a3_m2", 1, 90]]];
_f = _f		+ [CTI_HEAVY];
_m = _m		+ [5000];
_c = _c		+ ["Mechanized"];
_s = _s		+ [[]];

_v = _v		+ ["MechanizedHeavy"];
_t = _t		+ ["Mechanized - IFV"];
_p = _p		+ [[["us_usmc_m2a3_b1", 1], ["us_usmc_rifleman_m4a1", 2], ["us_usmc_rifleman_m16", 2], ["us_usmc_lance_corporal", 2], ["us_usmc_autorifleman_m249", 2]]];
_f = _f		+ [CTI_HEAVY];
_m = _m		+ [6000];
_c = _c		+ ["Mechanized"];
_s = _s		+ [[]];

_v = _v		+ ["Armored"];
_t = _t		+ ["Armored - MBT"];
_p = _p		+ [[["us_usmc_m1a2sepv1_t1", 1], ["us_usmc_m1a2sepv1_t2", 1]]];
_f = _f		+ [CTI_HEAVY];
_m = _m		+ [8500];
_c = _c		+ ["Armored"];
_s = _s		+ [[]];

_v = _v		+ ["HeliAttack"];
_t = _t		+ ["Heli - Attack"];
_p = _p		+ [[["us_usmc_ah1z", 1]]];
_f = _f		+ [CTI_AIR];
_m = _m		+ [10000];
_c = _c		+ ["Air"];
_s = _s		+ [[]];

_v = _v		+ ["AirAttack"];
_t = _t		+ ["Heli - Airborne (MARSOC)"];
_p = _p		+ [[["us_usmc_uh1y_armed", 1], ["us_usmc_marsoc_chief", 1], ["us_usmc_marsoc_m4a4", 2], ["us_usmc_marsoc_mk16", 2], ["us_usmc_marsoc_mk17", 2], ["us_usmc_marsoc_m249", 2]]];
_f = _f		+ [CTI_AIR];
_m = _m		+ [10000];
_c = _c		+ ["Air"];
_s = _s		+ [[]];



[_side, _v, _t, _p, _f, _m, _c, _s] call compile preprocessFileLineNumbers "Common\Config\Squads\Squads_Set.sqf";