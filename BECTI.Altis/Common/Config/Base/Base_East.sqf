_side = _this;

missionNamespace setVariable [format["CTI_%1_HQ", _side], "ru_vdv_ka60"];
missionNamespace setVariable [format["CTI_%1_Factories", _side], ["Barracks","Light","Heavy","Air"]];

missionNamespace setVariable [format["CTI_%1_Base_Template", _side], [
	[CTI_BARRACKS, 180, [-23,33]],
	[CTI_NAVAL, 180, [80,-37]],
	[CTI_LIGHT, 180, [23,33]],
	[CTI_CONTROLCENTER, 0, [30,-40]],
	[CTI_HEAVY, 0, [-30,-40]],
	[CTI_AIR, 180, [-60,37]],
	[CTI_REPAIR, 180, [60,37]],
	[CTI_AMMO, 180, [80,37]]
]];

//--- Commander course of action ["Action", Parameter(s), Condition]
missionNamespace setVariable [format["CTI_%1_Commander_Path", _side], [
	["build-structures", CTI_CONTROLCENTER, {true}],
	["build-structures", CTI_BARRACKS, {true}],
	["upgrade", [CTI_UPGRADE_TOWNS, 1], {true}],
	["upgrade", [CTI_UPGRADE_TOWNS, 2], {true}],
	["upgrade", [CTI_UPGRADE_TOWNS, 3], {true}],
	["upgrade", [CTI_UPGRADE_SUPPLY, 1], {true}],
	["build-structures", CTI_NAVAL, {true}],
	["build-structures", CTI_HEAVY, {true}],
	["build-structures", CTI_LIGHT, {true}],
	["build-structures", CTI_AIR, {true}],
	["upgrade", [CTI_UPGRADE_GEAR, 1], {true}],
	["upgrade", [CTI_UPGRADE_BARRACKS, 1], {true}],
	["upgrade", [CTI_UPGRADE_GEAR, 2], {true}],
	["upgrade", [CTI_UPGRADE_BARRACKS, 2], {true}],
	["upgrade", [CTI_UPGRADE_GEAR, 3], {true}],
	["upgrade", [CTI_UPGRADE_BARRACKS, 3], {true}],
	["upgrade", [CTI_UPGRADE_LIGHT, 1], {true}],
	["upgrade", [CTI_UPGRADE_AIR, 1], {true}],
	["build-structures", CTI_REPAIR, {true}],
	["build-structures", CTI_AMMO, {true}],
	["upgrade", [CTI_UPGRADE_LIGHT, 2], {true}],
	["upgrade", [CTI_UPGRADE_HEAVY, 1], {true}],
	["upgrade", [CTI_UPGRADE_SUPPLY, 2], {true}],
	["upgrade", [CTI_UPGRADE_LIGHT, 3], {true}],
	["upgrade", [CTI_UPGRADE_AIR, 2], {true}],
	["upgrade", [CTI_UPGRADE_SUPPLY, 3], {true}],
	["upgrade", [CTI_UPGRADE_HEAVY, 2], {true}],
	["upgrade", [CTI_UPGRADE_AIR, 3], {true}],
	["upgrade", [CTI_UPGRADE_SUPPLY, 4], {true}],
	["upgrade", [CTI_UPGRADE_SATELLITE, 1], {true}],
	["upgrade", [CTI_UPGRADE_AIR_AT, 1], {true}],
	["upgrade", [CTI_UPGRADE_AIR_AA, 1], {true}],
	["upgrade", [CTI_UPGRADE_AIR_CM, 1], {true}],
	["upgrade", [CTI_UPGRADE_AIR_FFAR, 1], {true}]
]];

//--- Structures
_headers = [];
_classes = [];
_prices = [];
_times = [];
_placements = [];
_helper = [];
_specials = [];

/*
	Specials:
		- DMG_Alternative: Need to be used in case of bisterious buildings usage 
				If a building is damaged, all the EH it had will bisteriously vanish... This "feature" will probably never get fixed so once again, we fix it ourself!
		- DMG_Reduce: Reduce the incoming damage on a building making it stronger if above 1.
*/

_headers = _headers 		+ [[CTI_HQ_DEPLOYED, "HQ", "HQdeployed"]];
_classes = _classes 		+ [["Land_Cargo_HQ_V1_F", "Land_Cargo_HQ_V1_ruins_F"]];
_prices = _prices 			+ [CTI_BASE_HQ_DEPLOY_COST];
_times = _times 			+ [1];
_placements = _placements 	+ [[0, 15]];
_helper = _helper			+ [[""]];
_specials = _specials		+ [[["DMG_Reduce", 2]]];

_headers = _headers 		+ [[CTI_BARRACKS, "Barracks", "Barracks"]];
_classes = _classes 		+ [["Land_Cargo_House_V1_F", "Land_Cargo_House_V1_ruins_F"]];
_prices = _prices 			+ [200];
_times = _times 			+ [20];
_placements = _placements 	+ [[180, 15]];
_helper = _helper			+ [["B_Soldier_VR_F", 180]];
_specials = _specials		+ [[["DMG_Reduce", 2]]];

_headers = _headers 		+ [[CTI_LIGHT, "Light Vehicle Factory", "Light"]];
_classes = _classes 		+ [["Land_Cargo_House_V3_F", "Land_Cargo_House_V3_ruins_F"]];
_prices = _prices 			+ [600];
_times = _times 			+ [30];
_placements = _placements 	+ [[90, 20]];
_helper = _helper			+ [["Land_VR_Target_MRAP_01_F", 270]];
_specials = _specials		+ [[["DMG_Reduce", 2]]];

_headers = _headers 		+ [[CTI_CONTROLCENTER, "Control Center", "CC"]];
_classes = _classes 		+ [["rhs_p37", "Land_Cargo20_military_green_F"]];
_prices = _prices 			+ [1200];
_times = _times 			+ [5];
_placements = _placements 	+ [[180, 20]];
_helper = _helper			+ [[""]];
_specials = _specials		+ [[["DMG_Reduce", 2]]];

_headers = _headers 		+ [[CTI_HEAVY, "Heavy Vehicle Factory", "Heavy"]];
_classes = _classes 		+ [["Land_Cargo_HQ_V3_F", "Land_Cargo_HQ_V3_ruins_F"]];
_prices = _prices 			+ [2800];
_times = _times 			+ [30];
_placements = _placements 	+ [[180, 25]];
_helper = _helper			+ [["Land_VR_Target_MBT_01_cannon_F", 270]];
_specials = _specials		+ [[["DMG_Reduce", 2]]];

_headers = _headers 		+ [[CTI_AIR, "Aircraft Factory", "Air"]];
_classes = _classes 		+ [["Land_Research_HQ_F", "Land_Research_HQ_ruins_F"]];
_prices = _prices 			+ [4400];
_times = _times 			+ [30];
_placements = _placements 	+ [[90, 25]];
_helper = _helper			+ [["Sign_Arrow_Large_Blue_F", 0]];
_specials = _specials		+ [[["DMG_Reduce", 2]]];

_headers = _headers 		+ [[CTI_AMMO, "Ammo Depot", "Ammo"]];
_classes = _classes 		+ [["Land_Research_house_V1_F", "Land_Research_house_V1_ruins_F"]];
_prices = _prices 			+ [200];
_times = _times 			+ [20];
_placements = _placements 	+ [[180, 20]];
_helper = _helper			+ [["Sign_Arrow_Large_Blue_F", 0]];
_specials = _specials		+ [[["DMG_Reduce", 2]]];

_headers = _headers 		+ [[CTI_REPAIR, "Repair Depot", "Repair"]];
_classes = _classes 		+ [["Land_Medevac_House_V1_F", "Land_Medevac_House_V1_ruins_F"]];
_prices = _prices 			+ [600];
_times = _times 			+ [20];
_placements = _placements 	+ [[180, 20]];
_helper = _helper			+ [["Sign_Arrow_Large_Blue_F", 0]];
_specials = _specials		+ [[["DMG_Reduce", 2]]];

_headers = _headers 		+ [[CTI_NAVAL, "Naval Yard", "Naval"]];
_classes = _classes 		+ [["Land_Cargo_Patrol_V1_F", "Land_Cargo_Patrol_V1_ruins_F"]];
_prices = _prices 			+ [400];
_times = _times 			+ [25];
_placements = _placements 	+ [[180, 25]];
_helper = _helper			+ [["B_Soldier_VR_F", 0]];
_specials = _specials		+ [[["DMG_Reduce", 2]]];

[_side, _headers, _classes, _prices, _times, _placements, _helper, _specials] call compile preprocessFileLineNumbers "Common\Config\Base\Set_Structures.sqf";


_headers = [];
_classes = [];
_prices = [];
_placements = [];
_categories = [];

// Complementaries

_headers = _headers 		+ [["FOB",[["RuinOnDestroyed", "Land_Research_HQ_ruins_F"], ["FOB"],["Condition", {_cpt = if (isNil {CTI_P_SideLogic getVariable "cti_fobs"}) then {1000} else {count (CTI_P_SideLogic getVariable "cti_fobs")}; (_cpt < CTI_BASE_FOB_MAX) && (call CTI_CL_FNC_IsPlayerCommander || (!(call CTI_CL_FNC_IsPlayerCommander) && CTI_P_TeamsRequests_FOB > 0))}]]]];
_classes = _classes 		+ ["Land_Research_HQ_F"];
_prices = _prices 			+ [3500];
_placements = _placements 	+ [[180, 15]];
_categories = _categories 	+ ["Fortification"];

_headers = _headers 		+ ["Flag (Russia)"];
_classes = _classes 		+ ["rhs_Flag_Russia_F"];
_prices = _prices 			+ [30];
_placements = _placements 	+ [[0, 7]];
_categories = _categories 	+ ["Fortification"];

_headers = _headers 		+ ["Sandbag (Round)"];
_classes = _classes 		+ ["Land_BagFence_Round_F"];
_prices = _prices 			+ [10];
_placements = _placements 	+ [[0, 7]];
_categories = _categories 	+ ["Fortification"];

_headers = _headers 		+ ["Sandbag Bunker"];
_classes = _classes 		+ ["Land_BagBunker_Small_F"];
_prices = _prices 			+ [30];
_placements = _placements 	+ [[0, 7]];
_categories = _categories 	+ ["Fortification"];

_headers = _headers 		+ ["Military Cargo Post"];
_classes = _classes 		+ ["Land_Cargo_Patrol_V1_F"];
_prices = _prices 			+ [1000];
_placements = _placements 	+ [[0, 15]];
_categories = _categories 	+ ["Fortification"];

// Defenses

_headers = _headers 		+ ["MG Defense (KORD - Low)"];
_classes = _classes 		+ ["rhs_KORD_MSV"];
_prices = _prices 			+ [400];
_placements = _placements 	+ [[180, 15]];
_categories = _categories 	+ ["Defense"];

_headers = _headers 		+ ["MG Defense (KORD - High)"];
_classes = _classes 		+ ["rhs_KORD_high_MSV"];
_prices = _prices 			+ [600];
_placements = _placements 	+ [[180, 15]];
_categories = _categories 	+ ["Defense"];

_headers = _headers 		+ ["GL Defense (AGS-30)"];
_classes = _classes 		+ ["RHS_AGS30_TriPod_MSV"];
_prices = _prices 			+ [700];
_placements = _placements 	+ [[180, 15]];
_categories = _categories 	+ ["Defense"];

_headers = _headers 		+ ["AA Defense (ZU-23)"];
_classes = _classes 		+ ["RHS_ZU23_MSV"];
_prices = _prices 			+ [4000];
_placements = _placements 	+ [[180, 15]];
_categories = _categories 	+ ["Defense"];

_headers = _headers 		+ ["AT Defense (SPG-9)"];
_classes = _classes 		+ ["rhs_SP9M_MSV"];
_prices = _prices 			+ [1300];
_placements = _placements 	+ [[180, 15]];
_categories = _categories 	+ ["Defense"];

_headers = _headers 		+ ["AT Defense (Kornet - Low)"];
_classes = _classes 		+ ["rhs_Metis_9k115_2_msv"];
_prices = _prices 			+ [1200];
_placements = _placements 	+ [[180, 15]];
_categories = _categories 	+ ["Defense"];

_headers = _headers 		+ ["AT Defense (Kornet - High)"];
_classes = _classes 		+ ["rhs_Kornet_9M133_2_msv"];
_prices = _prices 			+ [1000];
_placements = _placements 	+ [[180, 15]];
_categories = _categories 	+ ["Defense"];

_headers = _headers 		+ ["AA Defense (Igla)"];
_classes = _classes 		+ ["rhs_Igla_AA_pod_msv"];
_prices = _prices 			+ [1000];
_placements = _placements 	+ [[180, 15]];
_categories = _categories 	+ ["Defense"];

_headers = _headers 		+ ["Mortar (2B14 Podnos)"];
_classes = _classes 		+ ["rhs_2b14_82mm_msv"];
_prices = _prices 			+ [500];
_placements = _placements 	+ [[180, 15]];
_categories = _categories 	+ ["Defense"];

_headers = _headers 		+ ["D30 Howitzer"];
_classes = _classes 		+ ["rhs_D30_msv"];
_prices = _prices 			+ [3000];
_placements = _placements 	+ [[180, 15]];
_categories = _categories 	+ ["Defense"];

_headers = _headers 		+ ["Ammo Box (Vehicles)"];
_classes = _classes 		+ ["CUP_BOX_RU_AmmoVeh_F"];
_prices = _prices 			+ [500];
_placements = _placements 	+ [[0, 15]];
_categories = _categories 	+ ["Defense"];

_headers = _headers 		+ ["Support Box (Repair)"];
_classes = _classes 		+ ["CUP_BOX_RU_Support_F"];
_prices = _prices 			+ [350];
_placements = _placements 	+ [[0, 15]];
_categories = _categories 	+ ["Defense"];

[_side, _headers, _classes, _prices, _placements, _categories] call compile preprocessFileLineNumbers "Common\Config\Base\Set_Defenses.sqf";
