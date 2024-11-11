with missionNamespace do {
	//--- Infantry
	GUER_SOLDIER = "tk_isis_rifleman_akm";
	GUER_SOLDIER_AA = "tk_isis_aa_specialist";
	GUER_SOLDIER_AR = "tk_isis_elite_autorifleman";
	GUER_SOLDIER_AT = "tk_isis_grenadier_rpg";
	GUER_SOLDIER_CREW = "tk_isis_crewman";
	GUER_SOLDIER_LAT = "tk_isis_rifleman_m16";
	GUER_SOLDIER_HAT = "tk_isis_missileman";
	GUER_SOLDIER_ENGINEER = "tk_isis_engineer";
	GUER_SOLDIER_GL = "tk_isis_grenadier_m16a4";
	GUER_SOLDIER_MEDIC = "tk_isis_medic";
    GUER_SOLDIER_MG = "tk_isis_machinegunner";
	GUER_SOLDIER_PILOT = "tk_isis_squad_leader";
	GUER_SOLDIER_SQUADLEADER = "tk_isis_squad_leader";
	GUER_SOLDIER_SNIPER = "tk_isis_marksman";
	GUER_SOLDIER_TEAMLEADER = "tk_isis_elite_rifleman_m4a1";

	//--- Infantry ---
	GUER_SOLDIERS_MG = [GUER_SOLDIER_AR];
	GUER_SOLDIERS_AT_LIGHT = [GUER_SOLDIER_LAT, GUER_SOLDIER_AT];
	GUER_SOLDIERS_AT_MEDIUM = [GUER_SOLDIER_AT, GUER_SOLDIER_AT, GUER_SOLDIER_HAT];
	GUER_SOLDIERS_AT_HEAVY = [GUER_SOLDIER_AT, GUER_SOLDIER_HAT];
	GUER_SOLDIERS_SPECOPS = ["tk_isis_elite_rifleman_mk17"];
	GUER_SOLDIERS_ENGINEER = [GUER_SOLDIER_ENGINEER];
	GUER_SOLDIERS_SNIPERS = [GUER_SOLDIER_SNIPER];
	
	//--- Vehicles
	GUER_VEHICLE_AA = ["tk_isis_zsu23","tk_isis_m1025_mk19"];
	GUER_VEHICLE_APC = ["tk_isis_btr80a"];
	GUER_VEHICLE_ARMORED_HEAVY = ["tk_isis_t72b_1989","tk_isis_bmp1"];
	GUER_VEHICLE_ARMORED_LIGHT = ["tk_isis_t72m","tk_isis_bmp2"];
	// GUER_VEHICLE_MECHANIZED = ["rhsgref_nat_ural_work","rhsgref_nat_uaz_open"];
	GUER_VEHICLE_MOTORIZED = ["tk_isis_m1025_m2","tk_isis_m1025_tow"];

	//--- Vehicles - Mixed
	GUER_VEHICLES_AA_LIGHT = GUER_VEHICLE_AA;
	// GUER_VEHICLES_LIGHT = GUER_VEHICLE_MECHANIZED + GUER_VEHICLE_MOTORIZED;
	GUER_VEHICLES_LIGHT = GUER_VEHICLE_MOTORIZED;
	GUER_VEHICLES_MEDIUM = GUER_VEHICLE_ARMORED_LIGHT + GUER_VEHICLE_APC;
	// GUER_VEHICLES_MEDIUM = GUER_VEHICLE_APC;
	// GUER_VEHICLES_MEDIUM = GUER_VEHICLE_MOTORIZED;
	GUER_VEHICLES_HEAVY = GUER_VEHICLE_ARMORED_LIGHT + GUER_VEHICLE_ARMORED_HEAVY;
};