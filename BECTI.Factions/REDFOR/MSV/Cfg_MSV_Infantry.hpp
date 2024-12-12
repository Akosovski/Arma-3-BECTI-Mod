    
    class ru_msv_rifleman_ak12 : rhs_msv_emr_rifleman_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "MSV Rifleman (AK-12)";
        side = 0;
        faction = "ako_ru_msv";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_6sh122_gloves_v1";

        linkedItems[] = {"rhs_6b45_rifleman","rhs_6b47_6B50","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_rifleman","rhs_6b47_6B50","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK12_AFG_black"};
        respawnWeapons[] = {"CUP_arifle_AK12_AFG_black"};

        magazines[] = {"CUP_30Rnd_545x39_AK12_M","CUP_30Rnd_545x39_AK12_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK12_M","CUP_30Rnd_545x39_AK12_M"};

        backpack = "rhs_rd54_emr1";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK12_AFG_black","","CUP_acc_LLM_black","CUP_optic_Aimpoint_5000",{"CUP_30Rnd_545x39_AK12_M",30},{},""},{},{},{"rhs_uniform_6sh122_gloves_v1",{{"FirstAidKit",3},{"CUP_30Rnd_545x39_AK12_M",2,30}}},{"rhs_6b45_rifleman",{{"FirstAidKit",2},{"CUP_30Rnd_545x39_AK12_M",8,30},{"rhs_mag_rgo",5,1}}},{"rhs_rd54_emr1",{{"FirstAidKit",5},{"rhs_mag_rgo",3,1},{"CUP_30Rnd_545x39_AK74M_M",10,30},{"CUP_30Rnd_545x39_AK_M",10,30}}},"rhs_6b47_6B50","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_msv_rifleman_ak74m : ru_msv_rifleman_ak12 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "MSV Rifleman (AK-74M)";
        side = 0;
        faction = "ako_ru_msv";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_6sh122_gloves_v1";

        linkedItems[] = {"rhs_6b45_rifleman","rhs_6b47_emr_1","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_rifleman","rhs_6b47_emr_1","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74M"};
        respawnWeapons[] = {"CUP_arifle_AK74M"};

        magazines[] = {"CUP_30Rnd_545x39_AK74M_M","CUP_30Rnd_545x39_AK74M_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74M_M","CUP_30Rnd_545x39_AK74M_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M","","CUP_acc_LLM_black","rhs_acc_ekp8_02",{"CUP_30Rnd_545x39_AK74M_M",30},{},""},{},{},{"rhs_uniform_6sh122_gloves_v1",{{"FirstAidKit",5}}},{"rhs_6b45_rifleman",{{"rhs_mag_rgo",5,1},{"CUP_30Rnd_545x39_AK74M_M",10,30}}},{},"rhs_6b47_emr_1","rhs_ess_black",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_msv_rifleman_akm : ru_msv_rifleman_ak74m {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "MSV Rifleman (AKM)";
        side = 0;
        faction = "ako_ru_msv";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_6sh122_v1";

        linkedItems[] = {"rhs_6b45_rifleman","rhs_6b47_emr_2","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_rifleman","rhs_6b47_emr_2","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKMN_railed_afg"};
        respawnWeapons[] = {"CUP_arifle_AKMN_railed_afg"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_bakelite_M","CUP_30Rnd_762x39_AK47_bakelite_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_bakelite_M","CUP_30Rnd_762x39_AK47_bakelite_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKMN_railed_afg","","","CUP_optic_Aimpoint_5000",{"CUP_30Rnd_762x39_AK47_bakelite_M",30},{},""},{},{},{"rhs_uniform_6sh122_v1",{{"FirstAidKit",5}}},{"rhs_6b45_rifleman",{{"rhs_mag_rgo",4,1},{"CUP_30Rnd_762x39_AK47_bakelite_M",9,30}}},{},"rhs_6b47_emr_2","G_Bandanna_oli",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_msv_sergeant : ru_msv_rifleman_akm {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "MSV Sergeant";
        side = 0;
        faction = "ako_ru_msv";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_6sh122_gloves_v1";

        linkedItems[] = {"rhs_6b45_grn","rhs_6b47_6B50","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_grn","rhs_6b47_6B50","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74M_GL",""};
        respawnWeapons[] = {"CUP_arifle_AK74M_GL",""};

        magazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","CUP_1Rnd_HE_GP25_M","CUP_30Rnd_545x39_AK74_plum_M","CUP_1Rnd_HE_GP25_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","CUP_1Rnd_HE_GP25_M","CUP_30Rnd_545x39_AK74_plum_M","CUP_1Rnd_HE_GP25_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M_GL","","CUP_acc_LLM01_L","rhs_acc_pkas",{"CUP_30Rnd_545x39_AK74_plum_M",30},{"CUP_1Rnd_HE_GP25_M",1},""},{},{},{"rhs_uniform_6sh122_gloves_v1",{{"FirstAidKit",5}}},{"rhs_6b45_grn",{{"CUP_30Rnd_545x39_AK74_plum_M",10,30},{"rhs_mag_rgo",4,1},{"CUP_1Rnd_HE_GP25_M",13,1}}},{},"rhs_6b47_6B50","rhs_facewear_6m2_1",{"","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_msv_efreitor : ru_msv_sergeant {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "MSV Efreitor";
        side = 0;
        faction = "ako_ru_msv";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_6sh122_gloves_v1";

        linkedItems[] = {"rhs_6b45_rifleman","rhs_6b47_emr_2","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_rifleman","rhs_6b47_emr_2","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74M","rhs_weap_rpg26",""};
        respawnWeapons[] = {"CUP_arifle_AK74M","rhs_weap_rpg26",""};

        magazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","rhs_rpg26_mag","CUP_30Rnd_545x39_AK74_plum_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","rhs_rpg26_mag","CUP_30Rnd_545x39_AK74_plum_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M","","CUP_acc_LLM_black","rhs_acc_1p63",{"CUP_30Rnd_545x39_AK74_plum_M",30},{},""},{"rhs_weap_rpg26","","","",{"rhs_rpg26_mag",1},{},""},{},{"rhs_uniform_6sh122_gloves_v1",{{"FirstAidKit",5}}},{"rhs_6b45_rifleman",{{"rhs_mag_rgo",4,1},{"CUP_30Rnd_545x39_AK74_plum_M",11,30}}},{},"rhs_6b47_emr_2","G_Bandanna_oli",{"","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_msv_uav_operator_he : ru_msv_efreitor {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "MSV UAV Operator (HE)";
        side = 0;
        faction = "ako_ru_msv";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_6sh122_v1";

        linkedItems[] = {"rhs_6b45_rifleman","rhs_6b47_6B50","ItemMap","O_UavTerminal","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_rifleman","rhs_6b47_6B50","ItemMap","O_UavTerminal","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74M",""};
        respawnWeapons[] = {"CUP_arifle_AK74M",""};

        magazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","CUP_30Rnd_545x39_AK74_plum_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","CUP_30Rnd_545x39_AK74_plum_M"};

        backpack = "O_UAV_01_backpack_Custom";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M","","rhs_acc_perst1ik_ris","rhs_acc_pkas",{"CUP_30Rnd_545x39_AK74_plum_M",30},{},""},{},{},{"rhs_uniform_6sh122_v1",{{"FirstAidKit",5}}},{"rhs_6b45_rifleman",{{"FirstAidKit",3},{"rhs_mag_rgo",4,1},{"CUP_30Rnd_545x39_AK74_plum_M",8,30}}},{"O_UAV_01_backpack_Custom",{}},"rhs_6b47_6B50","rhs_facewear_6m2_1",{"","","","",{},{},""},{"ItemMap","O_UavTerminal","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_msv_uav_operator_rpg : ru_msv_uav_operator_he {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "MSV UAV Operator (RPG)";
        side = 0;
        faction = "AKO_RU_MSV";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_6sh122_v1";

        linkedItems[] = {"rhs_6b45_rifleman","rhs_6b47_emr_2","ItemMap","O_UavTerminal","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};
        respawnlinkedItems[] = {"rhs_6b45_rifleman","rhs_6b47_emr_2","ItemMap","O_UavTerminal","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};

        weapons[] = {"CUP_arifle_AK74M",""};
        respawnWeapons[] = {"CUP_arifle_AK74M",""};

        magazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","CUP_30Rnd_545x39_AK74_plum_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","CUP_30Rnd_545x39_AK74_plum_M"};

        backpack = "O_UAV_FPV_backpack_F";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M","","rhs_acc_perst1ik_ris","rhs_acc_pkas",{"CUP_30Rnd_545x39_AK74_plum_M",30},{},""},{},{},{"rhs_uniform_6sh122_v1",{{"FirstAidKit",5}}},{"rhs_6b45_rifleman",{{"FirstAidKit",3},{"rhs_mag_rgo",4,1},{"CUP_30Rnd_545x39_AK74_plum_M",8,30}}},{"O_UAV_FPV_backpack_F",{}},"rhs_6b47_emr_2","rhs_ess_black",{"","","","",{},{},""},{"ItemMap","O_UavTerminal","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_msv_crewman : ru_msv_sergeant {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "MSV Crewman";
        side = 0;
        faction = "ako_ru_msv";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_6sh122_v1";

        linkedItems[] = {"rhs_6b45_light","rhs_tsh4_ess","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_light","rhs_tsh4_ess","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS74U"};
        respawnWeapons[] = {"CUP_arifle_AKS74U"};

        magazines[] = {"CUP_30Rnd_545x39_AK74M_M","CUP_30Rnd_545x39_AK74M_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74M_M","CUP_30Rnd_545x39_AK74M_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74U","","","",{"CUP_30Rnd_545x39_AK74M_M",30},{},""},{},{},{"rhs_uniform_6sh122_v1",{{"FirstAidKit",5}}},{"rhs_6b45_light",{{"rhs_mag_rgo",2,1},{"CUP_30Rnd_545x39_AK74M_M",4,30}}},{},"rhs_tsh4_ess","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_msv_tank_crewman : ru_msv_crewman {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "MSV Tank Crewman";
        side = 0;
        faction = "ako_ru_msv";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_6sh122_v1";

        linkedItems[] = {"rhs_6b45_light","rhs_6b48","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_light","rhs_6b48","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS74U"};
        respawnWeapons[] = {"CUP_arifle_AKS74U"};

        magazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","CUP_30Rnd_545x39_AK74_plum_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","CUP_30Rnd_545x39_AK74_plum_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74U","","","",{"CUP_30Rnd_545x39_AK74_plum_M",30},{},""},{},{},{"rhs_uniform_6sh122_v1",{{"FirstAidKit",5}}},{"rhs_6b45_light",{{"rhs_mag_rgo",2,1},{"CUP_30Rnd_545x39_AK74_plum_M",5,30}}},{},"rhs_6b48","rhs_ess_black",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_msv_machinegunner : ru_msv_efreitor {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "MSV Machine Gunner";
        side = 0;
        faction = "ako_ru_msv";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_6sh122_gloves_v1";

        linkedItems[] = {"rhs_6b45_mg","rhs_6b47_emr","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_mg","rhs_6b47_emr","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_lmg_PKM"};
        respawnWeapons[] = {"CUP_lmg_PKM"};

        magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M"};
        respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M"};

        backpack = "rhs_tortila_emr";

        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_PKM","","","",{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M",100},{},""},{},{},{"rhs_uniform_6sh122_gloves_v1",{{"FirstAidKit",5}}},{"rhs_6b45_mg",{{"FirstAidKit",2},{"rhs_mag_rgo",4,1},{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M",2,100}}},{"rhs_tortila_emr",{{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M",7,100}}},"rhs_6b47_emr","rhs_ess_black",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_msv_marksman : ru_msv_machinegunner {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "MSV Marksman";
        side = 0;
        faction = "ako_ru_msv";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_6sh122_v1";

        linkedItems[] = {"rhs_6b45_rifleman","rhs_beanie_green","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_rifleman","rhs_beanie_green","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_srifle_SVD"};
        respawnWeapons[] = {"CUP_srifle_SVD"};

        magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M"};
        respawnMagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M"};

        backpack = "rhs_sidor";

        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_SVD","","","CUP_optic_PSO_3_open",{"CUP_10Rnd_762x54_SVD_M",10},{},""},{},{},{"rhs_uniform_6sh122_v1",{{"FirstAidKit",5}}},{"rhs_6b45_rifleman",{{"FirstAidKit",1},{"CUP_10Rnd_762x54_SVD_M",10,10},{"rhs_mag_rgo",4,1}}},{"rhs_sidor",{{"FirstAidKit",5},{"CUP_10Rnd_762x54_SVD_M",10,10}}},"rhs_beanie_green","G_Bandanna_oli",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_msv_engineer : ru_msv_efreitor {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "MSV Engineer";
        side = 0;
        faction = "ako_ru_msv";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_6sh122_gloves_v1";

        linkedItems[] = {"rhs_6b45_rifleman","rhs_6b47_6B50","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_rifleman","rhs_6b47_6B50","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK12_black"};
        respawnWeapons[] = {"CUP_arifle_AK12_black"};

        magazines[] = {"CUP_30Rnd_545x39_AK12_M","CUP_30Rnd_545x39_AK12_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK12_M","CUP_30Rnd_545x39_AK12_M"};

        backpack = "rhs_assault_umbts_engineer_empty";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK12_black","","CUP_acc_LLM_black","CUP_optic_Aimpoint_5000",{"CUP_30Rnd_545x39_AK12_M",30},{},""},{},{},{"rhs_uniform_6sh122_gloves_v1",{{"FirstAidKit",5}}},{"rhs_6b45_rifleman",{{"rhs_mag_rgo",4,1},{"CUP_30Rnd_545x39_AK12_M",11,30}}},{"rhs_assault_umbts_engineer_empty",{{"ToolKit",2},{"MineDetector",3}}},"rhs_6b47_6B50","rhs_facewear_6m2_1",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_msv_medic : ru_msv_efreitor {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "MSV Medic";
        side = 0;
        faction = "ako_ru_msv";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_6sh122_gloves_v1";

        linkedItems[] = {"rhs_6b45_rifleman","rhs_6b47_emr","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_rifleman","rhs_6b47_emr","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74M"};
        respawnWeapons[] = {"CUP_arifle_AK74M"};

        magazines[] = {"CUP_30Rnd_545x39_AK74M_M","CUP_30Rnd_545x39_AK74M_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74M_M","CUP_30Rnd_545x39_AK74M_M"};

        backpack = "rhs_sidor";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M","","CUP_acc_LLM01_L","rhs_acc_1p63",{"CUP_30Rnd_545x39_AK74M_M",30},{},""},{},{},{"rhs_uniform_6sh122_gloves_v1",{{"FirstAidKit",5}}},{"rhs_6b45_rifleman",{{"rhs_mag_rgo",4,1},{"CUP_30Rnd_545x39_AK74M_M",11,30}}},{"rhs_sidor",{{"Medikit",1},{"FirstAidKit",6}}},"rhs_6b47_emr","rhs_ess_black",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_msv_grenadier_rpg : ru_msv_rifleman_akm {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "MSV Grenadier (RPG-7V2)";
        side = 0;
        faction = "ako_ru_msv";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_6sh122_gloves_v1";

        linkedItems[] = {"rhs_6b45_rifleman","rhs_6b47_emr_1","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_rifleman","rhs_6b47_emr_1","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74M","rhs_weap_rpg7"};
        respawnWeapons[] = {"CUP_arifle_AK74M","rhs_weap_rpg7"};

        magazines[] = {"CUP_30Rnd_545x39_AK74M_M","rhs_rpg7_PG7VL_mag","CUP_30Rnd_545x39_AK74M_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74M_M","rhs_rpg7_PG7VL_mag","CUP_30Rnd_545x39_AK74M_M"};

        backpack = "rhs_rpg_6b3";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M","","CUP_acc_LLM_black","rhs_acc_ekp8_02",{"CUP_30Rnd_545x39_AK74M_M",30},{},""},{"rhs_weap_rpg7","","","rhs_acc_pgo7v3",{"rhs_rpg7_PG7VL_mag",1},{},""},{},{"rhs_uniform_6sh122_gloves_v1",{{"FirstAidKit",5}}},{"rhs_6b45_rifleman",{{"rhs_mag_rgo",4,1},{"CUP_30Rnd_545x39_AK74M_M",11,30}}},{"rhs_rpg_6b3",{{"rhs_rpg7_PG7VL_mag",2,1},{"rhs_rpg7_OG7V_mag",2,1}}},"rhs_6b47_emr_1","G_Bandanna_oli",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_msv_aa_specialist : ru_msv_grenadier_rpg {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "MSV AA Specialist";
        side = 0;
        faction = "ako_ru_msv";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_6sh122_v1";

        linkedItems[] = {"rhs_6b45_rifleman","rhs_6b47_bare","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_rifleman","rhs_6b47_bare","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74M","rhs_weap_igla"};
        respawnWeapons[] = {"CUP_arifle_AK74M","rhs_weap_igla"};

        magazines[] = {"CUP_30Rnd_545x39_AK74M_M","rhs_mag_9k38_rocket","CUP_30Rnd_545x39_AK74M_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74M_M","rhs_mag_9k38_rocket","CUP_30Rnd_545x39_AK74M_M"};

        backpack = "rhs_tortila_emr";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M","","CUP_acc_LLM01_L","",{"CUP_30Rnd_545x39_AK74M_M",30},{},""},{"rhs_weap_igla","","","",{"rhs_mag_9k38_rocket",1},{},""},{},{"rhs_uniform_6sh122_v1",{{"FirstAidKit",5}}},{"rhs_6b45_rifleman",{{"rhs_mag_rgo",4,1},{"CUP_30Rnd_545x39_AK74M_M",8,30}}},{"rhs_tortila_emr",{{"rhs_mag_9k38_rocket",3,1}}},"rhs_6b47_bare","G_Bandanna_oli",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_msv_at_specialist : ru_msv_aa_specialist {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "MSV AT Specialist";
        side = 0;
        faction = "ako_ru_msv";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_6sh122_gloves_v1";

        linkedItems[] = {"rhs_6b45_rifleman","rhs_6b47_emr_1","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_rifleman","rhs_6b47_emr_1","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74M","launch_O_Vorona_green_F"};
        respawnWeapons[] = {"CUP_arifle_AK74M","launch_O_Vorona_green_F"};

        magazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","Vorona_HEAT","CUP_30Rnd_545x39_AK74_plum_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","Vorona_HEAT","CUP_30Rnd_545x39_AK74_plum_M"};

        backpack = "rhs_tortila_emr";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M","","CUP_acc_LLM01_L","rhs_acc_ekp8_02",{"CUP_30Rnd_545x39_AK74_plum_M",30},{},""},{"launch_O_Vorona_green_F","","","",{"Vorona_HEAT",1},{},""},{},{"rhs_uniform_6sh122_gloves_v1",{{"FirstAidKit",5}}},{"rhs_6b45_rifleman",{{"rhs_mag_rgo",4,1},{"CUP_30Rnd_545x39_AK74_plum_M",11,30}}},{"rhs_tortila_emr",{{"Vorona_HEAT",2,1}}},"rhs_6b47_emr_1","rhs_ess_black",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_msv_officer : ru_msv_efreitor {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "MSV Officer";
        side = 0;
        faction = "ako_ru_msv";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_6sh122_v1";

        linkedItems[] = {"rhs_6b45_light","rhs_6b47_emr","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_light","rhs_6b47_emr","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74M",""};
        respawnWeapons[] = {"CUP_arifle_AK74M",""};

        magazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","CUP_30Rnd_545x39_AK74_plum_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","CUP_30Rnd_545x39_AK74_plum_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M","","","",{"CUP_30Rnd_545x39_AK74_plum_M",30},{},""},{},{},{"rhs_uniform_6sh122_v1",{{"FirstAidKit",5}}},{"rhs_6b45_light",{{"rhs_mag_rgo",4,1},{"CUP_30Rnd_545x39_AK74_plum_M",4,30}}},{},"rhs_6b47_emr","",{"","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_msv_commander : ru_msv_officer {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "MSV Commander";
        side = 0;
        faction = "AKO_RU_MSV";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_6sh122_gloves_v1";

        linkedItems[] = {"rhs_6b45_light","rhs_vkpo_cap_alt","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_light","rhs_vkpo_cap_alt","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74M",""};
        respawnWeapons[] = {"CUP_arifle_AK74M",""};

        magazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","CUP_30Rnd_545x39_AK74_plum_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","CUP_30Rnd_545x39_AK74_plum_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M","","","",{"CUP_30Rnd_545x39_AK74_plum_M",30},{},""},{},{},{"rhs_uniform_6sh122_gloves_v1",{{"FirstAidKit",5}}},{"rhs_6b45_light",{{"rhs_mag_rgo",4,1},{"CUP_30Rnd_545x39_AK74_plum_M",4,30}}},{},"rhs_vkpo_cap_alt","G_Aviator",{"","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_msv_worker : ru_msv_officer {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "MSV Worker";
        side = 0;
        faction = "ako_ru_msv";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_6sh122_gloves_v1";

        linkedItems[] = {"rhs_6b45","rhs_6b47_bare","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45","rhs_6b47_bare","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {};
        respawnWeapons[] = {};

        magazines[] = {};
        respawnMagazines[] = {};

        ALiVE_orbatCreator_loadout[] = {{},{},{},{"rhs_uniform_6sh122_gloves_v1",{{"FirstAidKit",5}}},{"rhs_6b45",{}},{},"rhs_6b47_bare","G_Bandanna_oli",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_msv_mortarman_bipod : ru_msv_rifleman_ak74m {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "MSV Mortarman (Bipod)";
        side = 0;
        faction = "ako_ru_msv";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_6sh122_gloves_v1";

        linkedItems[] = {"rhs_6b45_rifleman","rhs_6b47_emr_2","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_rifleman","rhs_6b47_emr_2","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74M"};
        respawnWeapons[] = {"CUP_arifle_AK74M"};

        magazines[] = {"CUP_30Rnd_545x39_AK74M_M","CUP_30Rnd_545x39_AK74M_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74M_M","CUP_30Rnd_545x39_AK74M_M"};

        backpack = "RHS_Podnos_Bipod_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M","","CUP_acc_LLM01_L","CUP_optic_1p63",{"CUP_30Rnd_545x39_AK74M_M",30},{},""},{},{},{"rhs_uniform_6sh122_gloves_v1",{{"FirstAidKit",5}}},{"rhs_6b45_rifleman",{{"FirstAidKit",2},{"rhs_mag_rgo",5,1},{"CUP_30Rnd_545x39_AK74M_M",8,30}}},{"RHS_Podnos_Bipod_Bag",{}},"rhs_6b47_emr_2","G_Bandanna_oli",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_msv_mortarman_gun : ru_msv_rifleman_ak74m {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "MSV Mortarman (Gun)";
        side = 0;
        faction = "ako_ru_msv";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_6sh122_v1";

        linkedItems[] = {"rhs_6b45_rifleman","rhs_6b47_emr_1","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_rifleman","rhs_6b47_emr_1","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74M"};
        respawnWeapons[] = {"CUP_arifle_AK74M"};

        magazines[] = {"CUP_30Rnd_545x39_AK74M_M","CUP_30Rnd_545x39_AK74M_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74M_M","CUP_30Rnd_545x39_AK74M_M"};

        backpack = "RHS_Podnos_Gun_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M","","CUP_acc_LLM01_L","rhs_acc_ekp8_02",{"CUP_30Rnd_545x39_AK74M_M",30},{},""},{},{},{"rhs_uniform_6sh122_v1",{{"FirstAidKit",5}}},{"rhs_6b45_rifleman",{{"FirstAidKit",2},{"rhs_mag_rgo",5,1},{"CUP_30Rnd_545x39_AK74M_M",8,30}}},{"RHS_Podnos_Gun_Bag",{}},"rhs_6b47_emr_1","rhs_facewear_6m2_1",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_msv_driver : ru_msv_crewman {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "MSV Driver";
        side = 0;
        faction = "ako_ru_msv";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_6sh122_v1";

        linkedItems[] = {"rhs_6b45_light","rhs_vkpo_cap","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_light","rhs_vkpo_cap","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKM_Early"};
        respawnWeapons[] = {"CUP_arifle_AKM_Early"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_bakelite_M","CUP_30Rnd_762x39_AK47_bakelite_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_bakelite_M","CUP_30Rnd_762x39_AK47_bakelite_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM_Early","","","",{"CUP_30Rnd_762x39_AK47_bakelite_M",30},{},""},{},{},{"rhs_uniform_6sh122_v1",{{"FirstAidKit",5}}},{"rhs_6b45_light",{{"rhs_mag_rgo",2,1},{"CUP_30Rnd_762x39_AK47_bakelite_M",4,30}}},{},"rhs_vkpo_cap","G_Bandanna_oli",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_msv_grenadier_gp34 : ru_msv_rifleman_ak12 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "MSV Grenadier (GP-34)";
        side = 0;
        faction = "ako_ru_msv";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_6sh122_gloves_v1";

        linkedItems[] = {"rhs_6b45_grn","rhs_6b47_emr","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_grn","rhs_6b47_emr","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK12_GP34_black"};
        respawnWeapons[] = {"CUP_arifle_AK12_GP34_black"};

        magazines[] = {"CUP_30Rnd_545x39_AK12_M","CUP_1Rnd_HE_GP25_M","CUP_30Rnd_545x39_AK12_M","CUP_1Rnd_HE_GP25_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK12_M","CUP_1Rnd_HE_GP25_M","CUP_30Rnd_545x39_AK12_M","CUP_1Rnd_HE_GP25_M"};

        backpack = "rhs_rd54_emr1";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK12_GP34_black","","CUP_acc_LLM01_L","rhs_acc_1p87",{"CUP_30Rnd_545x39_AK12_M",30},{"CUP_1Rnd_HE_GP25_M",1},""},{},{},{"rhs_uniform_6sh122_gloves_v1",{{"FirstAidKit",5}}},{"rhs_6b45_grn",{{"FirstAidKit",6},{"CUP_30Rnd_545x39_AK12_M",8,30},{"CUP_1Rnd_HE_GP25_M",10,1}}},{"rhs_rd54_emr1",{{"FirstAidKit",5},{"rhs_mag_rgo",3,1}}},"rhs_6b47_emr","rhs_facewear_6m2_1",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_msv_grenadier_gp25 : ru_msv_rifleman_ak74m {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "MSV Grenadier (GP-25)";
        side = 0;
        faction = "ako_ru_msv";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_6sh122_gloves_v1";

        linkedItems[] = {"rhs_6b45_grn","rhs_6b47_6B50","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_grn","rhs_6b47_6B50","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74M_GL_top_rail"};
        respawnWeapons[] = {"CUP_arifle_AK74M_GL_top_rail"};

        magazines[] = {"CUP_30Rnd_545x39_AK74M_M","CUP_1Rnd_HE_GP25_M","CUP_30Rnd_545x39_AK74M_M","CUP_1Rnd_HE_GP25_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74M_M","CUP_1Rnd_HE_GP25_M","CUP_30Rnd_545x39_AK74M_M","CUP_1Rnd_HE_GP25_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M_GL_top_rail","","","CUP_optic_Aimpoint_5000",{"CUP_30Rnd_545x39_AK74M_M",30},{"CUP_1Rnd_HE_GP25_M",1},""},{},{},{"rhs_uniform_6sh122_gloves_v1",{{"FirstAidKit",5}}},{"rhs_6b45_grn",{{"rhs_mag_rgo",4,1},{"CUP_30Rnd_545x39_AK74M_M",9,30},{"CUP_1Rnd_HE_GP25_M",14,1}}},{},"rhs_6b47_6B50","rhs_facewear_6m2_1",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };