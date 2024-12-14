with missionNamespace do {
	//--- Infantry - Marines
	WEST_MARINE = ["us_usmc_rifleman_m4a1", 1];
	WEST_MARINE_AA = ["us_usmc_aa_specialist", 1];
	WEST_MARINE_AR = ["us_usmc_autorifleman_m249", 1];
	WEST_MARINE_AT = ["us_usmc_rifleman_at", 1];
	WEST_MARINE_CREW = ["us_usmc_crewman", 1];
	WEST_MARINE_LAT = ["us_usmc_rifleman_at", 1];
	WEST_MARINE_HAT = ["us_usmc_missileman", 1];
	WEST_MARINE_ENGINEER = ["us_usmc_engineer", 1];
	WEST_MARINE_GL = ["us_usmc_grenadier_m16a4", 1];
	WEST_MARINE_MEDIC = ["us_usmc_corpsman", 1];
	WEST_MARINE_PILOT = ["us_usmc_heli_pilot", 1];
	WEST_MARINE_SQUADLEADER = ["us_usmc_sergeant", 1];
	WEST_MARINE_SNIPER = ["us_usmc_sniper", 1];
	WEST_MARINE_MARKSMAN = ["us_usmc_marksman", 1];
	WEST_MARINE_TEAMLEADER = ["us_usmc_lance_corporal", 1];
	WEST_MARINE_HEAVYGUNNER = ["us_usmc_machinegunner", 1];

	//--- Marines - Formations
	WEST_MARINES_MG_LIGHT = [WEST_MARINE_AR];
	WEST_MARINES_MG_MEDIUM = [WEST_MARINE_AR, WEST_MARINE_HEAVYGUNNER];
	WEST_MARINES_MG_HEAVY = [WEST_MARINE_HEAVYGUNNER, WEST_MARINE_HEAVYGUNNER];
	WEST_MARINES_AT_LIGHT = [WEST_MARINE_LAT];
	WEST_MARINES_AT_MEDIUM = [WEST_MARINE_AT];
	WEST_MARINES_AT_HEAVY = [WEST_MARINE_HAT];
	WEST_MARINES_SPECOPS = [WEST_MARINE_SNIPER];
	WEST_MARINES_SNIPERS = [WEST_MARINE_SNIPER];
	WEST_MARINES_MARKSMEN = [WEST_MARINE_MARKSMAN];

	// Infantry - Rangers
	WEST_SOLDIER = ["us_rg_rifleman_m4a1", 1];
	WEST_SOLDIER_AA = ["us_rg_aa_specialist", 1];
	WEST_SOLDIER_AR = ["us_rg_autorifleman_m249", 1];
	WEST_SOLDIER_AT = ["us_rg_uav_operator_rpg", 1];
	WEST_SOLDIER_CREW = ["us_rg_crewman", 1];
	WEST_SOLDIER_LAT = ["us_rg_corporal", 1];
	WEST_SOLDIER_HAT = ["us_rg_at_specialist", 1];
	WEST_SOLDIER_ENGINEER = ["us_rg_engineer", 1];
	WEST_SOLDIER_GL = ["us_rg_uav_operator_he", 1];
	WEST_SOLDIER_MEDIC = ["us_rg_medic", 1];
	WEST_SOLDIER_PILOT = ["us_rg_heli_pilot", 1];
	WEST_SOLDIER_SQUADLEADER = ["us_rg_sergeant", 1];
	WEST_SOLDIER_SNIPER = ["us_rg_sniper_m107", 1];
	WEST_SOLDIER_MARKSMAN = ["us_rg_marksman", 1];
	WEST_SOLDIER_TEAMLEADER = ["us_rg_rifleman_mk16", 1];
	WEST_SOLDIER_HEAVYGUNNER = ["us_rg_machinegunner", 1];

	//--- Marines - Formations
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
	WEST_MOTORIZED_MG = ["us_rg_m1151a1_crows_m2", 2];
	WEST_MOTORIZED_GL = ["us_rg_m1151a1_crows_mk19", 2];
	WEST_VEHICLE_AA = [["us_rg_m6a2_aa", 1]];
	WEST_VEHICLE_APC = [["us_rg_m2a3_b1", 1], ["us_rg_m113a3_m2", 1]];
	WEST_VEHICLE_ARMORED_HEAVY = [["us_rg_m1a2sepv1_t2", 1]];
	WEST_VEHICLE_ARMORED_LIGHT = [["us_rg_m1a1fep", 1]];
	WEST_VEHICLE_MOTORIZED = [WEST_MOTORIZED_MG, WEST_MOTORIZED_GL, WEST_MOTORIZED_MG];
	WEST_MARINES_HELO = [["us_usmc_ah1z", 1]];
	WEST_VEHICLE_HELO = [["us_rg_ah64d", 1]];

	//--- Vehicles - Mixed
	WEST_VEHICLES_AA_LIGHT = WEST_VEHICLE_AA;
	WEST_VEHICLES_LIGHT = WEST_VEHICLE_MOTORIZED;
	WEST_VEHICLES_MEDIUM = WEST_VEHICLE_APC + WEST_VEHICLE_ARMORED_LIGHT;
	WEST_VEHICLES_HEAVY = WEST_VEHICLE_ARMORED_LIGHT + WEST_VEHICLE_ARMORED_HEAVY;
};