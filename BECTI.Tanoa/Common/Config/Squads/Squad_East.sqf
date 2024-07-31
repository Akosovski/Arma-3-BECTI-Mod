_side = _this;

_v = [];
_t = [];
_p = [];
_f = [];
_m = [];
_c = [];
_s = [];

//--- Commander will assign those orders based on the force and the probability [type, strength, {probability}, {Max per side}]
missionNamespace setVariable [format["CTI_SQUADS_%1_CATEGORY_INFANTRY", _side], [["Infantry", 2, 45], ["InfantryAT", 1, 45], ["InfantryElite", 1, 75]]];
missionNamespace setVariable [format["CTI_SQUADS_%1_CATEGORY_LIGHT", _side], [["MotorizedBTR", 1, 50]]];
missionNamespace setVariable [format["CTI_SQUADS_%1_CATEGORY_HEAVY", _side], [["MechanizedBMP", 1, 50], ["MechanizedBMP", 1, 45], ["Armored", 2, 95]]];
missionNamespace setVariable [format["CTI_SQUADS_%1_CATEGORY_AIR", _side], [["HeliAttack", 1], ["AirAttack", 1, 95], ["AirAttackElite", 1, 95]]];

missionNamespace setVariable [format["CTI_SQUADS_%1_TOWN_DEFENSE", _side], ["InfantryAT", "InfantryAA"]];

//--- Those are used by the commander to determine the kind of unit an AI team has
missionNamespace setVariable [format["CTI_SQUADS_%1_KIND_INFANTRY", _side], ["Infantry", "InfantryAT", "InfantryElite"]];
missionNamespace setVariable [format["CTI_SQUADS_%1_KIND_LIGHT", _side], ["MotorizedBTR"]];
missionNamespace setVariable [format["CTI_SQUADS_%1_KIND_HEAVY", _side], ["MechanizedBMP", "Armored"]];
missionNamespace setVariable [format["CTI_SQUADS_%1_KIND_AIR", _side], ["HeliAttack", "AirAttack", "AirAttackElite"]];

_v = _v		+ ["Infantry"];
_t = _t		+ ["Infantry"];
_p = _p		+ [[["ru_vmf_ural_normal", 1], ["ru_vmf_rifleman_ak12", 3], ["ru_vmf_engineer", 2, 65], ["ru_vmf_efreitor", 2], ["ru_vmf_medic", 1], ["ru_vmf_rifleman_ak15", 1], ["ru_vmf_machinegunner", 1], ["ru_vmf_grenadier_rpg", 1]]];
_f = _f		+ [CTI_BARRACKS];
_m = _m		+ [2000];
_c = _c		+ ["Infantry"];
_s = _s		+ [[]];

_v = _v		+ ["InfantryAT"];
_t = _t		+ ["Infantry - AT"];
_p = _p		+ [[["ru_vmf_ural_normal", 1], ["ru_vmf_at_specialist", 2], ["ru_vmf_medic", 1], ["ru_vmf_rifleman_ak12", 2], ["ru_vmf_grenadier_rpg", 2, 95]]];
_f = _f		+ [CTI_BARRACKS];
_m = _m		+ [2000];
_c = _c		+ ["InfantryAT"];
_s = _s		+ [[]];

_v = _v		+ ["InfantryAA"];
_t = _t		+ ["Infantry - AA"];
_p = _p		+ [[["ru_vmf_ural_normal", 1], ["ru_vmf_aa_specialist", 3], ["ru_vmf_medic", 1], ["ru_vmf_rifleman_ak15", 3], ["ru_vmf_efreitor", 1, 90]]];
_f = _f		+ [CTI_BARRACKS];
_m = _m		+ [2000];
_c = _c		+ ["InfantryAA"];
_s = _s		+ [[]];

_v = _v		+ ["InfantryElite"];
_t = _t		+ ["Infantry - Spetsnaz"];
_p = _p		+ [[["ru_vmf_gaz_armed", 1], ["ru_vmf_spetsnaz_ak12", 2], ["ru_vmf_spetsnaz_ak103", 2], ["ru_vmf_spetsnaz_ak104", 2], ["ru_vmf_spetsnaz_rpk74m", 1]]];
_f = _f		+ [CTI_BARRACKS];
_m = _m		+ [3000];
_c = _c		+ ["InfantryElite"];
_s = _s		+ [[]];

_v = _v		+ ["MotorizedBTR"];
_t = _t		+ ["Motorized - BTR"];
_p = _p		+ [[["ru_vmf_btr80a", 1], ["ru_vmf_rifleman_ak12", 3], ["ru_vmf_engineer", 2, 85], ["ru_vmf_efreitor", 2], ["ru_vmf_machinegunner", 1], ["ru_vmf_medic", 1]]];
_f = _f		+ [CTI_LIGHT];
_m = _m		+ [5000];
_c = _c		+ ["MotorizedBTR"];
_s = _s		+ [[]];

_v = _v		+ ["MechanizedBMP"];
_t = _t		+ ["Mechanized - BMP"];
_p = _p		+ [[["ru_vmf_bmp2", 1], ["ru_vmf_rifleman_ak12", 3], ["ru_vmf_engineer", 2, 85], ["ru_vmf_efreitor", 2], ["ru_vmf_machinegunner", 1], ["ru_vmf_medic", 1]]];
_f = _f		+ [CTI_LIGHT];
_m = _m		+ [6000];
_c = _c		+ ["MechanizedBMP"];
_s = _s		+ [[]];

_v = _v		+ ["Armored"];
_t = _t		+ ["Armored - MBT"];
_p = _p		+ [[["ru_vmf_t72b3_2016", 1], ["ru_vmf_t80um", 1]]];
_f = _f		+ [CTI_HEAVY];
_m = _m		+ [7500];
_c = _c		+ ["Armored"];
_s = _s		+ [[]];

_v = _v		+ ["HeliAttack"];
_t = _t		+ ["Heli - Attack"];
_p = _p		+ [[["ru_vmf_ka52", 1]]];
_f = _f		+ [CTI_AIR];
_m = _m		+ [10000];
_c = _c		+ ["Air"];
_s = _s		+ [[]];

_v = _v		+ ["AirAttack"];
_t = _t		+ ["Heli - Airborne (VMF)"];
_p = _p		+ [[["ru_vmf_mi8_gunship", 1], ["ru_vmf_efreitor", 2], ["ru_vmf_rifleman_ak12", 2], ["ru_vmf_rifleman_ak15", 2], ["ru_vmf_autorifleman", 1], ["ru_vmf_machinegunner", 2]]];
_f = _f		+ [CTI_AIR];
_m = _m		+ [10000];
_c = _c		+ ["Air"];
_s = _s		+ [[]];

_v = _v		+ ["AirAttackElite"];
_t = _t		+ ["Heli - Airborne (Spetsnaz)"];
_p = _p		+ [[["ru_vmf_mi24g", 1], ["ru_vmf_spetsnaz_ak12", 3], ["ru_vmf_spetsnaz_ak103", 2], ["ru_vmf_spetsnaz_ak104", 2]]];
_f = _f		+ [CTI_AIR];
_m = _m		+ [10000];
_c = _c		+ ["Air"];
_s = _s		+ [[]];

[_side, _v, _t, _p, _f, _m, _c, _s] call compile preprocessFileLineNumbers "Common\Config\Squads\Squads_Set.sqf";