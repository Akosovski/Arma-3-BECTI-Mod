    
    class ru_vdv_sergeant : rhs_vdv_rifleman_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV Sergeant";
        side = 0;
        faction = "ako_ru_vdv";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_atacs_ag_uniform_6sh122_gloves_v2";

        linkedItems[] = {"AGE_WAS_Medium_AK_Olive","RCE_d_LSHZ_B_K","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};
        respawnlinkedItems[] = {"AGE_WAS_Medium_AK_Olive","RCE_d_LSHZ_B_K","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};

        weapons[] = {"CUP_arifle_AK74M_GL_railed","rhs_weap_rpg75"};
        respawnWeapons[] = {"CUP_arifle_AK74M_GL_railed","rhs_weap_rpg75"};

        magazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","CUP_1Rnd_HE_GP25_M","CUP_30Rnd_545x39_AK74_plum_M","CUP_1Rnd_HE_GP25_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","CUP_1Rnd_HE_GP25_M","CUP_30Rnd_545x39_AK74_plum_M","CUP_1Rnd_HE_GP25_M"};

        backpack = "B_AssaultPack_khk";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M_GL_railed","","CUP_acc_LLM01_L","CUP_optic_CompM2_low",{"CUP_30Rnd_545x39_AK74_plum_M",30},{"CUP_1Rnd_HE_GP25_M",1},""},{"rhs_weap_rpg75","","","",{},{},""},{},{"rhs_atacs_ag_uniform_6sh122_gloves_v2",{{"FirstAidKit",5}}},{"AGE_WAS_Medium_AK_Olive",{{"rhs_mag_rgo",4,1},{"CUP_1Rnd_HE_GP25_M",4,1},{"CUP_30Rnd_545x39_AK74_plum_M",8,30}}},{"B_AssaultPack_khk",{{"CUP_30Rnd_545x39_AK74_plum_M",5,30},{"CUP_1Rnd_HE_GP25_M",15,1}}},"RCE_d_LSHZ_B_K","Deg_TB_Green",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vdv_efreitor : ru_vdv_sergeant {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV Efreitor";
        side = 0;
        faction = "ako_ru_vdv";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_mix_1_6sh122_gloves_v1";

        linkedItems[] = {"AGE_WAS_Medium_AK_Olive","RCE_d_LSHZC_C_B_K","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};
        respawnlinkedItems[] = {"AGE_WAS_Medium_AK_Olive","RCE_d_LSHZC_C_B_K","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};

        weapons[] = {"CUP_arifle_AK12_AFG_black","rhs_weap_rpg75"};
        respawnWeapons[] = {"CUP_arifle_AK12_AFG_black","rhs_weap_rpg75"};

        magazines[] = {"CUP_30Rnd_545x39_AK12_M","CUP_30Rnd_545x39_AK12_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK12_M","CUP_30Rnd_545x39_AK12_M"};

        backpack = "B_AssaultPack_khk";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK12_AFG_black","","CUP_acc_LLM_black","optic_Nightstalker",{"CUP_30Rnd_545x39_AK12_M",30},{},""},{"rhs_weap_rpg75","","","",{},{},""},{},{"rhs_uniform_mix_1_6sh122_gloves_v1",{{"FirstAidKit",5}}},{"AGE_WAS_Medium_AK_Olive",{{"rhs_mag_rgo",4,1},{"CUP_30Rnd_545x39_AK12_M",10,30}}},{"B_AssaultPack_khk",{{"CUP_30Rnd_545x39_AK12_M",5,30},{"rhs_mag_rgo",5,1},{{"rhs_weap_rpg75","","","",{},{},""},1}}},"RCE_d_LSHZC_C_B_K","Deg_TB_Green",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vdv_rifleman_ak12 : ru_vdv_efreitor {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV Rifleman (AK-12)";
        side = 0;
        faction = "ako_ru_vdv";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_mix_2_6sh122_gloves_v1";

        linkedItems[] = {"AGE_WAS_Medium_AK_AtacsFG","RCE_w_LSHZC_C_B_K","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};
        respawnlinkedItems[] = {"AGE_WAS_Medium_AK_AtacsFG","RCE_w_LSHZC_C_B_K","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};

        weapons[] = {"CUP_arifle_AK12_AFG_black"};
        respawnWeapons[] = {"CUP_arifle_AK12_AFG_black"};

        magazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","CUP_30Rnd_545x39_AK74_plum_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","CUP_30Rnd_545x39_AK74_plum_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK12_AFG_black","","CUP_acc_LLM01_L","CUP_optic_CompM2_low",{"CUP_30Rnd_545x39_AK74_plum_M",30},{},""},{},{},{"rhs_uniform_mix_2_6sh122_gloves_v1",{{"FirstAidKit",5}}},{"AGE_WAS_Medium_AK_AtacsFG",{{"CUP_30Rnd_545x39_AK74_plum_M",10,30},{"rhs_mag_rgo",4,1}}},{},"RCE_w_LSHZC_C_B_K","Deg_TB_Tan",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vdv_rifleman_ak74m : ru_vdv_rifleman_ak12 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV Rifleman (AK-74M)";
        side = 0;
        faction = "ako_ru_vdv";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_mix_1_6sh122_gloves_v1";

        linkedItems[] = {"AGE_WAS_Medium_AK_AtacsFG","RCE_d_LSHZC_C_B_K","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};
        respawnlinkedItems[] = {"AGE_WAS_Medium_AK_AtacsFG","RCE_d_LSHZC_C_B_K","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};

        weapons[] = {"CUP_arifle_AK74M_railed_afg"};
        respawnWeapons[] = {"CUP_arifle_AK74M_railed_afg"};

        magazines[] = {"CUP_30Rnd_545x39_AK74M_M","CUP_30Rnd_545x39_AK74M_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74M_M","CUP_30Rnd_545x39_AK74M_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M_railed_afg","","CUP_acc_LLM01_L","CUP_optic_CompM2_low",{"CUP_30Rnd_545x39_AK74M_M",30},{},""},{},{},{"rhs_uniform_mix_1_6sh122_gloves_v1",{{"FirstAidKit",5}}},{"AGE_WAS_Medium_AK_AtacsFG",{{"rhs_mag_rgo",4,1},{"CUP_30Rnd_545x39_AK74M_M",10,30}}},{},"RCE_d_LSHZC_C_B_K","Deg_TB_Tan",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vdv_rifleman_ak103 : ru_vdv_rifleman_ak74m {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV Rifleman (AK-103)";
        side = 0;
        faction = "ako_ru_vdv";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_mix_1_6sh122_gloves_v1";

        linkedItems[] = {"AGE_WAS_Medium_AK_AtacsFG","RCE_w_LSHZ_B_K","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};
        respawnlinkedItems[] = {"AGE_WAS_Medium_AK_AtacsFG","RCE_w_LSHZ_B_K","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};

        weapons[] = {"CUP_arifle_AK103_railed"};
        respawnWeapons[] = {"CUP_arifle_AK103_railed"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK103_railed","","CUP_acc_LLM01_L","CUP_optic_CompM2_low",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"rhs_uniform_mix_1_6sh122_gloves_v1",{{"FirstAidKit",5}}},{"AGE_WAS_Medium_AK_AtacsFG",{{"rhs_mag_rgo",2,1},{"CUP_30Rnd_762x39_AK47_M",9,30}}},{},"RCE_w_LSHZ_B_K","G_Bandanna_oli",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vdv_medic : ru_vdv_efreitor {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV Medic";
        side = 0;
        faction = "ako_ru_vdv";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_atacs_fg_mix_1_uniform_6sh122_v1";

        linkedItems[] = {"AGE_WAS_Medium_AK_AtacsFG","RCE_w_LSHZC_C_B_K","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};
        respawnlinkedItems[] = {"AGE_WAS_Medium_AK_AtacsFG","RCE_w_LSHZC_C_B_K","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};

        weapons[] = {"CUP_arifle_AKMN_railed_afg"};
        respawnWeapons[] = {"CUP_arifle_AKMN_railed_afg"};

        magazines[] = {"CUP_30Rnd_762x39_AK103_bakelite_M","CUP_30Rnd_762x39_AK103_bakelite_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK103_bakelite_M","CUP_30Rnd_762x39_AK103_bakelite_M"};

        backpack = "rhs_rk_sht_30_olive";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKMN_railed_afg","","CUP_acc_LLM_black","",{"CUP_30Rnd_762x39_AK103_bakelite_M",30},{},""},{},{},{"rhs_atacs_fg_mix_1_uniform_6sh122_v1",{{"FirstAidKit",5}}},{"AGE_WAS_Medium_AK_AtacsFG",{{"rhs_mag_rgo",4,1},{"CUP_30Rnd_762x39_AK103_bakelite_M",8,30}}},{"rhs_rk_sht_30_olive",{{"Medikit",1},{"FirstAidKit",10},{"CUP_30Rnd_762x39_AK103_bakelite_M",3,30}}},"RCE_w_LSHZC_C_B_K","Deg_TB_Green",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vdv_autorifleman : ru_vdv_rifleman_ak12 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV Auto Rifleman";
        side = 0;
        faction = "ako_ru_vdv";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_mix_1_6sh122_gloves_v1";

        linkedItems[] = {"AGE_WAS_Heavy_AK_AtacsFG","RCE_d_LSHZC_C_B_K","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};
        respawnlinkedItems[] = {"AGE_WAS_Heavy_AK_AtacsFG","RCE_d_LSHZC_C_B_K","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};

        weapons[] = {"CUP_arifle_RPK74M"};
        respawnWeapons[] = {"CUP_arifle_RPK74M"};

        magazines[] = {"CUP_30Rnd_545x39_AK74M_M","CUP_30Rnd_545x39_AK74M_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74M_M","CUP_30Rnd_545x39_AK74M_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_RPK74M","","CUP_acc_LLM_black","rhs_acc_ekp8_02",{"CUP_30Rnd_545x39_AK74M_M",30},{},""},{},{},{"rhs_uniform_mix_1_6sh122_gloves_v1",{{"FirstAidKit",5}}},{"AGE_WAS_Heavy_AK_AtacsFG",{{"rhs_mag_rgo",2,1},{"CUP_30Rnd_545x39_AK74M_M",12,30}}},{},"RCE_d_LSHZC_C_B_K","G_Bandanna_oli",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vdv_machinegunner : ru_vdv_autorifleman {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV Machine Gunner";
        side = 0;
        faction = "ako_ru_vdv";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_atacs_fg_mix_1_uniform_6sh122_v1";

        linkedItems[] = {"AGE_WAS_Heavy_AK_AtacsFG","RCE_d_LSHZC_C_B_K","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};
        respawnlinkedItems[] = {"AGE_WAS_Heavy_AK_AtacsFG","RCE_d_LSHZC_C_B_K","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};

        weapons[] = {"CUP_lmg_Pecheneg_B50_vfg"};
        respawnWeapons[] = {"CUP_lmg_Pecheneg_B50_vfg"};

        magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
        respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};

        backpack = "rhs_rk_sht_30_olive";

        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_Pecheneg_B50_vfg","","CUP_acc_LLM_black","rhs_acc_pkas",{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",100},{},""},{},{},{"rhs_atacs_fg_mix_1_uniform_6sh122_v1",{{"FirstAidKit",5}}},{"AGE_WAS_Heavy_AK_AtacsFG",{{"rhs_mag_rgo",2,1},{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",2,100}}},{"rhs_rk_sht_30_olive",{{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",5,100}}},"RCE_d_LSHZC_C_B_K","Deg_TB_Green",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vdv_heli_pilot : ru_vdv_efreitor {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV Helicopter Pilot";
        side = 0;
        faction = "ako_ru_vdv";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_6sh122_gloves_v1";

        linkedItems[] = {"AGE_WAS_AK_Olive","rhs_zsh7a_mike_green","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};
        respawnlinkedItems[] = {"AGE_WAS_AK_Olive","rhs_zsh7a_mike_green","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};

        weapons[] = {"CUP_arifle_AKS74U_railed"};
        respawnWeapons[] = {"CUP_arifle_AKS74U_railed"};

        magazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","CUP_30Rnd_545x39_AK74_plum_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","CUP_30Rnd_545x39_AK74_plum_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74U_railed","","","",{"CUP_30Rnd_545x39_AK74_plum_M",30},{},""},{},{},{"rhs_uniform_6sh122_gloves_v1",{{"FirstAidKit",5}}},{"AGE_WAS_AK_Olive",{{"rhs_mag_rgo",4,1},{"CUP_30Rnd_545x39_AK74_plum_M",9,30}}},{},"rhs_zsh7a_mike_green","G_Aviator",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vdv_heli_crewman : ru_vdv_heli_pilot {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV Helicopter Crew";
        side = 0;
        faction = "ako_ru_vdv";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_6sh122_gloves_v1";

        linkedItems[] = {"AGE_WAS_AK_Olive","rhs_zsh7a_mike_green_alt","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};
        respawnlinkedItems[] = {"AGE_WAS_AK_Olive","rhs_zsh7a_mike_green_alt","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};

        weapons[] = {"CUP_arifle_AKS74U_railed"};
        respawnWeapons[] = {"CUP_arifle_AKS74U_railed"};

        magazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","CUP_30Rnd_545x39_AK74_plum_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","CUP_30Rnd_545x39_AK74_plum_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74U_railed","","","",{"CUP_30Rnd_545x39_AK74_plum_M",30},{},""},{},{},{"rhs_uniform_6sh122_gloves_v1",{{"FirstAidKit",5}}},{"AGE_WAS_AK_Olive",{{"rhs_mag_rgo",4,1},{"CUP_30Rnd_545x39_AK74_plum_M",9,30}}},{},"rhs_zsh7a_mike_green_alt","G_Bandanna_oli",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vdv_jet_pilot : ru_vdv_heli_pilot {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV Jet Pilot";
        side = 0;
        faction = "ako_ru_vdv";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhssaf_uniform_mig29_pilot";

        linkedItems[] = {"CMU33P","rhs_zsh7a_alt","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CMU33P","rhs_zsh7a_alt","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS74U_railed"};
        respawnWeapons[] = {"CUP_arifle_AKS74U_railed"};

        magazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","CUP_30Rnd_545x39_AK74_plum_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","CUP_30Rnd_545x39_AK74_plum_M"};

        backpack = "B_Parachute";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74U_railed","","","",{"CUP_30Rnd_545x39_AK74_plum_M",30},{},""},{},{},{"rhssaf_uniform_mig29_pilot",{{"FirstAidKit",3}}},{"CMU33P",{{"rhs_mag_rgo",4,1},{"CUP_30Rnd_545x39_AK74_plum_M",6,30}}},{"B_Parachute",{}},"rhs_zsh7a_alt","Deg_TB_Green",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vdv_crewman : ru_vdv_heli_pilot {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV Crewman";
        side = 0;
        faction = "ako_ru_vdv";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_atacs_ag_uniform_6sh122_gloves_v2";

        linkedItems[] = {"AGE_WAS_AK_AtacsFG","rhs_6b48","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};
        respawnlinkedItems[] = {"AGE_WAS_AK_AtacsFG","rhs_6b48","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};

        weapons[] = {"CUP_arifle_AKS74U_railed"};
        respawnWeapons[] = {"CUP_arifle_AKS74U_railed"};

        magazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","CUP_30Rnd_545x39_AK74_plum_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","CUP_30Rnd_545x39_AK74_plum_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74U_railed","","CUP_acc_LLM01_L","",{"CUP_30Rnd_545x39_AK74_plum_M",30},{},""},{},{},{"rhs_atacs_ag_uniform_6sh122_gloves_v2",{{"FirstAidKit",5}}},{"AGE_WAS_AK_AtacsFG",{{"rhs_mag_rgo",4,1},{"CUP_30Rnd_545x39_AK74_plum_M",9,30}}},{},"rhs_6b48","G_Bandanna_oli",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vdv_at_specialist : ru_vdv_rifleman_ak74m {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV AT Specialist";
        side = 0;
        faction = "ako_ru_vdv";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_mix_2_6sh122_gloves_v1";

        linkedItems[] = {"AGE_WAS_Medium_AK_AtacsFG","RCE_d_LSHZC_C_B_K","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};
        respawnlinkedItems[] = {"AGE_WAS_Medium_AK_AtacsFG","RCE_d_LSHZC_C_B_K","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};

        weapons[] = {"CUP_arifle_AK74M_railed_afg","launch_O_Vorona_green_F"};
        respawnWeapons[] = {"CUP_arifle_AK74M_railed_afg","launch_O_Vorona_green_F"};

        magazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","Vorona_HEAT","CUP_30Rnd_545x39_AK74_plum_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","Vorona_HEAT","CUP_30Rnd_545x39_AK74_plum_M"};

        backpack = "rhs_tortila_khaki";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M_railed_afg","","CUP_acc_LLM01_L","",{"CUP_30Rnd_545x39_AK74_plum_M",30},{},""},{"launch_O_Vorona_green_F","","","",{"Vorona_HEAT",1},{},""},{},{"rhs_uniform_mix_2_6sh122_gloves_v1",{{"FirstAidKit",5}}},{"AGE_WAS_Medium_AK_AtacsFG",{{"rhs_mag_rgo",5,1},{"CUP_30Rnd_545x39_AK74_plum_M",9,30}}},{"rhs_tortila_khaki",{{"Vorona_HEAT",3,1}}},"RCE_d_LSHZC_C_B_K","Deg_TB_Green",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vdv_worker : ru_vdv_rifleman_ak12 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV Worker";
        side = 0;
        faction = "ako_ru_vdv";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_atacs_ag_uniform_6sh122_gloves_v2";

        linkedItems[] = {"AGE_WAS_AK_AtacsFG","RCE_w_LSHZC_C_B_K","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"AGE_WAS_AK_AtacsFG","RCE_w_LSHZC_C_B_K","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {};
        respawnWeapons[] = {};

        magazines[] = {};
        respawnMagazines[] = {};

        ALiVE_orbatCreator_loadout[] = {{},{},{},{"rhs_atacs_ag_uniform_6sh122_gloves_v2",{{"FirstAidKit",5}}},{"AGE_WAS_AK_AtacsFG",{}},{},"RCE_w_LSHZC_C_B_K","Deg_TB_Green",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vdv_uav_operator_rpg : ru_vdv_rifleman_ak12 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV UAV Operator (RPG)";
        side = 0;
        faction = "AKO_RU_VDV";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_mix_2_6sh122_gloves_v1";

        linkedItems[] = {"AGE_WAS_Medium_AK_AtacsFG","RCE_w_LSHZ_B_K","ItemMap","O_UavTerminal","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};
        respawnlinkedItems[] = {"AGE_WAS_Medium_AK_AtacsFG","RCE_w_LSHZ_B_K","ItemMap","O_UavTerminal","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};

        weapons[] = {"CUP_arifle_AK12_black"};
        respawnWeapons[] = {"CUP_arifle_AK12_black"};

        magazines[] = {"CUP_30Rnd_545x39_AK12_M","CUP_30Rnd_545x39_AK12_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK12_M","CUP_30Rnd_545x39_AK12_M"};

        backpack = "O_UAV_FPV_backpack_F";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK12_black","","CUP_acc_LLM01_L","CUP_optic_CompM2_low",{"CUP_30Rnd_545x39_AK12_M",30},{},""},{},{},{"rhs_uniform_mix_2_6sh122_gloves_v1",{{"FirstAidKit",5}}},{"AGE_WAS_Medium_AK_AtacsFG",{{"rhs_mag_rgo",4,1},{"CUP_30Rnd_545x39_AK12_M",10,30}}},{"O_UAV_FPV_backpack_F",{}},"RCE_w_LSHZ_B_K","Deg_TB_Green",{},{"ItemMap","O_UavTerminal","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vdv_uav_operator_he : ru_vdv_rifleman_ak12 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV UAV Operator (HE)";
        side = 0;
        faction = "ako_ru_vdv";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_mix_1_6sh122_gloves_v1";

        linkedItems[] = {"AGE_WAS_Light_AK_Olive","RCE_d_LSHZC_C_B_K","ItemMap","O_UavTerminal","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};
        respawnlinkedItems[] = {"AGE_WAS_Light_AK_Olive","RCE_d_LSHZC_C_B_K","ItemMap","O_UavTerminal","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};

        weapons[] = {"CUP_arifle_AK74M_railed_afg"};
        respawnWeapons[] = {"CUP_arifle_AK74M_railed_afg"};

        magazines[] = {"CUP_30Rnd_545x39_AK74M_M","CUP_30Rnd_545x39_AK74M_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74M_M","CUP_30Rnd_545x39_AK74M_M"};

        backpack = "O_UAV_01_backpack_Custom";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M_railed_afg","","CUP_acc_LLM01_L","CUP_optic_CompM2_low",{"CUP_30Rnd_545x39_AK74M_M",30},{},""},{},{},{"rhs_uniform_mix_1_6sh122_gloves_v1",{{"FirstAidKit",5}}},{"AGE_WAS_Light_AK_Olive",{{"rhs_mag_rgo",4,1},{"CUP_30Rnd_545x39_AK74M_M",10,30}}},{"O_UAV_01_backpack_Custom",{}},"RCE_d_LSHZC_C_B_K","Deg_TB_Green",{},{"ItemMap","O_UavTerminal","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vdv_engineer : ru_vdv_rifleman_ak12 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV Engineer";
        side = 0;
        faction = "ako_ru_vdv";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_atacs_fg_mix_1_uniform_6sh122_v1";

        linkedItems[] = {"AGE_WAS_Medium_AK_Olive","RCE_w_LSHZC_C_B_K","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};
        respawnlinkedItems[] = {"AGE_WAS_Medium_AK_Olive","RCE_w_LSHZC_C_B_K","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};

        weapons[] = {"CUP_arifle_AK74M_railed_afg"};
        respawnWeapons[] = {"CUP_arifle_AK74M_railed_afg"};

        magazines[] = {"CUP_30Rnd_545x39_AK74M_M","CUP_30Rnd_545x39_AK74M_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74M_M","CUP_30Rnd_545x39_AK74M_M"};

        backpack = "rhs_rk_sht_30_olive_engineer_empty";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M_railed_afg","","CUP_acc_LLM_black","rhs_acc_1p87",{"CUP_30Rnd_545x39_AK74M_M",30},{},""},{},{},{"rhs_atacs_fg_mix_1_uniform_6sh122_v1",{{"FirstAidKit",5}}},{"AGE_WAS_Medium_AK_Olive",{{"rhs_mag_rgo",4,1},{"CUP_30Rnd_545x39_AK74M_M",10,30}}},{"rhs_rk_sht_30_olive_engineer_empty",{{"ToolKit",3}}},"RCE_w_LSHZC_C_B_K","Deg_TB_Green",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vdv_mortarman_gun : ru_vdv_rifleman_ak12 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV Mortarman (Gun)";
        side = 0;
        faction = "ako_ru_vdv";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_mix_2_6sh122_gloves_v1";

        linkedItems[] = {"AGE_WAS_AK_AtacsFG","RCE_w_LSHZC_C_K","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};
        respawnlinkedItems[] = {"AGE_WAS_AK_AtacsFG","RCE_w_LSHZC_C_K","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};

        weapons[] = {"CUP_arifle_AK74M_railed_afg"};
        respawnWeapons[] = {"CUP_arifle_AK74M_railed_afg"};

        magazines[] = {"CUP_30Rnd_545x39_AK74M_M","CUP_30Rnd_545x39_AK74M_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74M_M","CUP_30Rnd_545x39_AK74M_M"};

        backpack = "RHS_Podnos_Gun_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M_railed_afg","","CUP_acc_LLM01_L","",{"CUP_30Rnd_545x39_AK74M_M",30},{},""},{},{},{"rhs_uniform_mix_2_6sh122_gloves_v1",{{"FirstAidKit",5}}},{"AGE_WAS_AK_AtacsFG",{{"rhs_mag_rgo",3,1},{"CUP_30Rnd_545x39_AK74M_M",9,30}}},{"RHS_Podnos_Gun_Bag",{}},"RCE_w_LSHZC_C_K","G_Bandanna_khk",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vdv_grenadier_rpg : ru_vdv_rifleman_ak12 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV Grenadier (RPG-7V2)";
        side = 0;
        faction = "ako_ru_vdv";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_mix_1_6sh122_gloves_v1";

        linkedItems[] = {"AGE_WAS_Medium_AK_AtacsFG","RCE_w_LSHZ_B_K","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};
        respawnlinkedItems[] = {"AGE_WAS_Medium_AK_AtacsFG","RCE_w_LSHZ_B_K","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};

        weapons[] = {"CUP_arifle_AK103_railed","rhs_weap_rpg7"};
        respawnWeapons[] = {"CUP_arifle_AK103_railed","rhs_weap_rpg7"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","rhs_rpg7_type69_airburst_mag","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","rhs_rpg7_type69_airburst_mag","CUP_30Rnd_762x39_AK47_M"};

        backpack = "rhs_rpg_empty";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK103_railed","","CUP_acc_LLM01_L","CUP_optic_CompM2_low",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{"rhs_weap_rpg7","","","rhs_acc_pgo7v3",{"rhs_rpg7_type69_airburst_mag",1},{},""},{},{"rhs_uniform_mix_1_6sh122_gloves_v1",{{"FirstAidKit",5}}},{"AGE_WAS_Medium_AK_AtacsFG",{{"rhs_mag_rgo",2,1},{"CUP_30Rnd_762x39_AK47_M",9,30}}},{"rhs_rpg_empty",{{"FirstAidKit",3},{"rhs_rpg7_type69_airburst_mag",4,1}}},"RCE_w_LSHZ_B_K","G_Bandanna_oli",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vdv_marksman : ru_vdv_rifleman_ak12 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV Marksman";
        side = 0;
        faction = "ako_ru_vdv";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_mix_1_6sh122_gloves_v1";

        linkedItems[] = {"AGE_WAS_Light_AK_AtacsFG","RCE_w_LSHZ_B_K","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};
        respawnlinkedItems[] = {"AGE_WAS_Light_AK_AtacsFG","RCE_w_LSHZ_B_K","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};

        weapons[] = {"CUP_srifle_SVD"};
        respawnWeapons[] = {"CUP_srifle_SVD"};

        magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M"};
        respawnMagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_SVD","","","CUP_optic_PSO_3_open",{"CUP_10Rnd_762x54_SVD_M",10},{},""},{},{},{"rhs_uniform_mix_1_6sh122_gloves_v1",{{"FirstAidKit",5}}},{"AGE_WAS_Light_AK_AtacsFG",{{"rhs_mag_rgo",2,1},{"CUP_10Rnd_762x54_SVD_M",12,10}}},{},"RCE_w_LSHZ_B_K","G_Bandanna_oli",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vdv_grenadier_gp25 : ru_vdv_rifleman_ak12 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV Grenadier (GP-25)";
        side = 0;
        faction = "ako_ru_vdv";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_atacs_ag_uniform_6sh122_gloves_v2";

        linkedItems[] = {"AGE_WAS_Light_AK_Olive","RCE_d_LSHZC_C_B_K","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};
        respawnlinkedItems[] = {"AGE_WAS_Light_AK_Olive","RCE_d_LSHZC_C_B_K","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};

        weapons[] = {"CUP_arifle_AK74M_GL_railed"};
        respawnWeapons[] = {"CUP_arifle_AK74M_GL_railed"};

        magazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","CUP_1Rnd_HE_GP25_M","CUP_30Rnd_545x39_AK74_plum_M","CUP_1Rnd_HE_GP25_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","CUP_1Rnd_HE_GP25_M","CUP_30Rnd_545x39_AK74_plum_M","CUP_1Rnd_HE_GP25_M"};

        backpack = "B_AssaultPack_khk";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M_GL_railed","","CUP_acc_LLM01_L","CUP_optic_CompM2_low",{"CUP_30Rnd_545x39_AK74_plum_M",30},{"CUP_1Rnd_HE_GP25_M",1},""},{},{},{"rhs_atacs_ag_uniform_6sh122_gloves_v2",{{"FirstAidKit",5}}},{"AGE_WAS_Light_AK_Olive",{{"rhs_mag_rgo",4,1},{"CUP_30Rnd_545x39_AK74_plum_M",10,30}}},{"B_AssaultPack_khk",{{"CUP_1Rnd_HE_GP25_M",20,1},{"SatchelCharge_Remote_Mag",1,1}}},"RCE_d_LSHZC_C_B_K","Deg_TB_Green",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vdv_mortarman_bipod : ru_vdv_rifleman_ak12 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV Mortarman (Bipod)";
        side = 0;
        faction = "ako_ru_vdv";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_mix_2_6sh122_gloves_v1";

        linkedItems[] = {"AGE_WAS_AK_Olive","RCE_d_LSHZ_B_K","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};
        respawnlinkedItems[] = {"AGE_WAS_AK_Olive","RCE_d_LSHZ_B_K","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};

        weapons[] = {"CUP_arifle_AKMN_railed_afg"};
        respawnWeapons[] = {"CUP_arifle_AKMN_railed_afg"};

        magazines[] = {"CUP_30Rnd_762x39_AK103_bakelite_M","CUP_30Rnd_762x39_AK103_bakelite_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK103_bakelite_M","CUP_30Rnd_762x39_AK103_bakelite_M"};

        backpack = "RHS_Podnos_Bipod_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKMN_railed_afg","","CUP_acc_LLM01_L","",{"CUP_30Rnd_762x39_AK103_bakelite_M",30},{},""},{},{},{"rhs_uniform_mix_2_6sh122_gloves_v1",{{"FirstAidKit",5}}},{"AGE_WAS_AK_Olive",{{"rhs_mag_rgo",3,1},{"CUP_30Rnd_762x39_AK103_bakelite_M",8,30}}},{"RHS_Podnos_Bipod_Bag",{}},"RCE_d_LSHZ_B_K","G_Bandanna_oli",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vdv_aa_specialist : ru_vdv_rifleman_ak12 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV AA Specialist";
        side = 0;
        faction = "ako_ru_vdv";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_mix_1_6sh122_gloves_v1";

        linkedItems[] = {"AGE_WAS_Medium_AK_AtacsFG","RCE_d_LSHZC_C_B_K","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};
        respawnlinkedItems[] = {"AGE_WAS_Medium_AK_AtacsFG","RCE_d_LSHZC_C_B_K","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};

        weapons[] = {"CUP_arifle_AK74M_railed_afg","rhs_weap_igla"};
        respawnWeapons[] = {"CUP_arifle_AK74M_railed_afg","rhs_weap_igla"};

        magazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","rhs_mag_9k38_rocket","CUP_30Rnd_545x39_AK74_plum_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","rhs_mag_9k38_rocket","CUP_30Rnd_545x39_AK74_plum_M"};

        backpack = "rhs_tortila_khaki";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M_railed_afg","","CUP_acc_LLM01_L","",{"CUP_30Rnd_545x39_AK74_plum_M",30},{},""},{"rhs_weap_igla","","","",{"rhs_mag_9k38_rocket",1},{},""},{},{"rhs_uniform_mix_1_6sh122_gloves_v1",{{"FirstAidKit",5}}},{"AGE_WAS_Medium_AK_AtacsFG",{{"rhs_mag_rgo",5,1},{"CUP_30Rnd_545x39_AK74_plum_M",9,30}}},{"rhs_tortila_khaki",{{"rhs_mag_9k38_rocket",3,1}}},"RCE_d_LSHZC_C_B_K","G_Bandanna_oli",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vdv_officer : ru_vdv_rifleman_ak12 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV Officer";
        side = 0;
        faction = "ako_ru_vdv";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_mix_2_6sh122_gloves_v1";

        linkedItems[] = {"AGE_WAS_AK_Olive","RCE_d_LSHZC_C_B_K","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};
        respawnlinkedItems[] = {"AGE_WAS_AK_Olive","RCE_d_LSHZC_C_B_K","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};

        weapons[] = {"CUP_arifle_AK12_AFG_black","Rangefinder"};
        respawnWeapons[] = {"CUP_arifle_AK12_AFG_black","Rangefinder"};

        magazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","CUP_30Rnd_545x39_AK74_plum_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","CUP_30Rnd_545x39_AK74_plum_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK12_AFG_black","","CUP_acc_LLM01_L","CUP_optic_CompM2_low",{"CUP_30Rnd_545x39_AK74_plum_M",30},{},""},{},{},{"rhs_uniform_mix_2_6sh122_gloves_v1",{{"FirstAidKit",5}}},{"AGE_WAS_AK_Olive",{{"CUP_30Rnd_545x39_AK74_plum_M",10,30},{"rhs_mag_rgo",2,1}}},{},"RCE_d_LSHZC_C_B_K","G_Bandanna_khk",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vdv_rifleman_akm : ru_vdv_rifleman_ak12 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV Rifleman (AKM)";
        side = 0;
        faction = "AKO_RU_VDV";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_atacs_fg_uniform_6sh122_gloves_v1";

        linkedItems[] = {"AGE_WAS_Medium_AK_AtacsFG","RCE_w_LSHZC_C_B_K","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};
        respawnlinkedItems[] = {"AGE_WAS_Medium_AK_AtacsFG","RCE_w_LSHZC_C_B_K","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};

        weapons[] = {"CUP_arifle_AKMN_railed_afg"};
        respawnWeapons[] = {"CUP_arifle_AKMN_railed_afg"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKMN_railed_afg","","CUP_acc_LLM_black","CUP_optic_CompM2_low",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"rhs_atacs_fg_uniform_6sh122_gloves_v1",{{"FirstAidKit",5}}},{"AGE_WAS_Medium_AK_AtacsFG",{{"rhs_mag_rgo",4,1},{"CUP_30Rnd_762x39_AK47_M",8,30}}},{},"RCE_w_LSHZC_C_B_K","G_Bandanna_oli",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vdv_commander : ru_vdv_sergeant {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV Commander";
        side = 0;
        faction = "AKO_RU_VDV";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_atacs_ag_uniform_6sh122_gloves_v2";

        linkedItems[] = {"AGE_WAS_AK_Olive","rhs_beret_vdv_early","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"AGE_WAS_AK_Olive","rhs_beret_vdv_early","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK12_AFG_black","Rangefinder"};
        respawnWeapons[] = {"CUP_arifle_AK12_AFG_black","Rangefinder"};

        magazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","CUP_30Rnd_545x39_AK74_plum_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","CUP_30Rnd_545x39_AK74_plum_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK12_AFG_black","","CUP_acc_LLM01_L","rhs_acc_1p87",{"CUP_30Rnd_545x39_AK74_plum_M",30},{},""},{},{},{"rhs_atacs_ag_uniform_6sh122_gloves_v2",{{"FirstAidKit",5}}},{"AGE_WAS_AK_Olive",{{"CUP_30Rnd_545x39_AK74_plum_M",10,30},{"rhs_mag_rgo",2,1}}},{},"rhs_beret_vdv_early","G_Bandanna_khk",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };