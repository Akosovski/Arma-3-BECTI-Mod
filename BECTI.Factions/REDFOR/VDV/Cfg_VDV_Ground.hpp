    
    class rhs_bmd4_vdv;
    class rhs_bmd4_vdv_OCimport_01 : rhs_bmd4_vdv { scope = 0; class EventHandlers; class Turrets; };
    class rhs_bmd4_vdv_OCimport_02 : rhs_bmd4_vdv_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
            class GPMGTurret1;
            class LeftBack;
            class RightBack;
            class MainFront;
        };
    };

    class rhs_bmd4ma_vdv;
    class rhs_bmd4ma_vdv_OCimport_01 : rhs_bmd4ma_vdv { scope = 0; class EventHandlers; class Turrets; };
    class rhs_bmd4ma_vdv_OCimport_02 : rhs_bmd4ma_vdv_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
            class GPMGTurret1;
            class GPMGTurret2;
            class RightBack;
            class LeftBack;
            class MiddleBack;
        };
    };

    class rhs_kamaz5350_vdv;
    class rhs_kamaz5350_vdv_OCimport_01 : rhs_kamaz5350_vdv { scope = 0; class EventHandlers; class Turrets; };
    class rhs_kamaz5350_vdv_OCimport_02 : rhs_kamaz5350_vdv_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
        };
    };

    class rhs_kamaz5350_ammo_vdv;
    class rhs_kamaz5350_ammo_vdv_OCimport_01 : rhs_kamaz5350_ammo_vdv { scope = 0; class EventHandlers; class Turrets; };
    class rhs_kamaz5350_ammo_vdv_OCimport_02 : rhs_kamaz5350_ammo_vdv_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoTurret_03;
        };
    };

    class rhs_kamaz5350_open_vdv;
    class rhs_kamaz5350_open_vdv_OCimport_01 : rhs_kamaz5350_open_vdv { scope = 0; class EventHandlers; class Turrets; };
    class rhs_kamaz5350_open_vdv_OCimport_02 : rhs_kamaz5350_open_vdv_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
        };
    };

    class ru_vdv_kamaz : rhs_kamaz5350_vdv_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV KamAZ-5350";
        side = 0;
        faction = "ako_ru_vdv";
        crew = "ru_vdv_rifleman_ak74m";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
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

    class ru_vdv_kamaz_ammo : rhs_kamaz5350_ammo_vdv_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV KamAZ-5350 (Ammo)";
        side = 0;
        faction = "ako_ru_vdv";
        crew = "ru_vdv_rifleman_ak74m";

        class Turrets : Turrets {
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

    class ru_vdv_kamaz_open : rhs_kamaz5350_open_vdv_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV KamAZ-5350 (Open)";
        side = 0;
        faction = "ako_ru_vdv";
        crew = "ru_vdv_rifleman_ak74m";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
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

    class ru_vdv_bmd4 : rhs_bmd4_vdv_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV BMD-4";
        side = 0;
        faction = "ako_ru_vdv";
        crew = "ru_vdv_crewman";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "ru_vdv_crewman"; };
            class GPMGTurret1 : GPMGTurret1 { gunnerType = ""; };
            class LeftBack : LeftBack { gunnerType = ""; };
            class RightBack : RightBack { gunnerType = ""; };
            class MainFront : MainFront { gunnerType = ""; };
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsafrf\addons\rhs_bmd_34\data\rhs_bmd3_01_co.paa'];_unit setObjectTextureGlobal [1,'rhsafrf\addons\rhs_bmd_34\data\rhs_bmd4_02_co.paa'];_unit setObjectTextureGlobal [2,'rhsafrf\addons\rhs_bmd_34\data\rhs_bmd4_03_co.paa'];_unit setObjectTextureGlobal [3,'rhsafrf\addons\rhs_sprut\data\bmd34roadwheel_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "standard";

    };

    class ru_vdv_bmd4m : rhs_bmd4ma_vdv_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV BMD-4M (A)";
        side = 0;
        faction = "ako_ru_vdv";
        crew = "ru_vdv_crewman";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "ru_vdv_crewman"; };
            class GPMGTurret1 : GPMGTurret1 { gunnerType = ""; };
            class GPMGTurret2 : GPMGTurret2 { gunnerType = ""; };
            class RightBack : RightBack { gunnerType = ""; };
            class LeftBack : LeftBack { gunnerType = ""; };
            class MiddleBack : MiddleBack { gunnerType = ""; };
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
