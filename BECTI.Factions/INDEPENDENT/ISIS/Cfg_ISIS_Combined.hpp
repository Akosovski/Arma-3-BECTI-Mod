
    class rhsgref_ins_g_saboteur;
    class rhsgref_ins_g_saboteur_OCimport_01 : rhsgref_ins_g_saboteur { scope = 0; class EventHandlers; };
    class rhsgref_ins_g_saboteur_OCimport_02 : rhsgref_ins_g_saboteur_OCimport_01 { class EventHandlers; };

    class rhsgref_ins_g_t72ba;
    class rhsgref_ins_g_t72ba_OCimport_01 : rhsgref_ins_g_t72ba { scope = 0; class EventHandlers; class Turrets; };
    class rhsgref_ins_g_t72ba_OCimport_02 : rhsgref_ins_g_t72ba_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };
    class rhsgref_ins_g_t72ba_OCimport_03 : rhsgref_ins_g_t72ba_OCimport_02 { 
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                class Turrets : Turrets {
                    class CommanderOptics;
                    class CommanderMG;
                };
            };
        };
    };

    class rhsgref_ins_g_t72bc;
    class rhsgref_ins_g_t72bc_OCimport_01 : rhsgref_ins_g_t72bc { scope = 0; class EventHandlers; class Turrets; };
    class rhsgref_ins_g_t72bc_OCimport_02 : rhsgref_ins_g_t72bc_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };
        class rhsgref_ins_g_t72bc_OCimport_03 : rhsgref_ins_g_t72bc_OCimport_02 { 
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                class Turrets : Turrets {
                    class CommanderOptics;
                    class CommanderMG;
                };
            };
        };
    };

    class rhsgref_ins_g_bmp1p;
    class rhsgref_ins_g_bmp1p_OCimport_01 : rhsgref_ins_g_bmp1p { scope = 0; class EventHandlers; class Turrets; };
    class rhsgref_ins_g_bmp1p_OCimport_02 : rhsgref_ins_g_bmp1p_OCimport_01 { 
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

    class rhsgref_ins_g_bmp2d;
    class rhsgref_ins_g_bmp2d_OCimport_01 : rhsgref_ins_g_bmp2d { scope = 0; class EventHandlers; class Turrets; };
    class rhsgref_ins_g_bmp2d_OCimport_02 : rhsgref_ins_g_bmp2d_OCimport_01 { 
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

    class rhsgref_ins_g_zsu234;
    class rhsgref_ins_g_zsu234_OCimport_01 : rhsgref_ins_g_zsu234 { scope = 0; class EventHandlers; class Turrets; };
    class rhsgref_ins_g_zsu234_OCimport_02 : rhsgref_ins_g_zsu234_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class rhsusf_m1025_d_m2;
    class rhsusf_m1025_d_m2_OCimport_01 : rhsusf_m1025_d_m2 { scope = 0; class EventHandlers; class Turrets; };
    class rhsusf_m1025_d_m2_OCimport_02 : rhsusf_m1025_d_m2_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class M2_Turret;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
        };
    };

    class rhsusf_m1025_d_Mk19;
    class rhsusf_m1025_d_Mk19_OCimport_01 : rhsusf_m1025_d_Mk19 { scope = 0; class EventHandlers; class Turrets; };
    class rhsusf_m1025_d_Mk19_OCimport_02 : rhsusf_m1025_d_Mk19_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class M2_Turret;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
        };
    };

    class rhsusf_m966_d;
    class rhsusf_m966_d_OCimport_01 : rhsusf_m966_d { scope = 0; class EventHandlers; class Turrets; };
    class rhsusf_m966_d_OCimport_02 : rhsusf_m966_d_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class TOW_Turret;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
        };
    };


    class tk_isis_squad_leader : rhsgref_ins_g_saboteur_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "ISIS Squad Leader";
        side = 2;
        faction = "AKO_TK_ISIS";

        identityTypes[] = {"Head_TK","LanguagePER_F","rhs_scarf","G_CIVIL_male"};

        uniformClass = "m93_cmd";

        linkedItems[] = {"mbavr_l","H_ShemagOpen_tan","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"mbavr_l","H_ShemagOpen_tan","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A1_black_F","rhs_weap_M136"};
        respawnWeapons[] = {"JCA_arifle_M4A1_black_F","rhs_weap_M136"};

        magazines[] = {"30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand"};

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A1_black_F","","","rhsusf_acc_EOTECH",{"30Rnd_556x45_Stanag_Sand",30},{},""},{"rhs_weap_M136","","","",{},{},""},{},{"m93_cmd",{{"FirstAidKit",5}}},{"mbavr_l",{{"FirstAidKit",2},{"CUP_HandGrenade_M67",3,1},{"30Rnd_556x45_Stanag_Sand",6,30}}},{},"H_ShemagOpen_tan","G_Aviator",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


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

    class tk_isis_rifleman_akm : tk_isis_squad_leader {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "ISIS Rifleman (AKM)";
        side = 2;
        faction = "AKO_TK_ISIS";

        identityTypes[] = {"Head_TK","LanguagePER_F","rhs_scarf","G_CIVIL_male"};

        uniformClass = "m93_cmd";

        linkedItems[] = {"mbavr_r","H_ShemagOpen_tan","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"mbavr_r","H_ShemagOpen_tan","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK47_Early"};
        respawnWeapons[] = {"CUP_arifle_AK47_Early"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_TK_M","CUP_30Rnd_762x39_AK47_TK_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_TK_M","CUP_30Rnd_762x39_AK47_TK_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47_Early","","","",{"CUP_30Rnd_762x39_AK47_TK_M",30},{},""},{},{},{"m93_cmd",{{"FirstAidKit",5}}},{"mbavr_r",{{"FirstAidKit",1},{"CUP_HandGrenade_M67",3,1},{"CUP_30Rnd_762x39_AK47_TK_M",10,30}}},{},"H_ShemagOpen_tan","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


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

    class tk_isis_rifleman_m16 : tk_isis_rifleman_akm {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "ISIS Rifleman (M16)";
        side = 2;
        faction = "AKO_TK_ISIS";

        identityTypes[] = {"Head_TK","LanguagePER_F","rhs_scarf","G_CIVIL_male"};

        uniformClass = "m88_black_w";

        linkedItems[] = {"mbavkhk_l","pasgt_bgd","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"mbavkhk_l","pasgt_bgd","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_M16A1E1"};
        respawnWeapons[] = {"CUP_arifle_M16A1E1"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M16A1E1","","","",{"30Rnd_556x45_Stanag",30},{},""},{},{},{"m88_black_w",{{"FirstAidKit",5}}},{"mbavkhk_l",{{"30Rnd_556x45_Stanag",10,30},{"rhs_mag_m67",2,1}}},{},"pasgt_bgd","G_Balaclava_blk",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


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

    class tk_isis_crewman : tk_isis_rifleman_akm {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "ISIS Crewman";
        side = 2;
        faction = "AKO_TK_ISIS";

        identityTypes[] = {"Head_TK","LanguagePER_F","rhs_scarf","G_CIVIL_male"};

        uniformClass = "m88_black_w";

        linkedItems[] = {"mbavkhk_l","rhs_tsh4_ess","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"mbavkhk_l","rhs_tsh4_ess","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS74U"};
        respawnWeapons[] = {"CUP_arifle_AKS74U"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74U","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"m88_black_w",{{"FirstAidKit",5}}},{"mbavkhk_l",{{"FirstAidKit",1},{"CUP_HandGrenade_M67",1,1},{"CUP_30Rnd_545x39_AK_M",10,30}}},{},"rhs_tsh4_ess","G_Bandanna_khk",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


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

    class tk_isis_aa_specialist : tk_isis_rifleman_akm {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "ISIS AA Specialist";
        side = 2;
        faction = "AKO_TK_ISIS";

        identityTypes[] = {"Head_TK","LanguagePER_F","rhs_scarf","G_CIVIL_male"};

        uniformClass = "m88_black_w";

        linkedItems[] = {"m12_khk","pasgt_tan","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"m12_khk","pasgt_tan","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74_Early","rhs_weap_igla"};
        respawnWeapons[] = {"CUP_arifle_AK74_Early","rhs_weap_igla"};

        magazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","rhs_mag_9k38_rocket","CUP_30Rnd_545x39_AK74_plum_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","rhs_mag_9k38_rocket","CUP_30Rnd_545x39_AK74_plum_M"};

        backpack = "tacpac_tan";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74_Early","rhs_acc_dtk1983","","",{"CUP_30Rnd_545x39_AK74_plum_M",30},{},""},{"rhs_weap_igla","","","",{"rhs_mag_9k38_rocket",1},{},""},{},{"m88_black_w",{{"FirstAidKit",3}}},{"m12_khk",{{"CUP_30Rnd_545x39_AK74_plum_M",10,30},{"rhs_mag_m67",2,1}}},{"tacpac_tan",{{"rhs_mag_9k38_rocket",2,1}}},"pasgt_tan","G_Bandanna_khk",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


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

    class tk_isis_grenadier_m16a4 : tk_isis_rifleman_m16 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "ISIS Grenadier (M16A4)";
        side = 2;
        faction = "AKO_TK_ISIS";

        identityTypes[] = {"Head_TK","LanguagePER_F","rhs_scarf","G_CIVIL_male"};

        uniformClass = "m93_cmd";

        linkedItems[] = {"mbavr_gl","H_Bandanna_sand","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"mbavr_gl","H_Bandanna_sand","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M16A4_GL_black_F"};
        respawnWeapons[] = {"JCA_arifle_M16A4_GL_black_F"};

        magazines[] = {"30Rnd_556x45_Stanag_Sand","1Rnd_HE_Grenade_shell","30Rnd_556x45_Stanag_Sand","1Rnd_HE_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_Sand","1Rnd_HE_Grenade_shell","30Rnd_556x45_Stanag_Sand","1Rnd_HE_Grenade_shell"};

        backpack = "tacpac_tan";

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M16A4_GL_black_F","","rhsusf_acc_anpeq15_wmx_light","rhsusf_acc_ACOG3_USMC",{"30Rnd_556x45_Stanag_Sand",30},{"1Rnd_HE_Grenade_shell",1},""},{},{},{"m93_cmd",{{"FirstAidKit",3},{"30Rnd_556x45_Stanag_green",2,30}}},{"mbavr_gl",{{"FirstAidKit",1},{"1Rnd_HE_Grenade_shell",15,1},{"30Rnd_556x45_Stanag_Sand",10,30}}},{"tacpac_tan",{}},"H_Bandanna_sand","rhsusf_shemagh2_gogg_tan",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


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

    class tk_isis_grenadier_rpg : tk_isis_grenadier_m16a4 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "ISIS Grenadier (RPG-7V2)";
        side = 2;
        faction = "AKO_TK_ISIS";

        identityTypes[] = {"Head_TK","LanguagePER_F","rhs_scarf","G_CIVIL_male"};

        uniformClass = "m88_black_w";

        linkedItems[] = {"m12_khk","H_ShemagOpen_khk","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"m12_khk","H_ShemagOpen_khk","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74_Early","rhs_weap_rpg7"};
        respawnWeapons[] = {"CUP_arifle_AK74_Early","rhs_weap_rpg7"};

        magazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","rhs_rpg7_PG7VL_mag","CUP_30Rnd_545x39_AK74_plum_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","rhs_rpg7_PG7VL_mag","CUP_30Rnd_545x39_AK74_plum_M"};

        backpack = "rhs_rpg_2";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74_Early","rhs_acc_dtk1983","","",{"CUP_30Rnd_545x39_AK74_plum_M",30},{},""},{"rhs_weap_rpg7","","","",{"rhs_rpg7_PG7VL_mag",1},{},""},{},{"m88_black_w",{{"FirstAidKit",5}}},{"m12_khk",{{"CUP_30Rnd_545x39_AK74_plum_M",10,30},{"rhs_mag_m67",2,1}}},{"rhs_rpg_2",{{"rhs_rpg7_PG7VL_mag",2,1},{"rhs_rpg7_PG7VR_mag",1,1}}},"H_ShemagOpen_khk","rhs_googles_black",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


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

    class tk_isis_elite_rifleman_m4a1 : tk_isis_rifleman_akm {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "ISIS Elite Rifleman (M4A1)";
        side = 2;
        faction = "AKO_TK_ISIS";

        identityTypes[] = {"Head_TK","LanguagePER_F","rhs_scarf","G_CIVIL_male"};

        uniformClass = "m93_cmd";

        linkedItems[] = {"mbavr_r","rhsusf_opscore_mar_ut","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"mbavr_r","rhsusf_opscore_mar_ut","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A1_black_F"};
        respawnWeapons[] = {"JCA_arifle_M4A1_black_F"};

        magazines[] = {"30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand"};

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A1_black_F","","rhsusf_acc_anpeq15_wmx","rhsusf_acc_su230_mrds_c",{"30Rnd_556x45_Stanag_Sand",30},{},""},{},{},{"m93_cmd",{{"FirstAidKit",5}}},{"mbavr_r",{{"FirstAidKit",2},{"CUP_HandGrenade_M67",3,1},{"30Rnd_556x45_Stanag_Sand",11,30}}},{},"rhsusf_opscore_mar_ut","rhsusf_shemagh2_gogg_tan",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


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

    class tk_isis_elite_rifleman_mk17 : tk_isis_elite_rifleman_m4a1 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "ISIS Elite Rifleman (Mk17)";
        side = 2;
        faction = "AKO_TK_ISIS";

        identityTypes[] = {"Head_TK","LanguagePER_F","rhs_scarf","G_CIVIL_male"};

        uniformClass = "m93_cmd";

        linkedItems[] = {"mbavr_r","rhsusf_opscore_mar_ut","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"mbavr_r","rhsusf_opscore_mar_ut","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_Mk17_CQC_AFG"};
        respawnWeapons[] = {"CUP_arifle_Mk17_CQC_AFG"};

        magazines[] = {"CUP_20Rnd_762x51_B_SCAR_bkl","CUP_20Rnd_762x51_B_SCAR_bkl"};
        respawnMagazines[] = {"CUP_20Rnd_762x51_B_SCAR_bkl","CUP_20Rnd_762x51_B_SCAR_bkl"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_Mk17_CQC_AFG","","rhsusf_acc_anpeq15_wmx","rhsusf_acc_su230",{"CUP_20Rnd_762x51_B_SCAR_bkl",20},{},""},{},{},{"m93_cmd",{{"FirstAidKit",5}}},{"mbavr_r",{{"CUP_HandGrenade_M67",3,1},{"CUP_20Rnd_762x51_B_SCAR_bkl",9,20}}},{},"rhsusf_opscore_mar_ut","rhsusf_shemagh2_gogg_tan",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


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

    class tk_isis_elite_autorifleman : tk_isis_elite_rifleman_m4a1 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "ISIS Elite Auto Rifleman";
        side = 2;
        faction = "AKO_TK_ISIS";

        identityTypes[] = {"Head_TK","LanguagePER_F","rhs_scarf","G_CIVIL_male"};

        uniformClass = "m93_cmd";

        linkedItems[] = {"mbavkhk_mg","rhsusf_opscore_mar_ut","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"mbavkhk_mg","rhsusf_opscore_mar_ut","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_lmg_M249_E1"};
        respawnWeapons[] = {"CUP_lmg_M249_E1"};

        magazines[] = {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_200Rnd_TE4_Red_Tracer_556x45_M249"};
        respawnMagazines[] = {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_200Rnd_TE4_Red_Tracer_556x45_M249"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_M249_E1","","","",{"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",200},{},""},{},{},{"m93_cmd",{{"FirstAidKit",5}}},{"mbavkhk_mg",{{"rhs_mag_m67",2,1},{"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",3,200}}},{},"rhsusf_opscore_mar_ut","rhsusf_shemagh2_gogg_tan",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


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

    class tk_isis_marksman : tk_isis_rifleman_akm {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "ISIS Marksman";
        side = 2;
        faction = "AKO_TK_ISIS";

        identityTypes[] = {"Head_TK","LanguagePER_F","rhs_scarf","G_CIVIL_male"};

        uniformClass = "m88_black_w";

        linkedItems[] = {"mbavr_l","rhs_beanie_green","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"mbavr_l","rhs_beanie_green","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_srifle_SVD"};
        respawnWeapons[] = {"CUP_srifle_SVD"};

        magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M"};
        respawnMagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_SVD","","","CUP_optic_PSO_3_open",{"CUP_10Rnd_762x54_SVD_M",10},{},""},{},{},{"m88_black_w",{{"FirstAidKit",5}}},{"mbavr_l",{{"rhs_mag_m67",2,1},{"CUP_10Rnd_762x54_SVD_M",10,10}}},{},"rhs_beanie_green","G_Bandanna_oli",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


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

    class tk_isis_machinegunner : tk_isis_elite_autorifleman {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "ISIS Machine Gunner";
        side = 2;
        faction = "AKO_TK_ISIS";

        identityTypes[] = {"Head_TK","LanguagePER_F","rhs_scarf","G_CIVIL_male"};

        uniformClass = "m88_black_w";

        linkedItems[] = {"mbavkhk_mg","pasgt_tan","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"mbavkhk_mg","pasgt_tan","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_lmg_M240_B"};
        respawnWeapons[] = {"CUP_lmg_M240_B"};

        magazines[] = {"CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M"};
        respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_M240_B","","","rhsusf_acc_ELCAN_ard",{"CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M",100},{},""},{},{},{"m88_black_w",{{"FirstAidKit",5}}},{"mbavkhk_mg",{{"rhs_mag_m67",2,1},{"CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M",3,100}}},{},"pasgt_tan","rhsusf_shemagh2_gogg_tan",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


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

    class tk_isis_missileman : tk_isis_aa_specialist {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "ISIS Missileman";
        side = 2;
        faction = "AKO_TK_ISIS";

        identityTypes[] = {"Head_TK","LanguagePER_F","rhs_scarf","G_CIVIL_male"};

        uniformClass = "m88_black_w";

        linkedItems[] = {"m12_khk","pasgt_tan","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"m12_khk","pasgt_tan","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK47_Early","rhs_weap_maaws"};
        respawnWeapons[] = {"CUP_arifle_AK47_Early","rhs_weap_maaws"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_TK_M","rhs_mag_maaws_HEAT","CUP_30Rnd_762x39_AK47_TK_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_TK_M","rhs_mag_maaws_HEAT","CUP_30Rnd_762x39_AK47_TK_M"};

        backpack = "B_Kitbag_cbr";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47_Early","","","",{"CUP_30Rnd_762x39_AK47_TK_M",30},{},""},{"rhs_weap_maaws","","","",{"rhs_mag_maaws_HEAT",1},{},""},{},{"m88_black_w",{{"FirstAidKit",5}}},{"m12_khk",{{"rhs_mag_m67",2,1},{"CUP_30Rnd_762x39_AK47_TK_M",8,30}}},{"B_Kitbag_cbr",{{"MRAWS_HEAT_F",3,1},{"MRAWS_HE_F",1,1}}},"pasgt_tan","G_Balaclava_blk",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


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

    class tk_isis_medic : tk_isis_rifleman_m16 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "ISIS Medic";
        side = 2;
        faction = "AKO_TK_ISIS";

        identityTypes[] = {"Head_TK","LanguagePER_F","rhs_scarf","G_CIVIL_male"};

        uniformClass = "m88_black_w";

        linkedItems[] = {"mbavblk_m","pasgt_bgd","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"mbavblk_m","pasgt_bgd","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_M16A1E1"};
        respawnWeapons[] = {"CUP_arifle_M16A1E1"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};

        backpack = "B_AssaultPack_blk";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M16A1E1","","","",{"30Rnd_556x45_Stanag",30},{},""},{},{},{"m88_black_w",{{"FirstAidKit",5}}},{"mbavblk_m",{{"FirstAidKit",5},{"30Rnd_556x45_Stanag",12,30},{"rhs_mag_m67",2,1}}},{"B_AssaultPack_blk",{{"Medikit",1},{"FirstAidKit",5}}},"pasgt_bgd","G_Balaclava_blk",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


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

    class tk_isis_engineer : tk_isis_medic {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "ISIS Engineer";
        side = 2;
        faction = "AKO_TK_ISIS";

        identityTypes[] = {"Head_TK","LanguagePER_F","rhs_scarf","G_CIVIL_male"};

        uniformClass = "m93_cmd";

        linkedItems[] = {"mbavr_m","pasgt_bgd","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"mbavr_m","pasgt_bgd","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_M16A1E1"};
        respawnWeapons[] = {"CUP_arifle_M16A1E1"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};

        backpack = "B_AssaultPack_cbr";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M16A1E1","","","",{"30Rnd_556x45_Stanag",30},{},""},{},{},{"m93_cmd",{{"FirstAidKit",5}}},{"mbavr_m",{{"FirstAidKit",5},{"30Rnd_556x45_Stanag",12,30},{"rhs_mag_m67",1,1}}},{"B_AssaultPack_cbr",{{"ToolKit",2}}},"pasgt_bgd","rhsusf_shemagh2_gogg_tan",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


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

    class tk_isis_t72m : rhsgref_ins_g_t72ba_OCimport_03 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "ISIS T-72M";
        side = 2;
        faction = "AKO_TK_ISIS";
        crew = "tk_isis_crewman";

        class Turrets : Turrets {
            class MainTurret : MainTurret {
                gunnerType = "tk_isis_crewman";

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
                        gunnerType = "tk_isis_crewman";
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
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_01a_sand_co.paa'];_unit setObjectTextureGlobal [1,'rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_02a_sand_co.paa'];_unit setObjectTextureGlobal [2,'rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_03_sand_co.paa'];_unit setObjectTextureGlobal [3,'rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_04_sand_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "rhs_Sand";

    };

    class tk_isis_t72b_1989 : rhsgref_ins_g_t72bc_OCimport_03 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "ISIS T-72B (1989)";
        side = 2;
        faction = "AKO_TK_ISIS";
        crew = "tk_isis_crewman";

                class Turrets : Turrets {
            class MainTurret : MainTurret {
                gunnerType = "tk_isis_crewman";

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
                        gunnerType = "tk_isis_crewman";
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
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_01_sand_co.paa'];_unit setObjectTextureGlobal [1,'rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_02_sand_co.paa'];_unit setObjectTextureGlobal [2,'rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_03_sand_co.paa'];_unit setObjectTextureGlobal [3,'rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_04_sand_co.paa'];_unit setObjectTextureGlobal [4,'rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_05_sand_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "rhs_Sand";

    };

    class tk_isis_bmp1 : rhsgref_ins_g_bmp1p_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "ISIS BMP-1";
        side = 2;
        faction = "AKO_TK_ISIS";
        crew = "tk_isis_crewman";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "tk_isis_crewman"; };
            class Com_BMP1 : Com_BMP1 { gunnerType = ""; };
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
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsafrf\addons\rhs_bmp_camo\data\bmp_1_desert_co.paa'];_unit setObjectTextureGlobal [1,'rhsafrf\addons\rhs_bmp_camo\data\bmp_2_desert_co.paa'];_unit setObjectTextureGlobal [2,'rhsafrf\addons\rhs_bmp_camo\data\bmp_3_desert_co.paa'];_unit setObjectTextureGlobal [3,'rhsafrf\addons\rhs_bmp_camo\data\bmp_4_desert_co.paa'];_unit setObjectTextureGlobal [4,'rhsafrf\addons\rhs_bmp_camo\data\bmp_5_desert_co.paa'];_unit setObjectTextureGlobal [5,'rhsafrf\addons\rhs_bmp_camo\data\bmp_6_desert_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "rhs_sand";

    };

    class tk_isis_bmp2 : rhsgref_ins_g_bmp2d_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "ISIS BMP-2";
        side = 2;
        faction = "AKO_TK_ISIS";
        crew = "tk_isis_crewman";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "tk_isis_crewman"; };
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
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsafrf\addons\rhs_bmp_camo\data\bmp_1_desert_co.paa'];_unit setObjectTextureGlobal [1,'rhsafrf\addons\rhs_bmp_camo\data\bmp_2_desert_co.paa'];_unit setObjectTextureGlobal [2,'rhsafrf\addons\rhs_bmp_camo\data\bmp_3_desert_co.paa'];_unit setObjectTextureGlobal [3,'rhsafrf\addons\rhs_bmp_camo\data\bmp_4_desert_co.paa'];_unit setObjectTextureGlobal [4,'rhsafrf\addons\rhs_bmp_camo\data\bmp_5_desert_co.paa'];_unit setObjectTextureGlobal [5,'rhsafrf\addons\rhs_bmp_camo\data\bmp_6_desert_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "rhs_sand";

    };

    class tk_isis_btr80a : rhs_btr80a_msv_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "ISIS BTR-80A";
        side = 2;
        faction = "AKO_TK_ISIS";
        crew = "tk_isis_crewman";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "tk_isis_crewman"; };
            class CommanderOptics : CommanderOptics { gunnerType = ""; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
            class CargoTurret_07 : CargoTurret_07 { gunnerType = ""; };
            class CargoTurret_08 : CargoTurret_08 { gunnerType = ""; };
            class CargoTurret_09 : CargoTurret_09 { gunnerType = ""; };
            class Commander_Out : Commander_Out { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_01_des_co.paa'];_unit setObjectTextureGlobal [1,'rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_02_des_co.paa'];_unit setObjectTextureGlobal [2,'rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_03_des_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "rhs_sand";

    };

    class tk_isis_zsu23 : rhsgref_ins_g_zsu234_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "ISIS ZSU-23";
        side = 2;
        faction = "AKO_TK_ISIS";
        crew = "tk_isis_crewman";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "tk_isis_crewman"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\rhsafrf\addons\rhs_a2port_armor_camo\data\zsu_01_des_co.paa'];_unit setObjectTextureGlobal [1,'\rhsafrf\addons\rhs_a2port_armor_camo\data\zsu_02_des_co.paa'];_unit setObjectTextureGlobal [2,'\rhsafrf\addons\rhs_a2port_armor_camo\data\zsu_03_des_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "rhs_sand";

    };

    class tk_isis_m1025_m2 : rhsusf_m1025_d_m2_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "ISIS M1025 (M2)";
        side = 2;
        faction = "AKO_TK_ISIS";
        crew = "tk_isis_rifleman_akm";

        class Turrets : Turrets {
            class M2_Turret : M2_Turret { gunnerType = "tk_isis_rifleman_m16"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa'];_unit setObjectTextureGlobal [1,'rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa'];_unit setObjectTextureGlobal [2,'rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa'];_unit setObjectTextureGlobal [3,'rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa'];_unit setObjectTextureGlobal [4,'rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa'];_unit setObjectTextureGlobal [5,'rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa'];_unit setObjectTextureGlobal [6,'rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa'];_unit setObjectTextureGlobal [7,'rhsusf\addons\rhsusf_hmmwv\textures\m1025_d_co.paa'];_unit setObjectTextureGlobal [8,'rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Desert";

    };

    class tk_isis_m1025_mk19 : rhsusf_m1025_d_Mk19_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "ISIS M1025 (Mk19)";
        side = 2;
        faction = "AKO_TK_ISIS";
        crew = "tk_isis_rifleman_akm";

        class Turrets : Turrets {
            class M2_Turret : M2_Turret { gunnerType = "tk_isis_rifleman_m16"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa'];_unit setObjectTextureGlobal [1,'rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa'];_unit setObjectTextureGlobal [2,'rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa'];_unit setObjectTextureGlobal [3,'rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa'];_unit setObjectTextureGlobal [4,'rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa'];_unit setObjectTextureGlobal [5,'rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa'];_unit setObjectTextureGlobal [6,'rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa'];_unit setObjectTextureGlobal [7,'rhsusf\addons\rhsusf_hmmwv\textures\m1025_d_co.paa'];_unit setObjectTextureGlobal [8,'rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Desert";

    };

    class tk_isis_m1025_tow : rhsusf_m966_d_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "ISIS M1025 (TOW)";
        side = 2;
        faction = "AKO_TK_ISIS";
        crew = "tk_isis_rifleman_akm";

        class Turrets : Turrets {
            class TOW_Turret : TOW_Turret { gunnerType = "tk_isis_rifleman_m16"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa'];_unit setObjectTextureGlobal [1,'rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa'];_unit setObjectTextureGlobal [2,'rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa'];_unit setObjectTextureGlobal [3,'rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa'];_unit setObjectTextureGlobal [4,'rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa'];_unit setObjectTextureGlobal [5,'rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa'];_unit setObjectTextureGlobal [6,'rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa'];_unit setObjectTextureGlobal [7,'rhsusf\addons\rhsusf_hmmwv\textures\m1025_d_co.paa'];_unit setObjectTextureGlobal [8,'rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Desert";

    };