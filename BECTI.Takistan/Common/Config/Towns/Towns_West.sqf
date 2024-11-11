with missionNamespace do {
	//--- Infantry
	WEST_SOLDIER = ["us_usmc_des_rifleman_m4a1", 1];
	WEST_SOLDIER_AA = ["us_usmc_des_aa_specialist", 1];
	WEST_SOLDIER_AR = ["us_usmc_des_autorifleman_m249", 1];
	WEST_SOLDIER_AT = ["us_usmc_des_rifleman_at", 1];
	WEST_SOLDIER_CREW = ["us_usmc_des_crewman", 1];
	WEST_SOLDIER_LAT = ["us_usmc_des_rifleman_at", 1];
	WEST_SOLDIER_HAT = ["us_usmc_des_missileman", 1];
	WEST_SOLDIER_ENGINEER = ["us_usmc_des_engineer", 1];
	WEST_SOLDIER_GL = ["us_usmc_des_grenadier_m16a4", 1];
	WEST_SOLDIER_MEDIC = ["us_usmc_des_corpsman", 1];
	WEST_SOLDIER_PILOT = ["us_usmc_des_heli_pilot", 1];
	WEST_SOLDIER_SQUADLEADER = ["us_usmc_des_sergeant", 1];
	WEST_SOLDIER_SNIPER = ["us_usmc_des_sniper", 1];
	WEST_SOLDIER_MARKSMAN = ["us_usmc_des_marksman", 1];
	WEST_SOLDIER_TEAMLEADER = ["us_usmc_des_lance_corporal", 1];
	WEST_SOLDIER_HEAVYGUNNER = ["us_usmc_des_machinegunner", 1];
	
	//--- Vehicles
	WEST_MOTORIZED_MG = ["us_usmc_m1151a1_crows_m2", 2];
	WEST_MOTORIZED_GL = ["us_usmc_m1151a1_crows_mk19", 2];

	//--- Infantry - Mixed
	WEST_SOLDIERS_MG_LIGHT = [WEST_SOLDIER_AR];
	WEST_SOLDIERS_MG_MEDIUM = [WEST_SOLDIER_AR, WEST_SOLDIER_HEAVYGUNNER];
	WEST_SOLDIERS_MG_HEAVY = [WEST_SOLDIER_HEAVYGUNNER, WEST_SOLDIER_HEAVYGUNNER];
	WEST_SOLDIERS_AT_LIGHT = [WEST_SOLDIER_LAT];
	WEST_SOLDIERS_AT_MEDIUM = [WEST_SOLDIER_AT];
	WEST_SOLDIERS_AT_HEAVY = [WEST_SOLDIER_HAT];
	WEST_SOLDIERS_SPECOPS = [WEST_SOLDIER_SNIPER];
	WEST_SOLDIERS_SNIPERS = [WEST_SOLDIER_SNIPER];
	WEST_SOLDIERS_MARKSMEN = [WEST_SOLDIER_MARKSMAN];

	//--- Vehicles
	WEST_VEHICLE_AA = [["us_usmc_m6a2_aa", 1]];
	WEST_VEHICLE_APC = [["us_usmc_m2a3_b1", 1], ["us_usmc_m113a3_m2", 1]];
	WEST_VEHICLE_ARMORED_HEAVY = [["us_usmc_m1a2sepv1_t2", 1]];
	WEST_VEHICLE_ARMORED_LIGHT = [["us_usmc_m1a1fep", 1]];
	WEST_VEHICLE_MOTORIZED = [WEST_MOTORIZED_MG, WEST_MOTORIZED_GL, WEST_MOTORIZED_MG];

	//--- Vehicles - Mixed
	WEST_VEHICLES_AA_LIGHT = WEST_VEHICLE_AA;
	WEST_VEHICLES_LIGHT = WEST_VEHICLE_MOTORIZED;
	WEST_VEHICLES_MEDIUM = WEST_VEHICLE_APC + WEST_VEHICLE_ARMORED_LIGHT;
	WEST_VEHICLES_HEAVY = WEST_VEHICLE_ARMORED_LIGHT + WEST_VEHICLE_ARMORED_HEAVY;
};