    
    class ru_vmf_sergeant : rhs_vmf_recon_sergeant_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VMF Sergeant";
        side = 0;
        faction = "ako_ru_vmf";

        identityTypes[] = {"Head_Russian","LanguageRUS_F","Head_Russian_camo_arid","Head_Russian_camo_lush","Head_Russian_camo_semiarid"};

        uniformClass = "gorkaflora";

        linkedItems[] = {"rhs_6b45_grn_od","rhs_6b7_1m","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};
        respawnlinkedItems[] = {"rhs_6b45_grn_od","rhs_6b7_1m","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};

        weapons[] = {"CUP_arifle_AK74M_GL_top_rail","rhs_weap_rpg26"};
        respawnWeapons[] = {"CUP_arifle_AK74M_GL_top_rail","rhs_weap_rpg26"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","rhs_rpg26_mag","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","rhs_rpg26_mag","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M_GL_top_rail","","CUP_acc_LLM01_L","rhs_acc_1p87",{"CUP_30Rnd_545x39_AK_M",30},{"CUP_1Rnd_HE_GP25_M",1},""},{"rhs_weap_rpg26","","","",{"rhs_rpg26_mag",1},{},""},{},{"gorkaflora",{{"FirstAidKit",6}}},{"rhs_6b45_grn_od",{{"CUP_1Rnd_HE_GP25_M",10,1},{"CUP_30Rnd_545x39_AK_M",12,30},{"rhs_mag_rgo",3,1}}},{},"rhs_6b7_1m","rhs_ess_black",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vmf_efreitor : rhs_vmf_recon_efreitor_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VMF Efreitor";
        side = 0;
        faction = "ako_ru_vmf";

        identityTypes[] = {"Head_Russian","LanguageRUS_F","Head_Russian_camo_arid","Head_Russian_camo_lush","Head_Russian_camo_semiarid"};

        uniformClass = "gorkacflora";

        linkedItems[] = {"rhs_6b45_rifleman_od","rhs_6b7_1m_ess_bala","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};
        respawnlinkedItems[] = {"rhs_6b45_rifleman_od","rhs_6b7_1m_ess_bala","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};

        weapons[] = {"CUP_arifle_AK74M_railed_afg","rhs_weap_rpg26"};
        respawnWeapons[] = {"CUP_arifle_AK74M_railed_afg","rhs_weap_rpg26"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","rhs_rpg26_mag","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","rhs_rpg26_mag","CUP_30Rnd_545x39_AK_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M_railed_afg","","CUP_acc_LLM01_L","rhs_acc_rakursPM",{"CUP_30Rnd_545x39_AK_M",30},{},""},{"rhs_weap_rpg26","","","",{"rhs_rpg26_mag",1},{},""},{},{"gorkacflora",{{"FirstAidKit",6}}},{"rhs_6b45_rifleman_od",{{"CUP_30Rnd_545x39_AK_M",12,30},{"rhs_mag_rgo",3,1}}},{},"rhs_6b7_1m_ess_bala","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vmf_rifleman_ak12 : ru_vmf_sergeant {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VMF Rifleman (AK-12)";
        side = 0;
        faction = "ako_ru_vmf";

        identityTypes[] = {"Head_Russian","LanguageRUS_F","Head_Russian_camo_arid","Head_Russian_camo_lush","Head_Russian_camo_semiarid"};

        uniformClass = "gorkacflora";

        linkedItems[] = {"rhs_6b45_rifleman_2_od","rhs_6b7_1m","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_rifleman_2_od","rhs_6b7_1m","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK12_black"};
        respawnWeapons[] = {"CUP_arifle_AK12_black"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK12_black","","rhs_acc_perst1ik_ris","CUP_optic_CompM2_low",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"gorkacflora",{{"FirstAidKit",6}}},{"rhs_6b45_rifleman_2_od",{{"rhs_mag_rgo",5,1},{"CUP_30Rnd_545x39_AK_M",10,30}}},{},"rhs_6b7_1m","G_Bandanna_oli",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vmf_rifleman_ak74m : ru_vmf_rifleman_ak12 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VMF Rifleman (AK-74M)";
        side = 0;
        faction = "ako_ru_vmf";

        identityTypes[] = {"Head_Russian","LanguageRUS_F","Head_Russian_camo_arid","Head_Russian_camo_lush","Head_Russian_camo_semiarid"};

        uniformClass = "gorkaflora";

        linkedItems[] = {"rhs_6b45_rifleman_2_od","rhs_6b7_1m_olive","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_rifleman_2_od","rhs_6b7_1m_olive","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74M_top_rail"};
        respawnWeapons[] = {"CUP_arifle_AK74M_top_rail"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        backpack = "rhs_rd54_vest_flora1";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M_top_rail","","CUP_acc_LLM01_L","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"gorkaflora",{{"FirstAidKit",6}}},{"rhs_6b45_rifleman_2_od",{{"CUP_30Rnd_545x39_AK_M",10,30},{"rhs_mag_rgo",5,1}}},{"rhs_rd54_vest_flora1",{{"FirstAidKit",3},{"CUP_30Rnd_545x39_AK_M",5,30},{"rhs_mag_rgo",2,1}}},"rhs_6b7_1m_olive","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vmf_rifleman_akm : ru_vmf_rifleman_ak12 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VMF Rifleman (AKM)";
        side = 0;
        faction = "AKO_RU_VMF";

        identityTypes[] = {"Head_Russian","LanguageRUS_F","Head_Russian_camo_arid","Head_Russian_camo_lush","Head_Russian_camo_semiarid"};

        uniformClass = "gorkacflora";

        linkedItems[] = {"rhs_6b45_rifleman_2_od","rhs_6b7_1m_ess","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_rifleman_2_od","rhs_6b7_1m_ess","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKM_top_rail"};
        respawnWeapons[] = {"CUP_arifle_AKM_top_rail"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "rhs_rd54_vest_flora1";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM_top_rail","","rhs_acc_perst1ik_ris","CUP_optic_CompM2_low",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"gorkacflora",{{"FirstAidKit",5}}},{"rhs_6b45_rifleman_2_od",{{"CUP_30Rnd_762x39_AK47_M",10,30},{"rhs_mag_rgo",2,1}}},{"rhs_rd54_vest_flora1",{{"CUP_30Rnd_762x39_AK47_M",5,30},{"rhs_mag_rgo",5,1}}},"rhs_6b7_1m_ess","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vmf_grenadier_rpg : ru_vmf_rifleman_ak12 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VMF Grenadier (RPG-7V2)";
        side = 0;
        faction = "ako_ru_vmf";

        identityTypes[] = {"Head_Russian","LanguageRUS_F","Head_Russian_camo_arid","Head_Russian_camo_lush","Head_Russian_camo_semiarid"};

        uniformClass = "gorkaflora";

        linkedItems[] = {"rhs_6b45_rifleman_2_od","rhs_6b7_1m_olive","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_rifleman_2_od","rhs_6b7_1m_olive","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74M","rhs_weap_rpg7"};
        respawnWeapons[] = {"CUP_arifle_AK74M","rhs_weap_rpg7"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","rhs_rpg7_PG7VR_mag","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","rhs_rpg7_PG7VR_mag","CUP_30Rnd_545x39_AK_M"};

        backpack = "rhs_rpg_2";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M","","CUP_acc_LLM01_L","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{"rhs_weap_rpg7","","","rhs_acc_pgo7v3",{"rhs_rpg7_PG7VR_mag",1},{},""},{},{"gorkaflora",{{"FirstAidKit",6}}},{"rhs_6b45_rifleman_2_od",{{"CUP_30Rnd_545x39_AK_M",12,30},{"rhs_mag_rgo",3,1}}},{"rhs_rpg_2",{{"rhs_rpg7_PG7VR_mag",2,1}}},"rhs_6b7_1m_olive","rhs_ess_black",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vmf_autorifleman : ru_vmf_rifleman_ak12 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VMF Auto Rifleman";
        side = 0;
        faction = "ako_ru_vmf";

        identityTypes[] = {"Head_Russian","LanguageRUS_F","Head_Russian_camo_arid","Head_Russian_camo_lush","Head_Russian_camo_semiarid"};

        uniformClass = "gorkacflora";

        linkedItems[] = {"rhs_6b45_mg_od","rhs_6b7_1m_ess","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};
        respawnlinkedItems[] = {"rhs_6b45_mg_od","rhs_6b7_1m_ess","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};

        weapons[] = {"CUP_arifle_RPK74"};
        respawnWeapons[] = {"CUP_arifle_RPK74"};

        magazines[] = {"CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M"};
        respawnMagazines[] = {"CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M"};

        backpack = "rhs_sidor";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_RPK74","","CUP_acc_LLM01_L","rhs_acc_ekp8_02",{"CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M",75},{},""},{},{},{"gorkacflora",{{"FirstAidKit",6}}},{"rhs_6b45_mg_od",{{"rhs_mag_rgo",3,1},{"CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M",5,75}}},{"rhs_sidor",{{"CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M",4,75}}},"rhs_6b7_1m_ess","rhs_balaclava",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vmf_machinegunner : ru_vmf_autorifleman {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VMF Machine Gunner";
        side = 0;
        faction = "ako_ru_vmf";

        identityTypes[] = {"Head_Russian","LanguageRUS_F","Head_Russian_camo_arid","Head_Russian_camo_lush","Head_Russian_camo_semiarid"};

        uniformClass = "gorkacflora";

        linkedItems[] = {"rhs_6b45_mg_od","rhs_6b7_1m","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};
        respawnlinkedItems[] = {"rhs_6b45_mg_od","rhs_6b7_1m","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};

        weapons[] = {"CUP_lmg_PKMN"};
        respawnWeapons[] = {"CUP_lmg_PKMN"};

        magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
        respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};

        backpack = "rhs_rk_sht_30_olive";

        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_PKMN","","","rhs_acc_1p63",{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",100},{},""},{},{},{"gorkacflora",{{"FirstAidKit",6}}},{"rhs_6b45_mg_od",{{"rhs_mag_rgo",3,1},{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",3,100}}},{"rhs_rk_sht_30_olive",{{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",5,100}}},"rhs_6b7_1m","rhs_ess_black",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vmf_marksman : ru_vmf_rifleman_ak12 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VMF Marksman";
        side = 0;
        faction = "ako_ru_vmf";

        identityTypes[] = {"Head_Russian","LanguageRUS_F","Head_Russian_camo_arid","Head_Russian_camo_lush","Head_Russian_camo_semiarid"};

        uniformClass = "gorkaflora";

        linkedItems[] = {"rhs_6b45_light_od","rhs_beanie_green","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_light_od","rhs_beanie_green","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_srifle_SVD"};
        respawnWeapons[] = {"CUP_srifle_SVD"};

        magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M"};
        respawnMagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M"};

        backpack = "rhs_sidor";

        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_SVD","","","CUP_optic_PSO_3_open",{"CUP_10Rnd_762x54_SVD_M",10},{},""},{},{},{"gorkaflora",{{"FirstAidKit",6}}},{"rhs_6b45_light_od",{{"CUP_10Rnd_762x54_SVD_M",4,10},{"rhs_mag_rgo",4,1}}},{"rhs_sidor",{{"CUP_10Rnd_762x54_SVD_M",15,10}}},"rhs_beanie_green","G_Bandanna_oli",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vmf_engineer : ru_vmf_rifleman_ak12 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VMF Engineer";
        side = 0;
        faction = "ako_ru_vmf";

        identityTypes[] = {"Head_Russian","LanguageRUS_F","Head_Russian_camo_arid","Head_Russian_camo_lush","Head_Russian_camo_semiarid"};

        uniformClass = "gorkaflora";

        linkedItems[] = {"rhs_6b45_rifleman_2_od","rhs_6b7_1m_olive","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_rifleman_2_od","rhs_6b7_1m_olive","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74M"};
        respawnWeapons[] = {"CUP_arifle_AK74M"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        backpack = "rhs_rk_sht_30_olive_engineer_empty";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M","","CUP_acc_LLM01_L","rhs_acc_1p63",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"gorkaflora",{{"FirstAidKit",6}}},{"rhs_6b45_rifleman_2_od",{{"CUP_30Rnd_545x39_AK_M",10,30},{"rhs_mag_rgo",5,1}}},{"rhs_rk_sht_30_olive_engineer_empty",{{"ToolKit",3}}},"rhs_6b7_1m_olive","rhs_ess_black",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vmf_medic : ru_vmf_engineer {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VMF Medic";
        side = 0;
        faction = "ako_ru_vmf";

        identityTypes[] = {"Head_Russian","LanguageRUS_F","Head_Russian_camo_arid","Head_Russian_camo_lush","Head_Russian_camo_semiarid"};

        uniformClass = "gorkacflora";

        linkedItems[] = {"rhs_6b45_rifleman_2_od","rhs_6b7_1m_ess","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_rifleman_2_od","rhs_6b7_1m_ess","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74M"};
        respawnWeapons[] = {"CUP_arifle_AK74M"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        backpack = "rhs_rk_sht_30_olive";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M","","CUP_acc_LLM01_L","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"gorkacflora",{{"FirstAidKit",6}}},{"rhs_6b45_rifleman_2_od",{{"CUP_30Rnd_545x39_AK_M",10,30},{"rhs_mag_rgo",5,1}}},{"rhs_rk_sht_30_olive",{{"FirstAidKit",10},{"Medikit",1},{"CUP_30Rnd_545x39_AK_M",5,30}}},"rhs_6b7_1m_ess","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vmf_officer : ru_vmf_sergeant {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VMF Officer";
        side = 0;
        faction = "ako_ru_vmf";

        identityTypes[] = {"Head_Russian","LanguageRUS_F","Head_Russian_camo_arid","Head_Russian_camo_lush","Head_Russian_camo_semiarid"};

        uniformClass = "gorkacflora";

        linkedItems[] = {"rhs_6b45_rifleman_2_od","rhs_6b7_1m","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};
        respawnlinkedItems[] = {"rhs_6b45_rifleman_2_od","rhs_6b7_1m","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};

        weapons[] = {"CUP_arifle_AK74M"};
        respawnWeapons[] = {"CUP_arifle_AK74M"};

        magazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","CUP_30Rnd_545x39_AK74_plum_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","CUP_30Rnd_545x39_AK74_plum_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M","rhs_acc_dtk1983","CUP_acc_LLM01_L","rhs_acc_ekp8_02",{"CUP_30Rnd_545x39_AK74_plum_M",30},{},""},{},{},{"gorkacflora",{{"FirstAidKit",6}}},{"rhs_6b45_rifleman_2_od",{{"CUP_30Rnd_545x39_AK74_plum_M",10,30},{"rhs_mag_rgo",5,1}}},{},"rhs_6b7_1m","G_Aviator",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vmf_at_specialist : ru_vmf_rifleman_ak12 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VMF AT Specialist";
        side = 0;
        faction = "ako_ru_vmf";

        identityTypes[] = {"Head_Russian","LanguageRUS_F","Head_Russian_camo_arid","Head_Russian_camo_lush","Head_Russian_camo_semiarid"};

        uniformClass = "gorkaflora";

        linkedItems[] = {"rhs_6b45_rifleman_od","rhs_6b7_1m_olive","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_rifleman_od","rhs_6b7_1m_olive","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74M_railed_afg","launch_O_Vorona_green_F"};
        respawnWeapons[] = {"CUP_arifle_AK74M_railed_afg","launch_O_Vorona_green_F"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","Vorona_HEAT","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","Vorona_HEAT","CUP_30Rnd_545x39_AK_M"};

        backpack = "rhs_tortila_olive";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M_railed_afg","","CUP_acc_LLM01_L","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{"launch_O_Vorona_green_F","","","",{"Vorona_HEAT",1},{},""},{},{"gorkaflora",{{"FirstAidKit",6}}},{"rhs_6b45_rifleman_od",{{"rhs_mag_rgo",5,1},{"CUP_30Rnd_545x39_AK_M",10,30}}},{"rhs_tortila_olive",{{"Vorona_HEAT",1,1}}},"rhs_6b7_1m_olive","rhs_ess_black",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vmf_aa_specialist : ru_vmf_at_specialist {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VMF AA Specialist";
        side = 0;
        faction = "ako_ru_vmf";

        identityTypes[] = {"Head_Russian","LanguageRUS_F","Head_Russian_camo_arid","Head_Russian_camo_lush","Head_Russian_camo_semiarid"};

        uniformClass = "gorkacflora";

        linkedItems[] = {"rhs_6b45_rifleman_od","rhs_6b7_1m_ess","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};
        respawnlinkedItems[] = {"rhs_6b45_rifleman_od","rhs_6b7_1m_ess","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};

        weapons[] = {"CUP_arifle_AK74M","rhs_weap_igla"};
        respawnWeapons[] = {"CUP_arifle_AK74M","rhs_weap_igla"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","rhs_mag_9k38_rocket","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","rhs_mag_9k38_rocket","CUP_30Rnd_545x39_AK_M"};

        backpack = "rhs_tortila_olive";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M","","CUP_acc_LLM01_L","rhs_acc_1p63",{"CUP_30Rnd_545x39_AK_M",30},{},""},{"rhs_weap_igla","","","",{"rhs_mag_9k38_rocket",1},{},""},{},{"gorkacflora",{{"FirstAidKit",6}}},{"rhs_6b45_rifleman_od",{{"rhs_mag_rgo",5,1},{"CUP_30Rnd_545x39_AK_M",10,30}}},{"rhs_tortila_olive",{{"rhs_mag_9k38_rocket",1,1}}},"rhs_6b7_1m_ess","G_Bandanna_oli",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vmf_crewman : ru_vmf_rifleman_ak12 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VMF Crewman";
        side = 0;
        faction = "ako_ru_vmf";

        identityTypes[] = {"Head_Russian","LanguageRUS_F","Head_Russian_camo_arid","Head_Russian_camo_lush","Head_Russian_camo_semiarid"};

        uniformClass = "gorkaflora";

        linkedItems[] = {"rhs_6b45_light_od","rhs_tsh4_ess_bala","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_light_od","rhs_tsh4_ess_bala","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS74_Early"};
        respawnWeapons[] = {"CUP_arifle_AKS74_Early"};

        magazines[] = {"CUP_30Rnd_545x39_AK74M_M","CUP_30Rnd_545x39_AK74M_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74M_M","CUP_30Rnd_545x39_AK74M_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74_Early","","","",{"CUP_30Rnd_545x39_AK74M_M",30},{},""},{},{},{"gorkaflora",{{"FirstAidKit",6}}},{"rhs_6b45_light_od",{{"CUP_30Rnd_545x39_AK74M_M",7,30}}},{},"rhs_tsh4_ess_bala","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vmf_worker : ru_vmf_crewman {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VMF Worker";
        side = 0;
        faction = "ako_ru_vmf";

        identityTypes[] = {"Head_Russian","LanguageRUS_F","Head_Russian_camo_arid","Head_Russian_camo_lush","Head_Russian_camo_semiarid"};

        uniformClass = "gorkacflora";

        linkedItems[] = {"rhs_6b45_od","rhs_6b7_1m_olive","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_od","rhs_6b7_1m_olive","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {};
        respawnWeapons[] = {};

        magazines[] = {};
        respawnMagazines[] = {};

        ALiVE_orbatCreator_loadout[] = {{},{},{},{"gorkacflora",{{"FirstAidKit",6}}},{"rhs_6b45_od",{}},{},"rhs_6b7_1m_olive","G_Bandanna_oli",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vmf_grenadier_gp25 : ru_vmf_rifleman_ak12 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VMF Grenadier (GP-25)";
        side = 0;
        faction = "ako_ru_vmf";

        identityTypes[] = {"Head_Russian","LanguageRUS_F","Head_Russian_camo_arid","Head_Russian_camo_lush","Head_Russian_camo_semiarid"};

        uniformClass = "gorkaflora";

        linkedItems[] = {"rhs_6b45_grn_od","rhs_6b7_1m_ess","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_grn_od","rhs_6b7_1m_ess","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74M_GL"};
        respawnWeapons[] = {"CUP_arifle_AK74M_GL"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M"};

        backpack = "rhs_rd54_vest_flora1";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M_GL","","CUP_acc_LLM01_L","rhs_acc_ekp8_02",{"CUP_30Rnd_545x39_AK_M",30},{"CUP_1Rnd_HE_GP25_M",1},""},{},{},{"gorkaflora",{{"FirstAidKit",6}}},{"rhs_6b45_grn_od",{{"rhs_mag_rgo",3,1},{"CUP_1Rnd_HE_GP25_M",10,1},{"CUP_30Rnd_545x39_AK_M",12,30}}},{"rhs_rd54_vest_flora1",{{"FirstAidKit",5},{"CUP_1Rnd_HE_GP25_M",20,1},{"rhs_mag_rgo",10,1}}},"rhs_6b7_1m_ess","G_Bandanna_oli",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vmf_tank_crewman : ru_vmf_crewman {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VMF Tank Crewman";
        side = 0;
        faction = "AKO_RU_VMF";

        identityTypes[] = {"Head_Russian","LanguageRUS_F","Head_Russian_camo_arid","Head_Russian_camo_lush","Head_Russian_camo_semiarid"};

        uniformClass = "gorkaflora";

        linkedItems[] = {"rhs_6b45_light_od","rhs_6b48","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_light_od","rhs_6b48","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS74U"};
        respawnWeapons[] = {"CUP_arifle_AKS74U"};

        magazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","CUP_30Rnd_545x39_AK74_plum_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","CUP_30Rnd_545x39_AK74_plum_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74U","","","",{"CUP_30Rnd_545x39_AK74_plum_M",30},{},""},{},{},{"gorkaflora",{{"FirstAidKit",6}}},{"rhs_6b45_light_od",{{"CUP_30Rnd_545x39_AK74_plum_M",7,30}}},{},"rhs_6b48","rhs_ess_black",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vmf_mortarman_gun : ru_vmf_rifleman_ak12 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VMF Mortarman (Gun)";
        side = 0;
        faction = "ako_ru_vmf";

        identityTypes[] = {"Head_Russian","LanguageRUS_F","Head_Russian_camo_arid","Head_Russian_camo_lush","Head_Russian_camo_semiarid"};

        uniformClass = "gorkacflora";

        linkedItems[] = {"rhs_6b45_rifleman_2_od","rhs_6b7_1m_olive","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_rifleman_2_od","rhs_6b7_1m_olive","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK12_black"};
        respawnWeapons[] = {"CUP_arifle_AK12_black"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        backpack = "RHS_Podnos_Gun_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK12_black","","rhs_acc_perst1ik_ris","CUP_optic_CompM2_low",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"gorkacflora",{{"FirstAidKit",6}}},{"rhs_6b45_rifleman_2_od",{{"rhs_mag_rgo",5,1},{"CUP_30Rnd_545x39_AK_M",10,30}}},{"RHS_Podnos_Gun_Bag",{}},"rhs_6b7_1m_olive","rhs_ess_black",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vmf_mortarman_bipod : ru_vmf_mortarman_gun {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VMF Mortarman (Bipod)";
        side = 0;
        faction = "ako_ru_vmf";

        identityTypes[] = {"Head_Russian","LanguageRUS_F","Head_Russian_camo_arid","Head_Russian_camo_lush","Head_Russian_camo_semiarid"};

        uniformClass = "gorkaflora";

        linkedItems[] = {"rhs_6b45_rifleman_2_od","rhs_6b7_1m_ess","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_rifleman_2_od","rhs_6b7_1m_ess","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK12_black"};
        respawnWeapons[] = {"CUP_arifle_AK12_black"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        backpack = "RHS_Podnos_Bipod_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK12_black","","CUP_acc_LLM_black","rhs_acc_1p87",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"gorkaflora",{{"FirstAidKit",6}}},{"rhs_6b45_rifleman_2_od",{{"rhs_mag_rgo",5,1},{"CUP_30Rnd_545x39_AK_M",10,30}}},{"RHS_Podnos_Bipod_Bag",{}},"rhs_6b7_1m_ess","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vmf_uav_operator_he : ru_vmf_rifleman_ak12 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VMF UAV Operator (HE)";
        side = 0;
        faction = "ako_ru_vmf";

        identityTypes[] = {"Head_Russian","LanguageRUS_F","Head_Russian_camo_arid","Head_Russian_camo_lush","Head_Russian_camo_semiarid"};

        uniformClass = "gorkacflora";

        linkedItems[] = {"rhs_6b45_rifleman_2_od","rhs_6b7_1m_ess","ItemMap","O_UavTerminal","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_rifleman_2_od","rhs_6b7_1m_ess","ItemMap","O_UavTerminal","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74M_top_rail"};
        respawnWeapons[] = {"CUP_arifle_AK74M_top_rail"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        backpack = "O_UAV_01_backpack_Custom";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M_top_rail","","CUP_acc_LLM01_L","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"gorkacflora",{{"FirstAidKit",6}}},{"rhs_6b45_rifleman_2_od",{{"CUP_30Rnd_545x39_AK_M",10,30},{"rhs_mag_rgo",5,1}}},{"O_UAV_01_backpack_Custom",{}},"rhs_6b7_1m_ess","rhs_facewear_6m2_1",{},{"ItemMap","O_UavTerminal","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vmf_uav_operator_rpg : ru_vmf_uav_operator_he {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VMF UAV Operator (RPG)";
        side = 0;
        faction = "AKO_RU_VMF";

        identityTypes[] = {"Head_Russian","LanguageRUS_F","Head_Russian_camo_arid","Head_Russian_camo_lush","Head_Russian_camo_semiarid"};

        uniformClass = "gorkacflora";

        linkedItems[] = {"rhs_6b45_rifleman_2_od","rhs_6b7_1m_olive","ItemMap","O_UavTerminal","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};
        respawnlinkedItems[] = {"rhs_6b45_rifleman_2_od","rhs_6b7_1m_olive","ItemMap","O_UavTerminal","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};

        weapons[] = {"CUP_arifle_AK74M_top_rail"};
        respawnWeapons[] = {"CUP_arifle_AK74M_top_rail"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        backpack = "O_UAV_FPV_backpack_F";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M_top_rail","","CUP_acc_LLM01_L","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"gorkacflora",{{"FirstAidKit",6}}},{"rhs_6b45_rifleman_2_od",{{"CUP_30Rnd_545x39_AK_M",10,30},{"rhs_mag_rgo",5,1}}},{"O_UAV_FPV_backpack_F",{}},"rhs_6b7_1m_olive","rhs_ess_black",{},{"ItemMap","O_UavTerminal","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vmf_commander : ru_vmf_officer {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VMF Commander";
        side = 0;
        faction = "ako_ru_vmf";

        identityTypes[] = {"Head_Russian","LanguageRUS_F","Head_Russian_camo_arid","Head_Russian_camo_lush","Head_Russian_camo_semiarid"};

        uniformClass = "gorkacflora";

        linkedItems[] = {"rhs_6b45_light_od","rhs_beret_mp1","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b45_light_od","rhs_beret_mp1","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS74U"};
        respawnWeapons[] = {"CUP_arifle_AKS74U"};

        magazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","CUP_30Rnd_545x39_AK74_plum_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","CUP_30Rnd_545x39_AK74_plum_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74U","","","",{"CUP_30Rnd_545x39_AK74_plum_M",30},{},""},{},{},{"gorkacflora",{{"FirstAidKit",6}}},{"rhs_6b45_light_od",{{"CUP_30Rnd_545x39_AK74_plum_M",7,30}}},{},"rhs_beret_mp1","G_Aviator",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };