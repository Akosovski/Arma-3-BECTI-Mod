
    class rhsgref_tla_g_warlord;
    class rhsgref_tla_g_warlord_OCimport_01 : rhsgref_tla_g_warlord { scope = 0; class EventHandlers; };
    class rhsgref_tla_g_warlord_OCimport_02 : rhsgref_tla_g_warlord_OCimport_01 { class EventHandlers; };

    class rhsgref_ins_g_uaz_dshkm_chdkz;
    class rhsgref_ins_g_uaz_dshkm_chdkz_OCimport_01 : rhsgref_ins_g_uaz_dshkm_chdkz { scope = 0; class EventHandlers; class Turrets; };
    class rhsgref_ins_g_uaz_dshkm_chdkz_OCimport_02 : rhsgref_ins_g_uaz_dshkm_chdkz_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
            class CargoTurret_01;
        };
    };

    class rhsgref_ins_g_uaz_spg9;
    class rhsgref_ins_g_uaz_spg9_OCimport_01 : rhsgref_ins_g_uaz_spg9 { scope = 0; class EventHandlers; class Turrets; };
    class rhsgref_ins_g_uaz_spg9_OCimport_02 : rhsgref_ins_g_uaz_spg9_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
            class CargoTurret_01;
        };
    };

    class rhsgref_ins_g_uaz_ags;
    class rhsgref_ins_g_uaz_ags_OCimport_01 : rhsgref_ins_g_uaz_ags { scope = 0; class EventHandlers; class Turrets; };
    class rhsgref_ins_g_uaz_ags_OCimport_02 : rhsgref_ins_g_uaz_ags_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
            class CargoTurret_01;
        };
    };

    class rhsgref_ins_g_btr70;
    class rhsgref_ins_g_btr70_OCimport_01 : rhsgref_ins_g_btr70 { scope = 0; class EventHandlers; class Turrets; };
    class rhsgref_ins_g_btr70_OCimport_02 : rhsgref_ins_g_btr70_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
            class CommanderOptics;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
            class CargoTurret_06;
            class CargoTurret_07;
            class CargoTurret_08;
            class Commander_Out;
        };
    };

    class rhsgref_ins_g_bmd1;
    class rhsgref_ins_g_bmd1_OCimport_01 : rhsgref_ins_g_bmd1 { scope = 0; class EventHandlers; class Turrets; };
    class rhsgref_ins_g_bmd1_OCimport_02 : rhsgref_ins_g_bmd1_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
            class CommanderOptics1;
            class GPMGTurretBMD1;
            class LeftBack1;
            class RightBack1;
            class MainBack1;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
            class CargoTurret_06;
        };
    };

    class rhsgref_ins_g_bmd2;
    class rhsgref_ins_g_bmd2_OCimport_01 : rhsgref_ins_g_bmd2 { scope = 0; class EventHandlers; class Turrets; };
    class rhsgref_ins_g_bmd2_OCimport_02 : rhsgref_ins_g_bmd2_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
            class CommanderOptics1;
            class GPMGTurretBMD1;
            class LeftBack1;
            class RightBack1;
            class MainBack1;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
            class CargoTurret_06;
        };
    };

    class rhsgref_ins_g_t72bb;
    class rhsgref_ins_g_t72bb_OCimport_01 : rhsgref_ins_g_t72bb { scope = 0; class EventHandlers; class Turrets; };
    class rhsgref_ins_g_t72bb_OCimport_02 : rhsgref_ins_g_t72bb_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };
    class rhsgref_ins_g_t72bb_OCimport_03 : rhsgref_ins_g_t72bb_OCimport_02 { 
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                class Turrets : Turrets {
                    class CommanderOptics;
                    class CommanderMG;
                };
            };
        };
    };

    class rhsgref_ins_g_ural_Zu23;
    class rhsgref_ins_g_ural_Zu23_OCimport_01 : rhsgref_ins_g_ural_Zu23 { scope = 0; class EventHandlers; class Turrets; };
    class rhsgref_ins_g_ural_Zu23_OCimport_02 : rhsgref_ins_g_ural_Zu23_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
        };
    };

    class rhsgref_ins_g_ural;
    class rhsgref_ins_g_ural_OCimport_01 : rhsgref_ins_g_ural { scope = 0; class EventHandlers; class Turrets; };
    class rhsgref_ins_g_ural_OCimport_02 : rhsgref_ins_g_ural_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class ta_tla_sergeant : rhsgref_tla_g_warlord_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "TLA Sergeant";
        side = 2;
        faction = "ako_ta_tla";

        identityTypes[] = {"Head_Tanoan","LanguageFRE_F"};

        uniformClass = "rhsgref_uniform_ttsko_forest";

        linkedItems[] = {"rhsgref_6b23_khaki_rifleman","rhsgref_hat_M1951","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsgref_6b23_khaki_rifleman","rhsgref_hat_M1951","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS74U","rhs_weap_rshg2"};
        respawnWeapons[] = {"CUP_arifle_AKS74U","rhs_weap_rshg2"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","rhs_rshg2_mag","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","rhs_rshg2_mag","CUP_30Rnd_545x39_AK_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74U","","","rhs_acc_ekp8_02",{"CUP_30Rnd_545x39_AK_M",30},{},""},{"rhs_weap_rshg2","","","",{"rhs_rshg2_mag",1},{},""},{},{"rhsgref_uniform_ttsko_forest",{{"FirstAidKit",3}}},{"rhsgref_6b23_khaki_rifleman",{{"rhs_mag_rgo",2,1},{"CUP_30Rnd_545x39_AK_M",10,30}}},{},"rhsgref_hat_M1951","G_Aviator",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'CSAT_ScimitarRegiment'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "CSAT_ScimitarRegiment";

    };

    class ta_tla_rifleman_aks : ta_tla_sergeant {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "TLA Rifleman (AKS)";
        side = 2;
        faction = "ako_ta_tla";

        identityTypes[] = {"Head_Tanoan","LanguageFRE_F"};

        uniformClass = "rhsgref_uniform_ttsko_forest";

        linkedItems[] = {"rhsgref_6b23_khaki_rifleman","rhssaf_helmet_m97_olive_nocamo","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsgref_6b23_khaki_rifleman","rhssaf_helmet_m97_olive_nocamo","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS"};
        respawnWeapons[] = {"CUP_arifle_AKS"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"rhsgref_uniform_ttsko_forest",{{"FirstAidKit",3},{"CUP_30Rnd_762x39_AK47_M",3,30}}},{"rhsgref_6b23_khaki_rifleman",{{"rhs_mag_rgo",2,1}}},{},"rhssaf_helmet_m97_olive_nocamo","G_Balaclava_blk",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'CSAT_ScimitarRegiment'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "CSAT_ScimitarRegiment";

    };

    class ta_tla_rifleman_fal : ta_tla_rifleman_aks {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "TLA Rifleman (FAL)";
        side = 2;
        faction = "ako_ta_tla";

        identityTypes[] = {"Head_Tanoan","LanguageFRE_F"};

        uniformClass = "rhsgref_uniform_ttsko_forest";

        linkedItems[] = {"rhsgref_6b23_khaki_sniper","rhssaf_helmet_m97_olive_nocamo","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsgref_6b23_khaki_sniper","rhssaf_helmet_m97_olive_nocamo","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_FNFAL5060"};
        respawnWeapons[] = {"CUP_arifle_FNFAL5060"};

        magazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};
        respawnMagazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_FNFAL5060","","","",{"CUP_20Rnd_762x51_FNFAL_M",20},{},""},{},{},{"rhsgref_uniform_ttsko_forest",{{"FirstAidKit",7}}},{"rhsgref_6b23_khaki_sniper",{{"CUP_20Rnd_762x51_FNFAL_M",6,20}}},{},"rhssaf_helmet_m97_olive_nocamo","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'CSAT_ScimitarRegiment'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "CSAT_ScimitarRegiment";

    };

    class ta_tla_medic : ta_tla_rifleman_aks {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "TLA Medic";
        side = 2;
        faction = "ako_ta_tla";

        identityTypes[] = {"Head_Tanoan","LanguageFRE_F"};

        uniformClass = "rhsgref_uniform_ttsko_forest";

        linkedItems[] = {"rhsgref_6b23_khaki_rifleman","H_Cap_oli","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsgref_6b23_khaki_rifleman","H_Cap_oli","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK47"};
        respawnWeapons[] = {"CUP_arifle_AK47"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_bakelite_M","CUP_30Rnd_762x39_AK47_bakelite_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_bakelite_M","CUP_30Rnd_762x39_AK47_bakelite_M"};

        backpack = "rhs_sidor";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_bakelite_M",30},{},""},{},{},{"rhsgref_uniform_ttsko_forest",{{"FirstAidKit",3}}},{"rhsgref_6b23_khaki_rifleman",{{"rhs_mag_rgo",2,1},{"CUP_30Rnd_762x39_AK47_bakelite_M",8,30}}},{"rhs_sidor",{{"Medikit",1},{"FirstAidKit",6}}},"H_Cap_oli","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'CSAT_ScimitarRegiment'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "CSAT_ScimitarRegiment";

    };

    class ta_tla_marksman : ta_tla_rifleman_aks {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "TLA Marksman";
        side = 2;
        faction = "ako_ta_tla";

        identityTypes[] = {"Head_Tanoan","LanguageFRE_F"};

        uniformClass = "rhsgref_uniform_ttsko_forest";

        linkedItems[] = {"rhsgref_6b23_khaki_sniper","rhs_beanie_green","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsgref_6b23_khaki_sniper","rhs_beanie_green","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_srifle_SVD","CUP_hgun_Browning_HP"};
        respawnWeapons[] = {"CUP_srifle_SVD","CUP_hgun_Browning_HP"};

        magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_13Rnd_9x19_Browning_HP","CUP_10Rnd_762x54_SVD_M","CUP_13Rnd_9x19_Browning_HP"};
        respawnMagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_13Rnd_9x19_Browning_HP","CUP_10Rnd_762x54_SVD_M","CUP_13Rnd_9x19_Browning_HP"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_SVD","","","CUP_optic_PSO_1_1_open",{"CUP_10Rnd_762x54_SVD_M",10},{},""},{},{"CUP_hgun_Browning_HP","","","",{"CUP_13Rnd_9x19_Browning_HP",13},{},""},{"rhsgref_uniform_ttsko_forest",{{"FirstAidKit",7}}},{"rhsgref_6b23_khaki_sniper",{{"CUP_13Rnd_9x19_Browning_HP",2,13},{"CUP_10Rnd_762x54_SVD_M",8,10}}},{},"rhs_beanie_green","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'CSAT_ScimitarRegiment'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "CSAT_ScimitarRegiment";

    };

    class ta_tla_machinegunner : ta_tla_rifleman_aks {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "TLA Machine Gunner";
        side = 2;
        faction = "ako_ta_tla";

        identityTypes[] = {"Head_Tanoan","LanguageFRE_F"};

        uniformClass = "rhsgref_uniform_ttsko_forest";

        linkedItems[] = {"rhsgref_6b23_khaki","rhssaf_helmet_m97_olive_nocamo","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsgref_6b23_khaki","rhssaf_helmet_m97_olive_nocamo","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_lmg_M60","CUP_hgun_Browning_HP"};
        respawnWeapons[] = {"CUP_lmg_M60","CUP_hgun_Browning_HP"};

        magazines[] = {"CUP_100Rnd_TE4_LRT4_Yellow_Tracer_762x51_Belt_M","CUP_13Rnd_9x19_Browning_HP","CUP_100Rnd_TE4_LRT4_Yellow_Tracer_762x51_Belt_M","CUP_13Rnd_9x19_Browning_HP"};
        respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_Yellow_Tracer_762x51_Belt_M","CUP_13Rnd_9x19_Browning_HP","CUP_100Rnd_TE4_LRT4_Yellow_Tracer_762x51_Belt_M","CUP_13Rnd_9x19_Browning_HP"};

        backpack = "rhs_sidor";

        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_M60","","","",{"CUP_100Rnd_TE4_LRT4_Yellow_Tracer_762x51_Belt_M",100},{},""},{},{"CUP_hgun_Browning_HP","","","",{"CUP_13Rnd_9x19_Browning_HP",13},{},""},{"rhsgref_uniform_ttsko_forest",{{"FirstAidKit",7}}},{"rhsgref_6b23_khaki",{{"CUP_100Rnd_TE4_LRT4_Yellow_Tracer_762x51_Belt_M",1,100},{"CUP_13Rnd_9x19_Browning_HP",7,13}}},{"rhs_sidor",{{"FirstAidKit",4},{"CUP_100Rnd_TE4_LRT4_Yellow_Tracer_762x51_Belt_M",2,100}}},"rhssaf_helmet_m97_olive_nocamo","rhs_scarf",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'CSAT_ScimitarRegiment'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "CSAT_ScimitarRegiment";

    };

    class ta_tla_crewman : ta_tla_rifleman_aks {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "TLA Crewman";
        side = 2;
        faction = "ako_ta_tla";

        identityTypes[] = {"Head_Tanoan","LanguageFRE_F"};

        uniformClass = "rhsgref_uniform_ttsko_forest";

        linkedItems[] = {"rhsgref_6b23_khaki","rhs_tsh4_ess","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsgref_6b23_khaki","rhs_tsh4_ess","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS74U"};
        respawnWeapons[] = {"CUP_arifle_AKS74U"};

        magazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","CUP_30Rnd_545x39_AK74_plum_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","CUP_30Rnd_545x39_AK74_plum_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74U","","","",{"CUP_30Rnd_545x39_AK74_plum_M",30},{},""},{},{},{"rhsgref_uniform_ttsko_forest",{{"FirstAidKit",7}}},{"rhsgref_6b23_khaki",{{"rhs_mag_rgo",2,1},{"CUP_30Rnd_545x39_AK74_plum_M",8,30}}},{},"rhs_tsh4_ess","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'CSAT_ScimitarRegiment'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "CSAT_ScimitarRegiment";

    };

    class ta_tla_autorifleman : ta_tla_machinegunner {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "TLA Auto Rifleman";
        side = 2;
        faction = "ako_ta_tla";

        identityTypes[] = {"Head_Tanoan","LanguageFRE_F"};

        uniformClass = "rhsgref_uniform_ttsko_forest";

        linkedItems[] = {"rhsgref_6b23_khaki","rhssaf_helmet_m97_olive_nocamo","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsgref_6b23_khaki","rhssaf_helmet_m97_olive_nocamo","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_RPK74","CUP_hgun_Browning_HP"};
        respawnWeapons[] = {"CUP_arifle_RPK74","CUP_hgun_Browning_HP"};

        magazines[] = {"CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M","CUP_13Rnd_9x19_Browning_HP","CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M","CUP_13Rnd_9x19_Browning_HP"};
        respawnMagazines[] = {"CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M","CUP_13Rnd_9x19_Browning_HP","CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M","CUP_13Rnd_9x19_Browning_HP"};

        backpack = "rhs_sidor";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_RPK74","","","rhs_acc_pkas",{"CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M",75},{},""},{},{"CUP_hgun_Browning_HP","","","",{"CUP_13Rnd_9x19_Browning_HP",13},{},""},{"rhsgref_uniform_ttsko_forest",{{"FirstAidKit",7}}},{"rhsgref_6b23_khaki",{{"CUP_13Rnd_9x19_Browning_HP",5,13},{"CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M",2,75}}},{"rhs_sidor",{{"FirstAidKit",4},{"CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M",3,75}}},"rhssaf_helmet_m97_olive_nocamo","rhs_scarf",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'CSAT_ScimitarRegiment'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "CSAT_ScimitarRegiment";

    };

    class ta_tla_driver : ta_tla_rifleman_aks {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "TLA Driver";
        side = 2;
        faction = "ako_ta_tla";

        identityTypes[] = {"Head_Tanoan","LanguageFRE_F"};

        uniformClass = "rhsgref_uniform_ttsko_forest";

        linkedItems[] = {"rhsgref_6b23_khaki_sniper","rhs_headband","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsgref_6b23_khaki_sniper","rhs_headband","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK47"};
        respawnWeapons[] = {"CUP_arifle_AK47"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"rhsgref_uniform_ttsko_forest",{{"FirstAidKit",7}}},{"rhsgref_6b23_khaki_sniper",{{"CUP_30Rnd_762x39_AK47_M",8,30}}},{},"rhs_headband","G_Bandanna_khk",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'CSAT_ScimitarRegiment'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "CSAT_ScimitarRegiment";

    };

    class ta_tla_engineer : ta_tla_rifleman_aks {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "TLA Engineer";
        side = 2;
        faction = "ako_ta_tla";

        identityTypes[] = {"Head_Tanoan","LanguageFRE_F"};

        uniformClass = "rhsgref_uniform_ttsko_forest";

        linkedItems[] = {"rhsgref_6b23_khaki_rifleman","rhssaf_helmet_m97_olive_nocamo","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsgref_6b23_khaki_rifleman","rhssaf_helmet_m97_olive_nocamo","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK47"};
        respawnWeapons[] = {"CUP_arifle_AK47"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_bakelite_M","CUP_30Rnd_762x39_AK47_bakelite_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_bakelite_M","CUP_30Rnd_762x39_AK47_bakelite_M"};

        backpack = "rhs_assault_umbts_engineer_empty";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_bakelite_M",30},{},""},{},{},{"rhsgref_uniform_ttsko_forest",{{"FirstAidKit",3}}},{"rhsgref_6b23_khaki_rifleman",{{"rhs_mag_rgo",2,1},{"CUP_30Rnd_762x39_AK47_bakelite_M",8,30}}},{"rhs_assault_umbts_engineer_empty",{{"ToolKit",3}}},"rhssaf_helmet_m97_olive_nocamo","G_Bandanna_blk",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'CSAT_ScimitarRegiment'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "CSAT_ScimitarRegiment";

    };

    class ta_tla_grenadier_rpg : ta_tla_rifleman_aks {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "TLA Grenadier (RPG-7V2)";
        side = 2;
        faction = "ako_ta_tla";

        identityTypes[] = {"Head_Tanoan","LanguageFRE_F"};

        uniformClass = "rhsgref_uniform_ttsko_forest";

        linkedItems[] = {"rhsgref_6b23_khaki_rifleman","rhssaf_helmet_m97_olive_nocamo","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsgref_6b23_khaki_rifleman","rhssaf_helmet_m97_olive_nocamo","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS","rhs_weap_rpg7","CUP_hgun_Browning_HP"};
        respawnWeapons[] = {"CUP_arifle_AKS","rhs_weap_rpg7","CUP_hgun_Browning_HP"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_bakelite_M","rhs_rpg7_PG7VM_mag","CUP_13Rnd_9x19_Browning_HP","CUP_30Rnd_762x39_AK47_bakelite_M","CUP_13Rnd_9x19_Browning_HP"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_bakelite_M","rhs_rpg7_PG7VM_mag","CUP_13Rnd_9x19_Browning_HP","CUP_30Rnd_762x39_AK47_bakelite_M","CUP_13Rnd_9x19_Browning_HP"};

        backpack = "rhs_rpg_2";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{"CUP_30Rnd_762x39_AK47_bakelite_M",30},{},""},{"rhs_weap_rpg7","","","rhs_acc_pgo7v",{"rhs_rpg7_PG7VM_mag",1},{},""},{"CUP_hgun_Browning_HP","","","",{"CUP_13Rnd_9x19_Browning_HP",13},{},""},{"rhsgref_uniform_ttsko_forest",{{"FirstAidKit",7}}},{"rhsgref_6b23_khaki_rifleman",{{"CUP_13Rnd_9x19_Browning_HP",2,13},{"CUP_30Rnd_762x39_AK47_bakelite_M",9,30}}},{"rhs_rpg_2",{{"rhs_rpg7_PG7VM_mag",4,1}}},"rhssaf_helmet_m97_olive_nocamo","G_Bandanna_oli",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'CSAT_ScimitarRegiment'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "CSAT_ScimitarRegiment";

    };

    class ta_tla_aa_specialist : ta_tla_rifleman_aks {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "TLA AA Specialist";
        side = 2;
        faction = "ako_ta_tla";

        identityTypes[] = {"Head_Tanoan","LanguageFRE_F"};

        uniformClass = "rhsgref_uniform_ttsko_forest";

        linkedItems[] = {"rhsgref_6b23_khaki_rifleman","rhssaf_helmet_m97_olive_nocamo","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsgref_6b23_khaki_rifleman","rhssaf_helmet_m97_olive_nocamo","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS","rhs_weap_igla"};
        respawnWeapons[] = {"CUP_arifle_AKS","rhs_weap_igla"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","rhs_mag_9k38_rocket","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","rhs_mag_9k38_rocket","CUP_30Rnd_762x39_AK47_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{"rhs_weap_igla","","","",{"rhs_mag_9k38_rocket",1},{},""},{},{"rhsgref_uniform_ttsko_forest",{{"FirstAidKit",3},{"CUP_30Rnd_762x39_AK47_M",3,30}}},{"rhsgref_6b23_khaki_rifleman",{{"rhs_mag_rgo",2,1}}},{},"rhssaf_helmet_m97_olive_nocamo","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'CSAT_ScimitarRegiment'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "CSAT_ScimitarRegiment";

    };

    class ta_tla_elite_rifleman : ta_tla_rifleman_fal {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "TLA Elite Rifleman";
        side = 2;
        faction = "ako_ta_tla";

        identityTypes[] = {"Head_Tanoan","LanguageFRE_F"};

        uniformClass = "rhsgref_uniform_ttsko_forest";

        linkedItems[] = {"rhs_6b23_6sh116_od","rhsusf_opscore_mar_fg","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b23_6sh116_od","rhsusf_opscore_mar_fg","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_FNFAL_OSW_railed"};
        respawnWeapons[] = {"CUP_arifle_FNFAL_OSW_railed"};

        magazines[] = {"CUP_30Rnd_762x51_FNFAL_M","CUP_30Rnd_762x51_FNFAL_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x51_FNFAL_M","CUP_30Rnd_762x51_FNFAL_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_FNFAL_OSW_railed","","","CUP_optic_Aimpoint_5000",{"CUP_30Rnd_762x51_FNFAL_M",30},{},"CUP_bipod_FNFAL"},{},{},{"rhsgref_uniform_ttsko_forest",{{"FirstAidKit",7}}},{"rhs_6b23_6sh116_od",{{"rhs_mag_rgo",2,1},{"CUP_30Rnd_762x51_FNFAL_M",7,30}}},{},"rhsusf_opscore_mar_fg","rhs_ess_black",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'CSAT_ScimitarRegiment'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "CSAT_ScimitarRegiment";

    };

    class ta_tla_uaz_dshkm : rhsgref_ins_g_uaz_dshkm_chdkz_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "TLA UAZ-3151 (DShKM)";
        side = 2;
        faction = "ako_ta_tla";
        crew = "ta_tla_driver";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "ta_tla_rifleman_aks"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ta_tla_uaz_spg9 : rhsgref_ins_g_uaz_spg9_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "TLA UAZ-3151 (SPG-9)";
        side = 2;
        faction = "ako_ta_tla";
        crew = "ta_tla_driver";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "ta_tla_rifleman_aks"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ta_tla_uaz_ags30 : rhsgref_ins_g_uaz_ags_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "TLA UAZ-3151 (AGS-30)";
        side = 2;
        faction = "ako_ta_tla";
        crew = "ta_tla_driver";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "ta_tla_rifleman_aks"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ta_tla_btr70 : rhsgref_ins_g_btr70_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "TLA BTR-70";
        side = 2;
        faction = "ako_ta_tla";
        crew = "ta_tla_crewman";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "ta_tla_crewman"; };
            class CommanderOptics : CommanderOptics { gunnerType = ""; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
            class CargoTurret_07 : CargoTurret_07 { gunnerType = ""; };
            class CargoTurret_08 : CargoTurret_08 { gunnerType = ""; };
            class Commander_Out : Commander_Out { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ta_tla_bmd1 : rhsgref_ins_g_bmd1_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "TLA BMD-1";
        side = 2;
        faction = "ako_ta_tla";
        crew = "ta_tla_crewman";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "ta_tla_crewman"; };
            class CommanderOptics1 : CommanderOptics1 { gunnerType = "ta_tla_crewman"; };
            class GPMGTurretBMD1 : GPMGTurretBMD1 { gunnerType = ""; };
            class LeftBack1 : LeftBack1 { gunnerType = ""; };
            class RightBack1 : RightBack1 { gunnerType = ""; };
            class MainBack1 : MainBack1 { gunnerType = ""; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ta_tla_bmd2 : rhsgref_ins_g_bmd2_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "TLA BMD-2";
        side = 2;
        faction = "ako_ta_tla";
        crew = "ta_tla_crewman";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "ta_tla_crewman"; };
            class CommanderOptics1 : CommanderOptics1 { gunnerType = "ta_tla_crewman"; };
            class GPMGTurretBMD1 : GPMGTurretBMD1 { gunnerType = ""; };
            class LeftBack1 : LeftBack1 { gunnerType = ""; };
            class RightBack1 : RightBack1 { gunnerType = ""; };
            class MainBack1 : MainBack1 { gunnerType = ""; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ta_tla_t72b_1985 : rhsgref_ins_g_t72bb_OCimport_03 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "TLA T-72B (1985)";
        side = 2;
        faction = "ako_ta_tla";
        crew = "ta_tla_crewman";

        class Turrets : Turrets {
            class MainTurret : MainTurret {
                gunnerType = "ta_tla_crewman";

                magazines[] = {
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_3bm42",
                    "rhs_mag_3bk18",
                    "rhs_mag_3of26",
                    "rhs_mag_9m119"
                };
                class Turrets : Turrets {
                    class CommanderOptics : CommanderOptics {
                        gunnerType = "ta_tla_crewman";
                    };
                    class CommanderMG : CommanderMG {
                        gunnerType = "";
                    };
                };
            };
        };

        class TransportMagazines {
            class _xx_rhs_mag_762x54mm_250{
                magazine = "rhs_mag_762x54mm_250";
                count = 8;
            };
            class _xx_rhs_mag_3bm42 {
                magazine = "rhs_mag_3bm42";
                count = 1;
            };
            class _xx_rhs_mag_3bk18 {
                magazine = "rhs_mag_3bk18";
                count = 1;
            };
            class _xx_rhs_mag_3of26 {
                magazine = "rhs_mag_3of26";
                count = 1;
            };
            class _xx_rhs_mag_9m119 {
                magazine = "rhs_mag_9m119";
                count = 1;
            };
        };


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ta_tla_ural_aa : rhsgref_ins_g_ural_Zu23_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "TLA Ural-4320 (AA)";
        side = 2;
        faction = "ako_ta_tla";
        crew = "ta_tla_driver";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "ta_tla_rifleman_aks"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = "ta_tla_rifleman_fal"; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ta_tla_ural_normal : rhsgref_ins_g_ural_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "TLA Ural-4320";
        side = 2;
        faction = "ako_ta_tla";
        crew = "ta_tla_driver";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };
