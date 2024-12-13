    
    class us_rg_uh80 : B_Heli_Transport_01_F_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USRG UH-80";
        side = 1;
        faction = "ako_us_rg";
        crew = "us_rg_heli_pilot";

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "us_rg_heli_pilot"; };
            class MainTurret : MainTurret { gunnerType = "us_rg_heli_crewman"; };
            class RightDoorGun : RightDoorGun { gunnerType = "us_rg_heli_crewman"; };
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

    class us_rg_uh60m : RHS_UH60M_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USRG UH-60M";
        side = 1;
        faction = "ako_us_rg";
        crew = "us_rg_heli_pilot";

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "us_rg_heli_pilot"; };
            class MainTurret : MainTurret { gunnerType = "us_rg_heli_crewman"; };
            class RightDoorGun : RightDoorGun { gunnerType = "us_rg_heli_crewman"; };
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

    class us_rg_uh60m_ews : RHS_UH60M_ESSS2_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USRG UH-60M (EWS)";
        side = 1;
        faction = "ako_us_rg";
        crew = "us_rg_heli_pilot";

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "us_rg_heli_pilot"; };
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

    class us_rg_ch47f : RHS_CH_47F_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USRG CH-47F";
        side = 1;
        faction = "ako_us_rg";
        crew = "us_rg_heli_pilot";

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "us_rg_heli_pilot"; };
            class MainTurret : MainTurret { gunnerType = "us_rg_heli_crewman"; };
            class RightDoorGun : RightDoorGun { gunnerType = "us_rg_heli_crewman"; };
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

    class us_rg_ah6m : RHS_MELB_AH6M_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USRG AH-6M";
        side = 1;
        faction = "ako_us_rg";
        crew = "us_rg_heli_pilot";

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "us_rg_heli_pilot"; };
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

    class us_rg_mh6m : RHS_MELB_MH6M_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USRG MH-6M";
        side = 1;
        faction = "ako_us_rg";
        crew = "us_rg_heli_pilot";

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "us_rg_heli_pilot"; };
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

    class us_rg_oh6m : RHS_MELB_H6M_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USRG OH-6M";
        side = 1;
        faction = "ako_us_rg";
        crew = "us_rg_heli_pilot";

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "us_rg_heli_pilot"; };
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

    class us_rg_ah64d : RHS_AH64D_wd_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USRG AH-64D";
        side = 1;
        faction = "ako_us_rg";
        crew = "us_rg_heli_pilot";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "us_rg_heli_pilot"; };
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

    class us_rg_uh1h_rocket : TRU_RHS_UH1H_navy_gunship_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USRG UH-1H (Rocket + MG)";
        side = 1;
        faction = "AKO_US_RG";
        crew = "us_rg_heli_pilot";

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "us_rg_heli_pilot"; };
            class RightGunner : RightGunner { gunnerType = "us_rg_heli_crewman"; };
            class LeftGunner : LeftGunner { gunnerType = "us_rg_heli_crewman"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsgref\addons\rhsgref_air\uh1h\data\uh1h_us_co.paa'];_unit setObjectTextureGlobal [1,'rhsgref\addons\rhsgref_air\uh1h\data\uh1h_us_in_co.paa'];_unit setObjectTextureGlobal [2,'rhsgref\addons\rhsgref_air\uh1h\data\mlod_us_co.paa'];_unit setObjectTextureGlobal [3,'rhsgref\addons\rhsgref_air\uh1h\data\decals\uh1h_us_decals_ca.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "us_army";

    };

    class us_rg_uh1h_mg : TRU_RHS_UH1H_navy_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USRG UH-1H (MG)";
        side = 1;
        faction = "AKO_US_RG";
        crew = "us_rg_heli_pilot";

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "us_rg_heli_pilot"; };
            class RightGunner : RightGunner { gunnerType = "us_rg_heli_crewman"; };
            class LeftGunner : LeftGunner { gunnerType = "us_rg_heli_crewman"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsgref\addons\rhsgref_air\uh1h\data\uh1h_us_co.paa'];_unit setObjectTextureGlobal [1,'rhsgref\addons\rhsgref_air\uh1h\data\uh1h_us_in_co.paa'];_unit setObjectTextureGlobal [2,'rhsgref\addons\rhsgref_air\uh1h\data\mlod_us_co.paa'];_unit setObjectTextureGlobal [3,'rhsgref\addons\rhsgref_air\uh1h\data\decals\uh1h_us_decals_ca.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "us_army";

    };