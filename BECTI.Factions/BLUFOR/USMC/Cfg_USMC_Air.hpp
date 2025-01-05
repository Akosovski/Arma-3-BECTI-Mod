    
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

        class Components {
            class TransportPylonsComponent {
                UIPicture = "\rhsusf\addons\rhsusf_a2port_air\data\loadouts\RHS_UH60_ESSS_EDEN_CA.paa";
				
				class pylons
				{
					class pylon1
					{
						hardpoints[]		= {};
						priority			= 2;
						attachment			= "rhs_mag_FFAR_19_USAF";
						maxweight			= 1200;
						UIposition[]		= {0.625,0.42};
						bay					= -1;
						hitpoint 			= HitPylon1;
					};
					class pylon2 : pylon1
					{
						hardpoints[]		= {"RHSUSF_cm_ANALE39","RHSUSF_cm_ANALE39_x2","RHSUSF_cm_ANALE39_x4"};
						UIposition[]		= {0.555,0.37};
						priority			= 1;
						attachment			= "rhs_mag_FFAR_19_USAF";
						hitpoint 			= HitPylon2;
					};
					class cmDispenser
					{
						hardpoints[]	= {"RHSUSF_cm_M130","RHSUSF_cm_M130_x2"};
						priority		= 1;
						attachment		= "rhsusf_M130_CMFlare_Chaff_Magazine_x2";
						maxweight		= 800;
						UIposition[]	= {0.33,0.0};
					};
				};
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

        class Components {
            class TransportPylonsComponent {
                UIPicture = "\rhsusf\addons\rhsusf_a2port_air\data\loadouts\RHS_UH60_ESSS_EDEN_CA.paa";
				
				class pylons
				{
					class pylon1
					{
						hardpoints[]		= {};
						priority			= 2;
						attachment			= "rhs_mag_FFAR_19_USAF";
						maxweight			= 1200;
						UIposition[]		= {0.625,0.42};
						bay					= -1;
						hitpoint 			= HitPylon1;
					};
					class pylon2 : pylon1
					{
						hardpoints[]		= {};
						UIposition[]		= {0.555,0.37};
						priority			= 1;
						attachment			= "rhs_mag_FFAR_19_USAF";
						hitpoint 			= HitPylon2;
					};
					class cmDispenser
					{
						hardpoints[]	= {"RHSUSF_cm_ANALE39","RHSUSF_cm_ANALE39_x2","RHSUSF_cm_ANALE39_x4"};
						priority		= 1;
						attachment		= "rhsusf_ANALE39_CMFlare_Chaff_Magazine_x4";
						maxweight		= 800;
						UIposition[]	= {0.33,0.0};
					};
				};
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