
    class rhsusf_army_ocp_arb_squadleader;
    class rhsusf_army_ocp_arb_squadleader_OCimport_01 : rhsusf_army_ocp_arb_squadleader { scope = 0; class EventHandlers; };
    class rhsusf_army_ocp_arb_squadleader_OCimport_02 : rhsusf_army_ocp_arb_squadleader_OCimport_01 { class EventHandlers; };

    class us_rg_rifleman_m4 : rhsusf_army_ocp_arb_squadleader_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USRG Rifleman (M4A1)";
        side = 1;
        faction = "ako_us_rg";
        subCategory = "Infantry";

        identityTypes[] = {"Head_NATO","LanguageENG_F"};

        uniformClass = "rhs_uniform_acu_oefcp";

        linkedItems[] = {"rhsusf_iotv_ocp_Teamleader","TFV_headgear_opscore_cover_mc_peltor_nsw","ItemMap","ItemGPS","rhsusf_radio_anprc152","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsusf_iotv_ocp_Teamleader","TFV_headgear_opscore_cover_mc_peltor_nsw","ItemMap","ItemGPS","rhsusf_radio_anprc152","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A4_VFG_sand_F"};
        respawnWeapons[] = {"JCA_arifle_M4A4_VFG_sand_F"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A4_VFG_sand_F","rhsusf_acc_SFMB556","rhsusf_acc_anpeq15_bk","rhsusf_acc_eotech_xps3",{"30Rnd_556x45_Stanag",30},{},""},{},{},{"rhs_uniform_acu_oefcp",{{"FirstAidKit",5}}},{"rhsusf_iotv_ocp_Teamleader",{{"FirstAidKit",1},{"rhs_mag_m67",5,1},{"30Rnd_556x45_Stanag",12,30}}},{},"TFV_headgear_opscore_cover_mc_peltor_nsw","rhs_ess_black",{},{"ItemMap","ItemGPS","rhsusf_radio_anprc152","ItemCompass","ItemWatch",""}};


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

    class us_rg_sergeant : us_rg_rifleman_m4 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USRG Sergeant";
        side = 1;
        faction = "ako_us_rg";

        identityTypes[] = {"Head_NATO","LanguageENG_F"};

        uniformClass = "rhs_uniform_acu_oefcp";

        linkedItems[] = {"rhsusf_iotv_ocp_Squadleader","TFV_headgear_opscore_cover_mc_peltor_camera","ItemMap","B_UavTerminal","rhsusf_radio_anprc152","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsusf_iotv_ocp_Squadleader","TFV_headgear_opscore_cover_mc_peltor_camera","ItemMap","B_UavTerminal","rhsusf_radio_anprc152","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A4_AFG_sand_F","rhs_weap_M136"};
        respawnWeapons[] = {"JCA_arifle_M4A4_AFG_sand_F","rhs_weap_M136"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A4_AFG_sand_F","rhsusf_acc_SFMB556","rhsusf_acc_anpeq15_bk","rhsusf_acc_compm4",{"30Rnd_556x45_Stanag",30},{},""},{"rhs_weap_M136","","","",{},{},""},{},{"rhs_uniform_acu_oefcp",{{"FirstAidKit",5}}},{"rhsusf_iotv_ocp_Squadleader",{{"FirstAidKit",2},{"30Rnd_556x45_Stanag",12,30},{"rhs_mag_m67",4,1}}},{},"TFV_headgear_opscore_cover_mc_peltor_camera","rhs_ess_black",{},{"ItemMap","B_UavTerminal","rhsusf_radio_anprc152","ItemCompass","ItemWatch",""}};


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

    class us_rg_rifleman_mk16 : us_rg_rifleman_m4 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USRG Rifleman (Mk16)";
        side = 1;
        faction = "ako_us_rg";

        identityTypes[] = {"Head_NATO","LanguageENG_F"};

        uniformClass = "rhs_uniform_acu_oefcp";

        linkedItems[] = {"rhsusf_iotv_ocp_Teamleader","TFV_headgear_opscore_peltor_nsw","ItemMap","ItemGPS","rhsusf_radio_anprc152","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsusf_iotv_ocp_Teamleader","TFV_headgear_opscore_peltor_nsw","ItemMap","ItemGPS","rhsusf_radio_anprc152","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_Mk16_CQC"};
        respawnWeapons[] = {"CUP_arifle_Mk16_CQC"};

        magazines[] = {"CUP_30Rnd_556x45_Stanag_Mk16","CUP_30Rnd_556x45_Stanag_Mk16"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag_Mk16","CUP_30Rnd_556x45_Stanag_Mk16"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_Mk16_CQC","rhsusf_acc_SFMB556","rhsusf_acc_anpeq15side","rhsusf_acc_su230a_mrds_c",{"CUP_30Rnd_556x45_Stanag_Mk16",30},{},""},{},{},{"rhs_uniform_acu_oefcp",{{"FirstAidKit",5}}},{"rhsusf_iotv_ocp_Teamleader",{{"FirstAidKit",2},{"rhs_mag_m67",4,1},{"CUP_30Rnd_556x45_Stanag_Mk16",12,30}}},{},"TFV_headgear_opscore_peltor_nsw","rhs_ess_black",{},{"ItemMap","ItemGPS","rhsusf_radio_anprc152","ItemCompass","ItemWatch",""}};


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

        uniformClass = "rhs_uniform_acu_oefcp";

        linkedItems[] = {"rhsusf_iotv_ocp_Teamleader","TFV_headgear_opscore_cover_mc_peltor_camera","ItemMap","ItemGPS","rhsusf_radio_anprc152","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsusf_iotv_ocp_Teamleader","TFV_headgear_opscore_cover_mc_peltor_camera","ItemMap","ItemGPS","rhsusf_radio_anprc152","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_Mk17_STD_SFG"};
        respawnWeapons[] = {"CUP_arifle_Mk17_STD_SFG"};

        magazines[] = {"CUP_20Rnd_762x51_B_SCAR_bkl","CUP_20Rnd_762x51_B_SCAR_bkl"};
        respawnMagazines[] = {"CUP_20Rnd_762x51_B_SCAR_bkl","CUP_20Rnd_762x51_B_SCAR_bkl"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_Mk17_STD_SFG","","rhsusf_acc_anpeq15side","rhsusf_acc_ACOG_RMR",{"CUP_20Rnd_762x51_B_SCAR_bkl",20},{},""},{},{},{"rhs_uniform_acu_oefcp",{{"FirstAidKit",5}}},{"rhsusf_iotv_ocp_Teamleader",{{"rhs_mag_m67",4,1},{"CUP_20Rnd_762x51_B_SCAR_bkl",9,20}}},{},"TFV_headgear_opscore_cover_mc_peltor_camera","rhs_googles_black",{},{"ItemMap","ItemGPS","rhsusf_radio_anprc152","ItemCompass","ItemWatch",""}};


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

        uniformClass = "rhs_uniform_acu_oefcp";

        linkedItems[] = {"rhsusf_iotv_ocp_Grenadier","TFV_headgear_opscore_cover_mc_peltor_nsw","ItemMap","ItemGPS","rhsusf_radio_anprc152","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsusf_iotv_ocp_Grenadier","TFV_headgear_opscore_cover_mc_peltor_nsw","ItemMap","ItemGPS","rhsusf_radio_anprc152","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A4_GL_sand_F","rhs_weap_m72a7","Rangefinder"};
        respawnWeapons[] = {"JCA_arifle_M4A4_GL_sand_F","rhs_weap_m72a7","Rangefinder"};

        magazines[] = {"30Rnd_556x45_Stanag","1Rnd_HE_Grenade_shell","30Rnd_556x45_Stanag","1Rnd_HE_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","1Rnd_HE_Grenade_shell","30Rnd_556x45_Stanag","1Rnd_HE_Grenade_shell"};

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A4_GL_sand_F","rhsusf_acc_SFMB556","rhsusf_acc_anpeq15_bk","rhsusf_acc_eotech_xps3",{"30Rnd_556x45_Stanag",30},{"1Rnd_HE_Grenade_shell",1},""},{"rhs_weap_m72a7","","","",{},{},""},{},{"rhs_uniform_acu_oefcp",{{"FirstAidKit",5}}},{"rhsusf_iotv_ocp_Grenadier",{{"30Rnd_556x45_Stanag",11,30},{"1Rnd_HE_Grenade_shell",13,1}}},{},"TFV_headgear_opscore_cover_mc_peltor_nsw","rhs_ess_black",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemGPS","rhsusf_radio_anprc152","ItemCompass","ItemWatch",""}};


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

    class us_rg_auto_rifleman : us_rg_corporal {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USRG Auto Rifleman";
        side = 1;
        faction = "ako_us_rg";

        identityTypes[] = {"Head_NATO","LanguageENG_F"};

        uniformClass = "rhs_uniform_acu_oefcp";

        linkedItems[] = {"rhsusf_iotv_ocp_SAW","TFV_headgear_opscore_cover_mc_peltor_camera","ItemMap","ItemGPS","rhsusf_radio_anprc152","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsusf_iotv_ocp_SAW","TFV_headgear_opscore_cover_mc_peltor_camera","ItemMap","ItemGPS","rhsusf_radio_anprc152","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_lmg_m249_pip2"};
        respawnWeapons[] = {"CUP_lmg_m249_pip2"};

        magazines[] = {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_200Rnd_TE4_Red_Tracer_556x45_M249"};
        respawnMagazines[] = {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_200Rnd_TE4_Red_Tracer_556x45_M249"};

        backpack = "rhsusf_falconii_mc";

        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_m249_pip2","","","rhsusf_acc_M2A1",{"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",200},{},""},{},{},{"rhs_uniform_acu_oefcp",{{"FirstAidKit",5}}},{"rhsusf_iotv_ocp_SAW",{{"FirstAidKit",4},{"rhs_mag_m67",4,1},{"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",2,200}}},{"rhsusf_falconii_mc",{{"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",4,200}}},"TFV_headgear_opscore_cover_mc_peltor_camera","rhs_ess_black",{},{"ItemMap","ItemGPS","rhsusf_radio_anprc152","ItemCompass","ItemWatch",""}};


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

        uniformClass = "rhs_uniform_acu_oefcp";

        linkedItems[] = {"rhsusf_iotv_ocp_Teamleader","TFV_headgear_opscore_peltor_nsw","ItemMap","ItemGPS","rhsusf_radio_anprc152","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsusf_iotv_ocp_Teamleader","TFV_headgear_opscore_peltor_nsw","ItemMap","ItemGPS","rhsusf_radio_anprc152","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A4_VFG_sand_F"};
        respawnWeapons[] = {"JCA_arifle_M4A4_VFG_sand_F"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};

        backpack = "rhs_M252_Gun_Bag";

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A4_VFG_sand_F","rhsusf_acc_SFMB556","rhsusf_acc_anpeq15_bk","rhsusf_acc_eotech_xps3",{"30Rnd_556x45_Stanag",30},{},""},{},{},{"rhs_uniform_acu_oefcp",{{"FirstAidKit",5}}},{"rhsusf_iotv_ocp_Teamleader",{{"FirstAidKit",4},{"rhs_mag_m67",4,1},{"30Rnd_556x45_Stanag",10,30}}},{"rhs_M252_Gun_Bag",{}},"TFV_headgear_opscore_peltor_nsw","rhs_googles_clear",{},{"ItemMap","ItemGPS","rhsusf_radio_anprc152","ItemCompass","ItemWatch",""}};


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

        uniformClass = "rhs_uniform_acu_oefcp";

        linkedItems[] = {"rhsusf_iotv_ocp_Teamleader","TFV_headgear_opscore_cover_mc_peltor","ItemMap","ItemGPS","rhsusf_radio_anprc152","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsusf_iotv_ocp_Teamleader","TFV_headgear_opscore_cover_mc_peltor","ItemMap","ItemGPS","rhsusf_radio_anprc152","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A4_VFG_sand_F"};
        respawnWeapons[] = {"JCA_arifle_M4A4_VFG_sand_F"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};

        backpack = "rhs_M252_Bipod_Bag";

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A4_VFG_sand_F","rhsusf_acc_SFMB556","rhsusf_acc_anpeq15_bk","rhsusf_acc_eotech_xps3",{"30Rnd_556x45_Stanag",30},{},""},{},{},{"rhs_uniform_acu_oefcp",{{"FirstAidKit",5}}},{"rhsusf_iotv_ocp_Teamleader",{{"FirstAidKit",2},{"rhs_mag_m67",4,1},{"30Rnd_556x45_Stanag",12,30}}},{"rhs_M252_Bipod_Bag",{}},"TFV_headgear_opscore_cover_mc_peltor","rhs_googles_black",{},{"ItemMap","ItemGPS","rhsusf_radio_anprc152","ItemCompass","ItemWatch",""}};


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

        uniformClass = "rhs_uniform_acu_oefcp";

        linkedItems[] = {"rhsusf_iotv_ocp_Repair","rhsusf_patrolcap_ocp","ItemMap","ItemGPS","rhsusf_radio_anprc152","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsusf_iotv_ocp_Repair","rhsusf_patrolcap_ocp","ItemMap","ItemGPS","rhsusf_radio_anprc152","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A1_short_sand_F","Laserdesignator"};
        respawnWeapons[] = {"JCA_arifle_M4A1_short_sand_F","Laserdesignator"};

        magazines[] = {"30Rnd_556x45_Stanag","Laserbatteries","30Rnd_556x45_Stanag","Laserbatteries"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","Laserbatteries","30Rnd_556x45_Stanag","Laserbatteries"};

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A1_short_sand_F","rhsusf_acc_SFMB556","rhsusf_acc_anpeq15_bk","rhsusf_acc_eotech_xps3",{"30Rnd_556x45_Stanag",30},{},""},{},{},{"rhs_uniform_acu_oefcp",{{"FirstAidKit",5}}},{"rhsusf_iotv_ocp_Repair",{{"30Rnd_556x45_Stanag",10,30},{"rhs_mag_m67",4,1}}},{},"rhsusf_patrolcap_ocp","G_Aviator",{"Laserdesignator","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","rhsusf_radio_anprc152","ItemCompass","ItemWatch",""}};


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

        uniformClass = "rhs_uniform_acu_oefcp";

        linkedItems[] = {"rhsusf_iotv_ocp_Medic","TFV_headgear_opscore_cover_mc_peltor_nsw","ItemMap","ItemGPS","rhsusf_radio_anprc152","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsusf_iotv_ocp_Medic","TFV_headgear_opscore_cover_mc_peltor_nsw","ItemMap","ItemGPS","rhsusf_radio_anprc152","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A4_VFG_sand_F"};
        respawnWeapons[] = {"JCA_arifle_M4A4_VFG_sand_F"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};

        backpack = "rhsusf_falconii_mc";

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A4_VFG_sand_F","rhsusf_acc_SFMB556","rhsusf_acc_anpeq15_bk","rhsusf_acc_eotech_xps3",{"30Rnd_556x45_Stanag",30},{},""},{},{},{"rhs_uniform_acu_oefcp",{{"FirstAidKit",5}}},{"rhsusf_iotv_ocp_Medic",{{"rhs_mag_m67",4,1},{"30Rnd_556x45_Stanag",10,30}}},{"rhsusf_falconii_mc",{{"Medikit",1},{"FirstAidKit",10}}},"TFV_headgear_opscore_cover_mc_peltor_nsw","rhs_googles_clear",{},{"ItemMap","ItemGPS","rhsusf_radio_anprc152","ItemCompass","ItemWatch",""}};


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

        uniformClass = "rhs_uniform_acu_oefcp";

        linkedItems[] = {"rhsusf_iotv_ocp_Teamleader","rhsusf_cvc_helmet","ItemMap","ItemGPS","rhsusf_radio_anprc152","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsusf_iotv_ocp_Teamleader","rhsusf_cvc_helmet","ItemMap","ItemGPS","rhsusf_radio_anprc152","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A1_short_sand_F"};
        respawnWeapons[] = {"JCA_arifle_M4A1_short_sand_F"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A1_short_sand_F","rhsusf_acc_SFMB556","","rhsusf_acc_EOTECH",{"30Rnd_556x45_Stanag",30},{},""},{},{},{"rhs_uniform_acu_oefcp",{{"FirstAidKit",5}}},{"rhsusf_iotv_ocp_Teamleader",{{"rhs_mag_m67",4,1},{"30Rnd_556x45_Stanag",11,30},{"DemoCharge_Remote_Mag",1,1}}},{},"rhsusf_cvc_helmet","rhs_ess_black",{},{"ItemMap","ItemGPS","rhsusf_radio_anprc152","ItemCompass","ItemWatch",""}};


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

        uniformClass = "rhs_uniform_acu_oefcp";

        linkedItems[] = {"rhsusf_iotv_ocp_Medic","TFV_headgear_opscore_peltor_camera","ItemMap","ItemGPS","rhsusf_radio_anprc152","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsusf_iotv_ocp_Medic","TFV_headgear_opscore_peltor_camera","ItemMap","ItemGPS","rhsusf_radio_anprc152","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A4_VFG_sand_F"};
        respawnWeapons[] = {"JCA_arifle_M4A4_VFG_sand_F"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};

        backpack = "rhsusf_assault_eagleaiii_ocp";

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A4_VFG_sand_F","rhsusf_acc_SFMB556","rhsusf_acc_anpeq15_bk","rhsusf_acc_compm4",{"30Rnd_556x45_Stanag",30},{},""},{},{},{"rhs_uniform_acu_oefcp",{{"FirstAidKit",5}}},{"rhsusf_iotv_ocp_Medic",{{"rhs_mag_m67",4,1},{"30Rnd_556x45_Stanag",10,30}}},{"rhsusf_assault_eagleaiii_ocp",{{"ToolKit",3}}},"TFV_headgear_opscore_peltor_camera","rhs_ess_black",{},{"ItemMap","ItemGPS","rhsusf_radio_anprc152","ItemCompass","ItemWatch",""}};


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

        uniformClass = "rhs_uniform_acu_oefcp";

        linkedItems[] = {"rhsusf_iotv_ocp_Teamleader","TFV_headgear_opscore_cover_mc_peltor_camera","ItemMap","ItemGPS","rhsusf_radio_anprc152","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsusf_iotv_ocp_Teamleader","TFV_headgear_opscore_cover_mc_peltor_camera","ItemMap","ItemGPS","rhsusf_radio_anprc152","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_SR10_sand_F","Rangefinder"};
        respawnWeapons[] = {"JCA_arifle_SR10_sand_F","Rangefinder"};

        magazines[] = {"JCA_20Rnd_762x51_PMAG","JCA_20Rnd_762x51_PMAG"};
        respawnMagazines[] = {"JCA_20Rnd_762x51_PMAG","JCA_20Rnd_762x51_PMAG"};

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_SR10_sand_F","","rhsusf_acc_wmx_bk","rhsusf_acc_M8541",{"JCA_20Rnd_762x51_PMAG",20},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"rhs_uniform_acu_oefcp",{{"FirstAidKit",5}}},{"rhsusf_iotv_ocp_Teamleader",{{"rhs_mag_m67",4,1},{"JCA_20Rnd_762x51_PMAG",12,20}}},{},"TFV_headgear_opscore_cover_mc_peltor_camera","rhs_googles_clear",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemGPS","rhsusf_radio_anprc152","ItemCompass","ItemWatch",""}};


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

        uniformClass = "rhs_uniform_acu_oefcp";

        linkedItems[] = {"rhsusf_iotv_ocp_SAW","TFV_headgear_opscore_cover_mc_peltor","ItemMap","ItemGPS","rhsusf_radio_anprc152","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsusf_iotv_ocp_SAW","TFV_headgear_opscore_cover_mc_peltor","ItemMap","ItemGPS","rhsusf_radio_anprc152","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_lmg_M240_B"};
        respawnWeapons[] = {"CUP_lmg_M240_B"};

        magazines[] = {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M"};
        respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M"};

        backpack = "rhsusf_falconii_mc";

        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_M240_B","","","rhsusf_acc_su230",{"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",100},{},""},{},{},{"rhs_uniform_acu_oefcp",{{"FirstAidKit",5}}},{"rhsusf_iotv_ocp_SAW",{{"FirstAidKit",3},{"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",2,100},{"rhs_mag_m67",4,1}}},{"rhsusf_falconii_mc",{{"FirstAidKit",3},{"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",3,100}}},"TFV_headgear_opscore_cover_mc_peltor","rhs_googles_black",{},{"ItemMap","ItemGPS","rhsusf_radio_anprc152","ItemCompass","ItemWatch",""}};


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

    class us_rg_helicopter_pilot : us_rg_jet_pilot {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USRG Helicopter Pilot";
        side = 1;
        faction = "ako_us_rg";

        identityTypes[] = {"Head_NATO","LanguageENG_F"};

        uniformClass = "rhs_uniform_acu_oefcp";

        linkedItems[] = {"rhsusf_iotv_ocp_Teamleader","rhsusf_hgu56p_tan","ItemMap","ItemGPS","rhsusf_radio_anprc152","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsusf_iotv_ocp_Teamleader","rhsusf_hgu56p_tan","ItemMap","ItemGPS","rhsusf_radio_anprc152","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A1_short_sand_F"};
        respawnWeapons[] = {"JCA_arifle_M4A1_short_sand_F"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A1_short_sand_F","rhsusf_acc_SFMB556","","rhsusf_acc_EOTECH",{"30Rnd_556x45_Stanag",30},{},""},{},{},{"rhs_uniform_acu_oefcp",{{"FirstAidKit",5}}},{"rhsusf_iotv_ocp_Teamleader",{{"rhs_mag_m67",4,1},{"30Rnd_556x45_Stanag",11,30},{"DemoCharge_Remote_Mag",1,1}}},{},"rhsusf_hgu56p_tan","G_Aviator",{},{"ItemMap","ItemGPS","rhsusf_radio_anprc152","ItemCompass","ItemWatch",""}};


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

    class us_rg_helicopter_crewman : us_rg_helicopter_pilot {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USRG Helicopter Crew";
        side = 1;
        faction = "ako_us_rg";

        identityTypes[] = {"Head_NATO","LanguageENG_F"};

        uniformClass = "rhs_uniform_acu_oefcp";

        linkedItems[] = {"rhsusf_iotv_ocp_Teamleader","rhsusf_hgu56p_mask_tan","ItemMap","ItemGPS","rhsusf_radio_anprc152","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsusf_iotv_ocp_Teamleader","rhsusf_hgu56p_mask_tan","ItemMap","ItemGPS","rhsusf_radio_anprc152","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A1_short_sand_F"};
        respawnWeapons[] = {"JCA_arifle_M4A1_short_sand_F"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A1_short_sand_F","rhsusf_acc_SFMB556","","rhsusf_acc_EOTECH",{"30Rnd_556x45_Stanag",30},{},""},{},{},{"rhs_uniform_acu_oefcp",{{"FirstAidKit",5}}},{"rhsusf_iotv_ocp_Teamleader",{{"rhs_mag_m67",4,1},{"30Rnd_556x45_Stanag",11,30},{"DemoCharge_Remote_Mag",1,1}}},{},"rhsusf_hgu56p_mask_tan","rhs_ess_black",{},{"ItemMap","ItemGPS","rhsusf_radio_anprc152","ItemCompass","ItemWatch",""}};


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

    class us_rg_worker : us_rg_helicopter_crewman {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USRG Worker";
        side = 1;
        faction = "ako_us_rg";

        identityTypes[] = {"Head_NATO","LanguageENG_F"};

        uniformClass = "rhs_uniform_acu_oefcp";

        linkedItems[] = {"rhsusf_iotv_ocp","TFV_headgear_opscore_cover_mc","ItemMap","ItemGPS","rhsusf_radio_anprc152","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsusf_iotv_ocp","TFV_headgear_opscore_cover_mc","ItemMap","ItemGPS","rhsusf_radio_anprc152","ItemCompass","ItemWatch"};

        weapons[] = {};
        respawnWeapons[] = {};

        magazines[] = {};
        respawnMagazines[] = {};

        ALiVE_orbatCreator_loadout[] = {{},{},{},{"rhs_uniform_acu_oefcp",{{"FirstAidKit",5}}},{"rhsusf_iotv_ocp",{}},{},"TFV_headgear_opscore_cover_mc","rhs_googles_clear",{},{"ItemMap","ItemGPS","rhsusf_radio_anprc152","ItemCompass","ItemWatch",""}};


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

    class us_rg_uav_operator : us_rg_worker {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USRG UAV Operator";
        side = 1;
        faction = "ako_us_rg";

        identityTypes[] = {"Head_NATO","LanguageENG_F"};

        uniformClass = "rhs_uniform_acu_oefcp";

        linkedItems[] = {"rhsusf_iotv_ocp_Teamleader","TFV_headgear_opscore_cover_mc_peltor_nsw","ItemMap","B_UavTerminal","rhsusf_radio_anprc152","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsusf_iotv_ocp_Teamleader","TFV_headgear_opscore_cover_mc_peltor_nsw","ItemMap","B_UavTerminal","rhsusf_radio_anprc152","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A4_VFG_sand_F"};
        respawnWeapons[] = {"JCA_arifle_M4A4_VFG_sand_F"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};

        backpack = "B_UAV_01_backpack_F";

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A4_VFG_sand_F","rhsusf_acc_SFMB556","rhsusf_acc_anpeq15_bk","rhsusf_acc_eotech_xps3",{"30Rnd_556x45_Stanag",30},{},""},{},{},{"rhs_uniform_acu_oefcp",{{"FirstAidKit",5}}},{"rhsusf_iotv_ocp_Teamleader",{{"FirstAidKit",4},{"rhs_mag_m67",4,1},{"30Rnd_556x45_Stanag",10,30}}},{"B_UAV_01_backpack_F",{}},"TFV_headgear_opscore_cover_mc_peltor_nsw","rhs_googles_clear",{},{"ItemMap","B_UavTerminal","rhsusf_radio_anprc152","ItemCompass","ItemWatch",""}};


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

    class us_rg_aa_specialist : us_rg_uav_operator {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USRG AA Specialist";
        side = 1;
        faction = "ako_us_rg";

        identityTypes[] = {"Head_NATO","LanguageENG_F"};

        uniformClass = "rhs_uniform_acu_oefcp";

        linkedItems[] = {"rhsusf_iotv_ocp_Teamleader","TFV_headgear_opscore_peltor_camera","ItemMap","ItemGPS","rhsusf_radio_anprc152","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsusf_iotv_ocp_Teamleader","TFV_headgear_opscore_peltor_camera","ItemMap","ItemGPS","rhsusf_radio_anprc152","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A4_VFG_sand_F","rhs_weap_fim92","Rangefinder"};
        respawnWeapons[] = {"JCA_arifle_M4A4_VFG_sand_F","rhs_weap_fim92","Rangefinder"};

        magazines[] = {"30Rnd_556x45_Stanag","rhs_fim92_mag","30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","rhs_fim92_mag","30Rnd_556x45_Stanag"};

        backpack = "rhsusf_assault_eagleaiii_ocp";

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A4_VFG_sand_F","rhsusf_acc_SFMB556","rhsusf_acc_anpeq15_bk","rhsusf_acc_eotech_xps3",{"30Rnd_556x45_Stanag",30},{},""},{"rhs_weap_fim92","","","",{"rhs_fim92_mag",1},{},""},{},{"rhs_uniform_acu_oefcp",{{"FirstAidKit",5}}},{"rhsusf_iotv_ocp_Teamleader",{{"FirstAidKit",2},{"rhs_mag_m67",4,1},{"30Rnd_556x45_Stanag",12,30}}},{"rhsusf_assault_eagleaiii_ocp",{{"rhs_fim92_mag",2,1}}},"TFV_headgear_opscore_peltor_camera","rhs_googles_black",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemGPS","rhsusf_radio_anprc152","ItemCompass","ItemWatch",""}};


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

        uniformClass = "rhs_uniform_acu_oefcp";

        linkedItems[] = {"rhsusf_iotv_ocp_Teamleader","TFV_headgear_opscore_cover_mc_peltor_nsw","ItemMap","ItemGPS","rhsusf_radio_anprc152","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsusf_iotv_ocp_Teamleader","TFV_headgear_opscore_cover_mc_peltor_nsw","ItemMap","ItemGPS","rhsusf_radio_anprc152","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A4_VFG_sand_F","rhs_weap_maaws"};
        respawnWeapons[] = {"JCA_arifle_M4A4_VFG_sand_F","rhs_weap_maaws"};

        magazines[] = {"30Rnd_556x45_Stanag","rhs_mag_maaws_HEAT","30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","rhs_mag_maaws_HEAT","30Rnd_556x45_Stanag"};

        backpack = "rhsusf_assault_eagleaiii_ocp";

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A4_VFG_sand_F","rhsusf_acc_SFMB556","rhsusf_acc_anpeq15_bk","rhsusf_acc_eotech_xps3",{"30Rnd_556x45_Stanag",30},{},""},{"rhs_weap_maaws","","","rhs_optic_maaws",{"rhs_mag_maaws_HEAT",1},{},""},{},{"rhs_uniform_acu_oefcp",{{"FirstAidKit",5}}},{"rhsusf_iotv_ocp_Teamleader",{{"rhs_mag_m67",4,1},{"30Rnd_556x45_Stanag",11,30},{"DemoCharge_Remote_Mag",1,1}}},{"rhsusf_assault_eagleaiii_ocp",{{"rhs_mag_maaws_HEAT",2,1}}},"TFV_headgear_opscore_cover_mc_peltor_nsw","rhs_googles_black",{},{"ItemMap","ItemGPS","rhsusf_radio_anprc152","ItemCompass","ItemWatch",""}};


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

        backpack = "B_UAV_01_backpack_F";

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A1_short_olive_F","rhsusf_acc_SF3P556","rhsusf_acc_anpeq15_bk","rhsusf_acc_eotech_xps3",{"30Rnd_556x45_Stanag_green",30},{},""},{},{"CUP_hgun_Mk23","","","",{"CUP_12Rnd_45ACP_mk23",12},{},""},{"rhs_uniform_g3_rgr",{{"FirstAidKit",5}}},{"V_CarrierRigKBT_01_heavy_Olive_F",{{"CUP_12Rnd_45ACP_mk23",3,12},{"rhs_mag_m67",4,1},{"DemoCharge_Remote_Mag",1,1},{"30Rnd_556x45_Stanag_green",6,30}}},{"B_UAV_01_backpack_F",{}},"TFV_headgear_opscore_cover_rgr_peltor_nsw","JCA_G_AirPurifyingRespirator_03_olive_tinted_F",{"Rangefinder","","","",{},{},""},{"ItemMap","B_UavTerminal","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_GPNVG_black"}};


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