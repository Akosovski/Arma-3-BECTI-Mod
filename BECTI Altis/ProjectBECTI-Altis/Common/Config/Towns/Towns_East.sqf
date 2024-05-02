with missionNamespace do {
	//--- Infantry
	EAST_SOLDIER = ["ru_msv_rifleman_ak74m", 1];
	EAST_SOLDIER_AA = ["ru_msv_aa_specialist", 1];
	EAST_SOLDIER_AR = ["ru_msv_rifleman_ak12", 1];
	EAST_SOLDIER_AT = ["ru_msv_at_specialist", 1];
	EAST_SOLDIER_CREW = ["ru_msv_crewman", 1];
	EAST_SOLDIER_LAT = ["ru_msv_efreitor", 1];
	EAST_SOLDIER_HAT = ["ru_msv_grenadier_rpg", 1];
	EAST_SOLDIER_ENGINEER = ["ru_msv_engineer", 1];
	EAST_SOLDIER_GL = ["ru_msv_grenadier_rpg", 1];
	EAST_SOLDIER_MEDIC = ["ru_msv_medic", 1];
	EAST_SOLDIER_PILOT = ["ru_vdv_combat_heli", 1];
	EAST_SOLDIER_SQUADLEADER = ["ru_msv_sergeant", 1];
	EAST_SOLDIER_SNIPER = ["ru_msv_officer", 1];
	EAST_SOLDIER_MARKSMAN = ["ru_msv_marksman", 1];
	EAST_SOLDIER_TEAMLEADER = ["ru_msv_sergeant", 1];
	EAST_SOLDIER_HEAVYGUNNER = ["ru_msv_machinegunner", 1];
	
	//--- Vehicles
	EAST_MOTORIZED_MG = ["ru_msv_gaz_armed", 2];
	EAST_MOTORIZED_GL = ["ru_msv_gaz_armed", 2];

	//--- Infantry - Mixed
	EAST_SOLDIERS_MG_LIGHT = [EAST_SOLDIER_AR];
	EAST_SOLDIERS_MG_MEDIUM = [EAST_SOLDIER_AR, EAST_SOLDIER_HEAVYGUNNER];
	EAST_SOLDIERS_MG_HEAVY = [EAST_SOLDIER_HEAVYGUNNER, EAST_SOLDIER_HEAVYGUNNER];
	EAST_SOLDIERS_AT_LIGHT = [EAST_SOLDIER_LAT];
	EAST_SOLDIERS_AT_MEDIUM = [EAST_SOLDIER_AT];
	EAST_SOLDIERS_AT_HEAVY = [EAST_SOLDIER_HAT];
	EAST_SOLDIERS_SPECOPS = [["ru_msv_sergeant", 1]];
	EAST_SOLDIERS_ENGINEER = [EAST_SOLDIER_ENGINEER, ["ru_msv_engineer", 1]];
	EAST_SOLDIERS_SNIPERS = [EAST_SOLDIER_SNIPER, ["ru_msv_marksman", 1]];
	EAST_SOLDIERS_MARKSMEN = [EAST_SOLDIER_MARKSMAN, ["ru_msv_marksman", 1]];

	//--- Vehicles
	EAST_VEHICLE_AA = [["ru_msv_btr80a", 1]];
	EAST_VEHICLE_APC = [["ru_msv_bmp2", 1], ["ru_msv_bmp1", 1]];
	EAST_VEHICLE_ARMORED_LIGHT = [["ru_msv_t72b3_2012", 2]];
	EAST_VEHICLE_MOTORIZED = [EAST_MOTORIZED_MG, EAST_MOTORIZED_GL, EAST_MOTORIZED_MG];

	//--- Vehicles - Mixed
	EAST_VEHICLES_AA_LIGHT = EAST_VEHICLE_AA;
	EAST_VEHICLES_LIGHT = EAST_VEHICLE_MOTORIZED;
	EAST_VEHICLES_MEDIUM = EAST_VEHICLE_APC + EAST_VEHICLE_ARMORED_LIGHT;
	EAST_VEHICLES_HEAVY = EAST_VEHICLE_ARMORED_LIGHT;
};