_side = _this;

_v = [];
_t = [];
_p = [];
_f = [];
_m = [];
_c = [];
_s = [];

//--- Commander will assign those orders based on the force and the probability [type, strength, {probability}, {Max per side}]
missionNamespace setVariable [format["CTI_SQUADS_%1_CATEGORY_INFANTRY", _side], [["Infantry", 1, 50], ["InfantryAT", 1, 50], ["InfantryElite", 1, 90]]];
missionNamespace setVariable [format["CTI_SQUADS_%1_CATEGORY_LIGHT", _side], [["Motorized", 1, 50]]];
missionNamespace setVariable [format["CTI_SQUADS_%1_CATEGORY_HEAVY", _side], [["MechanizedBMP", 1, 80], ["Armored", 2, 95]]];
missionNamespace setVariable [format["CTI_SQUADS_%1_CATEGORY_AIR", _side], [["HeliAttack", 1, 90, 1], ["AirAttack", 1, 95, 2]]];

missionNamespace setVariable [format["CTI_SQUADS_%1_TOWN_DEFENSE", _side], ["InfantryAT", "InfantryAA"]];

//--- Those are used by the commander to determine the kind of unit an AI team has
missionNamespace setVariable [format["CTI_SQUADS_%1_KIND_INFANTRY", _side], ["Infantry", "InfantryAT", "InfantryElite"]];
missionNamespace setVariable [format["CTI_SQUADS_%1_KIND_LIGHT", _side], ["Motorized"]];
missionNamespace setVariable [format["CTI_SQUADS_%1_KIND_HEAVY", _side], ["MechanizedBMP", "Armored"]];
missionNamespace setVariable [format["CTI_SQUADS_%1_KIND_AIR", _side], ["HeliAttack", "AirAttack"]];

_v = _v		+ ["Infantry"];
_t = _t		+ ["Infantry - Regular"];
_p = _p		+ [[["ru_msv_btr_80a", 1], ["ru_msv_rifleman_ak74m", 3], ["ru_msv_engineer", 1], ["ru_msv_efreitor", 2], ["ru_msv_medic", 1], ["ru_msv_rifleman_akm", 1], ["ru_msv_machinegunner", 1], ["ru_msv_rifleman_ak12", 1], ["ru_msv_grenadier_rpg", 1]]];
_f = _f		+ [CTI_BARRACKS];
_m = _m		+ [2500];
_c = _c		+ ["Infantry"];
_s = _s		+ [[]];

_v = _v		+ ["InfantryAT"];
_t = _t		+ ["Infantry - AT"];
_p = _p		+ [[["ru_msv_btr_80a", 1], ["ru_msv_efreitor", 2], ["ru_msv_at_specialist", 3], ["ru_msv_rifleman_ak12", 2], ["ru_msv_grenadier_rpg", 2], ["ru_msv_machinegunner", 2]]];
_f = _f		+ [CTI_BARRACKS];
_m = _m		+ [2500];
_c = _c		+ ["InfantryAT"];
_s = _s		+ [[]];

_v = _v		+ ["InfantryAA"];
_t = _t		+ ["Infantry - AA"];
_p = _p		+ [[["ru_msv_btr_80a", 1], ["ru_msv_efreitor", 2], ["ru_msv_aa_specialist", 3], ["ru_msv_rifleman_ak74m", 2], ["ru_msv_machinegunner", 3]]];
_f = _f		+ [CTI_BARRACKS];
_m = _m		+ [2500];
_c = _c		+ ["InfantryAA"];
_s = _s		+ [[]];

_v = _v		+ ["InfantryElite"];
_t = _t		+ ["Infantry - VDV"];
_p = _p		+ [[["ru_vdv_bmd4m", 1], ["ru_vdv_efreitor", 1], ["ru_vdv_rifleman_ak12", 1], ["ru_vdv_rifleman_ak74m", 2], ["ru_vdv_machinegunner", 1]]];
_f = _f		+ [CTI_BARRACKS];
_m = _m		+ [4000];
_c = _c		+ ["InfantryElite"];
_s = _s		+ [[]];

_v = _v		+ ["Motorized"];
_t = _t		+ ["Motorized - VMF"];
_p = _p		+ [[["ru_msv_gaz_armed", 1], ["ru_vmf_medic", 1], ["ru_vmf_rifleman_ak74m", 1], ["ru_vmf_efreitor", 1], ["ru_vmf_machinegunner", 1]]];
_f = _f		+ [CTI_LIGHT];
_m = _m		+ [3000];
_c = _c		+ ["Motorized"];
_s = _s		+ [[]];

_v = _v		+ ["MechanizedBMP"];
_t = _t		+ ["Mechanized - BMP"];
_p = _p		+ [[["ru_msv_bmp3", 1], ["ru_msv_rifleman_ak74m", 2], ["ru_msv_engineer", 1], ["ru_msv_efreitor", 2], ["ru_msv_machinegunner", 1], ["ru_msv_medic", 1], ["ru_msv_grenadier_rpg", 1]]];
_f = _f		+ [CTI_LIGHT];
_m = _m		+ [4000];
_c = _c		+ ["MechanizedBMP"];
_s = _s		+ [[]];

_v = _v		+ ["Armored"];
_t = _t		+ ["Armored - MBT"];
_p = _p		+ [[["ru_msv_t72b3_2012", 1], ["ru_msv_t80um", 1], ["ru_msv_t90sm", 1]]];
_f = _f		+ [CTI_HEAVY];
_m = _m		+ [9000];
_c = _c		+ ["Armored"];
_s = _s		+ [[]];

_v = _v		+ ["HeliAttack"];
_t = _t		+ ["Heli - Attack"];
_p = _p		+ [[["ru_vdv_mi28n", 1], ["ru_vdv_ka52", 1]]];
_f = _f		+ [CTI_AIR];
_m = _m		+ [10000];
_c = _c		+ ["HeliAttack"];
_s = _s		+ [[]];

_v = _v		+ ["AirAttack"];
_t = _t		+ ["Heli - Airborne (VDV)"];
_p = _p		+ [[["ru_vdv_24g", 1], ["ru_vdv_efreitor", 2], ["ru_vdv_rifleman_ak12", 1], ["ru_vdv_rifleman_ak74m", 2], ["ru_vdv_machinegunner", 2]]];
_f = _f		+ [CTI_AIR];
_m = _m		+ [10000];
_c = _c		+ ["AirAttack"];
_s = _s		+ [[]];

[_side, _v, _t, _p, _f, _m, _c, _s] call compile preprocessFileLineNumbers "Common\Config\Squads\Squads_Set.sqf";