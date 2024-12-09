    
    class ru_vdv_des_sergeant : rhs_vdv_des_sergeant_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV Sergeant";
        side = 0;
        faction = "AKO_RU_VDV";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_vkpo_atacs_c_gloves";

        linkedItems[] = {"rhs_6b45_rifleman_2_cb","rhs_atacs_c_6b47_6B50","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_rifleman_2_cb","rhs_atacs_c_6b47_6B50","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK12_bicolor"};
        respawnWeapons[] = {"CUP_arifle_AK12_bicolor"};

        magazines[] = {"CUP_30Rnd_545x39_AK12_M","CUP_30Rnd_545x39_AK12_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK12_M","CUP_30Rnd_545x39_AK12_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK12_bicolor","","rhs_acc_perst1ik_ris","rhs_acc_1p87",{"CUP_30Rnd_545x39_AK12_M",30},{},""},{},{},{"rhs_uniform_vkpo_atacs_c_gloves",{{"FirstAidKit",5}}},{"rhs_6b45_rifleman_2_cb",{{"FirstAidKit",1},{"rhs_mag_rgo",4,1},{"CUP_30Rnd_545x39_AK12_M",10,30}}},{},"rhs_atacs_c_6b47_6B50","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vdv_des_efreitor_ak12 : ru_vdv_des_sergeant {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV Efreitor (AK-12)";
        side = 0;
        faction = "AKO_RU_VDV";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_vkpo_atacs_c_gloves";

        linkedItems[] = {"rhs_6b45_grn_cb","rhs_6b47_bare_d","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_grn_cb","rhs_6b47_bare_d","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK12_GP34_bicolor"};
        respawnWeapons[] = {"CUP_arifle_AK12_GP34_bicolor"};

        magazines[] = {"CUP_30Rnd_545x39_AK12_M","CUP_1Rnd_HE_GP25_M","CUP_30Rnd_545x39_AK12_M","CUP_1Rnd_HE_GP25_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK12_M","CUP_1Rnd_HE_GP25_M","CUP_30Rnd_545x39_AK12_M","CUP_1Rnd_HE_GP25_M"};

        backpack = "rhs_rd54";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK12_GP34_bicolor","","rhs_acc_perst1ik_ris","rhs_acc_1p87",{"CUP_30Rnd_545x39_AK12_M",30},{"CUP_1Rnd_HE_GP25_M",1},""},{},{},{"rhs_uniform_vkpo_atacs_c_gloves",{{"FirstAidKit",5}}},{"rhs_6b45_grn_cb",{{"FirstAidKit",3},{"rhs_mag_rgo",4,1},{"CUP_1Rnd_HE_GP25_M",10,1},{"CUP_30Rnd_545x39_AK12_M",8,30}}},{"rhs_rd54",{{"DemoCharge_Remote_Mag",2,1},{"CUP_1Rnd_HE_GP25_M",5,1},{"CUP_30Rnd_545x39_AK12_M",10,30}}},"rhs_6b47_bare_d","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vdv_des_efreitor_ak74m : ru_vdv_des_efreitor_ak12 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV Efreitor (AK-74M)";
        side = 0;
        faction = "AKO_RU_VDV";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_vkpo_atacs_c_gloves";

        linkedItems[] = {"rhs_6b45_rifleman_cb","rhs_atacs_c_6b47","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_rifleman_cb","rhs_atacs_c_6b47","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74M_railed","rhs_weap_rpg26"};
        respawnWeapons[] = {"CUP_arifle_AK74M_railed","rhs_weap_rpg26"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","rhs_rpg26_mag","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","rhs_rpg26_mag","CUP_30Rnd_545x39_AK_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M_railed","","","rhs_acc_1p87",{"CUP_30Rnd_545x39_AK_M",30},{},""},{"rhs_weap_rpg26","","","",{"rhs_rpg26_mag",1},{},""},{},{"rhs_uniform_vkpo_atacs_c_gloves",{{"FirstAidKit",5}}},{"rhs_6b45_rifleman_cb",{{"FirstAidKit",1},{"rhs_mag_rgo",3,1},{"CUP_30Rnd_545x39_AK_M",11,30}}},{},"rhs_atacs_c_6b47","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vdv_des_rifleman_ak74m : ru_vdv_des_sergeant {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV Rifleman (AK-74M)";
        side = 0;
        faction = "AKO_RU_VDV";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_vkpo_atacs_c_gloves";

        linkedItems[] = {"rhs_6b45_rifleman_2_cb","rhs_6b47_bare_d","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_rifleman_2_cb","rhs_6b47_bare_d","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74M"};
        respawnWeapons[] = {"CUP_arifle_AK74M"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"rhs_uniform_vkpo_atacs_c_gloves",{{"FirstAidKit",5}}},{"rhs_6b45_rifleman_2_cb",{{"CUP_30Rnd_545x39_AK_M",12,30},{"rhs_mag_rgo",3,1}}},{},"rhs_6b47_bare_d","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vdv_des_rifleman_ak103 : ru_vdv_des_rifleman_ak74m {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV Rifleman (AK-103)";
        side = 0;
        faction = "AKO_RU_VDV";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_vkpo_atacs_c_gloves";

        linkedItems[] = {"rhs_6b45_rifleman_2_cb","rhs_atacs_c_6b47","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_rifleman_2_cb","rhs_atacs_c_6b47","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK103"};
        respawnWeapons[] = {"CUP_arifle_AK103"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK103","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"rhs_uniform_vkpo_atacs_c_gloves",{{"FirstAidKit",5}}},{"rhs_6b45_rifleman_2_cb",{{"FirstAidKit",1},{"rhs_mag_rgo",3,1},{"CUP_30Rnd_762x39_AK47_M",9,30}}},{},"rhs_atacs_c_6b47","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vdv_des_rifleman_ak12 : ru_vdv_des_rifleman_ak103 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV Rifleman (AK-12)";
        side = 0;
        faction = "AKO_RU_VDV";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_vkpo_atacs_c_gloves";

        linkedItems[] = {"rhs_6b45_rifleman_2_cb","rhs_atacs_c_6b47","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_rifleman_2_cb","rhs_atacs_c_6b47","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK12_bicolor"};
        respawnWeapons[] = {"CUP_arifle_AK12_bicolor"};

        magazines[] = {"CUP_30Rnd_545x39_AK12_M","CUP_30Rnd_545x39_AK12_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK12_M","CUP_30Rnd_545x39_AK12_M"};

        backpack = "rhs_rd54";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK12_bicolor","","rhs_acc_perst1ik_ris","",{"CUP_30Rnd_545x39_AK12_M",30},{},""},{},{},{"rhs_uniform_vkpo_atacs_c_gloves",{{"FirstAidKit",5}}},{"rhs_6b45_rifleman_2_cb",{{"FirstAidKit",1},{"rhs_mag_rgo",4,1},{"CUP_30Rnd_545x39_AK12_M",10,30}}},{"rhs_rd54",{{"CUP_30Rnd_545x39_AK12_M",10,30},{"DemoCharge_Remote_Mag",2,1},{"CUP_30Rnd_545x39_AK_M",10,30}}},"rhs_atacs_c_6b47","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vdv_des_medic : ru_vdv_des_rifleman_ak12 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV Medic";
        side = 0;
        faction = "AKO_RU_VDV";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_vkpo_atacs_c_gloves";

        linkedItems[] = {"rhs_6b45_rifleman_2_cb","rhs_atacs_c_6b47","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_rifleman_2_cb","rhs_atacs_c_6b47","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK12_bicolor"};
        respawnWeapons[] = {"CUP_arifle_AK12_bicolor"};

        magazines[] = {"CUP_30Rnd_545x39_AK12_M","CUP_30Rnd_545x39_AK12_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK12_M","CUP_30Rnd_545x39_AK12_M"};

        backpack = "rhs_rk_sht_30_atacs_c";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK12_bicolor","","","rhs_acc_1p87",{"CUP_30Rnd_545x39_AK12_M",30},{},""},{},{},{"rhs_uniform_vkpo_atacs_c_gloves",{{"FirstAidKit",5}}},{"rhs_6b45_rifleman_2_cb",{{"FirstAidKit",4},{"rhs_mag_rgo",3,1},{"CUP_30Rnd_545x39_AK12_M",8,30}}},{"rhs_rk_sht_30_atacs_c",{{"FirstAidKit",5},{"Medikit",2}}},"rhs_atacs_c_6b47","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vdv_des_engineer : ru_vdv_des_medic {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV Engineer";
        side = 0;
        faction = "AKO_RU_VDV";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_vkpo_atacs_c_gloves";

        linkedItems[] = {"rhs_6b45_rifleman_2_cb","rhs_6b47_bare_d","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_rifleman_2_cb","rhs_6b47_bare_d","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK103"};
        respawnWeapons[] = {"CUP_arifle_AK103"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "rhs_rk_sht_30_atacs_c";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK103","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"rhs_uniform_vkpo_atacs_c_gloves",{{"FirstAidKit",5}}},{"rhs_6b45_rifleman_2_cb",{{"rhs_mag_rgo",3,1},{"CUP_30Rnd_762x39_AK47_M",9,30}}},{"rhs_rk_sht_30_atacs_c",{{"ToolKit",2},{"DemoCharge_Remote_Mag",3,1}}},"rhs_6b47_bare_d","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vdv_des_grenadier_gp34 : ru_vdv_des_rifleman_ak12 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV Grenadier (GP-34)";
        side = 0;
        faction = "AKO_RU_VDV";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_vkpo_atacs_c_gloves";

        linkedItems[] = {"rhs_6b45_grn_cb","rhs_atacs_c_6b47","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_grn_cb","rhs_atacs_c_6b47","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK12_GP34_bicolor"};
        respawnWeapons[] = {"CUP_arifle_AK12_GP34_bicolor"};

        magazines[] = {"CUP_30Rnd_545x39_AK12_M","CUP_1Rnd_HE_GP25_M","CUP_30Rnd_545x39_AK12_M","CUP_1Rnd_HE_GP25_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK12_M","CUP_1Rnd_HE_GP25_M","CUP_30Rnd_545x39_AK12_M","CUP_1Rnd_HE_GP25_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK12_GP34_bicolor","","rhs_acc_perst1ik_ris","rhs_acc_1p87",{"CUP_30Rnd_545x39_AK12_M",30},{"CUP_1Rnd_HE_GP25_M",1},""},{},{},{"rhs_uniform_vkpo_atacs_c_gloves",{{"FirstAidKit",5}}},{"rhs_6b45_grn_cb",{{"FirstAidKit",3},{"rhs_mag_rgo",4,1},{"CUP_1Rnd_HE_GP25_M",10,1},{"CUP_30Rnd_545x39_AK12_M",8,30}}},{},"rhs_atacs_c_6b47","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vdv_des_grenadier_rpg : ru_vdv_des_grenadier_gp34 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV Grenadier (RPG-7V2)";
        side = 0;
        faction = "AKO_RU_VDV";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_vkpo_atacs_c_gloves";

        linkedItems[] = {"rhs_6b45_rifleman_2_cb","rhs_atacs_c_6b47","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_rifleman_2_cb","rhs_atacs_c_6b47","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74M","rhs_weap_rpg7"};
        respawnWeapons[] = {"CUP_arifle_AK74M","rhs_weap_rpg7"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","rhs_rpg7_PG7VR_mag","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","rhs_rpg7_PG7VR_mag","CUP_30Rnd_545x39_AK_M"};

        backpack = "rhs_rpg_2";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{"rhs_weap_rpg7","","","rhs_acc_pgo7v",{"rhs_rpg7_PG7VR_mag",1},{},""},{},{"rhs_uniform_vkpo_atacs_c_gloves",{{"FirstAidKit",5}}},{"rhs_6b45_rifleman_2_cb",{{"CUP_30Rnd_545x39_AK_M",12,30},{"rhs_mag_rgo",3,1}}},{"rhs_rpg_2",{{"rhs_rpg7_PG7VR_mag",2,1}}},"rhs_atacs_c_6b47","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vdv_des_machinegunner : ru_vdv_des_rifleman_ak74m {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV Machine Gunner";
        side = 0;
        faction = "AKO_RU_VDV";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_vkpo_atacs_c_gloves";

        linkedItems[] = {"rhs_6b45_mg_cb","rhs_6b47_bare_d","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_mg_cb","rhs_6b47_bare_d","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_lmg_Pecheneg_B50_vfg"};
        respawnWeapons[] = {"CUP_lmg_Pecheneg_B50_vfg"};

        magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
        respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};

        backpack = "rhs_rk_sht_30_atacs_c";

        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_Pecheneg_B50_vfg","","","rhs_acc_pkas",{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",100},{},""},{},{},{"rhs_uniform_vkpo_atacs_c_gloves",{{"FirstAidKit",5}}},{"rhs_6b45_mg_cb",{{"rhs_mag_rgo",3,1},{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",3,100}}},{"rhs_rk_sht_30_atacs_c",{{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M",5,100}}},"rhs_6b47_bare_d","rhs_ess_black",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vdv_des_autorifleman : ru_vdv_des_machinegunner {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV Auto Rifleman";
        side = 0;
        faction = "AKO_RU_VDV";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_vkpo_atacs_c_gloves";

        linkedItems[] = {"rhs_6b45_light_cb","rhs_atacs_c_6b47","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_light_cb","rhs_atacs_c_6b47","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_RPK74M"};
        respawnWeapons[] = {"CUP_arifle_RPK74M"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        backpack = "rhs_rk_sht_30_atacs_c";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_RPK74M","","","CUP_optic_PSO_1_1_open",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"rhs_uniform_vkpo_atacs_c_gloves",{{"FirstAidKit",5}}},{"rhs_6b45_light_cb",{{"rhs_mag_rgo",3,1},{"CUP_30Rnd_545x39_AK_M",4,30}}},{"rhs_rk_sht_30_atacs_c",{{"CUP_30Rnd_545x39_AK_M",20,30}}},"rhs_atacs_c_6b47","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vdv_des_aa_specialist : ru_vdv_des_grenadier_rpg {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV AA Specialist";
        side = 0;
        faction = "AKO_RU_VDV";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_vkpo_atacs_c_gloves";

        linkedItems[] = {"rhs_6b45_rifleman_cb","rhs_atacs_c_6b47_6B50","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_rifleman_cb","rhs_atacs_c_6b47_6B50","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74M","rhs_weap_igla"};
        respawnWeapons[] = {"CUP_arifle_AK74M","rhs_weap_igla"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","rhs_mag_9k38_rocket","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","rhs_mag_9k38_rocket","CUP_30Rnd_545x39_AK_M"};

        backpack = "rhs_rk_sht_30_atacs_c";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{"rhs_weap_igla","","","",{"rhs_mag_9k38_rocket",1},{},""},{},{"rhs_uniform_vkpo_atacs_c_gloves",{{"FirstAidKit",5}}},{"rhs_6b45_rifleman_cb",{{"CUP_30Rnd_545x39_AK_M",12,30},{"rhs_mag_rgo",3,1}}},{"rhs_rk_sht_30_atacs_c",{{"rhs_mag_9k38_rocket",2,1}}},"rhs_atacs_c_6b47_6B50","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vdv_des_at_specialist : ru_vdv_des_aa_specialist {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV AT Specialist";
        side = 0;
        faction = "AKO_RU_VDV";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_vkpo_atacs_c_gloves";

        linkedItems[] = {"rhs_6b45_rifleman_cb","rhs_atacs_c_6b47","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_rifleman_cb","rhs_atacs_c_6b47","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74M","launch_O_Vorona_brown_F"};
        respawnWeapons[] = {"CUP_arifle_AK74M","launch_O_Vorona_brown_F"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","Vorona_HEAT","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","Vorona_HEAT","CUP_30Rnd_545x39_AK_M"};

        backpack = "rhs_rk_sht_30_atacs_c";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{"launch_O_Vorona_brown_F","","","",{"Vorona_HEAT",1},{},""},{},{"rhs_uniform_vkpo_atacs_c_gloves",{{"FirstAidKit",5}}},{"rhs_6b45_rifleman_cb",{{"CUP_30Rnd_545x39_AK_M",12,30},{"rhs_mag_rgo",3,1}}},{"rhs_rk_sht_30_atacs_c",{{"Vorona_HEAT",2,1}}},"rhs_atacs_c_6b47","G_Bandanna_khk",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vdv_des_officer : ru_vdv_des_sergeant {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV Officer";
        side = 0;
        faction = "AKO_RU_VDV";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_vkpo_atacs_c_gloves";

        linkedItems[] = {"rhs_6b45_light_cb","rhs_beret_vdv1","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_light_cb","rhs_beret_vdv1","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74M"};
        respawnWeapons[] = {"CUP_arifle_AK74M"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"rhs_uniform_vkpo_atacs_c_gloves",{{"FirstAidKit",5}}},{"rhs_6b45_light_cb",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK_M",6,30}}},{},"rhs_beret_vdv1","G_Aviator",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vdv_des_marksman : ru_vdv_des_rifleman_ak74m {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV Marksman";
        side = 0;
        faction = "AKO_RU_VDV";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_vkpo_atacs_c_gloves";

        linkedItems[] = {"rhs_6b45_rifleman_2_cb","rhs_beanie_green","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_rifleman_2_cb","rhs_beanie_green","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_srifle_SVD"};
        respawnWeapons[] = {"CUP_srifle_SVD"};

        magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M"};
        respawnMagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_SVD","","","CUP_optic_PSO_3_open",{"CUP_10Rnd_762x54_SVD_M",10},{},""},{},{},{"rhs_uniform_vkpo_atacs_c_gloves",{{"FirstAidKit",5}}},{"rhs_6b45_rifleman_2_cb",{{"rhs_mag_rgo",1,1},{"CUP_10Rnd_762x54_SVD_M",14,10}}},{},"rhs_beanie_green","G_Bandanna_khk",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vdv_des_driver : ru_vdv_des_rifleman_ak74m {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV Driver";
        side = 0;
        faction = "AKO_RU_VDV";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_vkpo_atacs_c_gloves";

        linkedItems[] = {"rhs_6b45_light_cb","rhs_vkpo_atacs_c_cap_alt","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_light_cb","rhs_vkpo_atacs_c_cap_alt","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74M"};
        respawnWeapons[] = {"CUP_arifle_AK74M"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"rhs_uniform_vkpo_atacs_c_gloves",{{"FirstAidKit",5}}},{"rhs_6b45_light_cb",{{"FirstAidKit",2},{"CUP_30Rnd_545x39_AK_M",5,30}}},{},"rhs_vkpo_atacs_c_cap_alt","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vdv_des_worker : ru_vdv_des_rifleman_ak74m {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV Worker";
        side = 0;
        faction = "AKO_RU_VDV";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_vkpo_atacs_c_gloves";

        linkedItems[] = {"rhs_6b45_cb","rhs_atacs_c_6b47","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_cb","rhs_atacs_c_6b47","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {};
        respawnWeapons[] = {};

        magazines[] = {};
        respawnMagazines[] = {};

        ALiVE_orbatCreator_loadout[] = {{},{},{},{"rhs_uniform_vkpo_atacs_c_gloves",{{"FirstAidKit",5}}},{"rhs_6b45_cb",{{"FirstAidKit",2}}},{},"rhs_atacs_c_6b47","G_Bandanna_khk",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vdv_des_uav_operator : ru_vdv_des_rifleman_ak74m {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV UAV Operator";
        side = 0;
        faction = "AKO_RU_VDV";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_vkpo_atacs_c_gloves";

        linkedItems[] = {"rhs_6b45_rifleman_2_cb","rhs_atacs_c_6b47","ItemMap","O_UavTerminal","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_rifleman_2_cb","rhs_atacs_c_6b47","ItemMap","O_UavTerminal","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK12_bicolor"};
        respawnWeapons[] = {"CUP_arifle_AK12_bicolor"};

        magazines[] = {"CUP_30Rnd_545x39_AK12_M","CUP_30Rnd_545x39_AK12_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK12_M","CUP_30Rnd_545x39_AK12_M"};

        backpack = "O_UAV_01_backpack_F";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK12_bicolor","","rhs_acc_perst1ik_ris","",{"CUP_30Rnd_545x39_AK12_M",30},{},""},{},{},{"rhs_uniform_vkpo_atacs_c_gloves",{{"FirstAidKit",5}}},{"rhs_6b45_rifleman_2_cb",{{"FirstAidKit",1},{"rhs_mag_rgo",4,1},{"CUP_30Rnd_545x39_AK12_M",10,30}}},{"O_UAV_01_backpack_F",{}},"rhs_atacs_c_6b47","rhs_facewear_6m2_1",{},{"ItemMap","O_UavTerminal","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vdv_des_crewman : ru_vdv_des_rifleman_ak74m {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV Crewman";
        side = 0;
        faction = "AKO_RU_VDV";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_vkpo_atacs_c_gloves";

        linkedItems[] = {"rhs_6b45_light_cb","rhs_tsh4_ess","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_light_cb","rhs_tsh4_ess","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS74U"};
        respawnWeapons[] = {"CUP_arifle_AKS74U"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74U","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"rhs_uniform_vkpo_atacs_c_gloves",{{"FirstAidKit",5}}},{"rhs_6b45_light_cb",{{"CUP_30Rnd_545x39_AK_M",7,30}}},{},"rhs_tsh4_ess","G_Bandanna_khk",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vdv_des_tank_crewman : ru_vdv_des_crewman {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV Tank Crewman";
        side = 0;
        faction = "AKO_RU_VDV";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_vkpo_atacs_c_gloves";

        linkedItems[] = {"rhs_6b45_light_cb","rhs_6b48","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_light_cb","rhs_6b48","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74M"};
        respawnWeapons[] = {"CUP_arifle_AK74M"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"rhs_uniform_vkpo_atacs_c_gloves",{{"FirstAidKit",5}}},{"rhs_6b45_light_cb",{{"CUP_30Rnd_545x39_AK_M",7,30}}},{},"rhs_6b48","rhs_ess_black",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vdv_des_heli_pilot : ru_vdv_des_officer {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV Helicopter Pilot";
        side = 0;
        faction = "AKO_RU_VDV";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_vkpo_atacs_c_gloves";

        linkedItems[] = {"rhs_6b45_light_cb","rhs_zsh7a_mike_green","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_light_cb","rhs_zsh7a_mike_green","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS74U"};
        respawnWeapons[] = {"CUP_arifle_AKS74U"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74U","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"rhs_uniform_vkpo_atacs_c_gloves",{{"FirstAidKit",5}}},{"rhs_6b45_light_cb",{{"CUP_30Rnd_545x39_AK_M",7,30}}},{},"rhs_zsh7a_mike_green","G_Aviator",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vdv_des_heli_crew : ru_vdv_des_heli_pilot {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV Helicopter Crew";
        side = 0;
        faction = "AKO_RU_VDV";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_vkpo_atacs_c_gloves";

        linkedItems[] = {"rhs_6b45_light_cb","rhs_zsh7a_mike_green_alt","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_light_cb","rhs_zsh7a_mike_green_alt","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS74U"};
        respawnWeapons[] = {"CUP_arifle_AKS74U"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74U","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"rhs_uniform_vkpo_atacs_c_gloves",{{"FirstAidKit",5}}},{"rhs_6b45_light_cb",{{"CUP_30Rnd_545x39_AK_M",7,30}}},{},"rhs_zsh7a_mike_green_alt","G_Bandanna_khk",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vdv_des_jet_pilot : ru_vdv_des_heli_pilot {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV Jet Pilot";
        side = 0;
        faction = "AKO_RU_VDV";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_df15";

        linkedItems[] = {"CMU33PTan","rhs_zsh7a_alt","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CMU33PTan","rhs_zsh7a_alt","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS74U","Binocular"};
        respawnWeapons[] = {"CUP_arifle_AKS74U","Binocular"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        backpack = "B_Parachute";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74U","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"rhs_uniform_df15",{{"FirstAidKit",5}}},{"CMU33PTan",{{"FirstAidKit",4},{"rhs_mag_rgo",2,1},{"CUP_30Rnd_545x39_AK_M",5,30}}},{"B_Parachute",{}},"rhs_zsh7a_alt","",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vdv_des_mortarman_gun : ru_vdv_des_rifleman_ak74m {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV Mortarman (Gun)";
        side = 0;
        faction = "AKO_RU_VDV";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_vkpo_atacs_c_gloves";

        linkedItems[] = {"rhs_6b45_rifleman_2_cb","rhs_atacs_c_6b47","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_rifleman_2_cb","rhs_atacs_c_6b47","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74M"};
        respawnWeapons[] = {"CUP_arifle_AK74M"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        backpack = "RHS_Podnos_Gun_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"rhs_uniform_vkpo_atacs_c_gloves",{{"FirstAidKit",5}}},{"rhs_6b45_rifleman_2_cb",{{"CUP_30Rnd_545x39_AK_M",12,30},{"rhs_mag_rgo",3,1}}},{"RHS_Podnos_Gun_Bag",{}},"rhs_atacs_c_6b47","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vdv_des_mortarman_bipod : ru_vdv_des_rifleman_ak12 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV Mortarman (Bipod)";
        side = 0;
        faction = "AKO_RU_VDV";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_vkpo_atacs_c_gloves";

        linkedItems[] = {"rhs_6b45_rifleman_2_cb","rhs_6b47_bare_d","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_rifleman_2_cb","rhs_6b47_bare_d","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK12_bicolor"};
        respawnWeapons[] = {"CUP_arifle_AK12_bicolor"};

        magazines[] = {"CUP_30Rnd_545x39_AK12_M","CUP_30Rnd_545x39_AK12_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK12_M","CUP_30Rnd_545x39_AK12_M"};

        backpack = "RHS_Podnos_Bipod_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK12_bicolor","","rhs_acc_perst1ik_ris","",{"CUP_30Rnd_545x39_AK12_M",30},{},""},{},{},{"rhs_uniform_vkpo_atacs_c_gloves",{{"FirstAidKit",5}}},{"rhs_6b45_rifleman_2_cb",{{"FirstAidKit",1},{"rhs_mag_rgo",4,1},{"CUP_30Rnd_545x39_AK12_M",10,30}}},{"RHS_Podnos_Bipod_Bag",{}},"rhs_6b47_bare_d","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vdv_spetsnaz_ak12 : ru_vdv_des_sergeant {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "GRU Spetsnaz (AK-12)";
        side = 0;
        faction = "AKO_RU_VDV";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_atacs_c_uniform_6sh122_gloves_v1";

        linkedItems[] = {"rhs_6b45_rifleman_khk","rhs_altyn","ItemMap","O_UavTerminal","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_rifleman_khk","rhs_altyn","ItemMap","O_UavTerminal","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK12_AFG_bicolor","rhs_weap_rpg26"};
        respawnWeapons[] = {"CUP_arifle_AK12_AFG_bicolor","rhs_weap_rpg26"};

        magazines[] = {"CUP_30Rnd_545x39_AK12_M","rhs_rpg26_mag","CUP_30Rnd_545x39_AK12_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK12_M","rhs_rpg26_mag","CUP_30Rnd_545x39_AK12_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK12_AFG_bicolor","rhs_acc_tgpa","rhs_acc_perst1ik_ris","rhs_acc_1p87",{"CUP_30Rnd_545x39_AK12_M",30},{},""},{"rhs_weap_rpg26","","","",{"rhs_rpg26_mag",1},{},""},{},{"rhs_atacs_c_uniform_6sh122_gloves_v1",{{"FirstAidKit",5}}},{"rhs_6b45_rifleman_khk",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK12_M",10,30},{"rhs_mag_rgo",4,1}}},{},"rhs_altyn","rhs_ess_black",{},{"ItemMap","O_UavTerminal","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vdv_spetsnaz_ak104 : ru_vdv_des_sergeant {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "GRU Spetsnaz (AK-104)";
        side = 0;
        faction = "AKO_RU_VDV";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_atacs_c_uniform_6sh122_gloves_v1";

        linkedItems[] = {"rhs_6b45_rifleman_2_khk","rhs_altyn_novisor_ess","ItemMap","O_UavTerminal","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_rifleman_2_khk","rhs_altyn_novisor_ess","ItemMap","O_UavTerminal","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK104_railed"};
        respawnWeapons[] = {"CUP_arifle_AK104_railed"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK104_railed","CUP_muzzle_snds_socom762rc","rhs_acc_perst1ik_ris","rhs_acc_rakursPM",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"rhs_atacs_c_uniform_6sh122_gloves_v1",{{"FirstAidKit",5}}},{"rhs_6b45_rifleman_2_khk",{{"FirstAidKit",2},{"rhs_mag_rgo",2,1},{"CUP_30Rnd_762x39_AK47_M",9,30}}},{},"rhs_altyn_novisor_ess","rhs_balaclava",{},{"ItemMap","O_UavTerminal","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vdv_spetsnaz_ak74m : ru_vdv_des_sergeant {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "GRU Spetsnaz (AK-74M)";
        side = 0;
        faction = "AKO_RU_VDV";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_atacs_c_uniform_6sh122_gloves_v1";

        linkedItems[] = {"rhs_6b45_rifleman_2_khk","rhs_altyn","ItemMap","O_UavTerminal","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_rifleman_2_khk","rhs_altyn","ItemMap","O_UavTerminal","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74M_railed_afg"};
        respawnWeapons[] = {"CUP_arifle_AK74M_railed_afg"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M_railed_afg","rhs_acc_tgpa","rhs_acc_perst1ik_ris","rhs_acc_rakursPM",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"rhs_atacs_c_uniform_6sh122_gloves_v1",{{"FirstAidKit",5}}},{"rhs_6b45_rifleman_2_khk",{{"FirstAidKit",2},{"rhs_mag_rgo",2,1},{"CUP_30Rnd_545x39_AK_M",11,30}}},{},"rhs_altyn","rhs_balaclava",{},{"ItemMap","O_UavTerminal","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vdv_spetsnaz_ak15 : ru_vdv_des_sergeant {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "GRU Spetsnaz (AK-15)";
        side = 0;
        faction = "AKO_RU_VDV";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_atacs_c_uniform_6sh122_gloves_v1";

        linkedItems[] = {"rhs_6b45_rifleman_2_khk","rhs_altyn_visordown","ItemMap","O_UavTerminal","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_rifleman_2_khk","rhs_altyn_visordown","ItemMap","O_UavTerminal","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK15_AFG_bicolor"};
        respawnWeapons[] = {"CUP_arifle_AK15_AFG_bicolor"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK15_AFG_bicolor","CUP_muzzle_snds_socom762rc","rhs_acc_perst1ik_ris","rhs_acc_rakursPM",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"rhs_atacs_c_uniform_6sh122_gloves_v1",{{"FirstAidKit",5}}},{"rhs_6b45_rifleman_2_khk",{{"FirstAidKit",2},{"rhs_mag_rgo",2,1},{"CUP_30Rnd_762x39_AK47_M",9,30}}},{},"rhs_altyn_visordown","rhs_balaclava",{},{"ItemMap","O_UavTerminal","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vdv_spetsnaz_aks74u : ru_vdv_des_sergeant {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "GRU Spetsnaz (AKS-74U)";
        side = 0;
        faction = "AKO_RU_VDV";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_atacs_c_uniform_6sh122_gloves_v1";

        linkedItems[] = {"rhs_6b45_rifleman_2_khk","rhs_altyn","ItemMap","O_UavTerminal","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_rifleman_2_khk","rhs_altyn","ItemMap","O_UavTerminal","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS74U_railed"};
        respawnWeapons[] = {"CUP_arifle_AKS74U_railed"};

        magazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","CUP_30Rnd_545x39_AK74_plum_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","CUP_30Rnd_545x39_AK74_plum_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74U_railed","rhs_acc_tgpa","rhs_acc_perst1ik_ris","rhs_acc_1p87",{"CUP_30Rnd_545x39_AK74_plum_M",30},{},""},{},{},{"rhs_atacs_c_uniform_6sh122_gloves_v1",{{"FirstAidKit",5}}},{"rhs_6b45_rifleman_2_khk",{{"FirstAidKit",2},{"rhs_mag_rgo",2,1},{"CUP_30Rnd_545x39_AK74_plum_M",10,30}}},{},"rhs_altyn","rhs_balaclava",{},{"ItemMap","O_UavTerminal","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vdv_spetsnaz_pilot : ru_vdv_des_sergeant {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "GRU Spetsnaz Pilot";
        side = 0;
        faction = "AKO_RU_VDV";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_atacs_c_uniform_6sh122_gloves_v1";

        linkedItems[] = {"rhs_6b45_light_khk","rhs_zsh7a_mike_green_alt","ItemMap","O_UavTerminal","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_light_khk","rhs_zsh7a_mike_green_alt","ItemMap","O_UavTerminal","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK105"};
        respawnWeapons[] = {"CUP_arifle_AK105"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK105","rhs_acc_tgpa","rhs_acc_perst1ik_ris","rhs_acc_pkas",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"rhs_atacs_c_uniform_6sh122_gloves_v1",{{"FirstAidKit",5}}},{"rhs_6b45_light_khk",{{"CUP_30Rnd_545x39_AK_M",7,30}}},{},"rhs_zsh7a_mike_green_alt","G_Bandanna_khk",{},{"ItemMap","O_UavTerminal","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vdv_spetsnaz_svd : ru_vdv_des_sergeant {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "GRU Spetsnaz (SVD)";
        side = 0;
        faction = "AKO_RU_VDV";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_atacs_c_uniform_6sh122_gloves_v1";

        linkedItems[] = {"rhs_6b45_rifleman_khk","rhs_altyn_novisor_ess","ItemMap","O_UavTerminal","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_rifleman_khk","rhs_altyn_novisor_ess","ItemMap","O_UavTerminal","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_srifle_SVD_des"};
        respawnWeapons[] = {"CUP_srifle_SVD_des"};

        magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M"};
        respawnMagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_SVD_des","CUP_muzzle_snds_KZRZP_SVD","","CUP_optic_PSO_3_open",{"CUP_10Rnd_762x54_SVD_M",10},{},""},{},{},{"rhs_atacs_c_uniform_6sh122_gloves_v1",{{"FirstAidKit",5}}},{"rhs_6b45_rifleman_khk",{{"FirstAidKit",2},{"rhs_mag_rgo",2,1},{"CUP_10Rnd_762x54_SVD_M",11,10}}},{},"rhs_altyn_novisor_ess","G_Balaclava_blk",{},{"ItemMap","O_UavTerminal","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };