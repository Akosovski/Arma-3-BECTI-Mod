
    // Infantry

    class rhs_msv_emr_rifleman;
    class rhs_msv_emr_rifleman_OCimport_01 : rhs_msv_emr_rifleman { scope = 0; class EventHandlers; };
    class rhs_msv_emr_rifleman_OCimport_02 : rhs_msv_emr_rifleman_OCimport_01 { class EventHandlers; };

    class rhs_vmf_recon_sergeant;
    class rhs_vmf_recon_sergeant_OCimport_01 : rhs_vmf_recon_sergeant { scope = 0; class EventHandlers; };
    class rhs_vmf_recon_sergeant_OCimport_02 : rhs_vmf_recon_sergeant_OCimport_01 { class EventHandlers; };

    class rhs_vmf_recon_efreitor;
    class rhs_vmf_recon_efreitor_OCimport_01 : rhs_vmf_recon_efreitor { scope = 0; class EventHandlers; };
    class rhs_vmf_recon_efreitor_OCimport_02 : rhs_vmf_recon_efreitor_OCimport_01 { class EventHandlers; };

    class rhs_vdv_rifleman;
    class rhs_vdv_rifleman_OCimport_01 : rhs_vdv_rifleman { scope = 0; class EventHandlers; };
    class rhs_vdv_rifleman_OCimport_02 : rhs_vdv_rifleman_OCimport_01 { class EventHandlers; };

    // Air Units

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


    // Ground Units
    
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

    class RHS_Ural_Repair_MSV_01;
    class RHS_Ural_Repair_MSV_01_OCimport_01 : RHS_Ural_Repair_MSV_01 { scope = 0; class EventHandlers; };
    class RHS_Ural_Repair_MSV_01_OCimport_02 : RHS_Ural_Repair_MSV_01_OCimport_01 { scope = 0; class EventHandlers; };

    class rhs_btr80a_msv;
    class rhs_btr80a_msv_OCimport_01 : rhs_btr80a_msv { scope = 0; class EventHandlers; class Turrets; };
    class rhs_btr80a_msv_OCimport_02 : rhs_btr80a_msv_OCimport_01 { 
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
            class CargoTurret_09;
            class Commander_Out;
        };
    };

    class rhs_btr70_msv;
    class rhs_btr70_msv_OCimport_01 : rhs_btr70_msv { scope = 0; class EventHandlers; class Turrets; };
    class rhs_btr70_msv_OCimport_02 : rhs_btr70_msv_OCimport_01 { 
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

    class rhs_t72bc_tv;
    class rhs_t72bc_tv_OCimport_01 : rhs_t72bc_tv { scope = 0; class EventHandlers; class Turrets; };
    class rhs_t72bc_tv_OCimport_02 : rhs_t72bc_tv_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };
    class rhs_t72bc_tv_OCimport_03 : rhs_t72bc_tv_OCimport_02 { 
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                class Turrets : Turrets {
                    class CommanderOptics;
                    class CommanderMG;
                };
            };
        };
    };

    class rhs_t72bd_tv;
    class rhs_t72bd_tv_OCimport_01 : rhs_t72bd_tv { scope = 0; class EventHandlers; class Turrets; };
    class rhs_t72bd_tv_OCimport_02 : rhs_t72bd_tv_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };
    class rhs_t72bd_tv_OCimport_03 : rhs_t72bd_tv_OCimport_02 { 
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                class Turrets : Turrets {
                    class CommanderOptics;
                    class CommanderMG;
                };
            };
        };
    };

    class rhs_t80u;
    class rhs_t80u_OCimport_01 : rhs_t80u { scope = 0; class EventHandlers; class Turrets; };
    class rhs_t80u_OCimport_02 : rhs_t80u_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };
    class rhs_t80u_OCimport_03 : rhs_t80u_OCimport_02 { 
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                class Turrets : Turrets {
                    class CommanderOptics;
                    class CommanderMG;
                };
            };
        };
    };

    class rhs_t80um;
    class rhs_t80um_OCimport_01 : rhs_t80um { scope = 0; class EventHandlers; class Turrets; };
    class rhs_t80um_OCimport_02 : rhs_t80um_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };
    class rhs_t80um_OCimport_03 : rhs_t80um_OCimport_02 { 
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                class Turrets : Turrets {
                    class CommanderOptics;
                    class CommanderMG;
                };
            };
        };
    };

    class rhs_t90_tv;
    class rhs_t90_tv_OCimport_01 : rhs_t90_tv { scope = 0; class EventHandlers; class Turrets; };
    class rhs_t90_tv_OCimport_02 : rhs_t90_tv_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };
    class rhs_t90_tv_OCimport_03 : rhs_t90_tv_OCimport_02 { 
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                class Turrets : Turrets {
                    class CommanderOptics;
                    class CommanderMG;
                };
            };
        };
    };

    class rhs_t90a_tv;
    class rhs_t90a_tv_OCimport_01 : rhs_t90a_tv { scope = 0; class EventHandlers; class Turrets; };
    class rhs_t90a_tv_OCimport_02 : rhs_t90a_tv_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };
    class rhs_t90a_tv_OCimport_03 : rhs_t90a_tv_OCimport_02 { 
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                class Turrets : Turrets {
                    class CommanderOptics;
                    class CommanderMG;
                };
            };
        };
    };

    class rhs_t90sm_tv;
    class rhs_t90sm_tv_OCimport_01 : rhs_t90sm_tv { scope = 0; class EventHandlers; class Turrets; };
    class rhs_t90sm_tv_OCimport_02 : rhs_t90sm_tv_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };
    class rhs_t90sm_tv_OCimport_03 : rhs_t90sm_tv_OCimport_02 { 
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                class Turrets : Turrets {
                    class CommanderOptics;
                    class CommanderMG;
                };
            };
        };
    };

    class rhs_bmp1_msv;
    class rhs_bmp1_msv_OCimport_01 : rhs_bmp1_msv { scope = 0; class EventHandlers; class Turrets; };
    class rhs_bmp1_msv_OCimport_02 : rhs_bmp1_msv_OCimport_01 { 
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

    class rhs_bmp2_msv;
    class rhs_bmp2_msv_OCimport_01 : rhs_bmp2_msv { scope = 0; class EventHandlers; class Turrets; };
    class rhs_bmp2_msv_OCimport_02 : rhs_bmp2_msv_OCimport_01 { 
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

    class rhs_bmp3_late_msv;
    class rhs_bmp3_late_msv_OCimport_01 : rhs_bmp3_late_msv { scope = 0; class EventHandlers; class Turrets; };
    class rhs_bmp3_late_msv_OCimport_02 : rhs_bmp3_late_msv_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
            class GPMGTurret1;
            class GPMGTurret2;
        };
    };
    class rhs_bmp3_late_msv_OCimport_03 : rhs_bmp3_late_msv_OCimport_02 { 
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                class Turrets : Turrets {
                    class CommanderOptics;
                };
            };
        };
    };

    class rhs_bmp3mera_msv;
    class rhs_bmp3mera_msv_OCimport_01 : rhs_bmp3mera_msv { scope = 0; class EventHandlers; class Turrets; };
    class rhs_bmp3mera_msv_OCimport_02 : rhs_bmp3mera_msv_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
            class GPMGTurret1;
            class GPMGTurret2;
        };
    };
    class rhs_bmp3mera_msv_OCimport_03 : rhs_bmp3mera_msv_OCimport_02 { 
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                class Turrets : Turrets {
                    class CommanderOptics;
                };
            };
        };
    };

    class RHS_UAZ_MSV_01;
    class RHS_UAZ_MSV_01_OCimport_01 : RHS_UAZ_MSV_01 { scope = 0; class EventHandlers; };
    class RHS_UAZ_MSV_01_OCimport_02 : RHS_UAZ_MSV_01_OCimport_01 { scope = 0; class EventHandlers; };

    class rhs_uaz_open_MSV_01;
    class rhs_uaz_open_MSV_01_OCimport_01 : rhs_uaz_open_MSV_01 { scope = 0; class EventHandlers; class Turrets; };
    class rhs_uaz_open_MSV_01_OCimport_02 : rhs_uaz_open_MSV_01_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
        };
    };

    class rhs_tigr_msv;
    class rhs_tigr_msv_OCimport_01 : rhs_tigr_msv { scope = 0; class EventHandlers; class Turrets; };
    class rhs_tigr_msv_OCimport_02 : rhs_tigr_msv_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class rhs_tigr_sts_msv;
    class rhs_tigr_sts_msv_OCimport_01 : rhs_tigr_sts_msv { scope = 0; class EventHandlers; class Turrets; };
    class rhs_tigr_sts_msv_OCimport_02 : rhs_tigr_sts_msv_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
            class AGS_Turret;
        };
    };

    class rhs_tigr_m_msv;
    class rhs_tigr_m_msv_OCimport_01 : rhs_tigr_m_msv { scope = 0; class EventHandlers; class Turrets; };
    class rhs_tigr_m_msv_OCimport_02 : rhs_tigr_m_msv_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoTurret_01;
        };
    };

    class RHS_Ural_MSV_01;
    class RHS_Ural_MSV_01_OCimport_01 : RHS_Ural_MSV_01 { scope = 0; class EventHandlers; class Turrets; };
    class RHS_Ural_MSV_01_OCimport_02 : RHS_Ural_MSV_01_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class RHS_Ural_Flat_MSV_01;
    class RHS_Ural_Flat_MSV_01_OCimport_01 : RHS_Ural_Flat_MSV_01 { scope = 0; class EventHandlers; };
    class RHS_Ural_Flat_MSV_01_OCimport_02 : RHS_Ural_Flat_MSV_01_OCimport_01 { scope = 0; class EventHandlers; };

    class RHS_Ural_Open_MSV_01;
    class RHS_Ural_Open_MSV_01_OCimport_01 : RHS_Ural_Open_MSV_01 { scope = 0; class EventHandlers; class Turrets; };
    class RHS_Ural_Open_MSV_01_OCimport_02 : RHS_Ural_Open_MSV_01_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
        };
    };

    class RHS_Ural_Open_Flat_MSV_01;
    class RHS_Ural_Open_Flat_MSV_01_OCimport_01 : RHS_Ural_Open_Flat_MSV_01 { scope = 0; class EventHandlers; };
    class RHS_Ural_Open_Flat_MSV_01_OCimport_02 : RHS_Ural_Open_Flat_MSV_01_OCimport_01 { scope = 0; class EventHandlers; };

    class RHS_Ural_Fuel_MSV_01;
    class RHS_Ural_Fuel_MSV_01_OCimport_01 : RHS_Ural_Fuel_MSV_01 { scope = 0; class EventHandlers; };
    class RHS_Ural_Fuel_MSV_01_OCimport_02 : RHS_Ural_Fuel_MSV_01_OCimport_01 { scope = 0; class EventHandlers; };

    class RHS_Ural_Ammo_MSV_01;
    class RHS_Ural_Ammo_MSV_01_OCimport_01 : RHS_Ural_Ammo_MSV_01 { scope = 0; class EventHandlers; };
    class RHS_Ural_Ammo_MSV_01_OCimport_02 : RHS_Ural_Ammo_MSV_01_OCimport_01 { scope = 0; class EventHandlers; };

    class RHS_Ural_Zu23_MSV_01;
    class RHS_Ural_Zu23_MSV_01_OCimport_01 : RHS_Ural_Zu23_MSV_01 { scope = 0; class EventHandlers; class Turrets; };
    class RHS_Ural_Zu23_MSV_01_OCimport_02 : RHS_Ural_Zu23_MSV_01_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
        };
    };

    class RHS_BM21_MSV_01;
    class RHS_BM21_MSV_01_OCimport_01 : RHS_BM21_MSV_01 { scope = 0; class EventHandlers; class Turrets; };
    class RHS_BM21_MSV_01_OCimport_02 : RHS_BM21_MSV_01_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class rhsgref_BRDM2_msv;
    class rhsgref_BRDM2_msv_OCimport_01 : rhsgref_BRDM2_msv { scope = 0; class EventHandlers; class Turrets; };
    class rhsgref_BRDM2_msv_OCimport_02 : rhsgref_BRDM2_msv_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CommanderOptics;
            class MainTurret;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
            class CargoTurret_06;
        };
    };

    class rhsgref_BRDM2_ATGM_msv;
    class rhsgref_BRDM2_ATGM_msv_OCimport_01 : rhsgref_BRDM2_ATGM_msv { scope = 0; class EventHandlers; class Turrets; };
    class rhsgref_BRDM2_ATGM_msv_OCimport_02 : rhsgref_BRDM2_ATGM_msv_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
        };
    };

    class rhs_9k79;
    class rhs_9k79_OCimport_01 : rhs_9k79 { scope = 0; class EventHandlers; class Turrets; };
    class rhs_9k79_OCimport_02 : rhs_9k79_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class rhs_9k79_B;
    class rhs_9k79_B_OCimport_01 : rhs_9k79_B { scope = 0; class EventHandlers; class Turrets; };
    class rhs_9k79_B_OCimport_02 : rhs_9k79_B_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };