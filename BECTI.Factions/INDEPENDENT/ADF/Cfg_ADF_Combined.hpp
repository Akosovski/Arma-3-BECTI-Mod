
    class rhsgref_cdf_reg_squadleader;
    class rhsgref_cdf_reg_squadleader_OCimport_01 : rhsgref_cdf_reg_squadleader { scope = 0; class EventHandlers; };
    class rhsgref_cdf_reg_squadleader_OCimport_02 : rhsgref_cdf_reg_squadleader_OCimport_01 { class EventHandlers; };

    class rhsgref_cdf_t72bb_tv;
    class rhsgref_cdf_t72bb_tv_OCimport_01 : rhsgref_cdf_t72bb_tv { scope = 0; class EventHandlers; class Turrets; };
    class rhsgref_cdf_t72bb_tv_OCimport_02 : rhsgref_cdf_t72bb_tv_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };
    class rhsgref_cdf_t72bb_tv_OCimport_03 : rhsgref_cdf_t72bb_tv_OCimport_02 { 
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                class Turrets : Turrets {
                    class CommanderOptics;
                    class CommanderMG;
                };
            };
        };
    };

    class rhsgref_cdf_t80u_tv;
    class rhsgref_cdf_t80u_tv_OCimport_01 : rhsgref_cdf_t80u_tv { scope = 0; class EventHandlers; class Turrets; };
    class rhsgref_cdf_t80u_tv_OCimport_02 : rhsgref_cdf_t80u_tv_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };
    class rhsgref_cdf_t80u_tv_OCimport_03 : rhsgref_cdf_t80u_tv_OCimport_02 { 
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                class Turrets : Turrets {
                    class CommanderOptics;
                    class CommanderMG;
                };
            };
        };
    };

    class rhsgref_cdf_gaz66_zu23;
    class rhsgref_cdf_gaz66_zu23_OCimport_01 : rhsgref_cdf_gaz66_zu23 { scope = 0; class EventHandlers; class Turrets; };
    class rhsgref_cdf_gaz66_zu23_OCimport_02 : rhsgref_cdf_gaz66_zu23_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class rhsgref_cdf_reg_uaz_dshkm;
    class rhsgref_cdf_reg_uaz_dshkm_OCimport_01 : rhsgref_cdf_reg_uaz_dshkm { scope = 0; class EventHandlers; class Turrets; };
    class rhsgref_cdf_reg_uaz_dshkm_OCimport_02 : rhsgref_cdf_reg_uaz_dshkm_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
            class CargoTurret_01;
        };
    };

    class rhsgref_cdf_reg_uaz_ags;
    class rhsgref_cdf_reg_uaz_ags_OCimport_01 : rhsgref_cdf_reg_uaz_ags { scope = 0; class EventHandlers; class Turrets; };
    class rhsgref_cdf_reg_uaz_ags_OCimport_02 : rhsgref_cdf_reg_uaz_ags_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
            class CargoTurret_01;
        };
    };

    class rhsgref_cdf_reg_uaz_spg9;
    class rhsgref_cdf_reg_uaz_spg9_OCimport_01 : rhsgref_cdf_reg_uaz_spg9 { scope = 0; class EventHandlers; class Turrets; };
    class rhsgref_cdf_reg_uaz_spg9_OCimport_02 : rhsgref_cdf_reg_uaz_spg9_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
            class CargoTurret_01;
        };
    };

    class rhsgref_cdf_btr70;
    class rhsgref_cdf_btr70_OCimport_01 : rhsgref_cdf_btr70 { scope = 0; class EventHandlers; class Turrets; };
    class rhsgref_cdf_btr70_OCimport_02 : rhsgref_cdf_btr70_OCimport_01 { 
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

    class rhsgref_cdf_bmp2d;
    class rhsgref_cdf_bmp2d_OCimport_01 : rhsgref_cdf_bmp2d { scope = 0; class EventHandlers; class Turrets; };
    class rhsgref_cdf_bmp2d_OCimport_02 : rhsgref_cdf_bmp2d_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
            class CargoTurret_06;
            class CargoTurret_07;
            class CargoTurret_08;
            class CargoTurret_09;
            class CargoTurret_10;
        };
    };

    class rhsgref_cdf_bmp1;
    class rhsgref_cdf_bmp1_OCimport_01 : rhsgref_cdf_bmp1 { scope = 0; class EventHandlers; class Turrets; };
    class rhsgref_cdf_bmp1_OCimport_02 : rhsgref_cdf_bmp1_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
            class Com_BMP1;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
            class CargoTurret_06;
            class CargoTurret_07;
            class CargoTurret_08;
            class CargoTurret_09;
            class CargoTurret_10;
        };
    };

    class al_adf_sergeant : rhsgref_cdf_reg_squadleader_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "ADF Sergeant";
        side = 2;
        faction = "AKO_AL_ADF";

        identityTypes[] = {"Head_Euro","LanguageCZ"};

        uniformClass = "m93_gr";

        linkedItems[] = {"rhsgref_otv_khaki","rhssaf_helmet_m97_olive_nocamo_black_ess_bare","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsgref_otv_khaki","rhssaf_helmet_m97_olive_nocamo_black_ess_bare","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_G36A_RIS","Rangefinder"};
        respawnWeapons[] = {"CUP_arifle_G36A_RIS","Rangefinder"};

        magazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_G36A_RIS","","rhsusf_acc_anpeq15_bk","CUP_optic_CompM4",{"CUP_30Rnd_556x45_G36",30},{},"CUP_Bipod_G36"},{},{},{"m93_gr",{{"FirstAidKit",5}}},{"rhsgref_otv_khaki",{{"CUP_HandGrenade_M67",2,1},{"CUP_30Rnd_556x45_G36",10,30}}},{},"rhssaf_helmet_m97_olive_nocamo_black_ess_bare","rhs_googles_black",{"Rangefinder","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class al_adf_rifleman_g36 : al_adf_sergeant {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "ADF Rifleman (G36)";
        side = 2;
        faction = "AKO_AL_ADF";

        identityTypes[] = {"Head_Euro","LanguageCZ"};

        uniformClass = "m93_gr";

        linkedItems[] = {"carrier_gr","rhssaf_helmet_m97_olive_nocamo_black_ess","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"carrier_gr","rhssaf_helmet_m97_olive_nocamo_black_ess","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_G36A"};
        respawnWeapons[] = {"CUP_arifle_G36A"};

        magazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_G36A","","","CUP_optic_G36DualOptics",{"CUP_30Rnd_556x45_G36",30},{},"CUP_Bipod_G36"},{},{},{"m93_gr",{{"FirstAidKit",5}}},{"carrier_gr",{{"CUP_30Rnd_556x45_G36",12,30},{"rhs_mag_m67",2,1}}},{},"rhssaf_helmet_m97_olive_nocamo_black_ess","rhs_googles_clear",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class al_adf_rifleman_g3a3 : al_adf_sergeant {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "ADF Rifleman (G3A3)";
        side = 2;
        faction = "AKO_AL_ADF";

        identityTypes[] = {"Head_Euro","LanguageCZ"};

        uniformClass = "m93_gr";

        linkedItems[] = {"carrier_gr","pasgt_grg","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"carrier_gr","pasgt_grg","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_G3A3_modern_ris_black"};
        respawnWeapons[] = {"CUP_arifle_G3A3_modern_ris_black"};

        magazines[] = {"CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3"};
        respawnMagazines[] = {"CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3"};

        backpack = "CUP_O_RUS_Patrol_bag_Green";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_G3A3_modern_ris_black","","","CUP_optic_CompM4",{"CUP_20Rnd_762x51_G3",20},{},"CUP_bipod_G3SG1"},{},{},{"m93_gr",{{"FirstAidKit",5}}},{"carrier_gr",{{"CUP_20Rnd_762x51_G3",10,20}}},{"CUP_O_RUS_Patrol_bag_Green",{{"FirstAidKit",5},{"CUP_20Rnd_762x51_G3",10,20},{"CUP_HandGrenade_M67",2,1}}},"pasgt_grg","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class al_adf_officer : al_adf_sergeant {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "ADF Officer";
        side = 2;
        faction = "ako_al_adf";

        identityTypes[] = {"Head_Euro","LanguageCZ"};

        uniformClass = "m93_gr";

        linkedItems[] = {"carrier_gr","H_Beret_EAF_01_F","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"carrier_gr","H_Beret_EAF_01_F","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_Colt727","Rangefinder"};
        respawnWeapons[] = {"CUP_arifle_Colt727","Rangefinder"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_Colt727","","","",{"30Rnd_556x45_Stanag",30},{},""},{},{},{"m93_gr",{{"FirstAidKit",5}}},{"carrier_gr",{{"FirstAidKit",2},{"30Rnd_556x45_Stanag",10,30},{"rhs_mag_m67",2,1}}},{},"H_Beret_EAF_01_F","G_Aviator",{"Rangefinder","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class al_adf_aa_specialist : al_adf_sergeant {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "ADF AA Specialist";
        side = 2;
        faction = "ako_al_adf";

        identityTypes[] = {"Head_Euro","LanguageCZ"};

       uniformClass = "m93_gr";

        linkedItems[] = {"carrier_gr","pasgt_grg","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"carrier_gr","pasgt_grg","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_G36A","rhs_weap_fim92"};
        respawnWeapons[] = {"CUP_arifle_G36A","rhs_weap_fim92"};

        magazines[] = {"CUP_30Rnd_556x45_G36","rhs_fim92_mag","CUP_30Rnd_556x45_G36"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_G36","rhs_fim92_mag","CUP_30Rnd_556x45_G36"};

        backpack = "CUP_O_RUS_Patrol_bag_Green";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_G36A","","","CUP_optic_G36DualOptics",{"CUP_30Rnd_556x45_G36",30},{},""},{"rhs_weap_fim92","","","",{"rhs_fim92_mag",1},{},""},{},{"m93_gr",{{"FirstAidKit",5}}},{"carrier_gr",{{"rhs_mag_m67",2,1},{"CUP_30Rnd_556x45_G36",12,30}}},{"CUP_O_RUS_Patrol_bag_Green",{{"rhs_fim92_mag",2,1}}},"pasgt_grg","G_Bandanna_oli",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class al_adf_at_specialist : al_adf_rifleman_g3a3 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "ADF AT Specialist";
        side = 2;
        faction = "ako_al_adf";

        identityTypes[] = {"Head_Euro","LanguageCZ"};

        uniformClass = "m93_gr";

        linkedItems[] = {"rhsgref_otv_khaki","rhssaf_helmet_m97_olive_nocamo","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsgref_otv_khaki","rhssaf_helmet_m97_olive_nocamo","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_G3A3_modern_ris_black","rhs_weap_maaws"};
        respawnWeapons[] = {"CUP_arifle_G3A3_modern_ris_black","rhs_weap_maaws"};

        magazines[] = {"CUP_20Rnd_762x51_G3","rhs_mag_maaws_HEAT","CUP_20Rnd_762x51_G3"};
        respawnMagazines[] = {"CUP_20Rnd_762x51_G3","rhs_mag_maaws_HEAT","CUP_20Rnd_762x51_G3"};

        backpack = "CUP_O_RUS_Patrol_bag_Green";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_G3A3_modern_ris_black","","","CUP_optic_CompM4",{"CUP_20Rnd_762x51_G3",20},{},""},{"rhs_weap_maaws","","","rhs_optic_maaws",{"rhs_mag_maaws_HEAT",1},{},""},{},{"m93_gr",{{"FirstAidKit",5}}},{"rhsgref_otv_khaki",{{"CUP_20Rnd_762x51_G3",8,20}}},{"CUP_O_RUS_Patrol_bag_Green",{{"rhs_mag_maaws_HEAT",3,1}}},"rhssaf_helmet_m97_olive_nocamo","rhs_ess_black",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class al_adf_corporal : al_adf_rifleman_g3a3 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "ADF Corporal";
        side = 2;
        faction = "ako_al_adf";

        identityTypes[] = {"Head_Euro","LanguageCZ"};

        uniformClass = "m93_gr";

        linkedItems[] = {"carrier_gr","pasgt_gr","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"carrier_gr","pasgt_gr","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_FNFAL5061_railed","rhs_weap_m72a7"};
        respawnWeapons[] = {"CUP_arifle_FNFAL5061_railed","rhs_weap_m72a7"};

        magazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};
        respawnMagazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_FNFAL5061_railed","","","CUP_optic_CompM4",{"CUP_20Rnd_762x51_FNFAL_M",20},{},"CUP_bipod_FNFAL"},{"rhs_weap_m72a7","","","",{},{},""},{},{"m93_gr",{{"FirstAidKit",5}}},{"carrier_gr",{{"rhs_mag_m67",2,1},{"CUP_20Rnd_762x51_FNFAL_M",8,20}}},{},"pasgt_gr","rhs_ess_black",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class al_adf_autorifleman : al_adf_rifleman_g3a3 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "ADF Auto Rifleman";
        side = 2;
        faction = "ako_al_adf";

        identityTypes[] = {"Head_Euro","LanguageCZ"};

        uniformClass = "m93_gr";

        linkedItems[] = {"carrier_gr","pasgt_gr","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"carrier_gr","pasgt_gr","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_lmg_M249_E2"};
        respawnWeapons[] = {"CUP_lmg_M249_E2"};

        magazines[] = {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_200Rnd_TE4_Red_Tracer_556x45_M249"};
        respawnMagazines[] = {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_200Rnd_TE4_Red_Tracer_556x45_M249"};

        backpack = "B_Kitbag_rgr";

        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_M249_E2","","","",{"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",200},{},""},{},{},{"m93_gr",{{"FirstAidKit",5}}},{"carrier_gr",{{"FirstAidKit",2},{"rhs_mag_m67",2,1},{"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",2,200}}},{"B_Kitbag_rgr",{{"FirstAidKit",5},{"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",4,200}}},"pasgt_gr","G_Bandanna_oli",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class al_adf_crewman : al_adf_rifleman_g3a3 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "ADF Crewman";
        side = 2;
        faction = "ako_al_adf";

        identityTypes[] = {"Head_Euro","LanguageCZ"};

        uniformClass = "m93_gr";

        linkedItems[] = {"rhsgref_otv_khaki","H_HelmetCrew_I","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsgref_otv_khaki","H_HelmetCrew_I","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_G36C"};
        respawnWeapons[] = {"CUP_arifle_G36C"};

        magazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_G36C","","","",{"CUP_30Rnd_556x45_G36",30},{},""},{},{},{"m93_gr",{{"FirstAidKit",5}}},{"rhsgref_otv_khaki",{{"rhs_mag_m67",2,1},{"CUP_30Rnd_556x45_G36",10,30}}},{},"H_HelmetCrew_I","G_Bandanna_oli",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class al_adf_elite_rifleman : al_adf_rifleman_g3a3 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "ADF Elite Rifleman";
        side = 2;
        faction = "ako_al_adf";

        identityTypes[] = {"Head_Euro","LanguageCZ"};

        uniformClass = "m93_gr";

        linkedItems[] = {"mbavr_l","TFV_headgear_opscore_cover_ATACSFG_peltor_camera","ItemMap","ItemRadio","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};
        respawnlinkedItems[] = {"mbavr_l","TFV_headgear_opscore_cover_ATACSFG_peltor_camera","ItemMap","ItemRadio","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};

        weapons[] = {"JCA_arifle_M4A1_short_black_F"};
        respawnWeapons[] = {"JCA_arifle_M4A1_short_black_F"};

        magazines[] = {"JCA_30Rnd_556x45_PMAG","JCA_30Rnd_556x45_PMAG"};
        respawnMagazines[] = {"JCA_30Rnd_556x45_PMAG","JCA_30Rnd_556x45_PMAG"};

        backpack = "B_AssaultPack_khk";

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A1_short_black_F","","rhsusf_acc_anpeq15_bk","CUP_optic_CompM4",{"JCA_30Rnd_556x45_PMAG",30},{},""},{},{},{"m93_gr",{{"FirstAidKit",5}}},{"mbavr_l",{{"FirstAidKit",1},{"rhs_mag_m67",2,1},{"JCA_30Rnd_556x45_PMAG",12,30}}},{"B_AssaultPack_khk",{{"SatchelCharge_Remote_Mag",1,1},{"DemoCharge_Remote_Mag",2,1}}},"TFV_headgear_opscore_cover_ATACSFG_peltor_camera","rhs_balaclava",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","rhsusf_ANPVS_15"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class al_adf_engineer : al_adf_rifleman_g3a3 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "ADF Engineer";
        side = 2;
        faction = "ako_al_adf";

        identityTypes[] = {"Head_Euro","LanguageCZ"};

        uniformClass = "m93_gr";

        linkedItems[] = {"carrier_gr","rhssaf_helmet_m97_olive_nocamo","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"carrier_gr","rhssaf_helmet_m97_olive_nocamo","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_FNFAL5061_railed"};
        respawnWeapons[] = {"CUP_arifle_FNFAL5061_railed"};

        magazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};
        respawnMagazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};

        backpack = "CUP_O_RUS_Patrol_bag_Green";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_FNFAL5061_railed","","","CUP_optic_CompM4",{"CUP_20Rnd_762x51_FNFAL_M",20},{},"CUP_bipod_FNFAL"},{},{},{"m93_gr",{{"FirstAidKit",5}}},{"carrier_gr",{{"rhs_mag_m67",2,1},{"CUP_20Rnd_762x51_FNFAL_M",8,20}}},{"CUP_O_RUS_Patrol_bag_Green",{{"ToolKit",2},{"DemoCharge_Remote_Mag",3,1}}},"rhssaf_helmet_m97_olive_nocamo","rhs_ess_black",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class al_adf_medic : al_adf_engineer {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "ADF Medic";
        side = 2;
        faction = "ako_al_adf";

        identityTypes[] = {"Head_Euro","LanguageCZ"};

        uniformClass = "m93_gr";

        linkedItems[] = {"rhsgref_otv_khaki","pasgt_grg","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsgref_otv_khaki","pasgt_grg","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_Colt727"};
        respawnWeapons[] = {"CUP_arifle_Colt727"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};

        backpack = "B_Kitbag_rgr";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_Colt727","","","",{"30Rnd_556x45_Stanag",30},{},""},{},{},{"m93_gr",{{"FirstAidKit",5}}},{"rhsgref_otv_khaki",{{"30Rnd_556x45_Stanag",10,30},{"rhs_mag_m67",2,1}}},{"B_Kitbag_rgr",{{"Medikit",2},{"FirstAidKit",5}}},"pasgt_grg","rhs_googles_clear",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class al_adf_machinegunner : al_adf_rifleman_g3a3 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "ADF Machine Gunner";
        side = 2;
        faction = "ako_al_adf";

        identityTypes[] = {"Head_Euro","LanguageCZ"};

        uniformClass = "m93_gr";

        linkedItems[] = {"carrier_gr","rhssaf_helmet_m97_olive_nocamo_black_ess_bare","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"carrier_gr","rhssaf_helmet_m97_olive_nocamo_black_ess_bare","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_lmg_M60"};
        respawnWeapons[] = {"CUP_lmg_M60"};

        magazines[] = {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M"};
        respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M"};

        backpack = "B_Kitbag_rgr";

        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_M60","","","",{"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",100},{},""},{},{},{"m93_gr",{{"FirstAidKit",5}}},{"carrier_gr",{{"rhs_mag_m67",2,1},{"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",2,100}}},{"B_Kitbag_rgr",{{"FirstAidKit",5},{"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",3,100}}},"rhssaf_helmet_m97_olive_nocamo_black_ess_bare","G_Bandanna_oli",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class al_adf_marksman : al_adf_rifleman_g3a3 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "ADF Marksman";
        side = 2;
        faction = "ako_al_adf";

        identityTypes[] = {"Head_Euro","LanguageCZ"};

        uniformClass = "m93_gr";

        linkedItems[] = {"rhsgref_otv_khaki","rhs_beanie_green","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsgref_otv_khaki","rhs_beanie_green","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_srifle_M14_DMR"};
        respawnWeapons[] = {"CUP_srifle_M14_DMR"};

        magazines[] = {"CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR"};
        respawnMagazines[] = {"CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR"};

        backpack = "CUP_O_RUS_Patrol_bag_Green";

        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_M14_DMR","","","CUP_optic_LeupoldMk4",{"CUP_20Rnd_762x51_DMR",20},{},"CUP_bipod_Harris_1A2_L_BLK"},{},{},{"m93_gr",{{"FirstAidKit",5}}},{"rhsgref_otv_khaki",{{"CUP_20Rnd_762x51_DMR",7,20}}},{"CUP_O_RUS_Patrol_bag_Green",{{"CUP_20Rnd_762x51_DMR",10,20}}},"rhs_beanie_green","G_Bandanna_oli",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class al_adf_t72b : rhsgref_cdf_t72bb_tv_OCimport_03 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "ADF T-72B";
        side = 2;
        faction = "ako_al_adf";
        crew = "al_adf_crewman";

        class Turrets : Turrets {
            class MainTurret : MainTurret {
                gunnerType = "al_adf_crewman";

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
                        gunnerType = "al_adf_crewman";
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

    class al_adf_t80u : rhsgref_cdf_t80u_tv_OCimport_03 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "ADF T-80U";
        side = 2;
        faction = "ako_al_adf";
        crew = "al_adf_crewman";

        class Turrets : Turrets {
            class MainTurret : MainTurret {
                gunnerType = "al_adf_crewman";

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
                        gunnerType = "al_adf_crewman";
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

    class al_adf_gaz66_aa : rhsgref_cdf_gaz66_zu23_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "ADF GAZ-66 (AA)";
        side = 2;
        faction = "ako_al_adf";
        crew = "al_adf_rifleman";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "al_adf_rifleman"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = "al_adf_rifleman"; };
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

    class al_adf_uaz_dshkm : rhsgref_cdf_reg_uaz_dshkm_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "ADF UAZ-3151 (DShKM)";
        side = 2;
        faction = "ako_al_adf";
        crew = "al_adf_rifleman";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "al_adf_rifleman"; };
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

    class al_adf_uaz_ags30 : rhsgref_cdf_reg_uaz_ags_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "ADF UAZ-3151 (AGS-30)";
        side = 2;
        faction = "ako_al_adf";
        crew = "al_adf_rifleman";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "al_adf_rifleman"; };
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

    class al_adf_uaz_spg9 : rhsgref_cdf_reg_uaz_spg9_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "ADF UAZ-3151 (SPG-9)";
        side = 2;
        faction = "ako_al_adf";
        crew = "al_adf_rifleman";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "al_adf_rifleman"; };
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

    class al_adf_btr70 : rhsgref_cdf_btr70_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "ADF BTR-70";
        side = 2;
        faction = "ako_al_adf";
        crew = "al_adf_crewman";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "al_adf_crewman"; };
            class CommanderOptics : CommanderOptics { gunnerType = "al_adf_crewman"; };
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

    class al_adf_bmp2 : rhsgref_cdf_bmp2d_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "ADF BMP-2";
        side = 2;
        faction = "ako_al_adf";
        crew = "al_adf_crewman";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "al_adf_crewman"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
            class CargoTurret_07 : CargoTurret_07 { gunnerType = ""; };
            class CargoTurret_08 : CargoTurret_08 { gunnerType = ""; };
            class CargoTurret_09 : CargoTurret_09 { gunnerType = ""; };
            class CargoTurret_10 : CargoTurret_10 { gunnerType = ""; };
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

    class al_adf_bmp1 : rhsgref_cdf_bmp1_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "ADF BMP-1";
        side = 2;
        faction = "ako_al_adf";
        crew = "al_adf_crewman";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "al_adf_crewman"; };
            class Com_BMP1 : Com_BMP1 { gunnerType = "al_adf_crewman"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
            class CargoTurret_07 : CargoTurret_07 { gunnerType = ""; };
            class CargoTurret_08 : CargoTurret_08 { gunnerType = ""; };
            class CargoTurret_09 : CargoTurret_09 { gunnerType = ""; };
            class CargoTurret_10 : CargoTurret_10 { gunnerType = ""; };
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
