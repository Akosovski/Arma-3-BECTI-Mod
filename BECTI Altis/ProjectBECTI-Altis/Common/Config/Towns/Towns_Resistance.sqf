with missionNamespace do {
	
	//--- Infantry
	GUER_SOLDIER = "rhsgref_cdf_reg_rifleman";
	GUER_SOLDIER_MEDIC = "rhsgref_cdf_reg_medic";
	GUER_SOLDIER_AA = "rhsgref_cdf_reg_specialist_aa";
	GUER_SOLDIER_AR = "rhsgref_cdf_reg_rifleman_aks74";
	GUER_SOLDIER_AT = "rhsgref_cdf_reg_grenadier_rpg";
	GUER_SOLDIER_MG = "rhsgref_cdf_reg_machinegunner";
	GUER_SOLDIER_LAT = "rhsgref_cdf_reg_rifleman_rpg75";
	GUER_SOLDIER_SNIPER = "rhsgref_cdf_reg_marksman";
	GUER_SOLDIER_SQUADLEADER = "rhsgref_cdf_reg_squadleader";
	GUER_SOLDIER_CREW = "rhsgref_cdf_reg_crew";
	GUER_SOLDIER_PILOT = "rhsgref_cdf_reg_crew_commander";
	GUER_SOLDIER_PARA = "rhsgref_cdf_para_rifleman";
	GUER_SOLDIER_PARA_AA = "rhsgref_cdf_para_specialist_aa";
	GUER_SOLDIER_PARA_MG = "rhsgref_cdf_para_machinegunner";
	GUER_SOLDIER_PARA_AR = "rhsgref_cdf_para_autorifleman";
	GUER_SOLDIER_PARA_AT = "rhsgref_cdf_para_grenadier_rpg";
	GUER_SOLDIER_PARA_SNIPER = "rhsgref_cdf_para_marksman";
	GUER_SOLDIER_PARA_SQUADLEADER = "rhsgref_cdf_para_squadleader";

	//--- Infantry - Mixed
	GUER_SOLDIERS_SQUAD = [GUER_SOLDIER_SQUADLEADER, GUER_SOLDIER, GUER_SOLDIER, GUER_SOLDIER_AR, GUER_SOLDIER_MG, GUER_SOLDIER_LAT, GUER_SOLDIER_MEDIC];
	GUER_SOLDIERS_AA_TEAM = [GUER_SOLDIER_AA, GUER_SOLDIER_AA, GUER_SOLDIER];
	GUER_SOLDIERS_AT_TEAM = [GUER_SOLDIER_AT, GUER_SOLDIER_AT, GUER_SOLDIER];
	GUER_SOLDIERS_PARA_SQUAD = [GUER_SOLDIER_PARA_SQUADLEADER, GUER_SOLDIER_PARA, GUER_SOLDIER_PARA_AA, GUER_SOLDIER_PARA_MG, GUER_SOLDIER_PARA_AR];
	GUER_SOLDIERS_PARA_WEAPON_SQUAD = [GUER_SOLDIERS_PARA_AT, GUER_SOLDIERS_PARA_AT, GUER_SOLDIER_PARA_MG, GUER_SOLDIER_PARA_SNIPER, GUER_SOLDIER_PARA_SNIPER];
	
	//--- Vehicles
	GUER_VEHICLE_AA = ["rhsgref_cdf_reg_uaz_dshkm", "rhsgref_BRDM2"];
	GUER_VEHICLE_APC = ["rhsgref_cdf_btr80", "rhsgref_BRDM2"];
	GUER_VEHICLE_IFV = ["rhsgref_cdf_bmd2","rhsgref_cdf_bmp2"];
	GUER_VEHICLE_TANK = ["rhsgref_cdf_t72bb_tv","rhsgref_cdf_t72bb_tv"];
	GUER_VEHICLE_TANK_HEAVY = ["rhsgref_cdf_t80u_tv","rhsgref_cdf_t80u_tv"];
	GUER_VEHICLE_MOTORIZED = ["rhsgref_cdf_reg_uaz_ags","rhsgref_cdf_reg_uaz_spg9"];

	//--- Vehicles - Mixed
	GUER_VEHICLES_AA = GUER_VEHICLE_AA + GUER_VEHICLE_MOTORIZED;
	GUER_VEHICLES_LIGHT = GUER_VEHICLE_APC + GUER_VEHICLE_MOTORIZED;
	GUER_VEHICLES_MEDIUM = GUER_VEHICLE_IFV + GUER_VEHICLE_TANK;
	GUER_VEHICLES_HEAVY = GUER_VEHICLE_IFV + GUER_VEHICLE_TANK_HEAVY;
};