with missionNamespace do {


	//--- Infantry
	GUER_SOLDIER = "rhs_g_Soldier_F";
	GUER_SOLDIER_AA = "rhs_g_Soldier_AA_F";
	GUER_SOLDIER_AR = "rhs_g_Soldier_AR_F";
	GUER_SOLDIER_AT = "rhs_g_Soldier_LAT_F";
	GUER_SOLDIER_CREW = "rhs_g_Soldier_F";
	GUER_SOLDIER_LAT = "rhs_g_Soldier_LAT_F";
	GUER_SOLDIER_HAT = "rhs_g_Soldier_AT_F";
	GUER_SOLDIER_ENGINEER = "rhs_g_engineer_F";
	GUER_SOLDIER_GL = "rhs_g_Soldier_GL_F";
	GUER_SOLDIER_MEDIC = "rhs_g_medic_F";
	// GUER_SOLDIER_MG = "soldiermg";
	GUER_SOLDIER_PILOT = "rhs_g_helipilot_F";
	GUER_SOLDIER_SQUADLEADER = "rhs_g_Soldier_SL_F";
	GUER_SOLDIER_SNIPER = "rhs_g_Soldier_M_F";
	GUER_SOLDIER_TEAMLEADER = "rhs_g_Soldier_TL_F";

	//--- Infantry - Mixed
	// GUER_SOLDIERS_MG = [GUER_SOLDIER_MG, GUER_SOLDIER_AR];
	GUER_SOLDIERS_MG = [GUER_SOLDIER_AR];
	GUER_SOLDIERS_AT_LIGHT = [GUER_SOLDIER_LAT, GUER_SOLDIER_AT];
	GUER_SOLDIERS_AT_MEDIUM = [GUER_SOLDIER_AT, GUER_SOLDIER_AT, GUER_SOLDIER_HAT];
	GUER_SOLDIERS_AT_HEAVY = [GUER_SOLDIER_AT, GUER_SOLDIER_HAT];
	GUER_SOLDIERS_SPECOPS = ["rhs_g_engineer_F"];
	GUER_SOLDIERS_ENGINEER = [GUER_SOLDIER_ENGINEER, "rhs_g_engineer_F"];
	GUER_SOLDIERS_SNIPERS = [GUER_SOLDIER_SNIPER, "rhs_g_Soldier_M_F", "rhs_g_Soldier_M_F"];

	//--- Vehicles
	 GUER_VEHICLE_AA = ["rhs_zsu234_chdkz","rhs_zsu234_chdkz"];
	 GUER_VEHICLE_APC = ["rhs_btr70_chdkz", "rhs_bmd2_chdkz","rhs_bmp2_chdkz","rhs_bmp1_chdkz"];
	GUER_VEHICLE_ARMORED_HEAVY = ["rhs_t72bb_chdkz","rhs_bmp2_chdkz","rhs_bmp1_chdkz","rhs_zsu234_chdkz"];
	GUER_VEHICLE_ARMORED_LIGHT = ["rhs_zsu234_chdkz","rhs_bmp1_chdkz","rhs_bmd2_chdkz"];
	GUER_VEHICLE_MECHANIZED = ["rhs_bmp1_chdkz","rhs_bmd2_chdkz"];
	GUER_VEHICLE_MOTORIZED = ["rhs_btr70_chdkz","rhs_t72bb_chdkz"];

	//--- Vehicles - Mixed
	 GUER_VEHICLES_AA_LIGHT = GUER_VEHICLE_AA;
	 GUER_VEHICLES_LIGHT = GUER_VEHICLE_MECHANIZED + GUER_VEHICLE_MOTORIZED;
	GUER_VEHICLES_LIGHT = GUER_VEHICLE_MOTORIZED;
	 GUER_VEHICLES_MEDIUM = GUER_VEHICLE_ARMORED_LIGHT + GUER_VEHICLE_APC;
	GUER_VEHICLES_MEDIUM = GUER_VEHICLE_APC;
	 GUER_VEHICLES_MEDIUM = GUER_VEHICLE_MOTORIZED;
	 GUER_VEHICLES_HEAVY = GUER_VEHICLE_ARMORED_LIGHT + GUER_VEHICLE_ARMORED_HEAVY;
};