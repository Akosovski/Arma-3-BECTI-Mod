    
    class rhsusf_usmc_marpat_wd_squadleader;
    class rhsusf_usmc_marpat_wd_squadleader_OCimport_01 : rhsusf_usmc_marpat_wd_squadleader { scope = 0; class EventHandlers; };
    class rhsusf_usmc_marpat_wd_squadleader_OCimport_02 : rhsusf_usmc_marpat_wd_squadleader_OCimport_01 { class EventHandlers; };

        class us_usmc_sergeant : rhsusf_usmc_marpat_wd_squadleader_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USMC Sergeant";
        side = 1;
        faction = "ako_us_usmc";

        identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_usmc"};

        uniformClass = "rhs_uniform_FROG01_wd";

        linkedItems[] = {"rhsusf_spc_squadleader","rhsusf_lwh_helmet_marpatwd_headset_blk","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsusf_spc_squadleader","rhsusf_lwh_helmet_marpatwd_headset_blk","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A1_black_F","Rangefinder"};
        respawnWeapons[] = {"JCA_arifle_M4A1_black_F","Rangefinder"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A1_black_F","","rhsusf_acc_anpeq15_bk","rhsusf_acc_ACOG_RMR",{"30Rnd_556x45_Stanag",30},{},""},{},{},{"rhs_uniform_FROG01_wd",{{"FirstAidKit",5}}},{"rhsusf_spc_squadleader",{{"FirstAidKit",3},{"30Rnd_556x45_Stanag",10,30},{"rhs_mag_m67",4,1}}},{},"rhsusf_lwh_helmet_marpatwd_headset_blk","",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class us_usmc_lance_corporal : us_usmc_sergeant {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USMC Lance Corporal";
        side = 1;
        faction = "ako_us_usmc";

        identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_usmc"};

        uniformClass = "rhs_uniform_FROG01_wd";

        linkedItems[] = {"rhsusf_spc_teamleader","rhsusf_lwh_helmet_marpatwd_headset","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsusf_spc_teamleader","rhsusf_lwh_helmet_marpatwd_headset","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A1_GL_black_F"};
        respawnWeapons[] = {"JCA_arifle_M4A1_GL_black_F"};

        magazines[] = {"30Rnd_556x45_Stanag","1Rnd_HE_Grenade_shell","30Rnd_556x45_Stanag","1Rnd_HE_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","1Rnd_HE_Grenade_shell","30Rnd_556x45_Stanag","1Rnd_HE_Grenade_shell"};

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A1_GL_black_F","","rhsusf_acc_anpeq15_bk","rhsusf_acc_ACOG_RMR",{"30Rnd_556x45_Stanag",30},{"1Rnd_HE_Grenade_shell",1},""},{},{},{"rhs_uniform_FROG01_wd",{{"FirstAidKit",5}}},{"rhsusf_spc_teamleader",{{"rhs_mag_m67",3,1},{"1Rnd_HE_Grenade_shell",12,1},{"30Rnd_556x45_Stanag",10,30}}},{},"rhsusf_lwh_helmet_marpatwd_headset","",{"","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class us_usmc_rifleman_m16 : us_usmc_lance_corporal {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USMC Rifleman (M16A4)";
        side = 1;
        faction = "ako_us_usmc";

        identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_usmc"};

        uniformClass = "rhs_uniform_FROG01_wd";

        linkedItems[] = {"rhsusf_spc_rifleman","rhsusf_lwh_helmet_marpatwd_blk_ess","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsusf_spc_rifleman","rhsusf_lwh_helmet_marpatwd_blk_ess","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M16A4_FG_black_F"};
        respawnWeapons[] = {"JCA_arifle_M16A4_FG_black_F"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M16A4_FG_black_F","","rhsusf_acc_anpeq15_bk_light","rhsusf_acc_ACOG3",{"30Rnd_556x45_Stanag",30},{},""},{},{},{"rhs_uniform_FROG01_wd",{{"FirstAidKit",5}}},{"rhsusf_spc_rifleman",{{"FirstAidKit",3},{"rhs_mag_m67",4,1},{"30Rnd_556x45_Stanag",10,30}}},{},"rhsusf_lwh_helmet_marpatwd_blk_ess","rhs_googles_clear",{"","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class us_usmc_rifleman_m4a1 : us_usmc_rifleman_m16 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USMC Rifleman (M4A1)";
        side = 1;
        faction = "ako_us_usmc";

        identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_usmc"};

        uniformClass = "rhs_uniform_FROG01_wd";

        linkedItems[] = {"rhsusf_spc_rifleman","rhsusf_lwh_helmet_marpatwd_blk_ess","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsusf_spc_rifleman","rhsusf_lwh_helmet_marpatwd_blk_ess","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A1_black_F"};
        respawnWeapons[] = {"JCA_arifle_M4A1_black_F"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A1_black_F","","rhsusf_acc_anpeq15_light","rhsusf_acc_ACOG3",{"30Rnd_556x45_Stanag",30},{},""},{},{},{"rhs_uniform_FROG01_wd",{{"FirstAidKit",5}}},{"rhsusf_spc_rifleman",{{"FirstAidKit",3},{"rhs_mag_m67",4,1},{"30Rnd_556x45_Stanag",10,30}}},{},"rhsusf_lwh_helmet_marpatwd_blk_ess","",{"","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class us_usmc_rifleman_at : us_usmc_rifleman_m4a1 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USMC Rifleman (M136)";
        side = 1;
        faction = "ako_us_usmc";

        identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_usmc"};

        uniformClass = "rhs_uniform_FROG01_wd";

        linkedItems[] = {"rhsusf_spc_rifleman","rhsusf_lwh_helmet_marpatwd_headset_blk","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsusf_spc_rifleman","rhsusf_lwh_helmet_marpatwd_headset_blk","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M16A4_FG_black_F","rhs_weap_M136"};
        respawnWeapons[] = {"JCA_arifle_M16A4_FG_black_F","rhs_weap_M136"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M16A4_FG_black_F","","rhsusf_acc_anpeq15_bk_light","rhsusf_acc_ACOG3",{"30Rnd_556x45_Stanag",30},{},""},{"rhs_weap_M136","","","",{},{},""},{},{"rhs_uniform_FROG01_wd",{{"FirstAidKit",5}}},{"rhsusf_spc_rifleman",{{"FirstAidKit",3},{"rhs_mag_m67",4,1},{"30Rnd_556x45_Stanag",10,30}}},{},"rhsusf_lwh_helmet_marpatwd_headset_blk","",{"","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class us_usmc_autorifleman_m249 : us_usmc_rifleman_at {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USMC Auto Rifleman (M249)";
        side = 1;
        faction = "ako_us_usmc";

        identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_usmc"};

        uniformClass = "rhs_uniform_FROG01_wd";

        linkedItems[] = {"rhsusf_spc_mg","rhsusf_lwh_helmet_marpatwd_ess","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsusf_spc_mg","rhsusf_lwh_helmet_marpatwd_ess","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_lmg_m249_pip1"};
        respawnWeapons[] = {"CUP_lmg_m249_pip1"};

        magazines[] = {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_200Rnd_TE4_Red_Tracer_556x45_M249"};
        respawnMagazines[] = {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_200Rnd_TE4_Red_Tracer_556x45_M249"};

        backpack = "rhsusf_falconii_coy";

        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_m249_pip1","","","rhsusf_acc_ACOG3_USMC",{"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",200},{},""},{},{},{"rhs_uniform_FROG01_wd",{{"FirstAidKit",5}}},{"rhsusf_spc_mg",{{"rhs_mag_m67",2,1},{"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",2,200}}},{"rhsusf_falconii_coy",{{"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",4,200}}},"rhsusf_lwh_helmet_marpatwd_ess","",{"","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class us_usmc_machinegunner : us_usmc_autorifleman_m249 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USMC Machine Gunner";
        side = 1;
        faction = "ako_us_usmc";

        identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_usmc"};

        uniformClass = "rhs_uniform_FROG01_wd";

        linkedItems[] = {"rhsusf_spc_mg","rhsusf_lwh_helmet_marpatwd_ess","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsusf_spc_mg","rhsusf_lwh_helmet_marpatwd_ess","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_lmg_M240_B"};
        respawnWeapons[] = {"CUP_lmg_M240_B"};

        magazines[] = {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"};
        respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"};

        backpack = "rhsusf_assault_eagleaiii_coy";

        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_M240_B","","rhsusf_acc_anpeq15side_bk","rhsusf_acc_ELCAN_ard",{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",100},{},""},{},{},{"rhs_uniform_FROG01_wd",{{"FirstAidKit",5}}},{"rhsusf_spc_mg",{{"rhs_mag_m67",2,1},{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",2,100}}},{"rhsusf_assault_eagleaiii_coy",{{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",5,100}}},"rhsusf_lwh_helmet_marpatwd_ess","",{"","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class us_usmc_marksman : us_usmc_rifleman_m4a1 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USMC Marksman";
        side = 1;
        faction = "ako_us_usmc";

        identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_usmc"};

        uniformClass = "rhs_uniform_FROG01_wd";

        linkedItems[] = {"rhsusf_spc_marksman","rhsusf_lwh_helmet_marpatwd","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsusf_spc_marksman","rhsusf_lwh_helmet_marpatwd","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_SR25_black_F"};
        respawnWeapons[] = {"JCA_arifle_SR25_black_F"};

        magazines[] = {"JCA_20Rnd_762x51_SMAG","JCA_20Rnd_762x51_SMAG"};
        respawnMagazines[] = {"JCA_20Rnd_762x51_SMAG","JCA_20Rnd_762x51_SMAG"};

        backpack = "rhsusf_falconii_coy";

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_SR25_black_F","","rhsusf_acc_anpeq15side_bk","JCA_optic_HPPO_black",{"JCA_20Rnd_762x51_SMAG",20},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"rhs_uniform_FROG01_wd",{{"FirstAidKit",5}}},{"rhsusf_spc_marksman",{{"FirstAidKit",1},{"rhs_mag_m67",2,1},{"JCA_20Rnd_762x51_SMAG",6,20}}},{"rhsusf_falconii_coy",{{"FirstAidKit",5},{"JCA_20Rnd_762x51_SMAG",10,20}}},"rhsusf_lwh_helmet_marpatwd","",{"","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class us_usmc_sniper : us_usmc_marksman {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USMC Sniper (M107)";
        side = 1;
        faction = "ako_us_usmc";

        identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_usmc"};

        uniformClass = "rhs_uniform_FROG01_wd";

        linkedItems[] = {"rhsusf_spc","rhsusf_lwh_helmet_marpatwd","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsusf_spc","rhsusf_lwh_helmet_marpatwd","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_srifle_M107_Base"};
        respawnWeapons[] = {"CUP_srifle_M107_Base"};

        magazines[] = {"CUP_10Rnd_127x99_M107","CUP_10Rnd_127x99_M107"};
        respawnMagazines[] = {"CUP_10Rnd_127x99_M107","CUP_10Rnd_127x99_M107"};

        backpack = "rhsusf_falconii_coy";

        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_M107_Base","","","JCA_optic_HPPO_black",{"CUP_10Rnd_127x99_M107",10},{},""},{},{},{"rhs_uniform_FROG01_wd",{{"FirstAidKit",5}}},{"rhsusf_spc",{{"FirstAidKit",1},{"rhs_mag_m67",1,1}}},{"rhsusf_falconii_coy",{{"FirstAidKit",5},{"CUP_10Rnd_127x99_M107",8,10}}},"rhsusf_lwh_helmet_marpatwd","",{"","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class us_usmc_corpsman : us_usmc_rifleman_m4a1 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USMC Corpsman";
        side = 1;
        faction = "ako_us_usmc";

        identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_usmc"};

        uniformClass = "rhs_uniform_FROG01_wd";

        linkedItems[] = {"rhsusf_spc_corpsman","rhsusf_lwh_helmet_marpatwd_blk_ess","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsusf_spc_corpsman","rhsusf_lwh_helmet_marpatwd_blk_ess","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A1_black_F"};
        respawnWeapons[] = {"JCA_arifle_M4A1_black_F"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};

        backpack = "rhsusf_assault_eagleaiii_coy";

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A1_black_F","","rhsusf_acc_anpeq15_bk_light","rhsusf_acc_ACOG3",{"30Rnd_556x45_Stanag",30},{},""},{},{},{"rhs_uniform_FROG01_wd",{{"FirstAidKit",5}}},{"rhsusf_spc_corpsman",{{"FirstAidKit",2},{"rhs_mag_m67",2,1},{"30Rnd_556x45_Stanag",10,30}}},{"rhsusf_assault_eagleaiii_coy",{{"Medikit",2},{"FirstAidKit",5}}},"rhsusf_lwh_helmet_marpatwd_blk_ess","",{"","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class us_usmc_engineer : us_usmc_corpsman {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USMC Engineer";
        side = 1;
        faction = "ako_us_usmc";

        identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_usmc"};

        uniformClass = "rhs_uniform_FROG01_wd";

        linkedItems[] = {"rhsusf_spc_light","rhsusf_lwh_helmet_marpatwd","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsusf_spc_light","rhsusf_lwh_helmet_marpatwd","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A1_black_F"};
        respawnWeapons[] = {"JCA_arifle_M4A1_black_F"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};

        backpack = "B_Kitbag_cbr";

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A1_black_F","","rhsusf_acc_anpeq15_bk_light","rhsusf_acc_ACOG3",{"30Rnd_556x45_Stanag",30},{},""},{},{},{"rhs_uniform_FROG01_wd",{{"FirstAidKit",5}}},{"rhsusf_spc_light",{{"rhs_mag_m67",2,1},{"30Rnd_556x45_Stanag",10,30}}},{"B_Kitbag_cbr",{{"ToolKit",3}}},"rhsusf_lwh_helmet_marpatwd","",{"","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class us_usmc_aa_specialist : us_usmc_engineer {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USMC AA Specialist";
        side = 1;
        faction = "ako_us_usmc";

        identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_usmc"};

        uniformClass = "rhs_uniform_FROG01_wd";

        linkedItems[] = {"rhsusf_spc_light","rhsusf_lwh_helmet_marpatwd_ess","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsusf_spc_light","rhsusf_lwh_helmet_marpatwd_ess","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A1_black_F","rhs_weap_fim92"};
        respawnWeapons[] = {"JCA_arifle_M4A1_black_F","rhs_weap_fim92"};

        magazines[] = {"30Rnd_556x45_Stanag","rhs_fim92_mag","30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","rhs_fim92_mag","30Rnd_556x45_Stanag"};

        backpack = "rhsusf_assault_eagleaiii_coy";

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A1_black_F","","rhsusf_acc_anpeq15_bk_light","rhsusf_acc_ACOG3",{"30Rnd_556x45_Stanag",30},{},""},{"rhs_weap_fim92","","","",{"rhs_fim92_mag",1},{},""},{},{"rhs_uniform_FROG01_wd",{{"FirstAidKit",5}}},{"rhsusf_spc_light",{{"rhs_mag_m67",2,1},{"30Rnd_556x45_Stanag",10,30}}},{},"rhsusf_lwh_helmet_marpatwd_ess","",{"","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class us_usmc_at_specialist : us_usmc_missileman {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USMC AT Specialist";
        side = 1;
        faction = "AKO_US_USMC";

        identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_usmc"};

        uniformClass = "rhs_uniform_FROG01_wd";

        linkedItems[] = {"rhsusf_spc_marksman","rhsusf_lwh_helmet_marpatwd_headset_blk","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsusf_spc_marksman","rhsusf_lwh_helmet_marpatwd_headset_blk","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A1_black_F","launch_O_Titan_short_F","Rangefinder"};
        respawnWeapons[] = {"JCA_arifle_M4A1_black_F","launch_O_Titan_short_F","Rangefinder"};

        magazines[] = {"30Rnd_556x45_Stanag","Titan_AT","30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","Titan_AT","30Rnd_556x45_Stanag"};

        backpack = "rhsusf_assault_eagleaiii_coy";

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A1_black_F","","rhsusf_acc_anpeq15_light","rhsusf_acc_ACOG3",{"30Rnd_556x45_Stanag",30},{},""},{"launch_O_Titan_short_F","","","",{"Titan_AT",1},{},""},{},{"rhs_uniform_FROG01_wd",{{"FirstAidKit",5}}},{"rhsusf_spc_marksman",{{"rhs_mag_m67",2,1},{"30Rnd_556x45_Stanag",7,30}}},{"rhsusf_assault_eagleaiii_coy",{{"Titan_AT",2,1}}},"rhsusf_lwh_helmet_marpatwd_headset_blk","rhs_googles_black",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class us_usmc_grenadier_m16a4 : us_usmc_rifleman_m16 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USMC Grenadier (M16A4)";
        side = 1;
        faction = "ako_us_usmc";

        identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_usmc"};

        uniformClass = "rhs_uniform_FROG01_wd";

        linkedItems[] = {"rhsusf_spc_rifleman","rhsusf_lwh_helmet_marpatwd_blk_ess","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsusf_spc_rifleman","rhsusf_lwh_helmet_marpatwd_blk_ess","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M16A4_GL_black_F"};
        respawnWeapons[] = {"JCA_arifle_M16A4_GL_black_F"};

        magazines[] = {"30Rnd_556x45_Stanag","CUP_1Rnd_HE_M203","30Rnd_556x45_Stanag","CUP_1Rnd_HE_M203"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","CUP_1Rnd_HE_M203","30Rnd_556x45_Stanag","CUP_1Rnd_HE_M203"};

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M16A4_GL_black_F","","rhsusf_acc_anpeq15_bk_light","rhsusf_acc_ACOG3",{"30Rnd_556x45_Stanag",30},{"CUP_1Rnd_HE_M203",1},""},{},{},{"rhs_uniform_FROG01_wd",{{"FirstAidKit",5}}},{"rhsusf_spc_rifleman",{{"FirstAidKit",3},{"rhs_mag_m67",4,1},{"30Rnd_556x45_Stanag",3,30},{"CUP_1Rnd_HE_M203",3,1}}},{},"rhsusf_lwh_helmet_marpatwd_blk_ess","rhs_googles_clear",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class us_usmc_grenadier_m4a1 : us_usmc_rifleman_m4a1 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USMC Grenadier (M4A1)";
        side = 1;
        faction = "ako_us_usmc";

        identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_usmc"};

        uniformClass = "rhs_uniform_FROG01_wd";

        linkedItems[] = {"rhsusf_spc_teamleader","rhsusf_lwh_helmet_marpatwd_headset","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsusf_spc_teamleader","rhsusf_lwh_helmet_marpatwd_headset","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A1_GL_black_F","Rangefinder"};
        respawnWeapons[] = {"JCA_arifle_M4A1_GL_black_F","Rangefinder"};

        magazines[] = {"30Rnd_556x45_Stanag","1Rnd_HE_Grenade_shell","30Rnd_556x45_Stanag","1Rnd_HE_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","1Rnd_HE_Grenade_shell","30Rnd_556x45_Stanag","1Rnd_HE_Grenade_shell"};

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A1_GL_black_F","","rhsusf_acc_anpeq15_light","rhsusf_acc_ACOG3",{"30Rnd_556x45_Stanag",30},{"1Rnd_HE_Grenade_shell",1},""},{},{},{"rhs_uniform_FROG01_wd",{{"FirstAidKit",5}}},{"rhsusf_spc_teamleader",{{"rhs_mag_m67",2,1},{"1Rnd_HE_Grenade_shell",15,1},{"30Rnd_556x45_Stanag",10,30}}},{},"rhsusf_lwh_helmet_marpatwd_headset","",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class us_usmc_mortarman_gun : us_usmc_rifleman_m16 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USMC Mortarman (Gun)";
        side = 1;
        faction = "ako_us_usmc";

        identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_usmc"};

        uniformClass = "rhs_uniform_FROG01_wd";

        linkedItems[] = {"rhsusf_spc_rifleman","rhsusf_lwh_helmet_marpatwd","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsusf_spc_rifleman","rhsusf_lwh_helmet_marpatwd","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M16A4_FG_black_F","Rangefinder"};
        respawnWeapons[] = {"JCA_arifle_M16A4_FG_black_F","Rangefinder"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};

        backpack = "rhs_M252_Gun_Bag";

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M16A4_FG_black_F","","","rhsusf_acc_ACOG3",{"30Rnd_556x45_Stanag",30},{},""},{},{},{"rhs_uniform_FROG01_wd",{{"FirstAidKit",5}}},{"rhsusf_spc_rifleman",{{"FirstAidKit",3},{"rhs_mag_m67",4,1},{"30Rnd_556x45_Stanag",10,30}}},{"rhs_M252_Gun_Bag",{}},"rhsusf_lwh_helmet_marpatwd","",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class us_usmc_mortarman_bipod : us_usmc_rifleman_m4a1 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USMC Mortarman (Bipod)";
        side = 1;
        faction = "ako_us_usmc";

        identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_usmc"};

        uniformClass = "rhs_uniform_FROG01_wd";

        linkedItems[] = {"rhsusf_spc_rifleman","rhsusf_lwh_helmet_marpatwd","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsusf_spc_rifleman","rhsusf_lwh_helmet_marpatwd","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A1_black_F"};
        respawnWeapons[] = {"JCA_arifle_M4A1_black_F"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};

        backpack = "rhs_M252_Bipod_Bag";

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A1_black_F","","rhsusf_acc_anpeq15_light","rhsusf_acc_ACOG3",{"30Rnd_556x45_Stanag",30},{},""},{},{},{"rhs_uniform_FROG01_wd",{{"FirstAidKit",5}}},{"rhsusf_spc_rifleman",{{"FirstAidKit",3},{"rhs_mag_m67",4,1},{"30Rnd_556x45_Stanag",10,30}}},{"rhs_M252_Bipod_Bag",{}},"rhsusf_lwh_helmet_marpatwd","rhs_googles_clear",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class us_usmc_uav_operator : us_usmc_rifleman_m4a1 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USMC UAV Operator";
        side = 1;
        faction = "ako_us_usmc";

        identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_usmc"};

        uniformClass = "rhs_uniform_FROG01_wd";

        linkedItems[] = {"rhsusf_spc_rifleman","rhsusf_lwh_helmet_marpatwd_blk_ess","ItemMap","B_UavTerminal","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsusf_spc_rifleman","rhsusf_lwh_helmet_marpatwd_blk_ess","ItemMap","B_UavTerminal","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A1_black_F"};
        respawnWeapons[] = {"JCA_arifle_M4A1_black_F"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};

        backpack = "B_UAV_01_backpack_F";

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A1_black_F","","rhsusf_acc_anpeq15_light","rhsusf_acc_ACOG3",{"30Rnd_556x45_Stanag",30},{},""},{},{},{"rhs_uniform_FROG01_wd",{{"FirstAidKit",5}}},{"rhsusf_spc_rifleman",{{"FirstAidKit",3},{"rhs_mag_m67",4,1},{"30Rnd_556x45_Stanag",10,30}}},{"B_UAV_01_backpack_F",{}},"rhsusf_lwh_helmet_marpatwd_blk_ess","",{},{"ItemMap","B_UavTerminal","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class us_usmc_missileman : us_usmc_aa_specialist {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USMC Missileman (SMAW)";
        side = 1;
        faction = "ako_us_usmc";

        identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_usmc"};

        uniformClass = "rhs_uniform_FROG01_wd";

        linkedItems[] = {"rhsusf_spc_marksman","rhsusf_lwh_helmet_marpatwd_headset_blk","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsusf_spc_marksman","rhsusf_lwh_helmet_marpatwd_headset_blk","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A1_black_F","rhs_weap_smaw","Rangefinder"};
        respawnWeapons[] = {"JCA_arifle_M4A1_black_F","rhs_weap_smaw","Rangefinder"};

        magazines[] = {"30Rnd_556x45_Stanag","rhs_mag_smaw_HEDP","30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","rhs_mag_smaw_HEDP","30Rnd_556x45_Stanag"};

        backpack = "rhsusf_falconii_coy";

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A1_black_F","","rhsusf_acc_anpeq15_light","rhsusf_acc_ACOG3",{"30Rnd_556x45_Stanag",30},{},""},{"rhs_weap_smaw","","","rhs_weap_optic_smaw",{"rhs_mag_smaw_HEDP",1},{"rhs_mag_smaw_SR",5},""},{},{"rhs_uniform_FROG01_wd",{{"FirstAidKit",5}}},{"rhsusf_spc_marksman",{{"rhs_mag_m67",2,1},{"30Rnd_556x45_Stanag",7,30}}},{"rhsusf_falconii_coy",{{"rhs_mag_smaw_HEDP",1,1},{"30Rnd_556x45_Stanag",3,30}}},"rhsusf_lwh_helmet_marpatwd_headset_blk","rhs_googles_clear",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class us_usmc_officer : us_usmc_sergeant {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USMC Officer";
        side = 1;
        faction = "ako_us_usmc";

        identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_usmc"};

        uniformClass = "rhs_uniform_FROG01_wd";

        linkedItems[] = {"rhsusf_spc_light","rhs_8point_marpatwd","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsusf_spc_light","rhs_8point_marpatwd","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A1_black_F"};
        respawnWeapons[] = {"JCA_arifle_M4A1_black_F"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A1_black_F","","","rhsusf_acc_ACOG3",{"30Rnd_556x45_Stanag",30},{},""},{},{},{"rhs_uniform_FROG01_wd",{{"FirstAidKit",5}}},{"rhsusf_spc_light",{{"FirstAidKit",3},{"rhs_mag_m67",2,1},{"30Rnd_556x45_Stanag",7,30}}},{},"rhs_8point_marpatwd","rhs_googles_clear",{"","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class us_usmc_crewman : us_usmc_officer {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USMC Crewman";
        side = 1;
        faction = "ako_us_usmc";

        identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_usmc"};

        uniformClass = "rhs_uniform_FROG01_wd";

        linkedItems[] = {"rhsusf_spc_crewman","rhsusf_cvc_green_ess","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsusf_spc_crewman","rhsusf_cvc_green_ess","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A1_black_F"};
        respawnWeapons[] = {"JCA_arifle_M4A1_black_F"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A1_black_F","","","rhsusf_acc_ACOG2_USMC",{"30Rnd_556x45_Stanag",30},{},""},{},{},{"rhs_uniform_FROG01_wd",{{"FirstAidKit",5}}},{"rhsusf_spc_crewman",{{"rhs_mag_m67",1,1},{"30Rnd_556x45_Stanag",8,30}}},{},"rhsusf_cvc_green_ess","",{"","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class us_usmc_worker : us_usmc_crewman {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USMC Worker";
        side = 1;
        faction = "ako_us_usmc";

        identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_usmc"};

        uniformClass = "rhs_uniform_FROG01_wd";

        linkedItems[] = {"rhsusf_spc","rhsusf_lwh_helmet_marpatwd","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsusf_spc","rhsusf_lwh_helmet_marpatwd","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {};
        respawnWeapons[] = {};

        magazines[] = {};
        respawnMagazines[] = {};

        ALiVE_orbatCreator_loadout[] = {{},{},{},{"rhs_uniform_FROG01_wd",{{"FirstAidKit",5}}},{"rhsusf_spc",{}},{},"rhsusf_lwh_helmet_marpatwd","",{"","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class us_usmc_heli_pilot : us_usmc_officer {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USMC Helicopter Pilot";
        side = 1;
        faction = "ako_us_usmc";

        identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_usmc"};

        uniformClass = "rhs_uniform_FROG01_wd";

        linkedItems[] = {"rhsusf_spc_crewman","rhsusf_hgu56p_visor","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsusf_spc_crewman","rhsusf_hgu56p_visor","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A1_black_F"};
        respawnWeapons[] = {"JCA_arifle_M4A1_black_F"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A1_black_F","","","rhsusf_acc_ACOG3",{"30Rnd_556x45_Stanag",30},{},""},{},{},{"rhs_uniform_FROG01_wd",{{"FirstAidKit",5}}},{"rhsusf_spc_crewman",{{"FirstAidKit",3},{"rhs_mag_m67",2,1},{"30Rnd_556x45_Stanag",4,30}}},{},"rhsusf_hgu56p_visor","",{"","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class us_usmc_heli_crewman : us_usmc_heli_pilot {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USMC Helicopter Crew";
        side = 1;
        faction = "ako_us_usmc";

        identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_usmc"};

        uniformClass = "rhs_uniform_FROG01_wd";

        linkedItems[] = {"rhsusf_spc_crewman","rhsusf_hgu56p_visor_mask","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsusf_spc_crewman","rhsusf_hgu56p_visor_mask","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A1_black_F"};
        respawnWeapons[] = {"JCA_arifle_M4A1_black_F"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A1_black_F","","","rhsusf_acc_ACOG3",{"30Rnd_556x45_Stanag",30},{},""},{},{},{"rhs_uniform_FROG01_wd",{{"FirstAidKit",5}}},{"rhsusf_spc_crewman",{{"FirstAidKit",3},{"rhs_mag_m67",2,1},{"30Rnd_556x45_Stanag",4,30}}},{},"rhsusf_hgu56p_visor_mask","",{"","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class us_usmc_marsoc_chief : us_usmc_sergeant {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "MARSOC Chief";
        side = 1;
        faction = "ako_us_usmc";

        identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_usmc"};

        uniformClass = "rhs_uniform_g3_m81";

        linkedItems[] = {"rhsusf_mbav_rifleman","rhsusf_mich_bare_norotos_arc_alt_headset","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"};
        respawnlinkedItems[] = {"rhsusf_mbav_rifleman","rhsusf_mich_bare_norotos_arc_alt_headset","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"};

        weapons[] = {"JCA_arifle_M4A4_VFG_black_F"};
        respawnWeapons[] = {"JCA_arifle_M4A4_VFG_black_F"};

        magazines[] = {"JCA_30Rnd_556x45_Green_PMAG","JCA_30Rnd_556x45_Green_PMAG"};
        respawnMagazines[] = {"JCA_30Rnd_556x45_Green_PMAG","JCA_30Rnd_556x45_Green_PMAG"};

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A4_VFG_black_F","","rhsusf_acc_anpeq15_bk_light","rhsusf_acc_su230_mrds",{"JCA_30Rnd_556x45_Green_PMAG",30},{},""},{},{},{"rhs_uniform_g3_m81",{{"FirstAidKit",5}}},{"rhsusf_mbav_rifleman",{{"FirstAidKit",3},{"rhs_mag_m67",4,1},{"JCA_30Rnd_556x45_Green_PMAG",10,30},{"DemoCharge_Remote_Mag",1,1}}},{},"rhsusf_mich_bare_norotos_arc_alt_headset","rhs_googles_black",{"","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class us_usmc_marsoc_heli_pilot : us_usmc_marsoc_chief {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "MARSOC Helicopter Pilot";
        side = 1;
        faction = "ako_us_usmc";

        identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_usmc"};

        uniformClass = "rhs_uniform_g3_m81";

        linkedItems[] = {"rhsusf_mbav_light","rhsusf_hgu56p_visor","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"};
        respawnlinkedItems[] = {"rhsusf_mbav_light","rhsusf_hgu56p_visor","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"};

        weapons[] = {"JCA_arifle_M4A1_black_F"};
        respawnWeapons[] = {"JCA_arifle_M4A1_black_F"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A1_black_F","","","rhsusf_acc_ACOG3_USMC",{"30Rnd_556x45_Stanag",30},{},""},{},{},{"rhs_uniform_g3_m81",{{"FirstAidKit",5}}},{"rhsusf_mbav_light",{{"FirstAidKit",3},{"30Rnd_556x45_Stanag",6,30},{"rhs_mag_m67",3,1}}},{},"rhsusf_hgu56p_visor","",{"","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class us_usmc_marsoc_eod : us_usmc_marsoc_chief {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "MARSOC EOD Specialist";
        side = 1;
        faction = "ako_us_usmc";

        identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_usmc"};

        uniformClass = "rhs_uniform_g3_m81";

        linkedItems[] = {"rhsusf_mbav_light","rhsusf_mich_bare_norotos_arc_alt_tan","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"};
        respawnlinkedItems[] = {"rhsusf_mbav_light","rhsusf_mich_bare_norotos_arc_alt_tan","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"};

        weapons[] = {"JCA_arifle_M4A1_black_F"};
        respawnWeapons[] = {"JCA_arifle_M4A1_black_F"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};

        backpack = "rhsusf_falconii_coy";

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A1_black_F","","rhsusf_acc_anpeq15_bk_light","rhsusf_acc_ACOG3_USMC",{"30Rnd_556x45_Stanag",30},{},""},{},{},{"rhs_uniform_g3_m81",{{"FirstAidKit",5}}},{"rhsusf_mbav_light",{{"FirstAidKit",3},{"30Rnd_556x45_Stanag",6,30},{"rhs_mag_m67",3,1}}},{"rhsusf_falconii_coy",{{"SatchelCharge_Remote_Mag",1,1},{"DemoCharge_Remote_Mag",4,1}}},"rhsusf_mich_bare_norotos_arc_alt_tan","rhs_googles_clear",{"","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class us_usmc_marsoc_marksman : us_usmc_marsoc_chief {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "MARSOC Marksman";
        side = 1;
        faction = "ako_us_usmc";

        identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_usmc"};

        uniformClass = "rhs_uniform_g3_m81";

        linkedItems[] = {"rhsusf_mbav_light","rhsusf_mich_bare_norotos_arc_alt_tan_headset","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"};
        respawnlinkedItems[] = {"rhsusf_mbav_light","rhsusf_mich_bare_norotos_arc_alt_tan_headset","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"};

        weapons[] = {"JCA_arifle_SR10_black_F"};
        respawnWeapons[] = {"JCA_arifle_SR10_black_F"};

        magazines[] = {"JCA_20Rnd_762x51_PMAG","JCA_20Rnd_762x51_PMAG"};
        respawnMagazines[] = {"JCA_20Rnd_762x51_PMAG","JCA_20Rnd_762x51_PMAG"};

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_SR10_black_F","","rhsusf_acc_anpeq15side_bk","JCA_optic_HPPO_black",{"JCA_20Rnd_762x51_PMAG",20},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"rhs_uniform_g3_m81",{{"FirstAidKit",5}}},{"rhsusf_mbav_light",{{"rhs_mag_m67",2,1},{"JCA_20Rnd_762x51_PMAG",9,20}}},{},"rhsusf_mich_bare_norotos_arc_alt_tan_headset","rhs_googles_clear",{"","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class us_usmc_marsoc_mk16 : us_usmc_rifleman_m4a1 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "MARSOC Operator (Mk16)";
        side = 1;
        faction = "ako_us_usmc";

        identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_usmc"};

        uniformClass = "rhs_uniform_g3_m81";

        linkedItems[] = {"rhsusf_mbav_rifleman","rhsusf_mich_bare_norotos_arc_alt_tan_headset","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"};
        respawnlinkedItems[] = {"rhsusf_mbav_rifleman","rhsusf_mich_bare_norotos_arc_alt_tan_headset","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"};

        weapons[] = {"CUP_arifle_Mk16_STD_FG"};
        respawnWeapons[] = {"CUP_arifle_Mk16_STD_FG"};

        magazines[] = {"CUP_30Rnd_556x45_Stanag_Mk16_black","CUP_30Rnd_556x45_Stanag_Mk16_black"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag_Mk16_black","CUP_30Rnd_556x45_Stanag_Mk16_black"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_Mk16_STD_FG","","rhsusf_acc_anpeq15side","rhsusf_acc_su230a_c",{"CUP_30Rnd_556x45_Stanag_Mk16_black",30},{},""},{},{},{"rhs_uniform_g3_m81",{{"FirstAidKit",5}}},{"rhsusf_mbav_rifleman",{{"FirstAidKit",3},{"rhs_mag_m67",4,1},{"DemoCharge_Remote_Mag",1,1},{"CUP_30Rnd_556x45_Stanag_Mk16_black",7,30}}},{},"rhsusf_mich_bare_norotos_arc_alt_tan_headset","rhs_googles_black",{"","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class us_usmc_marsoc_mk17 : us_usmc_marsoc_mk16 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "MARSOC Operator (Mk17)";
        side = 1;
        faction = "ako_us_usmc";

        identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_usmc"};

        uniformClass = "rhs_uniform_g3_m81";

        linkedItems[] = {"rhsusf_mbav_rifleman","rhsusf_mich_bare_norotos_arc_alt_tan_headset","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"};
        respawnlinkedItems[] = {"rhsusf_mbav_rifleman","rhsusf_mich_bare_norotos_arc_alt_tan_headset","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"};

        weapons[] = {"CUP_arifle_Mk17_CQC_FG"};
        respawnWeapons[] = {"CUP_arifle_Mk17_CQC_FG"};

        magazines[] = {"CUP_20Rnd_762x51_B_SCAR_bkl","CUP_20Rnd_762x51_B_SCAR_bkl"};
        respawnMagazines[] = {"CUP_20Rnd_762x51_B_SCAR_bkl","CUP_20Rnd_762x51_B_SCAR_bkl"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_Mk17_CQC_FG","","rhsusf_acc_anpeq15side","rhsusf_acc_ACOG_RMR",{"CUP_20Rnd_762x51_B_SCAR_bkl",20},{},""},{},{},{"rhs_uniform_g3_m81",{{"FirstAidKit",5}}},{"rhsusf_mbav_rifleman",{{"FirstAidKit",2},{"rhs_mag_m67",2,1},{"CUP_20Rnd_762x51_B_SCAR_bkl",8,20}}},{},"rhsusf_mich_bare_norotos_arc_alt_tan_headset","rhs_googles_black",{"","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class us_usmc_marsoc_m249 : us_usmc_marsoc_mk17 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "MARSOC Operator (M249)";
        side = 1;
        faction = "ako_us_usmc";

        identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_usmc"};

        uniformClass = "rhs_uniform_g3_m81";

        linkedItems[] = {"rhsusf_mbav_mg","rhsusf_mich_bare_norotos_arc_alt_semi_headset","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"};
        respawnlinkedItems[] = {"rhsusf_mbav_mg","rhsusf_mich_bare_norotos_arc_alt_semi_headset","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"};

        weapons[] = {"CUP_lmg_m249_pip2"};
        respawnWeapons[] = {"CUP_lmg_m249_pip2"};

        magazines[] = {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_200Rnd_TE4_Red_Tracer_556x45_M249"};
        respawnMagazines[] = {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_200Rnd_TE4_Red_Tracer_556x45_M249"};

        backpack = "rhsusf_falconii_coy";

        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_m249_pip2","","","rhsusf_acc_su230a",{"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",200},{},""},{},{},{"rhs_uniform_g3_m81",{{"FirstAidKit",5}}},{"rhsusf_mbav_mg",{{"FirstAidKit",5},{"rhs_mag_m67",4,1},{"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",2,200}}},{"rhsusf_falconii_coy",{{"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",4,200}}},"rhsusf_mich_bare_norotos_arc_alt_semi_headset","rhs_googles_clear",{"","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class us_usmc_marsoc_eglm : us_usmc_rifleman_m4a1 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "MARSOC Operator (EGLM)";
        side = 1;
        faction = "ako_us_usmc";

        identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_usmc"};

        uniformClass = "rhs_uniform_g3_m81";

        linkedItems[] = {"rhsusf_mbav_grenadier","rhsusf_mich_bare_norotos_arc_alt_headset","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"};
        respawnlinkedItems[] = {"rhsusf_mbav_grenadier","rhsusf_mich_bare_norotos_arc_alt_headset","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"};

        weapons[] = {"JCA_arifle_M4A4_GL_black_F"};
        respawnWeapons[] = {"JCA_arifle_M4A4_GL_black_F"};

        magazines[] = {"30Rnd_556x45_Stanag","1Rnd_HE_Grenade_shell","30Rnd_556x45_Stanag","1Rnd_HE_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","1Rnd_HE_Grenade_shell","30Rnd_556x45_Stanag","1Rnd_HE_Grenade_shell"};

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A4_GL_black_F","","rhsusf_acc_anpeq15_bk_top","rhsusf_acc_su230a",{"30Rnd_556x45_Stanag",30},{"1Rnd_HE_Grenade_shell",1},""},{},{},{"rhs_uniform_g3_m81",{{"FirstAidKit",5}}},{"rhsusf_mbav_grenadier",{{"FirstAidKit",3},{"rhs_mag_m67",2,1},{"1Rnd_HE_Grenade_shell",10,1},{"30Rnd_556x45_Stanag",8,30}}},{},"rhsusf_mich_bare_norotos_arc_alt_headset","rhs_googles_black",{"","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class us_usmc_marsoc_m136 : us_usmc_rifleman_at {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "MARSOC Operator (M136)";
        side = 1;
        faction = "ako_us_usmc";

        identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_usmc"};

        uniformClass = "rhs_uniform_g3_m81";

        linkedItems[] = {"rhsusf_mbav_rifleman","rhsusf_mich_bare_norotos_arc_semi_headset","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"};
        respawnlinkedItems[] = {"rhsusf_mbav_rifleman","rhsusf_mich_bare_norotos_arc_semi_headset","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"};

        weapons[] = {"JCA_arifle_M4A4_AFG_black_F","rhs_weap_M136_hedp","Rangefinder"};
        respawnWeapons[] = {"JCA_arifle_M4A4_AFG_black_F","rhs_weap_M136_hedp","Rangefinder"};

        magazines[] = {"JCA_30Rnd_556x45_Green_PMAG","JCA_30Rnd_556x45_Green_PMAG"};
        respawnMagazines[] = {"JCA_30Rnd_556x45_Green_PMAG","JCA_30Rnd_556x45_Green_PMAG"};

        backpack = "rhsusf_falconii_coy";

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A4_AFG_black_F","","rhsusf_acc_anpeq15_bk_light","rhsusf_acc_su230_mrds",{"JCA_30Rnd_556x45_Green_PMAG",30},{},""},{"rhs_weap_M136_hedp","","","",{},{},""},{},{"rhs_uniform_g3_m81",{{"FirstAidKit",5}}},{"rhsusf_mbav_rifleman",{{"FirstAidKit",3},{"rhs_mag_m67",4,1},{"DemoCharge_Remote_Mag",1,1},{"JCA_30Rnd_556x45_Green_PMAG",10,30}}},{"rhsusf_falconii_coy",{{{"rhs_weap_M136_hedp","","","",{},{},""},1}}},"rhsusf_mich_bare_norotos_arc_semi_headset","rhs_googles_black",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class us_usmc_marsoc_m4a4 : us_usmc_rifleman_m4a1 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "MARSOC Operator (M4A4)";
        side = 1;
        faction = "ako_us_usmc";

        identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_usmc"};

        uniformClass = "rhs_uniform_g3_m81";

        linkedItems[] = {"rhsusf_mbav_rifleman","rhsusf_mich_bare_norotos_arc_alt_tan_headset","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"};
        respawnlinkedItems[] = {"rhsusf_mbav_rifleman","rhsusf_mich_bare_norotos_arc_alt_tan_headset","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"};

        weapons[] = {"JCA_arifle_M4A4_AFG_black_F"};
        respawnWeapons[] = {"JCA_arifle_M4A4_AFG_black_F"};

        magazines[] = {"JCA_30Rnd_556x45_Green_PMAG","JCA_30Rnd_556x45_Green_PMAG"};
        respawnMagazines[] = {"JCA_30Rnd_556x45_Green_PMAG","JCA_30Rnd_556x45_Green_PMAG"};

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A4_AFG_black_F","","rhsusf_acc_anpeq15_bk_light","rhsusf_acc_su230_mrds",{"JCA_30Rnd_556x45_Green_PMAG",30},{},""},{},{},{"rhs_uniform_g3_m81",{{"FirstAidKit",5}}},{"rhsusf_mbav_rifleman",{{"FirstAidKit",3},{"rhs_mag_m67",4,1},{"DemoCharge_Remote_Mag",1,1},{"JCA_30Rnd_556x45_Green_PMAG",10,30}}},{},"rhsusf_mich_bare_norotos_arc_alt_tan_headset","rhs_googles_clear",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };