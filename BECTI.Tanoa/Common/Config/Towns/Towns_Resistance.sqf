with missionNamespace do {
	//--- Infantry
	GUER_SOLDIER = "rhsgref_cdf_para_rifleman";
	GUER_SOLDIER_AA = "rhsgref_cdf_para_specialist_aa";
	GUER_SOLDIER_AR = "rhsgref_cdf_para_autorifleman";
	GUER_SOLDIER_AT = "rhsgref_cdf_para_grenadier_rpg";
	GUER_SOLDIER_CREW = "rhsgref_cdf_para_crew";
	GUER_SOLDIER_LAT = "rhsgref_cdf_para_rifleman";
	GUER_SOLDIER_HAT = "rhsgref_cdf_para_grenadier_rpg";
	GUER_SOLDIER_ENGINEER = "rhsgref_cdf_para_engineer";
	GUER_SOLDIER_GL = "rhsgref_cdf_para_grenadier";
	GUER_SOLDIER_MEDIC = "rhsgref_cdf_para_medic";
    GUER_SOLDIER_MG = "rhsgref_cdf_para_machinegunner";
	GUER_SOLDIER_PILOT = "rhsgref_cdf_para_crew";
	GUER_SOLDIER_SQUADLEADER = "rhsgref_cdf_para_squadleader";
	GUER_SOLDIER_SNIPER = "rhsgref_cdf_para_marksman";
	GUER_SOLDIER_TEAMLEADER = "rhsgref_cdf_para_squadleader";

	//--- Infantry - Mixed
	GUER_SOLDIERS_MG = [GUER_SOLDIER_AR];
	GUER_SOLDIERS_AT_LIGHT = [GUER_SOLDIER_LAT, GUER_SOLDIER_AT];
	GUER_SOLDIERS_AT_MEDIUM = [GUER_SOLDIER_AT, GUER_SOLDIER_AT, GUER_SOLDIER_HAT];
	GUER_SOLDIERS_AT_HEAVY = [GUER_SOLDIER_AT, GUER_SOLDIER_HAT];
	GUER_SOLDIERS_SPECOPS = [GUER_SOLDIER_AR];
	GUER_SOLDIERS_ENGINEER = [GUER_SOLDIER_ENGINEER];
	GUER_SOLDIERS_SNIPERS = [GUER_SOLDIER_SNIPER];
	
	//--- Vehicles
	GUER_VEHICLE_AA = ["rhsgref_cdf_reg_uaz_dshkm", "rhsgref_BRDM2"];
	GUER_VEHICLE_APC = ["rhsgref_cdf_btr80", "rhsgref_BRDM2"];
	GUER_VEHICLE_ARMORED_HEAVY = ["rhsgref_cdf_t80u_tv","rhsgref_cdf_t72bb_tv"];
	GUER_VEHICLE_ARMORED_LIGHT = ["rhsgref_cdf_bmd2","rhsgref_cdf_bmp2"];
	GUER_VEHICLE_MECHANIZED = ["rhsgref_cdf_bmp2","rhsgref_cdf_t72bb_tv"];
	GUER_VEHICLE_MOTORIZED = ["rhsgref_cdf_reg_uaz_ags","rhsgref_cdf_reg_uaz_spg9"];

	//--- Vehicles - Mixed
	GUER_VEHICLES_AA_LIGHT = GUER_VEHICLE_AA;
	GUER_VEHICLES_LIGHT = GUER_VEHICLE_MECHANIZED + GUER_VEHICLE_MOTORIZED;
	GUER_VEHICLES_LIGHT = GUER_VEHICLE_MOTORIZED;
	GUER_VEHICLES_MEDIUM = GUER_VEHICLE_ARMORED_LIGHT + GUER_VEHICLE_APC;
	GUER_VEHICLES_MEDIUM = GUER_VEHICLE_APC;
	GUER_VEHICLES_MEDIUM = GUER_VEHICLE_MOTORIZED;
	GUER_VEHICLES_HEAVY = GUER_VEHICLE_ARMORED_LIGHT + GUER_VEHICLE_ARMORED_HEAVY;
};