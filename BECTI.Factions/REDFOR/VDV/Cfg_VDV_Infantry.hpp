    
    class rhs_vdv_rifleman;
    class rhs_vdv_rifleman_OCimport_01 : rhs_vdv_rifleman { scope = 0; class EventHandlers; };
    class rhs_vdv_rifleman_OCimport_02 : rhs_vdv_rifleman_OCimport_01 { class EventHandlers; };

    class rhs_vdv_des_sergeant;
    class rhs_vdv_des_sergeant_OCimport_01 : rhs_vdv_des_sergeant { scope = 0; class EventHandlers; };
    class rhs_vdv_des_sergeant_OCimport_02 : rhs_vdv_des_sergeant_OCimport_01 { class EventHandlers; };

    class ru_vdv_sergeant : rhs_vdv_rifleman_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV Sergeant";
        side = 0;
        faction = "ako_ru_vdv";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_atacs_fg_mix_1_uniform_6sh122_v1";

        linkedItems[] = {"cpc_weaponsbelt_rngr","RCE_w_LSHZ_B_K","ItemMap","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};
        respawnlinkedItems[] = {"cpc_weaponsbelt_rngr","RCE_w_LSHZ_B_K","ItemMap","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};

        weapons[] = {"CUP_arifle_AK74M_GL_railed"};
        respawnWeapons[] = {"CUP_arifle_AK74M_GL_railed"};

        magazines[] = {"CUP_30Rnd_545x39_AK74M_M","CUP_1Rnd_HE_GP25_M","CUP_30Rnd_545x39_AK74M_M","CUP_1Rnd_HE_GP25_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74M_M","CUP_1Rnd_HE_GP25_M","CUP_30Rnd_545x39_AK74M_M","CUP_1Rnd_HE_GP25_M"};

        backpack = "B_AssaultPack_khk";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M_GL_railed","","CUP_acc_LLM_black","CUP_optic_CompM2_low",{"CUP_30Rnd_545x39_AK74M_M",30},{"CUP_1Rnd_HE_GP25_M",1},""},{},{},{"rhs_atacs_fg_mix_1_uniform_6sh122_v1",{{"FirstAidKit",5}}},{"cpc_weaponsbelt_rngr",{{"rhs_mag_rgo",3,1},{"CUP_30Rnd_545x39_AK74M_M",8,30},{"CUP_1Rnd_HE_GP25_M",3,1}}},{"B_AssaultPack_khk",{{"CUP_1Rnd_HE_GP25_M",10,1},{"CUP_30Rnd_545x39_AK74M_M",10,30}}},"RCE_w_LSHZ_B_K","Deg_TB_Green",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"}};


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

        uniformClass = "rhs_atacs_fg_mix_2_uniform_6sh122_v1";

        linkedItems[] = {"cpc_tlbelt_rngr","RCE_w_LSHZC_C_B_K","ItemMap","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};
        respawnlinkedItems[] = {"cpc_tlbelt_rngr","RCE_w_LSHZC_C_B_K","ItemMap","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};

        weapons[] = {"CUP_arifle_AK74M_railed","rhs_weap_rpg26"};
        respawnWeapons[] = {"CUP_arifle_AK74M_railed","rhs_weap_rpg26"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","rhs_rpg26_mag","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","rhs_rpg26_mag","CUP_30Rnd_545x39_AK_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M_railed","","CUP_acc_LLM_black","CUP_optic_Aimpoint_5000",{"CUP_30Rnd_545x39_AK_M",30},{},""},{"rhs_weap_rpg26","","","",{"rhs_rpg26_mag",1},{},""},{},{"rhs_atacs_fg_mix_2_uniform_6sh122_v1",{{"FirstAidKit",5}}},{"cpc_tlbelt_rngr",{{"rhs_mag_rgo",3,1},{"CUP_30Rnd_545x39_AK_M",9,30}}},{},"RCE_w_LSHZC_C_B_K","Deg_TB_Green",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"}};


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

        uniformClass = "rhs_atacs_fg_uniform_6sh122_gloves_v1";

        linkedItems[] = {"cpc_tlbelt_rngr","RCE_w_LSHZC_C_B_K","ItemMap","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};
        respawnlinkedItems[] = {"cpc_tlbelt_rngr","RCE_w_LSHZC_C_B_K","ItemMap","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};

        weapons[] = {"CUP_arifle_AK12_AFG_black"};
        respawnWeapons[] = {"CUP_arifle_AK12_AFG_black"};

        magazines[] = {"CUP_30Rnd_545x39_AK12_M","CUP_30Rnd_545x39_AK12_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK12_M","CUP_30Rnd_545x39_AK12_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK12_AFG_black","","CUP_acc_LLM_black","CUP_optic_Aimpoint_5000",{"CUP_30Rnd_545x39_AK12_M",30},{},""},{},{},{"rhs_atacs_fg_uniform_6sh122_gloves_v1",{{"FirstAidKit",5}}},{"cpc_tlbelt_rngr",{{"rhs_mag_rgo",3,1},{"CUP_30Rnd_545x39_AK12_M",9,30}}},{},"RCE_w_LSHZC_C_B_K","Deg_TB_Green",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"}};


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

        uniformClass = "rhs_atacs_fg_mix_1_uniform_6sh122_v1";

        linkedItems[] = {"cpc_tlbelt_rngr","RCE_w_LSHZC_C_B_K","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"cpc_tlbelt_rngr","RCE_w_LSHZC_C_B_K","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74M_railed_afg"};
        respawnWeapons[] = {"CUP_arifle_AK74M_railed_afg"};

        magazines[] = {"CUP_30Rnd_545x39_AK74M_M","CUP_30Rnd_545x39_AK74M_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74M_M","CUP_30Rnd_545x39_AK74M_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M_railed_afg","","CUP_acc_LLM_black","CUP_optic_CompM2_low",{"CUP_30Rnd_545x39_AK74M_M",30},{},""},{},{},{"rhs_atacs_fg_mix_1_uniform_6sh122_v1",{{"FirstAidKit",5}}},{"cpc_tlbelt_rngr",{{"rhs_mag_rgo",3,1},{"CUP_30Rnd_545x39_AK74M_M",9,30}}},{},"RCE_w_LSHZC_C_B_K","Deg_TB_Green",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vdv_rifleman_asval : ru_vdv_rifleman_ak74m {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV Rifleman (AS Val)";
        side = 0;
        faction = "ako_ru_vdv";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_uniform_mix_2_6sh122_gloves_v1";

        linkedItems[] = {"cpc_weaponsbelt_rngr","RCE_d_LSHZC_C_B_K","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"cpc_weaponsbelt_rngr","RCE_d_LSHZC_C_B_K","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AS_VAL"};
        respawnWeapons[] = {"CUP_arifle_AS_VAL"};

        magazines[] = {"CUP_30Rnd_9x39_SP5_VIKHR_M","CUP_30Rnd_9x39_SP5_VIKHR_M"};
        respawnMagazines[] = {"CUP_30Rnd_9x39_SP5_VIKHR_M","CUP_30Rnd_9x39_SP5_VIKHR_M"};

        backpack = "B_AssaultPack_khk";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AS_VAL","","CUP_acc_LLM_black","CUP_optic_PSO_1_1_open",{"CUP_30Rnd_9x39_SP5_VIKHR_M",30},{},""},{},{},{"rhs_uniform_mix_2_6sh122_gloves_v1",{{"FirstAidKit",5}}},{"cpc_weaponsbelt_rngr",{{"CUP_30Rnd_9x39_SP5_VIKHR_M",4,30},{"rhs_mag_rgo",3,1}}},{"B_AssaultPack_khk",{{"CUP_30Rnd_9x39_SP5_VIKHR_M",8,30}}},"RCE_d_LSHZC_C_B_K","Deg_TB_Green",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


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

        linkedItems[] = {"cpc_tlbelt_rngr","RCE_w_LSHZC_C_B_K","ItemMap","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};
        respawnlinkedItems[] = {"cpc_tlbelt_rngr","RCE_w_LSHZC_C_B_K","ItemMap","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};

        weapons[] = {"CUP_arifle_AKMN_railed_afg"};
        respawnWeapons[] = {"CUP_arifle_AKMN_railed_afg"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "rhs_rk_sht_30_olive";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKMN_railed_afg","","CUP_acc_LLM01_L","CUP_optic_CompM2_low",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"rhs_atacs_fg_mix_1_uniform_6sh122_v1",{{"FirstAidKit",5}}},{"cpc_tlbelt_rngr",{{"rhs_mag_rgo",3,1},{"CUP_30Rnd_762x39_AK47_M",7,30}}},{"rhs_rk_sht_30_olive",{{"Medikit",1},{"FirstAidKit",5},{"CUP_30Rnd_762x39_AK47_M",3,30}}},"RCE_w_LSHZC_C_B_K","Deg_TB_Green",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vdv_autorifleman : ru_vdv_efreitor {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV Auto Rifleman";
        side = 0;
        faction = "ako_ru_vdv";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_atacs_ag_uniform_6sh122_gloves_v2";

        linkedItems[] = {"cpc_tlbelt_rngr","RCE_d_LSHZC_C_B_K","ItemMap","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};
        respawnlinkedItems[] = {"cpc_tlbelt_rngr","RCE_d_LSHZC_C_B_K","ItemMap","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};

        weapons[] = {"CUP_arifle_RPK74"};
        respawnWeapons[] = {"CUP_arifle_RPK74"};

        magazines[] = {"CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M"};
        respawnMagazines[] = {"CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M"};

        backpack = "B_AssaultPack_khk";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_RPK74","","CUP_acc_LLM_black","rhs_acc_pkas",{"CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M",75},{},""},{},{},{"rhs_atacs_ag_uniform_6sh122_gloves_v2",{{"FirstAidKit",5}}},{"cpc_tlbelt_rngr",{{"rhs_mag_rgo",3,1},{"CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M",3,75}}},{"B_AssaultPack_khk",{{"CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M",5,75}}},"RCE_d_LSHZC_C_B_K","Deg_TB_Green",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"}};


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

        uniformClass = "rhs_atacs_fg_uniform_6sh122_gloves_v1";

        linkedItems[] = {"cpc_lightbelt_rngr","RCE_w_LSHZC_C_B_K","ItemMap","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};
        respawnlinkedItems[] = {"cpc_lightbelt_rngr","RCE_w_LSHZC_C_B_K","ItemMap","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};

        weapons[] = {"CUP_lmg_Pecheneg_B50_vfg"};
        respawnWeapons[] = {"CUP_lmg_Pecheneg_B50_vfg"};

        magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
        respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};

        backpack = "B_AssaultPack_khk";

        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_Pecheneg_B50_vfg","","CUP_acc_LLM_black","rhs_acc_pkas",{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",100},{},""},{},{},{"rhs_atacs_fg_uniform_6sh122_gloves_v1",{{"FirstAidKit",5}}},{"cpc_lightbelt_rngr",{{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",2,100}}},{"B_AssaultPack_khk",{{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",3,100}}},"RCE_w_LSHZC_C_B","Deg_TB_Green",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"}};


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

        linkedItems[] = {"cpc_Fast_rngr","rhs_zsh7a_mike_green","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"cpc_Fast_rngr","rhs_zsh7a_mike_green","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS74U"};
        respawnWeapons[] = {"CUP_arifle_AKS74U"};

        magazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","CUP_30Rnd_545x39_AK74_plum_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","CUP_30Rnd_545x39_AK74_plum_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74U","","","",{"CUP_30Rnd_545x39_AK74_plum_M",30},{},""},{},{},{"rhs_uniform_6sh122_gloves_v1",{{"FirstAidKit",5}}},{"cpc_Fast_rngr",{{"rhs_mag_rgo",3,1},{"CUP_30Rnd_545x39_AK74_plum_M",9,30}}},{},"rhs_zsh7a_mike_green","G_Aviator",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


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

        linkedItems[] = {"cpc_Fast_rngr","rhs_zsh7a_mike_green_alt","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"cpc_Fast_rngr","rhs_zsh7a_mike_green_alt","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS74U"};
        respawnWeapons[] = {"CUP_arifle_AKS74U"};

        magazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","CUP_30Rnd_545x39_AK74_plum_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","CUP_30Rnd_545x39_AK74_plum_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74U","","","",{"CUP_30Rnd_545x39_AK74_plum_M",30},{},""},{},{},{"rhs_uniform_6sh122_gloves_v1",{{"FirstAidKit",5}}},{"cpc_Fast_rngr",{{"rhs_mag_rgo",3,1},{"CUP_30Rnd_545x39_AK74_plum_M",9,30}}},{},"rhs_zsh7a_mike_green_alt","G_Bandanna_oli",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


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

        uniformClass = "rhs_uniform_df15_tan";

        linkedItems[] = {"CMU33PTan","rhs_zsh7a_alt","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CMU33PTan","rhs_zsh7a_alt","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS74U","Binocular"};
        respawnWeapons[] = {"CUP_arifle_AKS74U","Binocular"};

        magazines[] = {"CUP_30Rnd_545x39_AK74M_M","CUP_30Rnd_545x39_AK74M_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74M_M","CUP_30Rnd_545x39_AK74M_M"};

        backpack = "B_Parachute";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74U","","","",{"CUP_30Rnd_545x39_AK74M_M",30},{},""},{},{},{"rhs_uniform_df15_tan",{{"FirstAidKit",5}}},{"CMU33PTan",{{"FirstAidKit",4},{"CUP_30Rnd_545x39_AK74M_M",5,30},{"rhs_mag_rgo",2,1}}},{"B_Parachute",{}},"rhs_zsh7a_alt","",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


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

        uniformClass = "rhs_atacs_fg_uniform_6sh122_gloves_v1";

        linkedItems[] = {"cpc_Fast_rngr","rhs_6b48","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"cpc_Fast_rngr","rhs_6b48","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74M_top_rail"};
        respawnWeapons[] = {"CUP_arifle_AK74M_top_rail"};

        magazines[] = {"CUP_30Rnd_545x39_AK74M_M","CUP_30Rnd_545x39_AK74M_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74M_M","CUP_30Rnd_545x39_AK74M_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M_top_rail","","CUP_acc_LLM_black","CUP_optic_Aimpoint_5000",{"CUP_30Rnd_545x39_AK74M_M",30},{},""},{},{},{"rhs_atacs_fg_uniform_6sh122_gloves_v1",{{"FirstAidKit",5}}},{"cpc_Fast_rngr",{{"rhs_mag_rgo",3,1},{"CUP_30Rnd_545x39_AK74M_M",9,30}}},{},"rhs_6b48","rhs_ess_black",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


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
        faction = "AKO_RU_VDV";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_atacs_fg_mix_1_uniform_6sh122_v1";

        linkedItems[] = {"cpc_tlbelt_rngr","RCE_w_LSHZC_C_B_K","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"cpc_tlbelt_rngr","RCE_w_LSHZC_C_B_K","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74M_railed_afg","launch_O_Vorona_green_F"};
        respawnWeapons[] = {"CUP_arifle_AK74M_railed_afg","launch_O_Vorona_green_F"};

        magazines[] = {"CUP_30Rnd_545x39_AK74M_M","Vorona_HEAT","CUP_30Rnd_545x39_AK74M_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74M_M","Vorona_HEAT","CUP_30Rnd_545x39_AK74M_M"};

        backpack = "B_Carryall_oli";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M_railed_afg","","CUP_acc_LLM_black","CUP_optic_CompM2_low",{"CUP_30Rnd_545x39_AK74M_M",30},{},""},{"launch_O_Vorona_green_F","","","",{"Vorona_HEAT",1},{},""},{},{"rhs_atacs_fg_mix_1_uniform_6sh122_v1",{{"FirstAidKit",5}}},{"cpc_tlbelt_rngr",{{"rhs_mag_rgo",3,1},{"CUP_30Rnd_545x39_AK74M_M",9,30}}},{"B_Carryall_oli",{{"Vorona_HEAT",2,1}}},"RCE_w_LSHZC_C_B_K","Deg_TB_Green",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_vdv_uav_operator : ru_vdv_rifleman_ak12 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV UAV Operator";
        side = 0;
        faction = "AKO_RU_VDV";

        identityTypes[] = {"Head_Russian","LanguageRUS_F"};

        uniformClass = "rhs_atacs_fg_uniform_6sh122_gloves_v1";

        linkedItems[] = {"cpc_tlbelt_rngr","RCE_w_LSHZC_C_B_K","ItemMap","O_UavTerminal","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};
        respawnlinkedItems[] = {"cpc_tlbelt_rngr","RCE_w_LSHZC_C_B_K","ItemMap","O_UavTerminal","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"};

        weapons[] = {"CUP_arifle_AK12_AFG_black"};
        respawnWeapons[] = {"CUP_arifle_AK12_AFG_black"};

        magazines[] = {"CUP_30Rnd_545x39_AK12_M","CUP_30Rnd_545x39_AK12_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK12_M","CUP_30Rnd_545x39_AK12_M"};

        backpack = "O_UAV_01_backpack_F";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK12_AFG_black","","CUP_acc_LLM_black","CUP_optic_Aimpoint_5000",{"CUP_30Rnd_545x39_AK12_M",30},{},""},{},{},{"rhs_atacs_fg_uniform_6sh122_gloves_v1",{{"FirstAidKit",5}}},{"cpc_tlbelt_rngr",{{"rhs_mag_rgo",3,1},{"CUP_30Rnd_545x39_AK12_M",9,30}}},{"O_UAV_01_backpack_F",{}},"RCE_w_LSHZC_C_B_K","Deg_TB_Green",{},{"ItemMap","O_UavTerminal","ItemRadio","ItemCompass","ItemWatch","rhs_6m2_1_nvg"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };
