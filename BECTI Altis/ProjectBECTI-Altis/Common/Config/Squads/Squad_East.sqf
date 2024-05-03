_side = _this;

_v = [];
_t = [];
_p = [];
_f = [];
_m = [];
_c = [];
_s = [];

//--- Commander will assign those orders based on the force and the probability [type, strenght, {probability}, {Max per side}]
missionNamespace setVariable [format["CTI_SQUADS_%1_CATEGORY_INFANTRY", _side], [["Infantry", 2], ["InfantryAT", 1], ["InfantryAA", 1, 40, .10], ["InfantryRanged", 1, 60, .05], ["InfantrySniper", 1, 40, .05]]];
missionNamespace setVariable [format["CTI_SQUADS_%1_CATEGORY_LIGHT", _side], [["Motorized", 1, 75, .12], ["Mechanized", 1, 90, .15]]];
missionNamespace setVariable [format["CTI_SQUADS_%1_CATEGORY_HEAVY", _side], [["Mechanized", 1, 35], ["AntiAir", 1, 85, .10], ["MechanizedHeavy", 1], ["Armored", 2]]];
missionNamespace setVariable [format["CTI_SQUADS_%1_CATEGORY_AIR", _side], [["HeliAttack", 1],["AirAttack", 1, 35]]];

missionNamespace setVariable [format["CTI_SQUADS_%1_TOWN_DEFENSE", _side], ["InfantryAT", "InfantryAA"]];

//--- Those are used by the commander to determine the kind of unit an AI team has
missionNamespace setVariable [format["CTI_SQUADS_%1_KIND_INFANTRY", _side], ["Infantry", "InfantryAT", "InfantryAA", "InfantryRanged", "InfantrySniper"]];
missionNamespace setVariable [format["CTI_SQUADS_%1_KIND_LIGHT", _side], ["Motorized"]];
missionNamespace setVariable [format["CTI_SQUADS_%1_KIND_HEAVY", _side], ["Mechanized", "MechanizedHeavy", "Armored", "AntiAir"]];
missionNamespace setVariable [format["CTI_SQUADS_%1_KIND_AIR", _side], ["HeliAttack", "AirAttack"]];

_v = _v		+ ["Infantry"];
_t = _t		+ ["Infantry"];
_p = _p		+ [[["ru_msv_rifleman_ak74m", 3], ["ru_msv_engineer", 2, 65], ["ru_msv_efreitor", 2], ["ru_msv_medic", 1], ["ru_msv_rifleman_akm", 1], ["ru_msv_machinegunner", 1], ["ru_msv_rifleman_ak12", 1], ["ru_msv_grenadier_rpg", 1]]];
_f = _f		+ [CTI_BARRACKS];
_m = _m		+ [3500];
_c = _c		+ ["Infantry"];
_s = _s		+ [[]];

_v = _v		+ ["InfantryAT"];
_t = _t		+ ["Infantry - AT"];
_p = _p		+ [[["ru_msv_at_specialist", 3, 95], ["ru_msv_medic", 1], ["ru_msv_rifleman_ak12", 1], ["ru_msv_grenadier_rpg", 2, 85]]];
_f = _f		+ [CTI_BARRACKS];
_m = _m		+ [3500];
_c = _c		+ ["InfantryAT"];
_s = _s		+ [[]];

_v = _v		+ ["InfantryAA"];
_t = _t		+ ["Infantry - AA"];
_p = _p		+ [[["ru_msv_aa_specialist", 3, 95], ["ru_msv_medic", 1], ["ru_msv_rifleman_ak74m", 1], ["ru_msv_efreitor", 1, 90]]];
_f = _f		+ [CTI_BARRACKS];
_m = _m		+ [4000];
_c = _c		+ ["InfantryAA"];
_s = _s		+ [[]];

_v = _v		+ ["InfantryRanged"];
_t = _t		+ ["Infantry - Marksmen"];
_p = _p		+ [[["ru_msv_marksman", 2], ["ru_msv_medic", 1], ["ru_msv_rifleman_ak74m", 1], ["ru_msv_sergeant", 1]]];
_f = _f		+ [CTI_BARRACKS];
_m = _m		+ [3500];
_c = _c		+ ["InfantryAdvanced"];
_s = _s		+ [[]];

_v = _v		+ ["InfantrySniper"];
_t = _t		+ ["Infantry - Elite VDV"];
_p = _p		+ [[["ru_vdv_efreitor", 1], ["ru_vdv_rifleman_ak12", 1], ["ru_vdv_rifleman_ak74m", 2], ["ru_vdv_autorifleman", 2], ["ru_vdv_machinegunner", 2]]];
_f = _f		+ [CTI_BARRACKS];
_m = _m		+ [5000];
_c = _c		+ ["InfantryAdvanced"];
_s = _s		+ [[]];

_v = _v		+ ["Motorized"];
_t = _t		+ ["Motorized - MRAP"];
_p = _p		+ [[["ru_msv_gaz_armed", 1], ["ru_msv_gaz_armed", 1, 90]]];
_f = _f		+ [CTI_LIGHT];
_m = _m		+ [6000];
_c = _c		+ ["Motorized"];
_s = _s		+ [[]];

_v = _v		+ ["Mechanized"];
_t = _t		+ ["Mechanized - APC"];
_p = _p		+ [[["ru_msv_btr80a", 1], ["ru_msv_rifleman_ak74m", 3], ["ru_msv_engineer", 2, 65], ["ru_msv_efreitor", 2], ["ru_msv_medic", 1]]];
_f = _f		+ [CTI_LIGHT];
_m = _m		+ [8000];
_c = _c		+ ["Mechanized"];
_s = _s		+ [[]];

_v = _v		+ ["MechanizedHeavy"];
_t = _t		+ ["Mechanized - APC (Heavy)"];
_p = _p		+ [[["ru_msv_bmp3", 1], ["ru_msv_bmp2", 1], ["ru_msv_rifleman_ak74m", 3], ["ru_msv_engineer", 2, 65], ["ru_msv_efreitor", 2], ["ru_msv_medic", 1]]];
_f = _f		+ [CTI_LIGHT];
_m = _m		+ [10000];
_c = _c		+ ["Mechanized"];
_s = _s		+ [[]];

_v = _v		+ ["Armored"];
_t = _t		+ ["Armored - MBT"];
_p = _p		+ [[["ru_msv_t72b3_2012", 1], ["ru_msv_t80um", 1]]];
_f = _f		+ [CTI_HEAVY];
_m = _m		+ [12000];
_c = _c		+ ["Armored"];
_s = _s		+ [[]];

_v = _v		+ ["AntiAir"];
_t = _t		+ ["Armored - Anti Air"];
_p = _p		+ [[["ru_msv_ural_aa", 1], ["ru_msv_btr80a", 1]]];
_f = _f		+ [CTI_HEAVY];
_m = _m		+ [9000];
_c = _c		+ ["AntiAir"];
_s = _s		+ [[]];

_v = _v		+ ["HeliAttack"];
_t = _t		+ ["Heli - Attack"];
_p = _p		+ [[["ru_vdv_mi24v", 1]]];
_f = _f		+ [CTI_AIR];
_m = _m		+ [20000];
_c = _c		+ ["Air"];
_s = _s		+ [[]];

_v = _v		+ ["AirAttack"];
_t = _t		+ ["Air - Attack"];
_p = _p		+ [[["ru_vdv_su25", 1]]];
_f = _f		+ [CTI_AIR];
_m = _m		+ [25000];
_c = _c		+ ["Air"];
_s = _s		+ [[]];

[_side, _v, _t, _p, _f, _m, _c, _s] call compile preprocessFileLineNumbers "Common\Config\Squads\Squads_Set.sqf";