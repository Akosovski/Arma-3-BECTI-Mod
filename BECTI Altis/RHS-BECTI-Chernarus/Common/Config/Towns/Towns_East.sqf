with missionNamespace do {
	//--- Infantry
	EAST_SOLDIER = ["rhs_msv_rifleman", 1];
	EAST_SOLDIER_AA = ["rhs_msv_aa", 1];
	EAST_SOLDIER_AR = ["rhs_msv_machinegunner", 1];
	EAST_SOLDIER_AT = ["rhs_msv_lat", 1];
	EAST_SOLDIER_CREW = ["rhs_msv_crew", 1];
	EAST_SOLDIER_LAT = ["rhs_msv_lat", 1];
	EAST_SOLDIER_HAT = ["rhs_msv_at", 1];
	EAST_SOLDIER_ENGINEER = ["rhs_msv_engineer", 1];
	EAST_SOLDIER_GL = ["rhs_msv_grenadier", 1];
	EAST_SOLDIER_MEDIC = ["rhs_msv_medic", 1];
	// EAST_SOLDIER_MG = "soldiermg";
	EAST_SOLDIER_PILOT = ["rhs_pilot_combat_heli", 1];
	EAST_SOLDIER_SQUADLEADER = ["rhs_msv_sergeant", 1];
	EAST_SOLDIER_SNIPER = ["rhs_msv_marksman", 1];
	EAST_SOLDIER_TEAMLEADER = ["rhs_msv_junior_sergeant", 1];

	//--- Vehicles
	EAST_MOTORIZED_MG = ["rhs_btr70_msv", 2];
	EAST_MOTORIZED_GL = ["rhs_btr80a_msv", 2];

	//--- Infantry - Mixed
	// EAST_SOLDIERS_MG = [EAST_SOLDIER_MG, EAST_SOLDIER_AR];
	EAST_SOLDIERS_MG = [EAST_SOLDIER_AR];
	EAST_SOLDIERS_AT_LIGHT = [EAST_SOLDIER_LAT, EAST_SOLDIER_AT];
	EAST_SOLDIERS_AT_MEDIUM = [EAST_SOLDIER_AT, EAST_SOLDIER_AT, EAST_SOLDIER_HAT];
	EAST_SOLDIERS_AT_HEAVY = [EAST_SOLDIER_AT, EAST_SOLDIER_HAT];
	EAST_SOLDIERS_SPECOPS = [["rhs_msv_engineer", 1]];
	EAST_SOLDIERS_ENGINEER = [EAST_SOLDIER_ENGINEER];
	EAST_SOLDIERS_SNIPERS = [EAST_SOLDIER_SNIPER];

	//--- Vehicles
	EAST_VEHICLE_AA = [["rhs_zsu234_aa", 1]];
	EAST_VEHICLE_APC = [["rhs_bmp3m_msv", 2],["rhs_bmp2d_msv",1]];
	// EAST_VEHICLE_ARMORED_HEAVY = ["armoheavy1","armoheavy2"];
	EAST_VEHICLE_ARMORED_LIGHT = [["rhs_t72bc_tv", 2],["rhs_t80ue1",1]];
	// EAST_VEHICLE_MECHANIZED = ["mechanized1","mechanized2"];
	EAST_VEHICLE_MOTORIZED = [EAST_MOTORIZED_MG, EAST_MOTORIZED_GL, EAST_MOTORIZED_MG];

	//--- Vehicles - Mixed
	EAST_VEHICLES_AA_LIGHT = EAST_VEHICLE_AA;
	// EAST_VEHICLES_LIGHT = EAST_VEHICLE_MECHANIZED + EAST_VEHICLE_MOTORIZED;
	EAST_VEHICLES_LIGHT = EAST_VEHICLE_MOTORIZED;
	EAST_VEHICLES_MEDIUM = EAST_VEHICLE_APC + EAST_VEHICLE_ARMORED_LIGHT;
	EAST_VEHICLES_HEAVY = EAST_VEHICLE_ARMORED_LIGHT;
};