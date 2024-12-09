    
    // UH-80 Ghost Hawk Importer
    class B_Heli_Transport_01_F;
    class B_Heli_Transport_01_F_OCimport_01 : B_Heli_Transport_01_F { scope = 0; class EventHandlers; class Turrets; };
    class B_Heli_Transport_01_F_OCimport_02 : B_Heli_Transport_01_F_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CopilotTurret;
            class MainTurret;
            class RightDoorGun;
        };
    };

    class RHS_UH60M;
    class RHS_UH60M_OCimport_01 : RHS_UH60M { scope = 0; class EventHandlers; class Turrets; };
    class RHS_UH60M_OCimport_02 : RHS_UH60M_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CopilotTurret;
            class MainTurret;
            class RightDoorGun;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
        };
    };

    class RHS_UH60M_ESSS2;
    class RHS_UH60M_ESSS2_OCimport_01 : RHS_UH60M_ESSS2 { scope = 0; class EventHandlers; class Turrets; };
    class RHS_UH60M_ESSS2_OCimport_02 : RHS_UH60M_ESSS2_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CopilotTurret;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
        };
    };

    class RHS_MELB_AH6M;
    class RHS_MELB_AH6M_OCimport_01 : RHS_MELB_AH6M { scope = 0; class EventHandlers; class Turrets; };
    class RHS_MELB_AH6M_OCimport_02 : RHS_MELB_AH6M_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CopilotTurret;
        };
    };

    class RHS_MELB_MH6M;
    class RHS_MELB_MH6M_OCimport_01 : RHS_MELB_MH6M { scope = 0; class EventHandlers; class Turrets; };
    class RHS_MELB_MH6M_OCimport_02 : RHS_MELB_MH6M_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CopilotTurret;
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
            class CargoTurret_06;
            class CargoTurret_07;
            class CargoTurret_08;
        };
    };

    class RHS_MELB_H6M;
    class RHS_MELB_H6M_OCimport_01 : RHS_MELB_H6M { scope = 0; class EventHandlers; class Turrets; };
    class RHS_MELB_H6M_OCimport_02 : RHS_MELB_H6M_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CopilotTurret;
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class RHS_CH_47F;
    class RHS_CH_47F_OCimport_01 : RHS_CH_47F { scope = 0; class EventHandlers; class Turrets; };
    class RHS_CH_47F_OCimport_02 : RHS_CH_47F_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CopilotTurret;
            class MainTurret;
            class RightDoorGun;
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class RHS_AH64D_wd;
    class RHS_AH64D_wd_OCimport_01 : RHS_AH64D_wd { scope = 0; class EventHandlers; class Turrets; };
    class RHS_AH64D_wd_OCimport_02 : RHS_AH64D_wd_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class us_usmc_uh80 : B_Heli_Transport_01_F_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USRG UH-80";
        side = 1;
        faction = "ako_us_rg";
        crew = "us_rg_helicopter_pilot";

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "us_rg_helicopter_pilot"; };
            class MainTurret : MainTurret { gunnerType = "us_rg_helicopter_crewman"; };
            class RightDoorGun : RightDoorGun { gunnerType = "us_rg_helicopter_crewman"; };
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

    class us_usmc_uh60m : RHS_UH60M_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USRG UH-60M";
        side = 1;
        faction = "ako_us_rg";
        crew = "us_rg_helicopter_pilot";

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "us_rg_helicopter_pilot"; };
            class MainTurret : MainTurret { gunnerType = "us_rg_helicopter_crewman"; };
            class RightDoorGun : RightDoorGun { gunnerType = "us_rg_helicopter_crewman"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
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

    class us_usmc_uh60m_ews : RHS_UH60M_ESSS2_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USRG UH-60M (EWS)";
        side = 1;
        faction = "ako_us_rg";
        crew = "us_rg_helicopter_pilot";

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "us_rg_helicopter_pilot"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
        };

        class Components {
            class TransportPylonsComponent {
                UIPicture = "\rhsusf\addons\rhsusf_a2port_air\data\loadouts\RHS_UH60_ESSS_EDEN_CA.paa";
				
				class pylons
				{
					class pylon1
					{
						hardpoints[]		= {"RHS_HP_Fuel_ARMY_MEV"};
						priority			= 2;
						attachment			= "rhs_mag_M151_19";
						maxweight			= 1200;
						UIposition[]		= {0.625,0.42};
						bay					= -1;
						hitpoint 			= HitPylon1;
					};
					class pylon2 : pylon1
					{
						hardpoints[]		= {"RHS_HP_Fuel_ARMY_MEV","RHS_HP_Fuel_ARMY"};
						UIposition[]		= {0.555,0.37};
						priority			= 1;
						attachment			= "rhs_mag_M151_19";
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

    class us_usmc_ch47f : RHS_CH_47F_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USRG CH-47F";
        side = 1;
        faction = "ako_us_rg";
        crew = "us_rg_helicopter_pilot";

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "us_rg_helicopter_pilot"; };
            class MainTurret : MainTurret { gunnerType = "us_rg_helicopter_crewman"; };
            class RightDoorGun : RightDoorGun { gunnerType = "us_rg_helicopter_crewman"; };
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

    class us_usmc_ah6m : RHS_MELB_AH6M_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USRG AH-6M";
        side = 1;
        faction = "ako_us_rg";
        crew = "us_rg_helicopter_pilot";

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "us_rg_helicopter_pilot"; };
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

    class us_usmc_mh6m : RHS_MELB_MH6M_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USRG MH-6M";
        side = 1;
        faction = "ako_us_rg";
        crew = "us_rg_helicopter_pilot";

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "us_rg_helicopter_pilot"; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
            class CargoTurret_07 : CargoTurret_07 { gunnerType = ""; };
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

    class us_usmc_oh6m : RHS_MELB_H6M_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USRG OH-6M";
        side = 1;
        faction = "ako_us_rg";
        crew = "us_rg_helicopter_pilot";

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "us_rg_helicopter_pilot"; };
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

    class us_usmc_ah64d : RHS_AH64D_wd_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USRG AH-64D";
        side = 1;
        faction = "ako_us_rg";
        crew = "us_rg_helicopter_pilot";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "us_rg_helicopter_pilot"; };
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
