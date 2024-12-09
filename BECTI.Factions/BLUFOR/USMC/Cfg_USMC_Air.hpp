    
    class rhsusf_CH53E_USMC_GAU21;
    class rhsusf_CH53E_USMC_GAU21_OCimport_01 : rhsusf_CH53E_USMC_GAU21 { scope = 0; class EventHandlers; class Turrets; };
    class rhsusf_CH53E_USMC_GAU21_OCimport_02 : rhsusf_CH53E_USMC_GAU21_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CopilotTurret;
            class GAU21;
        };
    };

    class RHS_AH1Z_wd;
    class RHS_AH1Z_wd_OCimport_01 : RHS_AH1Z_wd { scope = 0; class EventHandlers; class Turrets; };
    class RHS_AH1Z_wd_OCimport_02 : RHS_AH1Z_wd_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class RHS_UH1Y_UNARMED;
    class RHS_UH1Y_UNARMED_OCimport_01 : RHS_UH1Y_UNARMED { scope = 0; class EventHandlers; class Turrets; };
    class RHS_UH1Y_UNARMED_OCimport_02 : RHS_UH1Y_UNARMED_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CopilotTurret;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_07;
            class CargoTurret_04;
            class CargoTurret_05;
            class CargoTurret_06;
            class CargoTurret_08;
        };
    };

    class RHS_UH1Y_FFAR;
    class RHS_UH1Y_FFAR_OCimport_01 : RHS_UH1Y_FFAR { scope = 0; class EventHandlers; class Turrets; };
    class RHS_UH1Y_FFAR_OCimport_02 : RHS_UH1Y_FFAR_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CopilotTurret;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_07;
            class CargoTurret_04;
            class CargoTurret_05;
            class CargoTurret_06;
            class CargoTurret_08;
        };
    };

    class RHS_UH1Y;
    class RHS_UH1Y_OCimport_01 : RHS_UH1Y { scope = 0; class EventHandlers; class Turrets; };
    class RHS_UH1Y_OCimport_02 : RHS_UH1Y_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CopilotTurret;
            class MainTurret;
            class RightDoorGun;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
            class CargoTurret_06;
        };
    };

    class us_usmc_ch53e : rhsusf_CH53E_USMC_GAU21_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USMC CH-53E";
        side = 1;
        faction = "ako_us_usmc";
        crew = "us_usmc_heli_pilot";

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "us_usmc_heli_pilot"; };
            class GAU21 : GAU21 { gunnerType = "us_usmc_heli_crewman"; };
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

    class us_usmc_ah1z : RHS_AH1Z_wd_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USMC AH-1Z";
        side = 1;
        faction = "ako_us_usmc";
        crew = "us_usmc_heli_pilot";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "us_usmc_heli_pilot"; };
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

    class us_usmc_uh1y_unarmed : RHS_UH1Y_UNARMED_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USMC UH-1Y (Unarmed)";
        side = 1;
        faction = "ako_us_usmc";
        crew = "us_usmc_heli_pilot";

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "us_usmc_heli_pilot"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_07 : CargoTurret_07 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
            class CargoTurret_08 : CargoTurret_08 { gunnerType = ""; };
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

    class us_usmc_uh1y_rocket : RHS_UH1Y_FFAR_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USMC UH-1Y (Rocket)";
        side = 1;
        faction = "ako_us_usmc";
        crew = "us_usmc_heli_pilot";

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "us_usmc_heli_pilot"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_07 : CargoTurret_07 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
            class CargoTurret_08 : CargoTurret_08 { gunnerType = ""; };
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

    class us_usmc_uh1y_armed : RHS_UH1Y_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USMC UH-1Y (Rocket + MG)";
        side = 1;
        faction = "ako_us_usmc";
        crew = "us_usmc_heli_pilot";

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "us_usmc_heli_pilot"; };
            class MainTurret : MainTurret { gunnerType = "us_usmc_heli_crewman"; };
            class RightDoorGun : RightDoorGun { gunnerType = "us_usmc_heli_crewman"; };
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