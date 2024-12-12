
    class us_rg_rifleman_m4a1 : rhsusf_army_ocp_arb_squadleader_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USRG Rifleman (M4A1)";
        side = 1;
        faction = "ako_us_rg";

        identityTypes[] = {"Head_NATO","LanguageENG_F"};

        uniformClass = "U_B_CombatUniform_mcam_vest";

        linkedItems[] = {"rhsusf_iotv_ocp_Teamleader","USP_IHPS_COV_CT3_GRN_OCP","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_grn_F"};
        respawnlinkedItems[] = {"rhsusf_iotv_ocp_Teamleader","USP_IHPS_COV_CT3_GRN_OCP","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_grn_F"};

        weapons[] = {"JCA_arifle_M4A1_black_F"};
        respawnWeapons[] = {"JCA_arifle_M4A1_black_F"};

        magazines[] = {"JCA_30Rnd_556x45_PMAG","JCA_30Rnd_556x45_PMAG"};
        respawnMagazines[] = {"JCA_30Rnd_556x45_PMAG","JCA_30Rnd_556x45_PMAG"};

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A1_black_F","","rhsusf_acc_anpeq15_bk","rhsusf_acc_ACOG3",{"JCA_30Rnd_556x45_PMAG",30},{},""},{},{},{"U_B_CombatUniform_mcam_vest",{{"FirstAidKit",5}}},{"rhsusf_iotv_ocp_Teamleader",{{"JCA_30Rnd_556x45_PMAG",15,30},{"CUP_HandGrenade_M67",6,1}}},{},"USP_IHPS_COV_CT3_GRN_OCP","rhs_googles_clear",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_grn_F"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'CUP_insignia_75th_ranger'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "CUP_insignia_75th_ranger";

    };

    class us_rg_sergeant : us_rg_rifleman_m4a1 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USRG Sergeant";
        side = 1;
        faction = "ako_us_rg";

        identityTypes[] = {"Head_NATO","LanguageENG_F"};

        uniformClass = "U_B_CombatUniform_mcam";

        linkedItems[] = {"rhsusf_iotv_ocp_Squadleader","USP_IHPS_COV_CT3_TAN_OCP","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_grn_F"};
        respawnlinkedItems[] = {"rhsusf_iotv_ocp_Squadleader","USP_IHPS_COV_CT3_TAN_OCP","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_grn_F"};

        weapons[] = {"JCA_arifle_M4A1_GL_black_F","rhs_weap_m72a7"};
        respawnWeapons[] = {"JCA_arifle_M4A1_GL_black_F","rhs_weap_m72a7"};

        magazines[] = {"JCA_30Rnd_556x45_sand_PMAG","1Rnd_HE_Grenade_shell","JCA_30Rnd_556x45_sand_PMAG","1Rnd_HE_Grenade_shell"};
        respawnMagazines[] = {"JCA_30Rnd_556x45_sand_PMAG","1Rnd_HE_Grenade_shell","JCA_30Rnd_556x45_sand_PMAG","1Rnd_HE_Grenade_shell"};

        backpack = "rhsusf_falconii_mc";

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A1_GL_black_F","","rhsusf_acc_anpeq15_light","rhsusf_acc_ACOG_RMR",{"JCA_30Rnd_556x45_sand_PMAG",30},{"1Rnd_HE_Grenade_shell",1},""},{"rhs_weap_m72a7","","","",{},{},""},{},{"U_B_CombatUniform_mcam",{{"FirstAidKit",5}}},{"rhsusf_iotv_ocp_Squadleader",{{"CUP_HandGrenade_M67",2,1},{"1Rnd_HE_Grenade_shell",14,1},{"JCA_30Rnd_556x45_sand_PMAG",12,30}}},{"rhsusf_falconii_mc",{{"1Rnd_HE_Grenade_shell",10,1},{{"rhs_weap_m72a7","","","",{},{},""},1}}},"USP_IHPS_COV_CT3_TAN_OCP","rhs_googles_black",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_grn_F"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'CUP_insignia_75th_ranger'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "CUP_insignia_75th_ranger";

    };

    class us_rg_rifleman_mk16 : us_rg_rifleman_m4a1 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USRG Rifleman (Mk16)";
        side = 1;
        faction = "ako_us_rg";

        identityTypes[] = {"Head_NATO","LanguageENG_F"};

        uniformClass = "U_B_CombatUniform_mcam";

        linkedItems[] = {"rhsusf_iotv_ocp_Rifleman","USP_IHPS_COV_CT3_GRN_OCP","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_grn_F"};
        respawnlinkedItems[] = {"rhsusf_iotv_ocp_Rifleman","USP_IHPS_COV_CT3_GRN_OCP","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_grn_F"};

        weapons[] = {"CUP_arifle_Mk16_STD_AFG"};
        respawnWeapons[] = {"CUP_arifle_Mk16_STD_AFG"};

        magazines[] = {"CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_Mk16_STD_AFG","","rhsusf_acc_anpeq15_wmx_light","rhsusf_acc_su230a_mrds_c",{"CUP_30Rnd_556x45_Emag",30},{},""},{},{},{"U_B_CombatUniform_mcam",{{"FirstAidKit",5}}},{"rhsusf_iotv_ocp_Rifleman",{{"CUP_HandGrenade_M67",5,1},{"CUP_30Rnd_556x45_Emag",11,30}}},{},"USP_IHPS_COV_CT3_GRN_OCP","rhs_googles_black",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_grn_F"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'CUP_insignia_75th_ranger'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "CUP_insignia_75th_ranger";

    };

    class us_rg_rifleman_mk17 : us_rg_rifleman_mk16 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USRG Rifleman (Mk17)";
        side = 1;
        faction = "ako_us_rg";

        identityTypes[] = {"Head_NATO","LanguageENG_F"};

        uniformClass = "U_B_CombatUniform_mcam";

        linkedItems[] = {"rhsusf_iotv_ocp_Rifleman","USP_IHPS_COV_CT3_GRN","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_grn_F"};
        respawnlinkedItems[] = {"rhsusf_iotv_ocp_Rifleman","USP_IHPS_COV_CT3_GRN","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_grn_F"};

        weapons[] = {"CUP_arifle_Mk17_STD_SFG"};
        respawnWeapons[] = {"CUP_arifle_Mk17_STD_SFG"};

        magazines[] = {"CUP_20Rnd_762x51_B_SCAR_bkl","CUP_20Rnd_762x51_B_SCAR_bkl"};
        respawnMagazines[] = {"CUP_20Rnd_762x51_B_SCAR_bkl","CUP_20Rnd_762x51_B_SCAR_bkl"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_Mk17_STD_SFG","","rhsusf_acc_anpeq15_top","rhsusf_acc_ACOG_RMR",{"CUP_20Rnd_762x51_B_SCAR_bkl",20},{},""},{},{},{"U_B_CombatUniform_mcam",{{"FirstAidKit",5}}},{"rhsusf_iotv_ocp_Rifleman",{{"CUP_HandGrenade_M67",2,1},{"CUP_20Rnd_762x51_B_SCAR_bkl",10,20}}},{},"USP_IHPS_COV_CT3_GRN","rhs_ess_black",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_grn_F"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'CUP_insignia_75th_ranger'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "CUP_insignia_75th_ranger";

    };

    class us_rg_corporal : us_rg_rifleman_mk17 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USRG Corporal";
        side = 1;
        faction = "ako_us_rg";

        identityTypes[] = {"Head_NATO","LanguageENG_F"};

        uniformClass = "U_B_CombatUniform_mcam";

        linkedItems[] = {"rhsusf_iotv_ocp_Squadleader","USP_IHPS_COV_CT3_GRN_OCP","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_grn_F"};
        respawnlinkedItems[] = {"rhsusf_iotv_ocp_Squadleader","USP_IHPS_COV_CT3_GRN_OCP","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_grn_F"};

        weapons[] = {"JCA_arifle_M4A4_AFG_black_F","rhs_weap_m72a7"};
        respawnWeapons[] = {"JCA_arifle_M4A4_AFG_black_F","rhs_weap_m72a7"};

        magazines[] = {"JCA_30Rnd_556x45_PMAG","JCA_30Rnd_556x45_PMAG"};
        respawnMagazines[] = {"JCA_30Rnd_556x45_PMAG","JCA_30Rnd_556x45_PMAG"};

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A4_AFG_black_F","","rhsusf_acc_anpeq15_bk_light","CUP_optic_CompM2_Black",{"JCA_30Rnd_556x45_PMAG",30},{},""},{"rhs_weap_m72a7","","","",{},{},""},{},{"U_B_CombatUniform_mcam",{{"FirstAidKit",5}}},{"rhsusf_iotv_ocp_Squadleader",{{"CUP_HandGrenade_M67",6,1},{"JCA_30Rnd_556x45_PMAG",15,30}}},{},"USP_IHPS_COV_CT3_GRN_OCP","rhs_ess_black",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_grn_F"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'CUP_insignia_75th_ranger'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "CUP_insignia_75th_ranger";

    };

    class us_rg_mortarman_gun : us_rg_rifleman_mk17 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USRG Mortarman (Gun)";
        side = 1;
        faction = "ako_us_rg";

        identityTypes[] = {"Head_NATO","LanguageENG_F"};

        uniformClass = "U_B_CombatUniform_mcam";

        linkedItems[] = {"rhsusf_spcs_ocp_rifleman","USP_IHPS_CT3_TAN","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_grn_F"};
        respawnlinkedItems[] = {"rhsusf_spcs_ocp_rifleman","USP_IHPS_CT3_TAN","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_grn_F"};

        weapons[] = {"JCA_arifle_M4A1_short_black_F"};
        respawnWeapons[] = {"JCA_arifle_M4A1_short_black_F"};

        magazines[] = {"30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand"};

        backpack = "rhs_M252_Gun_Bag";

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A1_short_black_F","","rhsusf_acc_anpeq15_light","CUP_optic_CompM2_Black",{"30Rnd_556x45_Stanag_Sand",30},{},""},{},{},{"U_B_CombatUniform_mcam",{{"FirstAidKit",5}}},{"rhsusf_spcs_ocp_rifleman",{{"CUP_HandGrenade_M67",3,1},{"30Rnd_556x45_Stanag_Sand",13,30}}},{"rhs_M252_Gun_Bag",{}},"USP_IHPS_CT3_TAN","rhs_googles_black",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_grn_F"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'CUP_insignia_75th_ranger'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "CUP_insignia_75th_ranger";

    };

    class us_rg_officer : us_rg_mortarman_gun {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USRG Officer";
        side = 1;
        faction = "ako_us_rg";

        identityTypes[] = {"Head_NATO","LanguageENG_F"};

        uniformClass = "U_B_CombatUniform_mcam_vest";

        linkedItems[] = {"rhsusf_iotv_ocp_Squadleader","USP_IHPS_COV_CT3_USA_GRN_OCP","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_grn_F"};
        respawnlinkedItems[] = {"rhsusf_iotv_ocp_Squadleader","USP_IHPS_COV_CT3_USA_GRN_OCP","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_grn_F"};

        weapons[] = {"JCA_arifle_M4A4_AFG_black_F"};
        respawnWeapons[] = {"JCA_arifle_M4A4_AFG_black_F"};

        magazines[] = {"JCA_30Rnd_556x45_Green_PMAG","JCA_30Rnd_556x45_Green_PMAG"};
        respawnMagazines[] = {"JCA_30Rnd_556x45_Green_PMAG","JCA_30Rnd_556x45_Green_PMAG"};

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A4_AFG_black_F","","rhsusf_acc_anpeq15_bk","CUP_optic_CompM2_low",{"JCA_30Rnd_556x45_Green_PMAG",30},{},""},{},{},{"U_B_CombatUniform_mcam_vest",{{"FirstAidKit",5}}},{"rhsusf_iotv_ocp_Squadleader",{{"CUP_HandGrenade_M67",6,1},{"JCA_30Rnd_556x45_PMAG",15,30}}},{},"USP_IHPS_COV_CT3_USA_GRN_OCP","G_Aviator",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_grn_F"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'CUP_insignia_75th_ranger'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "CUP_insignia_75th_ranger";

    };

    class us_rg_heli_pilot : us_rg_officer {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USRG Helicopter Pilot";
        side = 1;
        faction = "ako_us_rg";

        identityTypes[] = {"Head_NATO","LanguageENG_F"};

        uniformClass = "U_B_CombatUniform_mcam_vest";

        linkedItems[] = {"rhsusf_spcs_ocp_crewman","rhsusf_hgu56p_tan","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsusf_spcs_ocp_crewman","rhsusf_hgu56p_tan","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A1_short_black_F"};
        respawnWeapons[] = {"JCA_arifle_M4A1_short_black_F"};

        magazines[] = {"30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand"};

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A1_short_black_F","","rhsusf_acc_anpeq15_wmx_light","optic_Holosight",{"30Rnd_556x45_Stanag_Sand",30},{},""},{},{},{"U_B_CombatUniform_mcam_vest",{{"FirstAidKit",5}}},{"rhsusf_spcs_ocp_crewman",{{"30Rnd_556x45_Stanag_Sand",12,30},{"CUP_HandGrenade_M67",4,1}}},{},"rhsusf_hgu56p_tan","G_Aviator",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'CUP_insignia_75th_ranger'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "CUP_insignia_75th_ranger";

    };

    class us_rg_heli_crewman : us_rg_heli_pilot {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USRG Helicopter Crew";
        side = 1;
        faction = "ako_us_rg";

        identityTypes[] = {"Head_NATO","LanguageENG_F"};

        uniformClass = "U_B_CombatUniform_mcam";

        linkedItems[] = {"rhsusf_iotv_ocp_Repair","rhsusf_hgu56p_mask_tan","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsusf_iotv_ocp_Repair","rhsusf_hgu56p_mask_tan","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M16A4_black_F"};
        respawnWeapons[] = {"JCA_arifle_M16A4_black_F"};

        magazines[] = {"JCA_30Rnd_556x45_PMAG","JCA_30Rnd_556x45_PMAG"};
        respawnMagazines[] = {"JCA_30Rnd_556x45_PMAG","JCA_30Rnd_556x45_PMAG"};

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M16A4_black_F","","rhsusf_acc_anpeq15_wmx_light","optic_Holosight",{"JCA_30Rnd_556x45_PMAG",30},{},""},{},{},{"U_B_CombatUniform_mcam",{{"FirstAidKit",5}}},{"rhsusf_iotv_ocp_Repair",{{"CUP_HandGrenade_M67",4,1},{"JCA_30Rnd_556x45_PMAG",13,30}}},{},"rhsusf_hgu56p_mask_tan","rhs_ess_black",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'CUP_insignia_75th_ranger'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "CUP_insignia_75th_ranger";

    };

    class us_rg_worker : us_rg_heli_crewman {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USRG Worker";
        side = 1;
        faction = "ako_us_rg";

        identityTypes[] = {"Head_NATO","LanguageENG_F"};

        uniformClass = "U_B_CombatUniform_mcam_vest";

        linkedItems[] = {"rhsusf_spcs_ocp","USP_IHPS_COV_TAN_OCP","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsusf_spcs_ocp","USP_IHPS_COV_TAN_OCP","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {};
        respawnWeapons[] = {};

        magazines[] = {};
        respawnMagazines[] = {};

        ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_B_CombatUniform_mcam_vest",{{"FirstAidKit",5}}},{"rhsusf_spcs_ocp",{}},{},"USP_IHPS_COV_TAN_OCP","rhs_ess_black",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'CUP_insignia_75th_ranger'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "CUP_insignia_75th_ranger";

    };

    class us_rg_uav_operator_he : us_rg_worker {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USRG UAV Operator (HE)";
        side = 1;
        faction = "ako_us_rg";

        identityTypes[] = {"Head_NATO","LanguageENG_F"};

        uniformClass = "U_B_CombatUniform_mcam_vest";

        linkedItems[] = {"rhsusf_iotv_ocp_Teamleader","USP_IHPS_COV_CT3_GRN_OCP","ItemMap","B_UavTerminal","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_grn_F"};
        respawnlinkedItems[] = {"rhsusf_iotv_ocp_Teamleader","USP_IHPS_COV_CT3_GRN_OCP","ItemMap","B_UavTerminal","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_grn_F"};

        weapons[] = {"JCA_arifle_M4A1_black_F"};
        respawnWeapons[] = {"JCA_arifle_M4A1_black_F"};

        magazines[] = {"JCA_30Rnd_556x45_PMAG","JCA_30Rnd_556x45_PMAG"};
        respawnMagazines[] = {"JCA_30Rnd_556x45_PMAG","JCA_30Rnd_556x45_PMAG"};

        backpack = "B_UAV_01_backpack_Custom";

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A1_black_F","","rhsusf_acc_anpeq15_bk","rhsusf_acc_ACOG3",{"JCA_30Rnd_556x45_PMAG",30},{},""},{},{},{"U_B_CombatUniform_mcam_vest",{{"FirstAidKit",5}}},{"rhsusf_iotv_ocp_Teamleader",{{"JCA_30Rnd_556x45_PMAG",15,30},{"CUP_HandGrenade_M67",6,1}}},{"B_UAV_01_backpack_Custom",{}},"USP_IHPS_COV_CT3_GRN_OCP","rhs_googles_clear",{},{"ItemMap","B_UavTerminal","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_grn_F"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'CUP_insignia_75th_ranger'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "CUP_insignia_75th_ranger";

    };

    class us_rg_aa_specialist : us_rg_uav_operator_he {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USRG AA Specialist";
        side = 1;
        faction = "ako_us_rg";

        identityTypes[] = {"Head_NATO","LanguageENG_F"};

        uniformClass = "U_B_CombatUniform_mcam_vest";

        linkedItems[] = {"rhsusf_iotv_ocp_Teamleader","USP_IHPS_COV_CT3_GRN_OCP","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_grn_F"};
        respawnlinkedItems[] = {"rhsusf_iotv_ocp_Teamleader","USP_IHPS_COV_CT3_GRN_OCP","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_grn_F"};

        weapons[] = {"JCA_arifle_M16A4_black_F","rhs_weap_fim92"};
        respawnWeapons[] = {"JCA_arifle_M16A4_black_F","rhs_weap_fim92"};

        magazines[] = {"JCA_30Rnd_556x45_sand_PMAG","rhs_fim92_mag","JCA_30Rnd_556x45_sand_PMAG"};
        respawnMagazines[] = {"JCA_30Rnd_556x45_sand_PMAG","rhs_fim92_mag","JCA_30Rnd_556x45_sand_PMAG"};

        backpack = "rhsusf_falconii_mc";

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M16A4_black_F","","rhsusf_acc_anpeq15_light","rhsusf_acc_ACOG3",{"JCA_30Rnd_556x45_sand_PMAG",30},{},""},{"rhs_weap_fim92","","","",{"rhs_fim92_mag",1},{},""},{},{"U_B_CombatUniform_mcam_vest",{{"FirstAidKit",5}}},{"rhsusf_iotv_ocp_Teamleader",{{"CUP_HandGrenade_M67",6,1},{"JCA_30Rnd_556x45_sand_PMAG",15,30}}},{"rhsusf_falconii_mc",{{"rhs_fim92_mag",1,1}}},"USP_IHPS_COV_CT3_GRN_OCP","rhs_ess_black",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_grn_F"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'CUP_insignia_75th_ranger'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "CUP_insignia_75th_ranger";

    };

    class us_rg_at_specialist : us_rg_aa_specialist {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USRG AT Specialist";
        side = 1;
        faction = "ako_us_rg";

        identityTypes[] = {"Head_NATO","LanguageENG_F"};

        uniformClass = "U_B_CombatUniform_mcam";

        linkedItems[] = {"rhsusf_iotv_ocp_Teamleader","USP_IHPS_COV_CT3_GRN_OCP","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_grn_F"};
        respawnlinkedItems[] = {"rhsusf_iotv_ocp_Teamleader","USP_IHPS_COV_CT3_GRN_OCP","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_grn_F"};

        weapons[] = {"JCA_arifle_M16A4_FG_black_F","launch_O_Titan_short_F"};
        respawnWeapons[] = {"JCA_arifle_M16A4_FG_black_F","launch_O_Titan_short_F"};

        magazines[] = {"JCA_30Rnd_556x45_PMAG","Titan_AT","JCA_30Rnd_556x45_PMAG"};
        respawnMagazines[] = {"JCA_30Rnd_556x45_PMAG","Titan_AT","JCA_30Rnd_556x45_PMAG"};

        backpack = "rhsusf_falconii_mc";

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M16A4_FG_black_F","","rhsusf_acc_anpeq15_light","rhsusf_acc_su230a_c",{"JCA_30Rnd_556x45_PMAG",30},{},""},{"launch_O_Titan_short_F","","","",{"Titan_AT",1},{},""},{},{"U_B_CombatUniform_mcam",{{"FirstAidKit",5}}},{"rhsusf_iotv_ocp_Teamleader",{{"CUP_HandGrenade_M67",6,1},{"JCA_30Rnd_556x45_PMAG",15,30}}},{"rhsusf_falconii_mc",{{"Titan_AT",1,1}}},"USP_IHPS_COV_CT3_GRN_OCP","rhs_ess_black",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_grn_F"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'CUP_insignia_75th_ranger'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "CUP_insignia_75th_ranger";

    };

    class us_rg_mortarman_bipod : us_rg_mortarman_gun {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USRG Mortarman (Bipod)";
        side = 1;
        faction = "ako_us_rg";

        identityTypes[] = {"Head_NATO","LanguageENG_F"};

        uniformClass = "U_B_CombatUniform_mcam";

        linkedItems[] = {"rhsusf_spcs_ocp_rifleman_alt","USP_IHPS_COV_TAN","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_grn_F"};
        respawnlinkedItems[] = {"rhsusf_spcs_ocp_rifleman_alt","USP_IHPS_COV_TAN","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_grn_F"};

        weapons[] = {"JCA_arifle_M16A4_black_F"};
        respawnWeapons[] = {"JCA_arifle_M16A4_black_F"};

        magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green"};

        backpack = "rhs_M252_Bipod_Bag";

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M16A4_black_F","","rhsusf_acc_anpeq15_light","rhsusf_acc_su230a_c",{"30Rnd_556x45_Stanag_green",30},{},""},{},{},{"U_B_CombatUniform_mcam",{{"FirstAidKit",5}}},{"rhsusf_spcs_ocp_rifleman_alt",{{"CUP_HandGrenade_M67",6,1},{"30Rnd_556x45_Stanag_green",10,30}}},{"rhs_M252_Bipod_Bag",{}},"USP_IHPS_COV_TAN","rhs_ess_black",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_grn_F"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'CUP_insignia_75th_ranger'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "CUP_insignia_75th_ranger";

    };

    class us_rg_commander : us_rg_mortarman_gun {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USRG Commander";
        side = 1;
        faction = "ako_us_rg";

        identityTypes[] = {"Head_NATO","LanguageENG_F"};

        uniformClass = "U_B_CombatUniform_mcam";

        linkedItems[] = {"rhsusf_iotv_ocp_Rifleman","rhsusf_patrolcap_ocp","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsusf_iotv_ocp_Rifleman","rhsusf_patrolcap_ocp","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A4_AFG_black_F"};
        respawnWeapons[] = {"JCA_arifle_M4A4_AFG_black_F"};

        magazines[] = {"JCA_30Rnd_556x45_Green_PMAG","JCA_30Rnd_556x45_Green_PMAG"};
        respawnMagazines[] = {"JCA_30Rnd_556x45_Green_PMAG","JCA_30Rnd_556x45_Green_PMAG"};

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A4_AFG_black_F","","rhsusf_acc_anpeq15_bk","CUP_optic_CompM2_low",{"JCA_30Rnd_556x45_Green_PMAG",30},{},""},{},{},{"U_B_CombatUniform_mcam",{{"FirstAidKit",5}}},{"rhsusf_iotv_ocp_Rifleman",{{"CUP_HandGrenade_M67",6,1},{"JCA_30Rnd_556x45_PMAG",13,30}}},{},"rhsusf_patrolcap_ocp","G_Aviator",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'CUP_insignia_75th_ranger'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "CUP_insignia_75th_ranger";

    };

    class us_rg_medic : us_rg_officer {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USRG Medic";
        side = 1;
        faction = "ako_us_rg";

        identityTypes[] = {"Head_NATO","LanguageENG_F"};

        uniformClass = "U_B_CombatUniform_mcam_vest";

        linkedItems[] = {"rhsusf_iotv_ocp_Medic","USP_IHPS_COV_CT3_TAN_OCP","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_grn_F"};
        respawnlinkedItems[] = {"rhsusf_iotv_ocp_Medic","USP_IHPS_COV_CT3_TAN_OCP","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_grn_F"};

        weapons[] = {"JCA_arifle_M4A1_short_black_F"};
        respawnWeapons[] = {"JCA_arifle_M4A1_short_black_F"};

        magazines[] = {"30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand"};

        backpack = "B_Carryall_mcamo";

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A1_short_black_F","","rhsusf_acc_anpeq15_light","CUP_optic_CompM2_Black",{"30Rnd_556x45_Stanag_Sand",30},{},""},{},{},{"U_B_CombatUniform_mcam_vest",{{"FirstAidKit",5}}},{"rhsusf_iotv_ocp_Medic",{{"CUP_HandGrenade_M67",3,1},{"30Rnd_556x45_Stanag_Sand",11,30}}},{"B_Carryall_mcamo",{{"Medikit",1},{"FirstAidKit",15}}},"USP_IHPS_COV_CT3_TAN_OCP","rhs_googles_black",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_grn_F"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'CUP_insignia_75th_ranger'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "CUP_insignia_75th_ranger";

    };

    class us_rg_crewman : us_rg_mortarman_gun {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USRG Crewman";
        side = 1;
        faction = "ako_us_rg";

        identityTypes[] = {"Head_NATO","LanguageENG_F"};

        uniformClass = "U_B_CombatUniform_mcam_vest";

        linkedItems[] = {"rhsusf_spcs_ocp_crewman","rhsusf_cvc_helmet","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsusf_spcs_ocp_crewman","rhsusf_cvc_helmet","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A1_short_black_F"};
        respawnWeapons[] = {"JCA_arifle_M4A1_short_black_F"};

        magazines[] = {"30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand"};

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A1_short_black_F","","rhsusf_acc_anpeq15_wmx_light","optic_Holosight",{"30Rnd_556x45_Stanag_Sand",30},{},""},{},{},{"U_B_CombatUniform_mcam_vest",{{"FirstAidKit",5}}},{"rhsusf_spcs_ocp_crewman",{{"30Rnd_556x45_Stanag_Sand",12,30},{"CUP_HandGrenade_M67",4,1}}},{},"rhsusf_cvc_helmet","rhs_ess_black",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'CUP_insignia_75th_ranger'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "CUP_insignia_75th_ranger";

    };

    class us_rg_engineer : us_rg_corporal {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USRG Engineer";
        side = 1;
        faction = "ako_us_rg";

        identityTypes[] = {"Head_NATO","LanguageENG_F"};

        uniformClass = "U_B_CombatUniform_mcam";

        linkedItems[] = {"rhsusf_iotv_ocp_Repair","USP_IHPS_CT3_GRN","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_grn_F"};
        respawnlinkedItems[] = {"rhsusf_iotv_ocp_Repair","USP_IHPS_CT3_GRN","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_grn_F"};

        weapons[] = {"JCA_arifle_M16A4_black_F"};
        respawnWeapons[] = {"JCA_arifle_M16A4_black_F"};

        magazines[] = {"JCA_30Rnd_556x45_PMAG","JCA_30Rnd_556x45_PMAG"};
        respawnMagazines[] = {"JCA_30Rnd_556x45_PMAG","JCA_30Rnd_556x45_PMAG"};

        backpack = "rhsusf_assault_eagleaiii_ocp";

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M16A4_black_F","","rhsusf_acc_anpeq15_bk_light","rhsusf_acc_ACOG3_USMC",{"JCA_30Rnd_556x45_PMAG",30},{},""},{},{},{"U_B_CombatUniform_mcam",{{"FirstAidKit",5}}},{"rhsusf_iotv_ocp_Repair",{{"CUP_HandGrenade_M67",6,1},{"JCA_30Rnd_556x45_PMAG",10,30}}},{"rhsusf_assault_eagleaiii_ocp",{{"ToolKit",2}}},"USP_IHPS_CT3_GRN","rhs_googles_black",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_grn_F"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'CUP_insignia_75th_ranger'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "CUP_insignia_75th_ranger";

    };

    class us_rg_marksman : us_rg_rifleman_mk16 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USRG Marksman";
        side = 1;
        faction = "ako_us_rg";

        identityTypes[] = {"Head_NATO","LanguageENG_F"};

        uniformClass = "U_B_CombatUniform_mcam";

        linkedItems[] = {"rhsusf_iotv_ocp_Rifleman","USP_IHPS_COV_CT3_USA_TAN_OCP","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_grn_F"};
        respawnlinkedItems[] = {"rhsusf_iotv_ocp_Rifleman","USP_IHPS_COV_CT3_USA_TAN_OCP","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_grn_F"};

        weapons[] = {"JCA_arifle_SR10_black_F"};
        respawnWeapons[] = {"JCA_arifle_SR10_black_F"};

        magazines[] = {"JCA_20Rnd_762x51_PMAG","JCA_20Rnd_762x51_PMAG"};
        respawnMagazines[] = {"JCA_20Rnd_762x51_PMAG","JCA_20Rnd_762x51_PMAG"};

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_SR10_black_F","","rhsusf_acc_anpeq15side_bk","JCA_optic_HPPO_RAD_black",{"JCA_20Rnd_762x51_PMAG",20},{},"JCA_bipod_04_black"},{},{},{"U_B_CombatUniform_mcam",{{"FirstAidKit",5}}},{"rhsusf_iotv_ocp_Rifleman",{{"CUP_HandGrenade_M67",2,1},{"JCA_20Rnd_762x51_PMAG",13,20}}},{},"USP_IHPS_COV_CT3_USA_TAN_OCP","rhs_googles_clear",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_grn_F"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'CUP_insignia_75th_ranger'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "CUP_insignia_75th_ranger";

    };

    class us_rg_machine_gunner : us_rg_mortarman_gun {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USRG Machine Gunner";
        side = 1;
        faction = "ako_us_rg";

        identityTypes[] = {"Head_NATO","LanguageENG_F"};

        uniformClass = "U_B_CombatUniform_mcam";

        linkedItems[] = {"rhsusf_iotv_ocp_SAW","USP_IHPS_COV_CT3_GRN_OCP","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_grn_F"};
        respawnlinkedItems[] = {"rhsusf_iotv_ocp_SAW","USP_IHPS_COV_CT3_GRN_OCP","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_grn_F"};

        weapons[] = {"CUP_lmg_M240_B"};
        respawnWeapons[] = {"CUP_lmg_M240_B"};

        magazines[] = {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M"};
        respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M"};

        backpack = "rhsusf_assault_eagleaiii_ocp";

        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_M240_B","","rhsusf_acc_wmx","rhsusf_acc_su230a",{"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",100},{},""},{},{},{"U_B_CombatUniform_mcam",{{"FirstAidKit",5}}},{"rhsusf_iotv_ocp_SAW",{{"FirstAidKit",1},{"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",3,100}}},{"rhsusf_assault_eagleaiii_ocp",{{"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",3,100},{"CUP_HandGrenade_M67",2,1}}},"USP_IHPS_COV_CT3_GRN_OCP","rhs_ess_black",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_grn_F"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'CUP_insignia_75th_ranger'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "CUP_insignia_75th_ranger";

    };

    class us_rg_uav_operator_rpg : us_rg_worker {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USRG UAV Operator (RPG)";
        side = 1;
        faction = "ako_us_rg";

        identityTypes[] = {"Head_NATO","LanguageENG_F"};

        uniformClass = "U_B_CombatUniform_mcam";

        linkedItems[] = {"rhsusf_iotv_ocp_Rifleman","USP_IHPS_CT3_TAN","ItemMap","B_UavTerminal","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_grn_F"};
        respawnlinkedItems[] = {"rhsusf_iotv_ocp_Rifleman","USP_IHPS_CT3_TAN","ItemMap","B_UavTerminal","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_grn_F"};

        weapons[] = {"CUP_arifle_Mk16_STD_AFG"};
        respawnWeapons[] = {"CUP_arifle_Mk16_STD_AFG"};

        magazines[] = {"CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Emag","CUP_30Rnd_556x45_Emag"};

        backpack = "B_UAV_FPV_backpack_F";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_Mk16_STD_AFG","","rhsusf_acc_anpeq15_wmx_light","rhsusf_acc_ACOG_RMR",{"CUP_30Rnd_556x45_Emag",30},{},""},{},{},{"U_B_CombatUniform_mcam",{{"FirstAidKit",5}}},{"rhsusf_iotv_ocp_Rifleman",{{"CUP_HandGrenade_M67",5,1},{"CUP_30Rnd_556x45_Emag",11,30}}},{"B_UAV_FPV_backpack_F",{}},"USP_IHPS_CT3_TAN","rhs_googles_black",{},{"ItemMap","B_UavTerminal","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_grn_F"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'CUP_insignia_75th_ranger'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "CUP_insignia_75th_ranger";

    };

    class us_rg_autorifleman_m249 : us_rg_corporal {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USRG Auto Rifleman";
        side = 1;
        faction = "ako_us_rg";

        identityTypes[] = {"Head_NATO","LanguageENG_F"};

        uniformClass = "U_B_CombatUniform_mcam_vest";

        linkedItems[] = {"rhsusf_iotv_ocp_SAW","USP_IHPS_CT3_GRN","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_grn_F"};
        respawnlinkedItems[] = {"rhsusf_iotv_ocp_SAW","USP_IHPS_CT3_GRN","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_grn_F"};

        weapons[] = {"CUP_lmg_m249_pip2"};
        respawnWeapons[] = {"CUP_lmg_m249_pip2"};

        magazines[] = {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_200Rnd_TE4_Red_Tracer_556x45_M249"};
        respawnMagazines[] = {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_200Rnd_TE4_Red_Tracer_556x45_M249"};

        backpack = "rhsusf_assault_eagleaiii_ocp";

        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_m249_pip2","CUP_muzzle_mfsup_SCAR_L","","rhsusf_acc_ELCAN_ard",{"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",200},{},""},{},{},{"U_B_CombatUniform_mcam_vest",{{"FirstAidKit",5}}},{"rhsusf_iotv_ocp_SAW",{{"CUP_HandGrenade_M67",3,1},{"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",3,200}}},{"rhsusf_assault_eagleaiii_ocp",{{"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",4,200}}},"USP_IHPS_CT3_GRN","rhs_googles_clear",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_grn_F"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'CUP_insignia_75th_ranger'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "CUP_insignia_75th_ranger";

    };

    class us_rg_sniper_m107 : us_rg_rifleman_m4a1 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USRG Sniper (M107)";
        side = 1;
        faction = "AKO_US_RG";

        identityTypes[] = {"Head_NATO","LanguageENG_F"};

        uniformClass = "U_B_FullGhillie_ard";

        linkedItems[] = {"rhsusf_spcs_ocp_saw","USP_IHPS_COV_CT3_USA_TAN_OCP","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_gry_F"};
        respawnlinkedItems[] = {"rhsusf_spcs_ocp_saw","USP_IHPS_COV_CT3_USA_TAN_OCP","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_gry_F"};

        weapons[] = {"CUP_srifle_M107_Pristine"};
        respawnWeapons[] = {"CUP_srifle_M107_Pristine"};

        magazines[] = {"CUP_10Rnd_127x99_M107","CUP_10Rnd_127x99_M107"};
        respawnMagazines[] = {"CUP_10Rnd_127x99_M107","CUP_10Rnd_127x99_M107"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_M107_Pristine","","","JCA_optic_HPPO_RAD_black",{"CUP_10Rnd_127x99_M107",10},{},""},{},{},{"U_B_FullGhillie_ard",{{"FirstAidKit",5},{"CUP_HandGrenade_M67",2,1}}},{"rhsusf_spcs_ocp_saw",{{"CUP_10Rnd_127x99_M107",9,10}}},{},"USP_IHPS_COV_CT3_USA_TAN_OCP","rhs_googles_clear",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGogglesB_gry_F"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'CUP_insignia_75th_ranger'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "CUP_insignia_75th_ranger";

    };

    class us_dvg_operator_m4 : us_rg_sergeant {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "DEVGRU Operator (M4A1)";
        side = 1;
        faction = "ako_us_rg";

        identityTypes[] = {"Head_NATO","LanguageENG_F"};

        uniformClass = "rhs_uniform_g3_rgr";

        linkedItems[] = {"V_CarrierRigKBT_01_heavy_Olive_F","TFV_headgear_opscore_cover_rgr_peltor_nsw","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_GPNVG_black"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_heavy_Olive_F","TFV_headgear_opscore_cover_rgr_peltor_nsw","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_GPNVG_black"};

        weapons[] = {"JCA_arifle_M4A4_AFG_olive_F","rhs_weap_m72a7","CUP_hgun_Mk23","Rangefinder"};
        respawnWeapons[] = {"JCA_arifle_M4A4_AFG_olive_F","rhs_weap_m72a7","CUP_hgun_Mk23","Rangefinder"};

        magazines[] = {"JCA_30Rnd_556x45_Green_PMAG","CUP_12Rnd_45ACP_mk23","JCA_30Rnd_556x45_Green_PMAG","CUP_12Rnd_45ACP_mk23"};
        respawnMagazines[] = {"JCA_30Rnd_556x45_Green_PMAG","CUP_12Rnd_45ACP_mk23","JCA_30Rnd_556x45_Green_PMAG","CUP_12Rnd_45ACP_mk23"};

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A4_AFG_olive_F","rhsusf_acc_SF3P556","rhsusf_acc_anpeq15_bk","rhsusf_acc_compm4",{"JCA_30Rnd_556x45_Green_PMAG",30},{},""},{"rhs_weap_m72a7","","","",{},{},""},{"CUP_hgun_Mk23","","","",{"CUP_12Rnd_45ACP_mk23",12},{},""},{"rhs_uniform_g3_rgr",{{"FirstAidKit",5}}},{"V_CarrierRigKBT_01_heavy_Olive_F",{{"CUP_12Rnd_45ACP_mk23",3,12},{"JCA_30Rnd_556x45_Green_PMAG",10,30},{"rhs_mag_m67",4,1}}},{},"TFV_headgear_opscore_cover_rgr_peltor_nsw","JCA_G_AirPurifyingRespirator_03_olive_tinted_F",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_GPNVG_black"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'CombatPatrol'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "CombatPatrol";

    };

    class us_dvg_operator_mk16 : us_dvg_operator_m4 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "DEVGRU Operator (Mk16)";
        side = 1;
        faction = "ako_us_rg";

        identityTypes[] = {"Head_NATO","LanguageENG_F"};

        uniformClass = "rhs_uniform_g3_rgr";

        linkedItems[] = {"V_CarrierRigKBT_01_heavy_Olive_F","TFV_headgear_opscore_cover_rgr_peltor_nsw","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_GPNVG_black"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_heavy_Olive_F","TFV_headgear_opscore_cover_rgr_peltor_nsw","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_GPNVG_black"};

        weapons[] = {"CUP_arifle_Mk16_CQC_EGLM_woodland","CUP_hgun_Mk23","Rangefinder"};
        respawnWeapons[] = {"CUP_arifle_Mk16_CQC_EGLM_woodland","CUP_hgun_Mk23","Rangefinder"};

        magazines[] = {"CUP_30Rnd_556x45_Stanag_Mk16_woodland","CUP_1Rnd_HE_M203","CUP_12Rnd_45ACP_mk23","CUP_30Rnd_556x45_Stanag_Mk16_woodland","CUP_1Rnd_HE_M203","CUP_12Rnd_45ACP_mk23"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag_Mk16_woodland","CUP_1Rnd_HE_M203","CUP_12Rnd_45ACP_mk23","CUP_30Rnd_556x45_Stanag_Mk16_woodland","CUP_1Rnd_HE_M203","CUP_12Rnd_45ACP_mk23"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_Mk16_CQC_EGLM_woodland","","rhsusf_acc_anpeq15_bk","rhsusf_acc_g33_xps3",{"CUP_30Rnd_556x45_Stanag_Mk16_woodland",30},{"CUP_1Rnd_HE_M203",1},""},{},{"CUP_hgun_Mk23","","","",{"CUP_12Rnd_45ACP_mk23",12},{},""},{"rhs_uniform_g3_rgr",{{"FirstAidKit",5}}},{"V_CarrierRigKBT_01_heavy_Olive_F",{{"CUP_12Rnd_45ACP_mk23",3,12},{"CUP_30Rnd_556x45_Stanag_Mk16_woodland",10,30},{"CUP_1Rnd_HE_M203",7,1}}},{},"TFV_headgear_opscore_cover_rgr_peltor_nsw","JCA_G_AirPurifyingRespirator_03_olive_tinted_F",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_GPNVG_black"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'CombatPatrol'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "CombatPatrol";

    };

    class us_dvg_operator_mk17 : us_dvg_operator_mk16 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "DEVGRU Operator (Mk17)";
        side = 1;
        faction = "ako_us_rg";

        identityTypes[] = {"Head_NATO","LanguageENG_F"};

        uniformClass = "rhs_uniform_g3_rgr";

        linkedItems[] = {"V_CarrierRigKBT_01_heavy_Olive_F","TFV_headgear_opscore_cover_rgr_peltor_nsw","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_GPNVG_black"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_heavy_Olive_F","TFV_headgear_opscore_cover_rgr_peltor_nsw","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_GPNVG_black"};

        weapons[] = {"CUP_arifle_Mk17_CQC_SFG_woodland","rhs_weap_m72a7","CUP_hgun_Mk23","Rangefinder"};
        respawnWeapons[] = {"CUP_arifle_Mk17_CQC_SFG_woodland","rhs_weap_m72a7","CUP_hgun_Mk23","Rangefinder"};

        magazines[] = {"CUP_20Rnd_762x51_B_SCAR_wdl","CUP_12Rnd_45ACP_mk23","CUP_20Rnd_762x51_B_SCAR_wdl","CUP_12Rnd_45ACP_mk23"};
        respawnMagazines[] = {"CUP_20Rnd_762x51_B_SCAR_wdl","CUP_12Rnd_45ACP_mk23","CUP_20Rnd_762x51_B_SCAR_wdl","CUP_12Rnd_45ACP_mk23"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_Mk17_CQC_SFG_woodland","","rhsusf_acc_anpeq15side_bk","rhsusf_acc_ACOG_RMR",{"CUP_20Rnd_762x51_B_SCAR_wdl",20},{},""},{"rhs_weap_m72a7","","","",{},{},""},{"CUP_hgun_Mk23","","","",{"CUP_12Rnd_45ACP_mk23",12},{},""},{"rhs_uniform_g3_rgr",{{"FirstAidKit",5}}},{"V_CarrierRigKBT_01_heavy_Olive_F",{{"CUP_12Rnd_45ACP_mk23",3,12},{"CUP_20Rnd_762x51_B_SCAR_wdl",9,20}}},{},"TFV_headgear_opscore_cover_rgr_peltor_nsw","JCA_G_AirPurifyingRespirator_03_olive_tinted_F",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_GPNVG_black"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'CombatPatrol'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "CombatPatrol";

    };

    class us_dvg_operator_mk48 : us_dvg_operator_m4 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "DEVGRU Operator (Mk48)";
        side = 1;
        faction = "ako_us_rg";

        identityTypes[] = {"Head_NATO","LanguageENG_F"};

        uniformClass = "rhs_uniform_g3_rgr";

        linkedItems[] = {"V_CarrierRigKBT_01_heavy_Olive_F","TFV_headgear_opscore_cover_rgr_peltor_nsw","ItemMap","B_UavTerminal","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_GPNVG_black"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_heavy_Olive_F","TFV_headgear_opscore_cover_rgr_peltor_nsw","ItemMap","B_UavTerminal","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_GPNVG_black"};

        weapons[] = {"CUP_lmg_Mk48_nohg_od","Rangefinder"};
        respawnWeapons[] = {"CUP_lmg_Mk48_nohg_od","Rangefinder"};

        magazines[] = {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"};
        respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"};

        backpack = "rhsusf_falconii";

        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_Mk48_nohg_od","","rhsusf_acc_wmx_bk","rhsusf_acc_eotech_xps3",{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",100},{},""},{},{},{"rhs_uniform_g3_rgr",{{"FirstAidKit",5}}},{"V_CarrierRigKBT_01_heavy_Olive_F",{{"FirstAidKit",4},{"rhs_mag_m67",4,1},{"DemoCharge_Remote_Mag",1,1}}},{"rhsusf_falconii",{{"FirstAidKit",3},{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",3,100}}},"TFV_headgear_opscore_cover_rgr_peltor_nsw","JCA_G_AirPurifyingRespirator_03_olive_clear_F",{"Rangefinder","","","",{},{},""},{"ItemMap","B_UavTerminal","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_GPNVG_black"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'CombatPatrol'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "CombatPatrol";

    };

    class us_dvg_operator_sr10 : us_dvg_operator_m4 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "DEVGRU Operator (SR10)";
        side = 1;
        faction = "ako_us_rg";

        identityTypes[] = {"Head_NATO","LanguageENG_F"};

        uniformClass = "rhs_uniform_g3_rgr";

        linkedItems[] = {"V_CarrierRigKBT_01_heavy_Olive_F","TFV_headgear_opscore_cover_rgr_peltor_nsw","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_GPNVG_black"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_heavy_Olive_F","TFV_headgear_opscore_cover_rgr_peltor_nsw","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_GPNVG_black"};

        weapons[] = {"JCA_arifle_SR10_olive_F","Rangefinder"};
        respawnWeapons[] = {"JCA_arifle_SR10_olive_F","Rangefinder"};

        magazines[] = {"JCA_20Rnd_762x51_PMAG","JCA_20Rnd_762x51_PMAG"};
        respawnMagazines[] = {"JCA_20Rnd_762x51_PMAG","JCA_20Rnd_762x51_PMAG"};

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_SR10_olive_F","","rhsusf_acc_anpeq15_bk","JCA_optic_MRPS_olive",{"JCA_20Rnd_762x51_PMAG",20},{},"JCA_bipod_04_olive"},{},{},{"rhs_uniform_g3_rgr",{{"FirstAidKit",5}}},{"V_CarrierRigKBT_01_heavy_Olive_F",{{"rhs_mag_m67",4,1},{"JCA_20Rnd_762x51_PMAG",10,20}}},{},"TFV_headgear_opscore_cover_rgr_peltor_nsw","JCA_G_AirPurifyingRespirator_03_olive_tinted_F",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_GPNVG_black"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'CombatPatrol'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "CombatPatrol";

    };

    class us_dvg_sniper_awm : us_dvg_operator_sr10 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "DEVGRU Sniper (AWM)";
        side = 1;
        faction = "ako_us_rg";

        identityTypes[] = {"Head_NATO","LanguageENG_F"};

        uniformClass = "rhs_uniform_g3_rgr";

        linkedItems[] = {"V_CarrierRigKBT_01_heavy_Olive_F","TFV_headgear_opscore_cover_rgr_peltor_nsw","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_GPNVG_black"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_heavy_Olive_F","TFV_headgear_opscore_cover_rgr_peltor_nsw","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_GPNVG_black"};

        weapons[] = {"JCA_srifle_AWM_olive_F","Rangefinder"};
        respawnWeapons[] = {"JCA_srifle_AWM_olive_F","Rangefinder"};

        magazines[] = {"JCA_5Rnd_338LM_Mag","JCA_5Rnd_338LM_Mag"};
        respawnMagazines[] = {"JCA_5Rnd_338LM_Mag","JCA_5Rnd_338LM_Mag"};

        ALiVE_orbatCreator_loadout[] = {{"JCA_srifle_AWM_olive_F","","","JCA_optic_HPPO_RAD_olive",{"JCA_5Rnd_338LM_Mag",5},{},"JCA_bipod_AWM_black"},{},{},{"rhs_uniform_g3_rgr",{{"FirstAidKit",5}}},{"V_CarrierRigKBT_01_heavy_Olive_F",{{"FirstAidKit",3},{"rhs_mag_m67",4,1},{"JCA_5Rnd_338LM_Mag",8,5}}},{},"TFV_headgear_opscore_cover_rgr_peltor_nsw","JCA_G_AirPurifyingRespirator_03_olive_clear_F",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_GPNVG_black"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'CombatPatrol'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "CombatPatrol";

    };

    class us_dvg_uav_operator : us_dvg_operator_m4 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "DEVGRU UAV Operator";
        side = 1;
        faction = "ako_us_rg";

        identityTypes[] = {"Head_NATO","LanguageENG_F"};

        uniformClass = "rhs_uniform_g3_rgr";

        linkedItems[] = {"V_CarrierRigKBT_01_heavy_Olive_F","TFV_headgear_opscore_cover_rgr_peltor_nsw","ItemMap","B_UavTerminal","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_GPNVG_black"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_heavy_Olive_F","TFV_headgear_opscore_cover_rgr_peltor_nsw","ItemMap","B_UavTerminal","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_GPNVG_black"};

        weapons[] = {"JCA_arifle_M4A1_short_olive_F","CUP_hgun_Mk23","Rangefinder"};
        respawnWeapons[] = {"JCA_arifle_M4A1_short_olive_F","CUP_hgun_Mk23","Rangefinder"};

        magazines[] = {"30Rnd_556x45_Stanag_green","CUP_12Rnd_45ACP_mk23","30Rnd_556x45_Stanag_green","CUP_12Rnd_45ACP_mk23"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_green","CUP_12Rnd_45ACP_mk23","30Rnd_556x45_Stanag_green","CUP_12Rnd_45ACP_mk23"};

        backpack = "B_UAV_01_backpack_Custom";

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A1_short_olive_F","rhsusf_acc_SF3P556","rhsusf_acc_anpeq15_bk","rhsusf_acc_eotech_xps3",{"30Rnd_556x45_Stanag_green",30},{},""},{},{"CUP_hgun_Mk23","","","",{"CUP_12Rnd_45ACP_mk23",12},{},""},{"rhs_uniform_g3_rgr",{{"FirstAidKit",5}}},{"V_CarrierRigKBT_01_heavy_Olive_F",{{"CUP_12Rnd_45ACP_mk23",3,12},{"rhs_mag_m67",4,1},{"DemoCharge_Remote_Mag",1,1},{"30Rnd_556x45_Stanag_green",6,30}}},{"B_UAV_01_backpack_Custom",{}},"TFV_headgear_opscore_cover_rgr_peltor_nsw","JCA_G_AirPurifyingRespirator_03_olive_tinted_F",{"Rangefinder","","","",{},{},""},{"ItemMap","B_UavTerminal","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_GPNVG_black"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'CombatPatrol'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "CombatPatrol";

    };

    class us_dvg_heli_pilot : us_dvg_operator_m4 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "DEVGRU Helicopter Pilot";
        side = 1;
        faction = "ako_us_rg";

        identityTypes[] = {"Head_NATO","LanguageENG_F"};

        uniformClass = "rhs_uniform_g3_rgr";

        linkedItems[] = {"V_CarrierRigKBT_01_heavy_Olive_F","rhsusf_hgu56p_green","ItemMap","B_UavTerminal","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_GPNVG_black"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_heavy_Olive_F","rhsusf_hgu56p_green","ItemMap","B_UavTerminal","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_GPNVG_black"};

        weapons[] = {"JCA_arifle_M4A1_short_olive_F","CUP_hgun_Mk23","Rangefinder"};
        respawnWeapons[] = {"JCA_arifle_M4A1_short_olive_F","CUP_hgun_Mk23","Rangefinder"};

        magazines[] = {"30Rnd_556x45_Stanag_green","CUP_12Rnd_45ACP_mk23","30Rnd_556x45_Stanag_green","CUP_12Rnd_45ACP_mk23"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_green","CUP_12Rnd_45ACP_mk23","30Rnd_556x45_Stanag_green","CUP_12Rnd_45ACP_mk23"};

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A1_short_olive_F","rhsusf_acc_SF3P556","rhsusf_acc_anpeq15_bk","rhsusf_acc_eotech_xps3",{"30Rnd_556x45_Stanag_green",30},{},""},{},{"CUP_hgun_Mk23","","","",{"CUP_12Rnd_45ACP_mk23",12},{},""},{"rhs_uniform_g3_rgr",{{"FirstAidKit",5}}},{"V_CarrierRigKBT_01_heavy_Olive_F",{{"CUP_12Rnd_45ACP_mk23",3,12},{"rhs_mag_m67",4,1},{"DemoCharge_Remote_Mag",1,1},{"30Rnd_556x45_Stanag_green",6,30}}},{},"rhsusf_hgu56p_green","JCA_G_AirPurifyingRespirator_03_olive_clear_F",{"Rangefinder","","","",{},{},""},{"ItemMap","B_UavTerminal","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_GPNVG_black"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'CombatPatrol'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "CombatPatrol";

    };