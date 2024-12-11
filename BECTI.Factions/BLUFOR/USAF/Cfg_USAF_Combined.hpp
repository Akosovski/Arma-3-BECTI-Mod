    
    class us_usaf_jet_pilot : us_usmc_heli_pilot {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USAF Jet Pilot";
        side = 1;
        faction = "ako_us_usaf";

        identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_usmc"};

        uniformClass = "U_B_HeliPilotCoveralls";

        linkedItems[] = {"SRU21P_LPU9P_PCU15AP","JHMCS2_MBU20P","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"SRU21P_LPU9P_PCU15AP","JHMCS2_MBU20P","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"JCA_arifle_M4A1_black_F"};
        respawnWeapons[] = {"JCA_arifle_M4A1_black_F"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};

        backpack = "B_Parachute";

        ALiVE_orbatCreator_loadout[] = {{"JCA_arifle_M4A1_black_F","","","rhsusf_acc_ACOG3",{"30Rnd_556x45_Stanag",30},{},""},{},{},{"U_B_HeliPilotCoveralls",{{"FirstAidKit",2}}},{"SRU21P_LPU9P_PCU15AP",{{"rhs_mag_m67",2,1},{"30Rnd_556x45_Stanag",7,30}}},{"B_Parachute",{}},"JHMCS2_MBU20P","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "BI";

    };

    class us_usaf_mq4a : B_UAV_02_dynamicLoadout_F_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USAF MQ-4A Greyhawk";
        side = 1;
        faction = "ako_us_usaf";
        crew = "B_UAV_AI";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = ""; };
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

    class us_usaf_mq4b : HE_MQ4A_Blufor_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USAF MQ-4B Kamikaze";
        side = 1;
        faction = "ako_us_usaf";
        crew = "B_UAV_AI";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = ""; };
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

    class us_usaf_a29 : RHSGREF_A29B_HIDF_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USAF A-29";
        side = 1;
        faction = "ako_us_usaf";
        crew = "us_usaf_jet_pilot";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "us_usaf_jet_pilot"; };
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

    class us_usaf_a10a : RHS_A10_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USAF A-10A";
        side = 1;
        faction = "ako_us_usaf";
        crew = "us_usaf_jet_pilot";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class us_usaf_f15ex : FIR_F15EX_ZZ_67FS_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USAF F-15EX";
        side = 1;
        faction = "ako_us_usaf";
        crew = "us_usaf_jet_pilot";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "us_usaf_jet_pilot"; };
        };

        class Components {
            class TransportPylonsComponent {
                UIPicture = "\FIR_F15\UI\f15cd_dynamic_ca.paa";

                class Pylons {
					class STA2A
					{
						hardpoints[] = {"FIR_F15E_AA_HP","FIR_MISC"};
						attachment = "FIR_AIM120_P_1rnd_M";
						priority = 5;
						maxweight = 300;
                        turret[] = {}; 		
						UIposition[] = {0.35,0.0};
					};
					class STA2B: STA2A
					{
						hardpoints[] = {"FIR_F15E_AA_HP","FIR_MISC"};
						priority = 4;
						attachment = "FIR_AIM120_P_1rnd_M";
						maxweight = 300;
                        turret[] = {}; 		
						UIposition[] = {0.35,0.1};
					};
					class STA8B: STA2B
					{
						hardpoints[] = {"FIR_F15E_AA_HP","FIR_MISC"};
						attachment = "FIR_AIM120_P_1rnd_M";
						maxweight = 300;
                        turret[] = {}; 		
						UIposition[] = {0.35,0.4};
					};
					class STA8A: STA2A
					{
						hardpoints[] = {"FIR_F15E_AA_HP","FIR_MISC"};
						attachment = "FIR_AIM120_P_1rnd_M";
						maxweight = 300;
                        turret[] = {}; 		
						UIposition[] = {0.35,0.5};
					};
					
					class LCT4: STA2A
					{
						hardpoints[] = {"FIR_F15E_AA_UNDER_HP","FIR_F15E_AG2000_HP","FIR_F15E_AGM_HP","FIR_F15E_SDB_HP","FIR_F15E_AG_HP","FIR_MISC"};
						attachment = "FIR_Mk84_AIR_P_1rnd_M";
                        turret[] = {}; 						
						priority = 3;						
						maxweight = 1000;
						UIposition[] = {0.05,0.20};
					};	
					class LCT5: LCT4
					{
						hardpoints[] = {"FIR_F15E_AG_HP","FIR_F15E_AG2000_HP","FIR_MISC"};
						attachment = "FIR_Mk84_AIR_P_1rnd_M";
                        turret[] = {}; 	
						priority = 3;						
						maxweight = 1000;
						UIposition[] = {0.25,0.20};
					};									
					class LCT6: LCT4
					{
						hardpoints[] = {"FIR_F15E_AA_UNDER_HP","FIR_F15E_AG2000_HP","FIR_F15E_AGM_HP","FIR_F15E_SDB_HP","FIR_F15E_AG_HP","FIR_MISC"};
						attachment = "FIR_Mk84_AIR_P_1rnd_M";
                        turret[] = {}; 	
						priority = 3;						
						maxweight = 1000;
						UIposition[] = {0.45,0.20};
					};		
					
					class LCT1: LCT4
					{
						hardpoints[] = {"FIR_F15E_AG_HP","FIR_MISC"};
						attachment = "FIR_Mk82_AIR_P_1rnd_M";
	                    turret[] = {}; 
						priority = 2;						
						maxweight = 500;
						UIposition[] = {0.05,0.15};
					};	
					class LCT2: LCT4
					{
						hardpoints[] = {"FIR_F15E_AG_HP","FIR_MISC"};
						attachment = "FIR_Mk82_AIR_P_1rnd_M";
                        turret[] = {}; 
						priority = 2;						
						maxweight = 500;
						UIposition[] = {0.25,0.15};
					};									
					class LCT3: LCT4
					{
						hardpoints[] = {"FIR_F15E_AG_HP","FIR_MISC"};
						attachment = "FIR_Mk82_AIR_P_1rnd_M";
                        turret[] = {}; 
						priority = 2;						
						maxweight = 500;
						UIposition[] = {0.45,0.15};
					};								
					
					class RCT1: LCT4
					{
						hardpoints[] = {"FIR_F15E_AA_UNDER_HP","FIR_F15E_AG2000_HP","FIR_F15E_AGM_HP","FIR_F15E_SDB_HP","FIR_F15E_AG_HP","FIR_MISC"};
						attachment = "FIR_Mk84_AIR_P_1rnd_M";
                        turret[] = {}; 
						priority = 3;						
						maxweight = 1000;
						UIposition[] = {0.05,0.30};
					};		
					class RCT2: LCT4
					{
						hardpoints[] = {"FIR_F15E_AG_HP","FIR_F15E_AG2000_HP","FIR_MISC"};
						attachment = "FIR_Mk84_AIR_P_1rnd_M";
                        turret[] = {}; 
						priority = 3;						
						maxweight = 1000;
						UIposition[] = {0.25,0.30};
					};				
					class RCT3: LCT4
					{
						hardpoints[] = {"FIR_F15E_AA_UNDER_HP","FIR_F15E_AG2000_HP","FIR_F15E_AGM_HP","FIR_F15E_SDB_HP","FIR_F15E_AG_HP","FIR_MISC"};
						attachment = "FIR_Mk84_AIR_P_1rnd_M";
                        turret[] = {}; 
						priority = 3;						
						maxweight = 1000;
						UIposition[] = {0.45,0.30};
					};				
					
					class RCT4: LCT4
					{
						hardpoints[] = {"FIR_F15E_AG_HP","FIR_MISC"};
						attachment = "FIR_Mk82_AIR_P_1rnd_M";
                        turret[] = {}; 
						priority = 2;						
						maxweight = 500;
						UIposition[] = {0.05,0.35};
					};		
					class RCT5: LCT4
					{
						hardpoints[] = {"FIR_F15E_AG_HP","FIR_MISC"};
						attachment = "FIR_Mk82_AIR_P_1rnd_M";
                        turret[] = {}; 
						priority = 2;						
						maxweight = 500;
						UIposition[] = {0.25,0.35};
					};				
					class RCT6: LCT4
					{
						hardpoints[] = {"FIR_F15E_AG_HP","FIR_MISC"};
						attachment = "FIR_Mk82_AIR_P_1rnd_M";
                        turret[] = {}; 
						priority = 2;						
						maxweight = 500;
						UIposition[] = {0.45,0.35};
					};								
					
					class STA2: STA2A
					{
						hardpoints[] = {"FIR_F15E_AG_HP","FIR_F15E_AG2000_HP","FIR_F15E_SDB_HP","FIR_F15E_AGM_HP","FIR_F15E_MISC_HP","FIR_MISC"};
						attachment = "FIR_Mk84_AIR_P_1rnd_M";
                        turret[] = {}; 
						priority = 1;						
						maxweight = 1000;
						UIposition[] = {0.20,0.05};
					};							
					class STA8: STA2A
					{
						hardpoints[] = {"FIR_F15E_AG_HP","FIR_F15E_AG2000_HP","FIR_F15E_SDB_HP","FIR_F15E_AGM_HP","FIR_F15E_MISC_HP","FIR_MISC"};
						attachment = "FIR_Mk84_AIR_P_1rnd_M";
                        turret[] = {}; 
						priority = 1;						
						maxweight = 1000;
						UIposition[] = {0.20,0.45};
					};			
					class STA5: STA2A
					{
						hardpoints[] = {"FIR_F15E_AG_HP","FIR_F15E_AG2000_HP","FIR_F15E_SDB_HP","FIR_F15E_MISC_HP","FIR_MISC"};
						attachment = "FIR_Mk84_AIR_P_1rnd_M";
                        turret[] = {}; 
						priority = 1;						
						maxweight = 1000;
						UIposition[] = {0.20,0.25};
					};				
                    class STA1: STA2A
					{
						hardpoints[] = {"FIR_F15SE_Midwing_HP","FIR_MISC"};
						attachment = "FIR_Mk82_AIR_P_1rnd_M";
                        turret[] = {}; 
						priority = 6;						
						maxweight = 1000;
						UIposition[] = {0.6,0.05};
					};							
					class STA9: STA2A
					{
						hardpoints[] = {"FIR_F15SE_Midwing_HP","FIR_MISC"};
						attachment = "FIR_Mk84_AIR_P_1rnd_M";
                        turret[] = {}; 
						priority = 6;						
						maxweight = 1000;
						UIposition[] = {0.6,0.45};
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

    class us_usaf_f16c : FIR_F16C_WP_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USAF F-16C";
        side = 1;
        faction = "ako_us_usaf";
        crew = "us_usaf_jet_pilot";

        class Components {
            class TransportPylonsComponent {
                UIPicture = "\FIR_F16\UI\f16_dynamic_ca.paa";

                class pylons
				{
					class STA1
					{
						hardpoints[] = {"FIR_MISC","FIR_F16_AA_HP"};
						attachment = "FIR_AIM120_P_1rnd_M";
						priority = 5;
						maxweight = 300;
						UIposition[] = {0.35,0.0};
					};
					class STA2: STA1
					{
						hardpoints[] = {"FIR_MISC","FIR_Clean_MISC","FIR_F16_AA_HP"};
						priority = 4;
						attachment = "FIR_AIM120_P_1rnd_M";
						maxweight = 500;
						UIposition[] = {0.345,0.05};
					};
					class STA3: STA1
					{
						hardpoints[] = {"FIR_MISC","FIR_Clean_MISC","FIR_F16_Combined_HP"};
						priority = 3;
						attachment = "FIR_Mk82_AIR_TER9A_P_3rnd_M";
						maxweight = 1050;
						UIposition[] = {0.34,0.1};
					};
					class STA4: STA1
					{
						hardpoints[] = {"FIR_MISC","FIR_Clean_MISC","FIR_F16_AG_HP"};
						priority = 2;
						attachment = "FIR_Mk82_AIR_TER9A_P_3rnd_M";
						maxweight = 1200;
						UIposition[] = {0.33,0.2};
					};
					class STA5: STA1
					{
						hardpoints[] = {"FIR_MISC","FIR_F16_Under_HP"};
						priority = 1;
						attachment = "FIR_GEPOD30_P_330rnd_M";
						maxweight = 1200;
						UIposition[] = {0.33,0.25};
					};
					class STA5A: STA1
					{
						hardpoints[] = {"FIR_MISC","FIR_F16_Aux_HP"};
						UIposition[] = {0.33,0.3};
						attachment = "FIR_SniperXR_1_P_1rnd_M";
					};
					class STA7: STA4
					{
						UIposition[] = {0.33,0.35};
						mirroredMissilePos = 4;
					};
					class STA8: STA3
					{
						UIposition[] = {0.33,0.40};
						mirroredMissilePos = 3;
					};
					class STA9: STA2
					{
						UIposition[] = {0.34,0.45};
						mirroredMissilePos = 2;
					};
					class STA10: STA1
					{
						UIposition[] = {0.345,0.5};
						mirroredMissilePos = 1;
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

    class us_usaf_f35c : F_35C_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USAF F-35C";
        side = 1;
        faction = "ako_us_usaf";
        crew = "us_usaf_jet_pilot";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'F35C\data\liveries\X3.paa'];_unit setObjectTextureGlobal [1,'F35C\data\F_35C_ext_2_co.paa'];_unit setObjectTextureGlobal [2,'F35C\data\F_35C_ext_3_co.paa'];_unit setObjectTextureGlobal [3,''];_unit setObjectTextureGlobal [4,''];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "USSFreedom";

    };

    class us_usaf_f22a : rhsusf_f22_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USAF F-22A";
        side = 1;
        faction = "ako_us_usaf";
        crew = "us_usaf_jet_pilot";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class us_usaf_c130j : RHS_C130J_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "USAF C-130J";
        side = 1;
        faction = "ako_us_usaf";
        crew = "us_usaf_jet_pilot";

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "us_usaf_jet_pilot"; };
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