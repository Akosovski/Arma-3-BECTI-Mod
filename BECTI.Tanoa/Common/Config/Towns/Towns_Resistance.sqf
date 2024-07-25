with missionNamespace do {
	//--- Infantry
	GUER_SOLDIER = "ta_tla_rifleman_aks";
	GUER_SOLDIER_AA = "ta_tla_aa_specialist";
	GUER_SOLDIER_AR = "ta_tla_autorifleman";
	GUER_SOLDIER_AT = "ta_tla_grenadier_rpg";
	GUER_SOLDIER_CREW = "ta_tla_crewman";
	GUER_SOLDIER_LAT = "ta_tla_rifleman_fal";
	GUER_SOLDIER_HAT = "ta_tla_grenadier_rpg";
	GUER_SOLDIER_ENGINEER = "ta_tla_engineer";
	GUER_SOLDIER_GL = "ta_tla_elite_rifleman";
	GUER_SOLDIER_MEDIC = "ta_tla_medic";
    GUER_SOLDIER_MG = "ta_tla_machinegunner";
	GUER_SOLDIER_PILOT = "ta_tla_sergeant";
	GUER_SOLDIER_SQUADLEADER = "ta_tla_sergeant";
	GUER_SOLDIER_SNIPER = "ta_tla_marksman";
	GUER_SOLDIER_TEAMLEADER = "ta_tla_elite_rifleman";

		//--- Infantry ---
	GUER_SOLDIERS_MG = [GUER_SOLDIER_AR];
	GUER_SOLDIERS_AT_LIGHT = [GUER_SOLDIER_LAT, GUER_SOLDIER_AT];
	GUER_SOLDIERS_AT_MEDIUM = [GUER_SOLDIER_AT, GUER_SOLDIER_AT, GUER_SOLDIER_HAT];
	GUER_SOLDIERS_AT_HEAVY = [GUER_SOLDIER_AT, GUER_SOLDIER_HAT];
	GUER_SOLDIERS_SPECOPS = ["ta_tla_elite_rifleman"];
	GUER_SOLDIERS_ENGINEER = [GUER_SOLDIER_ENGINEER];
	GUER_SOLDIERS_SNIPERS = [GUER_SOLDIER_SNIPER];
	
	//--- Vehicles
	GUER_VEHICLE_AA = ["ta_tla_ural_aa","ta_tla_uaz_spg9"];
	GUER_VEHICLE_APC = ["ta_tla_btr70"];
	GUER_VEHICLE_ARMORED_HEAVY = ["ta_tla_t72b_1985","ta_tla_bmd1"];
	GUER_VEHICLE_ARMORED_LIGHT = ["ta_tla_bmd2"];
	// GUER_VEHICLE_MECHANIZED = ["rhsgref_nat_ural_work","rhsgref_nat_uaz_open"];
	GUER_VEHICLE_MOTORIZED = ["ta_tla_uaz_dshkm","ta_tla_uaz_spg9"];

	//--- Vehicles - Mixed
	GUER_VEHICLES_AA_LIGHT = GUER_VEHICLE_AA;
	// GUER_VEHICLES_LIGHT = GUER_VEHICLE_MECHANIZED + GUER_VEHICLE_MOTORIZED;
	GUER_VEHICLES_LIGHT = GUER_VEHICLE_MOTORIZED;
	GUER_VEHICLES_MEDIUM = GUER_VEHICLE_ARMORED_LIGHT + GUER_VEHICLE_APC;
	// GUER_VEHICLES_MEDIUM = GUER_VEHICLE_APC;
	// GUER_VEHICLES_MEDIUM = GUER_VEHICLE_MOTORIZED;
	GUER_VEHICLES_HEAVY = GUER_VEHICLE_ARMORED_LIGHT + GUER_VEHICLE_ARMORED_HEAVY;
};