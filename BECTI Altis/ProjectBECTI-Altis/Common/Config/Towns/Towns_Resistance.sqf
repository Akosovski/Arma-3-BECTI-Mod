with missionNamespace do {
	//--- Infantry
	GUER_SOLDIER = "al_adf_rifleman";
	GUER_SOLDIER_AA = "al_adf_aa_specialist";
	GUER_SOLDIER_AR = "al_adf_autorifleman";
	GUER_SOLDIER_AT = "al_adf_at_specialist";
	GUER_SOLDIER_CREW = "al_adf_crewman";
	GUER_SOLDIER_LAT = "al_adf_rifleman";
	GUER_SOLDIER_HAT = "al_adf_at_specialist";
	GUER_SOLDIER_ENGINEER = "al_adf_engineer";
	GUER_SOLDIER_GL = "al_adf_sergeant";
	GUER_SOLDIER_MEDIC = "al_adf_medic";
    GUER_SOLDIER_MG = "al_adf_machinegunner";
	GUER_SOLDIER_PILOT = "al_adf_officer";
	GUER_SOLDIER_SQUADLEADER = "al_adf_officer";
	GUER_SOLDIER_SNIPER = "al_adf_marksman";
	GUER_SOLDIER_TEAMLEADER = "al_adf_sergeant";

	//--- Infantry ---
	GUER_SOLDIERS_MG = [GUER_SOLDIER_AR];
	GUER_SOLDIERS_AT_LIGHT = [GUER_SOLDIER_LAT, GUER_SOLDIER_AT];
	GUER_SOLDIERS_AT_MEDIUM = [GUER_SOLDIER_AT, GUER_SOLDIER_AT, GUER_SOLDIER_HAT];
	GUER_SOLDIERS_AT_HEAVY = [GUER_SOLDIER_AT, GUER_SOLDIER_HAT];
	GUER_SOLDIERS_SPECOPS = ["al_adf_eod_specialist"];
	GUER_SOLDIERS_ENGINEER = [GUER_SOLDIER_ENGINEER];
	GUER_SOLDIERS_SNIPERS = [GUER_SOLDIER_SNIPER];
	
	//--- Vehicles
	GUER_VEHICLE_AA = ["rhsgref_nat_ural_Zu23","rhsgref_nat_uaz_spg9"];
	GUER_VEHICLE_APC = ["rhsgref_nat_btr70"];
	GUER_VEHICLE_ARMORED_HEAVY = ["rhsgref_ins_g_t72bc","rhsgref_nat_uaz_spg9"];
	GUER_VEHICLE_ARMORED_LIGHT = ["rhsgref_nat_btr70"];
	GUER_VEHICLE_MECHANIZED = ["rhsgref_nat_ural_work","rhsgref_nat_uaz_open"];
	GUER_VEHICLE_MOTORIZED = ["rhsgref_nat_uaz_dshkm","rhsgref_nat_uaz_ags"];

	//--- Vehicles - Mixed
	GUER_VEHICLES_AA_LIGHT = GUER_VEHICLE_AA;
	GUER_VEHICLES_LIGHT = GUER_VEHICLE_MECHANIZED + GUER_VEHICLE_MOTORIZED;
	GUER_VEHICLES_LIGHT = GUER_VEHICLE_MOTORIZED;
	GUER_VEHICLES_MEDIUM = GUER_VEHICLE_ARMORED_LIGHT + GUER_VEHICLE_APC;
	GUER_VEHICLES_MEDIUM = GUER_VEHICLE_APC;
	GUER_VEHICLES_MEDIUM = GUER_VEHICLE_MOTORIZED;
	GUER_VEHICLES_HEAVY = GUER_VEHICLE_ARMORED_LIGHT + GUER_VEHICLE_ARMORED_HEAVY;
};