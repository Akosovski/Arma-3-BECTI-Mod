
    class rhs_ka60_c;
    class rhs_ka60_c_OCimport_01 : rhs_ka60_c { scope = 0; class EventHandlers; class Turrets; };
    class rhs_ka60_c_OCimport_02 : rhs_ka60_c_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CopilotTurret;
        };
    };

    class RHS_Ka52_vvsc;
    class RHS_Ka52_vvsc_OCimport_01 : RHS_Ka52_vvsc { scope = 0; class EventHandlers; class Turrets; };
    class RHS_Ka52_vvsc_OCimport_02 : RHS_Ka52_vvsc_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class RHS_Mi8T_vdv;
    class RHS_Mi8T_vdv_OCimport_01 : RHS_Mi8T_vdv { scope = 0; class EventHandlers; class Turrets; };
    class RHS_Mi8T_vdv_OCimport_02 : RHS_Mi8T_vdv_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CopilotTurret;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
        };
    };

    class RHS_Mi8mt_vdv;
    class RHS_Mi8mt_vdv_OCimport_01 : RHS_Mi8mt_vdv { scope = 0; class EventHandlers; class Turrets; };
    class RHS_Mi8mt_vdv_OCimport_02 : RHS_Mi8mt_vdv_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CopilotTurret;
            class MainTurret;
            class BackTurret;
        };
    };

    class RHS_Mi8MTV3_heavy_vdv;
    class RHS_Mi8MTV3_heavy_vdv_OCimport_01 : RHS_Mi8MTV3_heavy_vdv { scope = 0; class EventHandlers; class Turrets; };
    class RHS_Mi8MTV3_heavy_vdv_OCimport_02 : RHS_Mi8MTV3_heavy_vdv_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CopilotTurret;
            class SideTurret;
            class BackTurret;
            class FrontTurret;
        };
    };

    class SAFP_mig29sm_OPFOR;
    class SAFP_mig29sm_OPFOR_OCimport_01 : SAFP_mig29sm_OPFOR { scope = 0; class EventHandlers; };
    class SAFP_mig29sm_OPFOR_OCimport_02 : SAFP_mig29sm_OPFOR_OCimport_01 { scope = 0; class EventHandlers; };

    class RHS_T50_vvs_blueonblue;
    class RHS_T50_vvs_blueonblue_OCimport_01 : RHS_T50_vvs_blueonblue { scope = 0; class EventHandlers; };
    class RHS_T50_vvs_blueonblue_OCimport_02 : RHS_T50_vvs_blueonblue_OCimport_01 { scope = 0; class EventHandlers; };

    class RHS_TU95MS_vvs_old;
    class RHS_TU95MS_vvs_old_OCimport_01 : RHS_TU95MS_vvs_old { scope = 0; class EventHandlers; class Turrets; };
    class RHS_TU95MS_vvs_old_OCimport_02 : RHS_TU95MS_vvs_old_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
            class MainTurret2;
            class MainTurret3;
            class MainTurret4;
            class MainTurret5;
            class RearTurret;
            class MainTurret6;
        };
    };

    class rhsgref_mi24g_CAS;
    class rhsgref_mi24g_CAS_OCimport_01 : rhsgref_mi24g_CAS { scope = 0; class EventHandlers; class Turrets; };
    class rhsgref_mi24g_CAS_OCimport_02 : rhsgref_mi24g_CAS_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
        };
    };

    class rhs_mi28n_vvsc;
    class rhs_mi28n_vvsc_OCimport_01 : rhs_mi28n_vvsc { scope = 0; class EventHandlers; class Turrets; };
    class rhs_mi28n_vvsc_OCimport_02 : rhs_mi28n_vvsc_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class O_UAV_02_dynamicLoadout_F;
    class O_UAV_02_dynamicLoadout_F_OCimport_01 : O_UAV_02_dynamicLoadout_F { scope = 0; class EventHandlers; class Turrets; };
    class O_UAV_02_dynamicLoadout_F_OCimport_02 : O_UAV_02_dynamicLoadout_F_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class HE_Ababil3_Opfor;
    class HE_Ababil3_Opfor_OCimport_01 : HE_Ababil3_Opfor { scope = 0; class EventHandlers; class Turrets; };
    class HE_Ababil3_Opfor_OCimport_02 : HE_Ababil3_Opfor_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class JS_JC_SU35;
    class JS_JC_SU35_OCimport_01 : JS_JC_SU35 { scope = 0; class EventHandlers; };
    class JS_JC_SU35_OCimport_02 : JS_JC_SU35_OCimport_01 { scope = 0; class EventHandlers; };

    class ru_vdv_ka60 : rhs_ka60_c_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV Ka-60";
        side = 0;
        faction = "ako_ru_vdv";
        crew = "ru_vdv_heli_pilot";

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "ru_vdv_heli_pilot"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\rhsafrf\addons\rhs_a3retex\Data\heli_light_02_ext_c_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "vvs_camo";

    };

    class ru_vdv_ka52 : RHS_Ka52_vvsc_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV Ka-52";
        side = 0;
        faction = "ako_ru_vdv";
        crew = "ru_vdv_heli_pilot";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "ru_vdv_heli_pilot"; };
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

    class ru_vdv_mi8t : RHS_Mi8T_vdv_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV Mi-8T";
        side = 0;
        faction = "ako_ru_vdv";
        crew = "ru_vdv_heli_pilot";

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "ru_vdv_heli_pilot"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_body_g_camo1_co.paa'];_unit setObjectTextureGlobal [1,'rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_det_g_camo1_co.paa'];_unit setObjectTextureGlobal [2,'rhsafrf\addons\rhs_a2port_air\mi17\data\mi8t\camo\mi8t_tv2_g_camo1_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Camo2";

    };

    class ru_vdv_mi8mt : RHS_Mi8mt_vdv_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV Mi-8MT";
        side = 0;
        faction = "ako_ru_vdv";
        crew = "ru_vdv_heli_pilot";

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "ru_vdv_heli_pilot"; };
            class MainTurret : MainTurret { gunnerType = "ru_vdv_heli_crewman"; };
            class BackTurret : BackTurret { gunnerType = "ru_vdv_heli_crewman"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_body_g_camo1_co.paa'];_unit setObjectTextureGlobal [1,'rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_det_g_camo1_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Camo2";

    };

    class ru_vdv_mi8mtv3 : RHS_Mi8MTV3_heavy_vdv_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV Mi-8MTV-3";
        side = 0;
        faction = "ako_ru_vdv";
        crew = "ru_vdv_heli_pilot";

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "ru_vdv_heli_pilot"; };
            class SideTurret : SideTurret { gunnerType = "ru_vdv_heli_crewman"; };
            class BackTurret : BackTurret { gunnerType = "ru_vdv_heli_crewman"; };
            class FrontTurret : FrontTurret { gunnerType = "ru_vdv_heli_crewman"; };
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_body_g_camo1_co.paa'];_unit setObjectTextureGlobal [1,'rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_det_g_camo1_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Camo2";

    };

    class ru_vdv_mig29sm : SAFP_mig29sm_OPFOR_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV MiG-29SM";
        side = 0;
        faction = "ako_ru_vdv";
        crew = "ru_vdv_jet_pilot";

        class Components {
            class TransportPylonsComponent {

                class Pylons {
					class pylon1
					{
						hardpoints[] = {"FIR_MISC"};
						attachment = "rhs_mag_ub32_bd3_umk2a_s5ko";
						priority = 1;
						maxweight = 500;
                        turret[] = {}; 		
						UIposition[] = {0.25,0.10};
					};		
                    class pylon2: pylon1
					{
						UIposition[] = {0.25,0.5};
						mirroredMissilePos = 1;
					};	
                    class pylon3: pylon1
					{
						UIposition[] = {0.25,0.0};
						mirroredMissilePos = 1;
					};
                    class pylon4: pylon1
					{
						UIposition[] = {0.15,0.10};
						mirroredMissilePos = 1;
					};
                    class pylon5: pylon1
					{
						UIposition[] = {0.15,0.5};
                        attachment = "SAFP_FIR_EGBU12_P_3rnd_M";
						mirroredMissilePos = 1;
					};
                    class pylon6: pylon1
					{
						UIposition[] = {0.15,0.0};
                        attachment = "SAFP_FIR_EGBU12_P_3rnd_M";
						mirroredMissilePos = 1;
					};
                    class pylon7: pylon1
					{
						UIposition[] = {0.5,0.5};
						mirroredMissilePos = 1;
					};
                    class pylon8: pylon1
					{
						UIposition[] = {0.5,0.0};
						mirroredMissilePos = 1;
					};
                    class cmDispenser
					{
						hardpoints[] = {"FIR_MISC"};
						attachment = "SAFP_FIR_1050rnd_CMFlare_Chaff_Magazine";
						priority = 2;
						maxweight = 1000;
                        turret[] = {}; 		
						UIposition[] = {0.35,0.0.5};
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

    class ru_vdv_su35 : JS_JC_SU35_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV Su-35 Flanker";
        side = 0;
        faction = "ako_ru_vdv";
        crew = "ru_vdv_jet_pilot";

        class Components {
            class TransportPylonsComponent {

                class Pylons {
					class pylon1
					{
						hardpoints[] = {"FIR_MISC"};
						attachment = "FIR_KAB500L_P_1rnd_M";
						priority = 1;
						maxweight = 500;
                        turret[] = {}; 		
						UIposition[] = {0.25,0.10};
					};		
                    class pylon2: pylon1
					{
						UIposition[] = {0.25,0.5};
						mirroredMissilePos = 1;
					};	
                    class pylon3: pylon1
					{
						UIposition[] = {0.25,0.0};
						mirroredMissilePos = 1;
					};
                    class pylon4: pylon1
					{
						UIposition[] = {0.15,0.10};
						mirroredMissilePos = 1;
					};
                    class pylon5: pylon1
					{
						UIposition[] = {0.15,0.5};
						mirroredMissilePos = 1;
					};
                    class pylon6: pylon1
					{
						UIposition[] = {0.15,0.0};
						mirroredMissilePos = 1;
					};
                    class pylon7: pylon1
					{
						UIposition[] = {0.5,0.5};
						mirroredMissilePos = 1;
					};
                    class pylon8: pylon1
					{
						UIposition[] = {0.5,0.0};
						mirroredMissilePos = 1;
					};
                    class pylon9
					{
						hardpoints[] = {"FIR_MISC"};
						attachment = "FIR_KAB500L_P_1rnd_MF";
						priority = 2;
						maxweight = 1000;
                        turret[] = {}; 		
						UIposition[] = {0.35,0.0.5};
					};	
                    class pylon10: pylon9
					{
						UIposition[] = {0.35,0.0};
						mirroredMissilePos = 1;
					};
                    
				};					
                
            };
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\js_jc_su35\data\Su35_hull_co.paa'];_unit setObjectTextureGlobal [1,'\js_jc_su35\data\Su35_misc_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "RussianAFGreyDigital";

    };

    class ru_vdv_tu95ms6 : RHS_TU95MS_vvs_old_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV Tu-95MS6 Bear";
        side = 0;
        faction = "ako_ru_vdv";
        crew = "ru_vdv_jet_pilot";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "ru_vdv_jet_pilot"; };
            class MainTurret2 : MainTurret2 { gunnerType = "ru_vdv_jet_pilot"; };
            class MainTurret3 : MainTurret3 { gunnerType = "ru_vdv_jet_pilot"; };
            class MainTurret4 : MainTurret4 { gunnerType = "ru_vdv_jet_pilot"; };
            class MainTurret5 : MainTurret5 { gunnerType = "ru_vdv_jet_pilot"; };
            class RearTurret : RearTurret { gunnerType = "ru_vdv_jet_pilot"; };
            class MainTurret6 : MainTurret6 { gunnerType = "ru_vdv_jet_pilot"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,''];_unit setObjectTextureGlobal [1,''];_unit setObjectTextureGlobal [2,'\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\star_old_ca.paa'];_unit setObjectTextureGlobal [3,'\rhsafrf\addons\rhs_decals\Data\Numbers\AviaRed4\2_ca.paa'];_unit setObjectTextureGlobal [4,'\rhsafrf\addons\rhs_decals\Data\Numbers\AviaRed4\3_ca.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Old";

    };

    class ru_vdv_mi24g : rhsgref_mi24g_CAS_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV Mi-24G";
        side = 0;
        faction = "ako_ru_vdv";
        crew = "ru_vdv_heli_pilot";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "ru_vdv_heli_pilot"; };
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

    class ru_vdv_mi28n : rhs_mi28n_vvsc_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV Mi-28N";
        side = 0;
        faction = "ako_ru_vdv";
        crew = "ru_vdv_heli_pilot";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "ru_vdv_heli_pilot"; };
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

    class ru_vdv_k40a : O_UAV_02_dynamicLoadout_F_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV K-40A Ababil";
        side = 0;
        faction = "ako_ru_vdv";
        crew = "O_UAV_AI";

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

    class ru_vdv_k40b : HE_Ababil3_Opfor_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "VDV K-40B Kamikaze";
        side = 0;
        faction = "ako_ru_vdv";
        crew = "O_UAV_AI";

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