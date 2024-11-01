_side = _this;

missionNamespace setVariable [format["CTI_%1_HQ", _side], "rhs_gaz66_r142_msv"];
missionNamespace setVariable [format["CTI_%1_Factories", _side], ["Barracks","Light","Heavy","Air"]];

missionNamespace setVariable [format["CTI_%1_Base_Template", _side], [
	[CTI_BARRACKS, 180, [-23,33]],
	[CTI_LIGHT, 180, [23,33]],
	[CTI_CONTROLCENTER, 0, [30,-40]],
	[CTI_HEAVY, 0, [-30,-40]],
	[CTI_AIR, 180, [-60,37]],
	[CTI_REPAIR, 180, [60,37]],
	[CTI_AMMO, 180, [80,37]]
]];

//--- Commander course of action ["Action", Parameter(s), Condition]
missionNamespace setVariable [format["CTI_%1_Commander_Path", _side], [
	["build-structures", CTI_BARRACKS, {true}],
	["build-structures", CTI_LIGHT, {true}],
	["build-structures", CTI_CONTROLCENTER, {true}],
	["upgrade", [CTI_UPGRADE_BARRACKS, 1], {true}],
	["upgrade", [CTI_UPGRADE_GEAR, 1], {true}],
	["upgrade", [CTI_UPGRADE_LIGHT, 1], {true}],
	["upgrade", [CTI_UPGRADE_TOWNS, 1], {true}],
	["build-structures", CTI_HEAVY, {true}],
	["build-structures", CTI_REPAIR, {true}],
	["build-structures", CTI_AMMO, {true}],
	["upgrade", [CTI_UPGRADE_HEAVY, 1], {true}],
	["upgrade", [CTI_UPGRADE_HEAVY, 2], {true}],
	["build-structures", CTI_AIR, {true}],
	["upgrade", [CTI_UPGRADE_TOWNS, 2], {true}],
	["upgrade", [CTI_UPGRADE_BARRACKS, 2], {true}],
	["upgrade", [CTI_UPGRADE_AIR, 1], {true}],
	["upgrade", [CTI_UPGRADE_TOWNS, 3], {true}],
	["upgrade", [CTI_UPGRADE_AIR_CM, 1], {true}],
	["upgrade", [CTI_UPGRADE_AIR_AT, 1], {true}],
	["upgrade", [CTI_UPGRADE_AIR_FFAR, 1], {true}],
	["upgrade", [CTI_UPGRADE_AIR_AA, 1], {true}],
	["upgrade", [CTI_UPGRADE_SATELLITE, 1], {true}]
]];

//--- Structures
_headers = [];
_classes = [];
_prices = [];
_times = [];
_placements = [];
_specials = [];

/*
	Specials:
		- DMG_Alternative: Need to be used in case of bisterious buildings usage
				If a building is damaged, all the EH it had will bisteriously vanish... This "feature" will probably never get fixed so once again, we fix it ourself!
		- DMG_Reduce: Reduce the incoming damage on a building making it stronger if above 1.
*/
_headers  pushBack [CTI_BARRACKS, "Barracks", "Barracks"];
_classes pushBack ["Land_Cargo_House_V1_F", "Land_Cargo_House_V1_ruins_F"];
_prices pushBack 1000;
_times pushBack 60;
_placements pushBack [180, 15];
_specials pushBack [["DMG_Reduce", 5]];

_headers  pushBack [CTI_LIGHT, "Light Vehicle Factory", "Light"];
_classes pushBack ["Land_i_Garage_V1_F", "Land_Garage_V1_ruins_F"];
_prices pushBack 2000;
_times pushBack 80;
_placements pushBack [90, 20];
_specials pushBack [["DMG_Alternative"], ["DMG_Reduce", 6]];

_headers  pushBack [CTI_CONTROLCENTER, "Control Center", "CC"];
_classes pushBack ["rhs_p37", "Land_rhs_p37_wreck"];
_prices pushBack 3000;
_times pushBack 90;
_placements pushBack [180, 20];
_specials pushBack [["DMG_Alternative"], ["DMG_Reduce", 72]];

_headers  pushBack [CTI_HEAVY, "Heavy Vehicle Factory", "Heavy"];
_classes pushBack ["Land_Cargo_HQ_V1_F", "Land_Cargo_HQ_V1_ruins_F"];
_prices pushBack 3500;
_times pushBack 120;
_placements pushBack [90, 20];
_specials pushBack [["DMG_Reduce", 7]];

_headers  pushBack [CTI_AIR, "Aircraft Factory", "Air"];
_classes pushBack ["Land_Radar_Small_F", "Land_Radar_Small_ruins_F"];
_prices pushBack 8000;
_times pushBack 140;
_placements pushBack [90, 20];
_specials pushBack [["DMG_Alternative"], ["DMG_Reduce", 12]];

_headers  pushBack [CTI_AMMO, "Ammo Depot", "Ammo"];
_classes pushBack ["Land_TBox_F", "Land_TBox_ruins_F"];
_prices pushBack 500;
_times pushBack 40;
_placements pushBack [0, 20];
_specials pushBack [["DMG_Alternative"], ["DMG_Reduce", 12]];

_headers  pushBack [CTI_REPAIR, "Repair Depot", "Repair"];
_classes pushBack ["Land_FuelStation_Build_F", "Land_FuelStation_Build_ruins_F"];
_prices pushBack 600;
_times pushBack 35;
_placements pushBack [180, 20];
_specials pushBack [["DMG_Alternative"], ["DMG_Reduce", 78]];

_headers  pushBack [CTI_NAVAL, "Naval Yard", "Naval"];
_classes pushBack ["Land_Lighthouse_small_F", "Land_Lighthouse_small_ruins_F"];
_prices pushBack 1500;
_times pushBack 35;
_placements pushBack [180, 25];
_specials pushBack [["DMG_Alternative"], ["DMG_Reduce", 8]];

[_side, _headers, _classes, _prices, _times, _placements, _specials] call compile preprocessFileLineNumbers "Common\Config\Base\Set_Structures.sqf";

//--- Defenses
_headers = [];
_classes = [];
_prices = [];
_placements = [];
_categories = [];

_headers pushBack "Bunker (Small)";
_classes pushBack "Land_BagBunker_Small_F";
_prices pushBack 15;
_placements pushBack [0, 7];
_categories pushBack "Fortification";

_headers pushBack "Tower";
_classes pushBack "Land_Cargo_Patrol_V1_F";
_prices pushBack 50;
_placements pushBack [0, 15];
_categories pushBack "Fortification";

_headers pushBack ["Shed (Roof)",[["RuinOnDestroyed", "Land_Shed_Big_ruins_F"], ["DMG_Reduce", 8]]];
_classes pushBack "Land_Shed_Big_F";
_prices pushBack 40;
_placements pushBack [0, 15];
_categories pushBack "Fortification";

_headers pushBack ["High Wall (Mil)",[["CanAutoAlign", 3.8, 0]]];
_classes pushBack "Land_Mil_WallBig_4m_F";
_prices pushBack 20;
_placements pushBack [0, 7];
_categories pushBack "Fortification";

// _headers pushBack ["High Wall (Concrete)",[["CanAutoAlign", 4.6, 0]];
// _classes pushBack "Land_CncWall4_F";
// _prices pushBack 20;
// _placements pushBack [0, 7;
// _categories pushBack "Fortification";

_headers pushBack "H-Barrier (Medium)";
_classes pushBack "Land_HBarrier_5_F";
_prices pushBack 20;
_placements pushBack [0, 7];
_categories pushBack "Fortification";

_headers pushBack ["H-Barrier (Big)",[["CanAutoAlign", 6, 0]]];
_classes pushBack "Land_HBarrierBig_F";
_prices pushBack 20;
_placements pushBack [0, 7];
_categories pushBack "Fortification";

_headers pushBack ["FOB",[["RuinOnDestroyed", "Land_Medevac_house_V1_ruins_F"], ["FOB"],["Condition", {_cpt = if (isNil {CTI_P_SideLogic getVariable "cti_fobs"}) then {1000} else {count (CTI_P_SideLogic getVariable "cti_fobs")}; (_cpt < CTI_BASE_FOB_MAX) && (call CTI_CL_FNC_IsPlayerCommander || (!(call CTI_CL_FNC_IsPlayerCommander) && CTI_P_TeamsRequests_FOB > 0))}]]];
_classes pushBack "Land_Medevac_house_V1_F";
_prices pushBack 3000;
_placements pushBack [180, 15];
_categories pushBack "Fortification";

_headers pushBack "MG Defense";
_classes pushBack "RHS_NSV_TriPod_MSV";
_prices pushBack 200;
_placements pushBack [180, 15];
_categories pushBack "Defense";

_headers pushBack "MG Defense (KORD/tripod)";
_classes pushBack "rhs_KORD_MSV";
_prices pushBack 200;
_placements pushBack [180, 15];
_categories pushBack "Defense";

_headers pushBack "MG Defense (KORD)";
_classes pushBack "rhs_KORD_high_MSV";
_prices pushBack 200;
_placements pushBack [180, 15];
_categories pushBack "Defense";

_headers pushBack "GL Defense";
_classes pushBack "RHS_AGS30_TriPod_MSV";
_prices pushBack 350;
_placements pushBack [180, 15];
_categories pushBack "Defense";

_headers pushBack "AT Defense";
_classes pushBack "rhs_Metis_9k115_2_msv";
_prices pushBack 900;
_placements pushBack [180, 15];
_categories pushBack "Defense";

_headers pushBack "AA Defense";
_classes pushBack "rhs_Igla_AA_pod_msv";
_prices pushBack 800;
_placements pushBack [180, 15];
_categories pushBack "Defense";

_headers pushBack "Mortar";
_classes pushBack "rhs_2b14_82mm_msv";
_prices pushBack 1000;
_placements pushBack [180, 15];
_categories pushBack "Defense";

[_side, _headers, _classes, _prices, _placements, _categories] call compile preprocessFileLineNumbers "Common\Config\Base\Set_Defenses.sqf";
