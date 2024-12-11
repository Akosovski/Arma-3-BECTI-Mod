
    // Infantry 
    class rhsusf_army_ocp_arb_squadleader;
    class rhsusf_army_ocp_arb_squadleader_OCimport_01 : rhsusf_army_ocp_arb_squadleader { scope = 0; class EventHandlers; };
    class rhsusf_army_ocp_arb_squadleader_OCimport_02 : rhsusf_army_ocp_arb_squadleader_OCimport_01 { class EventHandlers; };

    class rhsusf_navy_marpat_d_medic;
    class rhsusf_navy_marpat_d_medic_OCimport_01 : rhsusf_navy_marpat_d_medic { scope = 0; class EventHandlers; };
    class rhsusf_navy_marpat_d_medic_OCimport_02 : rhsusf_navy_marpat_d_medic_OCimport_01 { class EventHandlers; };

    class rhsusf_usmc_marpat_wd_squadleader;
    class rhsusf_usmc_marpat_wd_squadleader_OCimport_01 : rhsusf_usmc_marpat_wd_squadleader { scope = 0; class EventHandlers; };
    class rhsusf_usmc_marpat_wd_squadleader_OCimport_02 : rhsusf_usmc_marpat_wd_squadleader_OCimport_01 { class EventHandlers; };

    // Air Units
    class RHSGREF_A29B_HIDF;
    class RHSGREF_A29B_HIDF_OCimport_01 : RHSGREF_A29B_HIDF { scope = 0; class EventHandlers; class Turrets; };
    class RHSGREF_A29B_HIDF_OCimport_02 : RHSGREF_A29B_HIDF_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class B_UAV_02_dynamicLoadout_F;
    class B_UAV_02_dynamicLoadout_F_OCimport_01 : B_UAV_02_dynamicLoadout_F { scope = 0; class EventHandlers; class Turrets; };
    class B_UAV_02_dynamicLoadout_F_OCimport_02 : B_UAV_02_dynamicLoadout_F_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class HE_MQ4A_Blufor;
    class HE_MQ4A_Blufor_OCimport_01 : HE_MQ4A_Blufor { scope = 0; class EventHandlers; class Turrets; };
    class HE_MQ4A_Blufor_OCimport_02 : HE_MQ4A_Blufor_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };
    
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

    class TRU_RHS_UH1H_navy_gunship;
    class TRU_RHS_UH1H_navy_gunship_OCimport_01 : TRU_RHS_UH1H_navy_gunship { scope = 0; class EventHandlers; class Turrets; };
    class TRU_RHS_UH1H_navy_gunship_OCimport_02 : TRU_RHS_UH1H_navy_gunship_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CopilotTurret;
            class RightGunner;
            class LeftGunner;
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class TRU_RHS_UH1H_navy;
    class TRU_RHS_UH1H_navy_OCimport_01 : TRU_RHS_UH1H_navy { scope = 0; class EventHandlers; class Turrets; };
    class TRU_RHS_UH1H_navy_OCimport_02 : TRU_RHS_UH1H_navy_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CopilotTurret;
            class RightGunner;
            class LeftGunner;
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class FIR_F15EX_ZZ_67FS;
    class FIR_F15EX_ZZ_67FS_OCimport_01 : FIR_F15EX_ZZ_67FS { scope = 0; class EventHandlers; class Turrets; };
    class FIR_F15EX_ZZ_67FS_OCimport_02 : FIR_F15EX_ZZ_67FS_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class FIR_F16C_WP;
    class FIR_F16C_WP_OCimport_01 : FIR_F16C_WP { scope = 0; class EventHandlers; };
    class FIR_F16C_WP_OCimport_02 : FIR_F16C_WP_OCimport_01 { scope = 0; class EventHandlers; };

    class F_35C;
    class F_35C_OCimport_01 : F_35C { scope = 0; class EventHandlers; };
    class F_35C_OCimport_02 : F_35C_OCimport_01 { scope = 0; class EventHandlers; };

    class RHS_A10;
    class RHS_A10_OCimport_01 : RHS_A10 { scope = 0; class EventHandlers; };
    class RHS_A10_OCimport_02 : RHS_A10_OCimport_01 { scope = 0; class EventHandlers; };

    class RHS_AH64D_wd;
    class RHS_AH64D_wd_OCimport_01 : RHS_AH64D_wd { scope = 0; class EventHandlers; class Turrets; };
    class RHS_AH64D_wd_OCimport_02 : RHS_AH64D_wd_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class rhsusf_f22;
    class rhsusf_f22_OCimport_01 : rhsusf_f22 { scope = 0; class EventHandlers; };
    class rhsusf_f22_OCimport_02 : rhsusf_f22_OCimport_01 { scope = 0; class EventHandlers; };

    class RHS_C130J;
    class RHS_C130J_OCimport_01 : RHS_C130J { scope = 0; class EventHandlers; class Turrets; };
    class RHS_C130J_OCimport_02 : RHS_C130J_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CopilotTurret;
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


    // Car & Ground Units

    class rhsusf_M142_usarmy_WD;
    class rhsusf_M142_usarmy_WD_OCimport_01 : rhsusf_M142_usarmy_WD { scope = 0; class EventHandlers; class Turrets; };
    class rhsusf_M142_usarmy_WD_OCimport_02 : rhsusf_M142_usarmy_WD_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
            class CargoTurret_01;
        };
    };

    class RHS_M2A3_wd;
    class RHS_M2A3_wd_OCimport_01 : RHS_M2A3_wd { scope = 0; class EventHandlers; class Turrets; };
    class RHS_M2A3_wd_OCimport_02 : RHS_M2A3_wd_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class RHS_M2A3_BUSKI_wd;
    class RHS_M2A3_BUSKI_wd_OCimport_01 : RHS_M2A3_BUSKI_wd { scope = 0; class EventHandlers; class Turrets; };
    class RHS_M2A3_BUSKI_wd_OCimport_02 : RHS_M2A3_BUSKI_wd_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class RHS_M2A3_BUSKIII_wd;
    class RHS_M2A3_BUSKIII_wd_OCimport_01 : RHS_M2A3_BUSKIII_wd { scope = 0; class EventHandlers; class Turrets; };
    class RHS_M2A3_BUSKIII_wd_OCimport_02 : RHS_M2A3_BUSKIII_wd_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class rhsusf_m1a1fep_wd;
    class rhsusf_m1a1fep_wd_OCimport_01 : rhsusf_m1a1fep_wd { scope = 0; class EventHandlers; class Turrets; };
    class rhsusf_m1a1fep_wd_OCimport_02 : rhsusf_m1a1fep_wd_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class rhsusf_m1a2sep1tuskiwd_usarmy;
    class rhsusf_m1a2sep1tuskiwd_usarmy_OCimport_01 : rhsusf_m1a2sep1tuskiwd_usarmy { scope = 0; class EventHandlers; class Turrets; };
    class rhsusf_m1a2sep1tuskiwd_usarmy_OCimport_02 : rhsusf_m1a2sep1tuskiwd_usarmy_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class rhsusf_m1a2sep1tuskiiwd_usarmy;
    class rhsusf_m1a2sep1tuskiiwd_usarmy_OCimport_01 : rhsusf_m1a2sep1tuskiiwd_usarmy { scope = 0; class EventHandlers; class Turrets; };
    class rhsusf_m1a2sep1tuskiiwd_usarmy_OCimport_02 : rhsusf_m1a2sep1tuskiiwd_usarmy_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class rhsusf_m1a2sep2wd_usarmy;
    class rhsusf_m1a2sep2wd_usarmy_OCimport_01 : rhsusf_m1a2sep2wd_usarmy { scope = 0; class EventHandlers; class Turrets; };
    class rhsusf_m1a2sep2wd_usarmy_OCimport_02 : rhsusf_m1a2sep2wd_usarmy_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class RHS_M6_wd;
    class RHS_M6_wd_OCimport_01 : RHS_M6_wd { scope = 0; class EventHandlers; class Turrets; };
    class RHS_M6_wd_OCimport_02 : RHS_M6_wd_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class rhsusf_M977A4_BKIT_usarmy_wd;
    class rhsusf_M977A4_BKIT_usarmy_wd_OCimport_01 : rhsusf_M977A4_BKIT_usarmy_wd { scope = 0; class EventHandlers; };
    class rhsusf_M977A4_BKIT_usarmy_wd_OCimport_02 : rhsusf_M977A4_BKIT_usarmy_wd_OCimport_01 { scope = 0; class EventHandlers; };

    class rhsusf_M977A4_AMMO_BKIT_usarmy_wd;
    class rhsusf_M977A4_AMMO_BKIT_usarmy_wd_OCimport_01 : rhsusf_M977A4_AMMO_BKIT_usarmy_wd { scope = 0; class EventHandlers; };
    class rhsusf_M977A4_AMMO_BKIT_usarmy_wd_OCimport_02 : rhsusf_M977A4_AMMO_BKIT_usarmy_wd_OCimport_01 { scope = 0; class EventHandlers; };

    class rhsusf_M977A4_REPAIR_BKIT_usarmy_wd;
    class rhsusf_M977A4_REPAIR_BKIT_usarmy_wd_OCimport_01 : rhsusf_M977A4_REPAIR_BKIT_usarmy_wd { scope = 0; class EventHandlers; };
    class rhsusf_M977A4_REPAIR_BKIT_usarmy_wd_OCimport_02 : rhsusf_M977A4_REPAIR_BKIT_usarmy_wd_OCimport_01 { scope = 0; class EventHandlers; };

    class rhsusf_M978A4_BKIT_usarmy_wd;
    class rhsusf_M978A4_BKIT_usarmy_wd_OCimport_01 : rhsusf_M978A4_BKIT_usarmy_wd { scope = 0; class EventHandlers; };
    class rhsusf_M978A4_BKIT_usarmy_wd_OCimport_02 : rhsusf_M978A4_BKIT_usarmy_wd_OCimport_01 { scope = 0; class EventHandlers; };

    class rhsusf_M1078A1P2_B_WD_fmtv_usarmy;
    class rhsusf_M1078A1P2_B_WD_fmtv_usarmy_OCimport_01 : rhsusf_M1078A1P2_B_WD_fmtv_usarmy { scope = 0; class EventHandlers; class Turrets; };
    class rhsusf_M1078A1P2_B_WD_fmtv_usarmy_OCimport_02 : rhsusf_M1078A1P2_B_WD_fmtv_usarmy_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class rhsusf_M1078A1P2_B_WD_flatbed_fmtv_usarmy;
    class rhsusf_M1078A1P2_B_WD_flatbed_fmtv_usarmy_OCimport_01 : rhsusf_M1078A1P2_B_WD_flatbed_fmtv_usarmy { scope = 0; class EventHandlers; };
    class rhsusf_M1078A1P2_B_WD_flatbed_fmtv_usarmy_OCimport_02 : rhsusf_M1078A1P2_B_WD_flatbed_fmtv_usarmy_OCimport_01 { scope = 0; class EventHandlers; };

    class rhsusf_m998_w_s_2dr_halftop;
    class rhsusf_m998_w_s_2dr_halftop_OCimport_01 : rhsusf_m998_w_s_2dr_halftop { scope = 0; class EventHandlers; class Turrets; };
    class rhsusf_m998_w_s_2dr_halftop_OCimport_02 : rhsusf_m998_w_s_2dr_halftop_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class rhsusf_m998_w_s_2dr;
    class rhsusf_m998_w_s_2dr_OCimport_01 : rhsusf_m998_w_s_2dr { scope = 0; class EventHandlers; class Turrets; };
    class rhsusf_m998_w_s_2dr_OCimport_02 : rhsusf_m998_w_s_2dr_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
        };
    };

    class rhsusf_m998_w_s_2dr_fulltop;
    class rhsusf_m998_w_s_2dr_fulltop_OCimport_01 : rhsusf_m998_w_s_2dr_fulltop { scope = 0; class EventHandlers; class Turrets; };
    class rhsusf_m998_w_s_2dr_fulltop_OCimport_02 : rhsusf_m998_w_s_2dr_fulltop_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class rhsusf_stryker_m1126_m2_wd;
    class rhsusf_stryker_m1126_m2_wd_OCimport_01 : rhsusf_stryker_m1126_m2_wd { scope = 0; class EventHandlers; class Turrets; };
    class rhsusf_stryker_m1126_m2_wd_OCimport_02 : rhsusf_stryker_m1126_m2_wd_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
        };
    };

    class rhsusf_stryker_m1126_mk19_wd;
    class rhsusf_stryker_m1126_mk19_wd_OCimport_01 : rhsusf_stryker_m1126_mk19_wd { scope = 0; class EventHandlers; class Turrets; };
    class rhsusf_stryker_m1126_mk19_wd_OCimport_02 : rhsusf_stryker_m1126_mk19_wd_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
        };
    };

    class rhsusf_stryker_m1134_wd;
    class rhsusf_stryker_m1134_wd_OCimport_01 : rhsusf_stryker_m1134_wd { scope = 0; class EventHandlers; class Turrets; };
    class rhsusf_stryker_m1134_wd_OCimport_02 : rhsusf_stryker_m1134_wd_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
            class CargoTurret_01;
            class Turret_Weapon;
            class CargoTurret_02;
        };
    };

    class rhsusf_m113_usarmy_supply;
    class rhsusf_m113_usarmy_supply_OCimport_01 : rhsusf_m113_usarmy_supply { scope = 0; class EventHandlers; class Turrets; };
    class rhsusf_m113_usarmy_supply_OCimport_02 : rhsusf_m113_usarmy_supply_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
            class MainTurret_In;
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class rhsusf_m113_usarmy;
    class rhsusf_m113_usarmy_OCimport_01 : rhsusf_m113_usarmy { scope = 0; class EventHandlers; class Turrets; };
    class rhsusf_m113_usarmy_OCimport_02 : rhsusf_m113_usarmy_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
            class MainTurret_In;
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class rhsusf_m113_usarmy_MK19;
    class rhsusf_m113_usarmy_MK19_OCimport_01 : rhsusf_m113_usarmy_MK19 { scope = 0; class EventHandlers; class Turrets; };
    class rhsusf_m113_usarmy_MK19_OCimport_02 : rhsusf_m113_usarmy_MK19_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
            class MainTurret_In;
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class rhsusf_m113_usarmy_unarmed;
    class rhsusf_m113_usarmy_unarmed_OCimport_01 : rhsusf_m113_usarmy_unarmed { scope = 0; class EventHandlers; class Turrets; };
    class rhsusf_m113_usarmy_unarmed_OCimport_02 : rhsusf_m113_usarmy_unarmed_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret_In;
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class rhsusf_m1151_usarmy_wd;
    class rhsusf_m1151_usarmy_wd_OCimport_01 : rhsusf_m1151_usarmy_wd { scope = 0; class EventHandlers; class Turrets; };
    class rhsusf_m1151_usarmy_wd_OCimport_02 : rhsusf_m1151_usarmy_wd_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CoDriverTurret;
        };
    };

    class rhsusf_m1151_m2crows_usarmy_wd;
    class rhsusf_m1151_m2crows_usarmy_wd_OCimport_01 : rhsusf_m1151_m2crows_usarmy_wd { scope = 0; class EventHandlers; class Turrets; };
    class rhsusf_m1151_m2crows_usarmy_wd_OCimport_02 : rhsusf_m1151_m2crows_usarmy_wd_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CROWS_Turret;
            class CoDriverTurret;
        };
    };

    class rhsusf_m1151_mk19crows_usarmy_wd;
    class rhsusf_m1151_mk19crows_usarmy_wd_OCimport_01 : rhsusf_m1151_mk19crows_usarmy_wd { scope = 0; class EventHandlers; class Turrets; };
    class rhsusf_m1151_mk19crows_usarmy_wd_OCimport_02 : rhsusf_m1151_mk19crows_usarmy_wd_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CROWS_Turret;
            class CoDriverTurret;
        };
    };

    class rhsusf_m1151_m2_v2_usarmy_wd;
    class rhsusf_m1151_m2_v2_usarmy_wd_OCimport_01 : rhsusf_m1151_m2_v2_usarmy_wd { scope = 0; class EventHandlers; class Turrets; };
    class rhsusf_m1151_m2_v2_usarmy_wd_OCimport_02 : rhsusf_m1151_m2_v2_usarmy_wd_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class OGPK_Turret;
            class CoDriverTurret;
        };
    };

    class rhsusf_m1151_m240_v2_usarmy_wd;
    class rhsusf_m1151_m240_v2_usarmy_wd_OCimport_01 : rhsusf_m1151_m240_v2_usarmy_wd { scope = 0; class EventHandlers; class Turrets; };
    class rhsusf_m1151_m240_v2_usarmy_wd_OCimport_02 : rhsusf_m1151_m240_v2_usarmy_wd_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class OGPK_Turret;
            class CoDriverTurret;
        };
    };

    class rhsusf_m1151_mk19_v2_usarmy_wd;
    class rhsusf_m1151_mk19_v2_usarmy_wd_OCimport_01 : rhsusf_m1151_mk19_v2_usarmy_wd { scope = 0; class EventHandlers; class Turrets; };
    class rhsusf_m1151_mk19_v2_usarmy_wd_OCimport_02 : rhsusf_m1151_mk19_v2_usarmy_wd_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class OGPK_Turret;
            class CoDriverTurret;
        };
    };

    class rhsusf_m1152_rsv_usarmy_wd;
    class rhsusf_m1152_rsv_usarmy_wd_OCimport_01 : rhsusf_m1152_rsv_usarmy_wd { scope = 0; class EventHandlers; class Turrets; };
    class rhsusf_m1152_rsv_usarmy_wd_OCimport_02 : rhsusf_m1152_rsv_usarmy_wd_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CoDriverTurret;
        };
    };

    class B_Truck_01_box_F;
    class B_Truck_01_box_F_OCimport_01 : B_Truck_01_box_F { scope = 0; class EventHandlers; };
    class B_Truck_01_box_F_OCimport_02 : B_Truck_01_box_F_OCimport_01 { scope = 0; class EventHandlers; };

    class rhsusf_m1165a1_gmv_m134d_m240_socom_d;
    class rhsusf_m1165a1_gmv_m134d_m240_socom_d_OCimport_01 : rhsusf_m1165a1_gmv_m134d_m240_socom_d { scope = 0; class EventHandlers; class Turrets; };
    class rhsusf_m1165a1_gmv_m134d_m240_socom_d_OCimport_02 : rhsusf_m1165a1_gmv_m134d_m240_socom_d_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class SAG_Turret;
            class CoDriverTurret;
            class SwingArm_L_Turret;
            class SwingArm_R_Turret;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
        };
    };

    class rhsusf_m1165a1_gmv_m2_m240_socom_d;
    class rhsusf_m1165a1_gmv_m2_m240_socom_d_OCimport_01 : rhsusf_m1165a1_gmv_m2_m240_socom_d { scope = 0; class EventHandlers; class Turrets; };
    class rhsusf_m1165a1_gmv_m2_m240_socom_d_OCimport_02 : rhsusf_m1165a1_gmv_m2_m240_socom_d_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class SAG_Turret;
            class CoDriverTurret;
            class SwingArm_L_Turret;
            class SwingArm_R_Turret;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
        };
    };

    class rhsusf_m1165a1_gmv_mk19_m240_socom_d;
    class rhsusf_m1165a1_gmv_mk19_m240_socom_d_OCimport_01 : rhsusf_m1165a1_gmv_mk19_m240_socom_d { scope = 0; class EventHandlers; class Turrets; };
    class rhsusf_m1165a1_gmv_mk19_m240_socom_d_OCimport_02 : rhsusf_m1165a1_gmv_mk19_m240_socom_d_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class SAG_Turret;
            class CoDriverTurret;
            class SwingArm_L_Turret;
            class SwingArm_R_Turret;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
        };
    };

    class rhsusf_M1230_M2_usarmy_wd;
    class rhsusf_M1230_M2_usarmy_wd_OCimport_01 : rhsusf_M1230_M2_usarmy_wd { scope = 0; class EventHandlers; class Turrets; };
    class rhsusf_M1230_M2_usarmy_wd_OCimport_02 : rhsusf_M1230_M2_usarmy_wd_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class M2_Turret;
        };
    };

    class rhsusf_M1230_MK19_usarmy_wd;
    class rhsusf_M1230_MK19_usarmy_wd_OCimport_01 : rhsusf_M1230_MK19_usarmy_wd { scope = 0; class EventHandlers; class Turrets; };
    class rhsusf_M1230_MK19_usarmy_wd_OCimport_02 : rhsusf_M1230_MK19_usarmy_wd_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class M2_Turret;
        };
    };

    class rhsusf_m1240a1_m2_uik_usarmy_wd;
    class rhsusf_m1240a1_m2_uik_usarmy_wd_OCimport_01 : rhsusf_m1240a1_m2_uik_usarmy_wd { scope = 0; class EventHandlers; class Turrets; };
    class rhsusf_m1240a1_m2_uik_usarmy_wd_OCimport_02 : rhsusf_m1240a1_m2_uik_usarmy_wd_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class OGPK_Turret;
            class CoDriverTurret;
        };
    };

    class rhsusf_m1240a1_mk19_uik_usarmy_wd;
    class rhsusf_m1240a1_mk19_uik_usarmy_wd_OCimport_01 : rhsusf_m1240a1_mk19_uik_usarmy_wd { scope = 0; class EventHandlers; class Turrets; };
    class rhsusf_m1240a1_mk19_uik_usarmy_wd_OCimport_02 : rhsusf_m1240a1_mk19_uik_usarmy_wd_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class OGPK_Turret;
            class CoDriverTurret;
        };
    };