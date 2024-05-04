_side = _this;
_faction = "East";

_c = []; //--- Classname
_p = []; //--- Picture. 				'' = auto generated.
_n = []; //--- Name. 					'' = auto generated.
_o = []; //--- Price.
_t = []; //--- Build time.
_u = []; //--- Upgrade level needed.    0 1 2 3...
_f = []; //--- Built from Factory.
_s = []; //--- Script

//--- Infantry

_c = _c + ['rhs_msv_emr_driver'];
_p = _p + [''];
_n = _n + ['VDV Driver'];
_o = _o + [100];
_t = _t + [5];
_u = _u + [0];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['rhs_msv_emr_driver_armored'];
_p = _p + [''];
_n = _n + ['VDV Driver (Armored)'];
_o = _o + [120];
_t = _t + [5];
_u = _u + [0];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['rhs_vdv_rifleman'];
_p = _p + [''];
_n = _n + ['VDV Rifleman'];
_o = _o + [180];
_t = _t + [5];
_u = _u + [0];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['rhs_vdv_grenadier'];
_p = _p + [''];
_n = _n + ['VDV Rifleman (GP-25)'];
_o = _o + [200];
_t = _t + [5];
_u = _u + [0];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['rhs_vdv_LAT'];
_p = _p + [''];
_n = _n + ['VDV Rifleman (RPG-26)'];
_o = _o + [220];
_t = _t + [5];
_u = _u + [0];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['rhs_vdv_aa'];
_p = _p + [''];
_n = _n + ['VDV AA Specialist'];
_o = _o + [500];
_t = _t + [5];
_u = _u + [2];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['rhs_vdv_grenadier_rpg'];
_p = _p + [''];
_n = _n + ['VDV Grenadier (RPG-7V2)'];
_o = _o + [250];
_t = _t + [5];
_u = _u + [0];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['rhs_vdv_strelok_rpg_assist'];
_p = _p + [''];
_n = _n + ['VDV Grenadier Assistant'];
_o = _o + [180];
_t = _t + [5];
_u = _u + [0];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['rhs_vdv_RShG2'];
_p = _p + [''];
_n = _n + ['VDV Rifleman (RShG-2)'];
_o = _o + [200];
_t = _t + [5];
_u = _u + [0];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['rhs_vdv_combatcrew'];
_p = _p + [''];
_n = _n + ['VDV Crew (Combat)'];
_o = _o + [150];
_t = _t + [5];
_u = _u + [0];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['rhs_vdv_efreitor'];
_p = _p + [''];
_n = _n + ['VDV Efreitor'];
_o = _o + [240];
_t = _t + [5];
_u = _u + [0];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['rhs_vdv_arifleman'];
_p = _p + [''];
_n = _n + ['VDV Automatic Rifleman (PKP)'];
_o = _o + [250];
_t = _t + [5];
_u = _u + [0];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['rhs_vdv_machinegunner'];
_p = _p + [''];
_n = _n + ['VDV Machine Gunner'];
_o = _o + [300];
_t = _t + [5];
_u = _u + [2];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['rhs_vdv_medic'];
_p = _p + [''];
_n = _n + ['VDV Medic'];
_o = _o + [200];
_t = _t + [5];
_u = _u + [0];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['rhs_msv_emr_officer'];
_p = _p + [''];
_n = _n + ['VDV Officer'];
_o = _o + [250];
_t = _t + [5];
_u = _u + [1];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['rhs_msv_emr_officer_armored'];
_p = _p + [''];
_n = _n + ['VDV Officer (Armored)'];
_o = _o + [300];
_t = _t + [5];
_u = _u + [2];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['rhs_vdv_crew'];
_p = _p + [''];
_n = _n + ['VDV Crew'];
_o = _o + [CTI_BASE_WORKERS_PRICE];
_t = _t + [5];
_u = _u + [1];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['rhs_vdv_engineer'];
_p = _p + [''];
_n = _n + ['VDV Engineer'];
_o = _o + [250];
_t = _t + [5];
_u = _u + [1];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['rhs_vdv_marksman'];
_p = _p + [''];
_n = _n + ['VDV Marksman'];
_o = _o + [300];
_t = _t + [5];
_u = _u + [2];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['rhs_vdv_sergeant'];
_p = _p + [''];
_n = _n + ['VDV Sergeant'];
_o = _o + [225];
_t = _t + [5];
_u = _u + [1];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['rhs_vdv_junior_sergeant'];
_p = _p + [''];
_n = _n + ['VDV Junior Sergeant'];
_o = _o + [200];  
_t = _t + [5];
_u = _u + [0];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['rhs_vdv_at'];
_p = _p + [''];
_n = _n + ['VDV AT Specialist'];
_o = _o + [250];
_t = _t + [5];
_u = _u + [1];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['rhs_pilot'];
_p = _p + [''];
_n = _n + ['VDV Pilot'];
_o = _o + [130];  
_t = _t + [5];
_u = _u + [1];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['rhs_pilot_combat_heli'];
_p = _p + [''];
_n = _n + ['VDV Helicopter Pilot'];
_o = _o + [120];
_t = _t + [5];
_u = _u + [1];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['rhs_vdv_recon_efreitor'];
_p = _p + [''];
_n = _n + ['VDV Elite Scout Efreitor'];
_o = _o + [280];
_t = _t + [5];
_u = _u + [3];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['rhs_vdv_recon_rifleman_scout_akm'];
_p = _p + [''];
_n = _n + ['VDV Elite Scout (AKM)'];
_o = _o + [280];
_t = _t + [5];
_u = _u + [3];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['rhs_vdv_recon_rifleman_scout'];
_p = _p + [''];
_n = _n + ['VDV Elite Scout (AK-74)'];
_o = _o + [280];
_t = _t + [5];
_u = _u + [3];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['rhs_vdv_recon_rifleman_asval'];
_p = _p + [''];
_n = _n + ['VDV Elite Scout (AS Val)'];
_o = _o + [300];
_t = _t + [5];
_u = _u + [3];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['rhs_vdv_recon_grenadier_scout'];
_p = _p + [''];
_n = _n + ['VDV Elite Scout (GP-25)'];
_o = _o + [300];
_t = _t + [5];
_u = _u + [3];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['rhs_vdv_recon_arifleman_scout'];
_p = _p + [''];
_n = _n + ['VDV Elite Scout (PKP)'];
_o = _o + [350];
_t = _t + [5];
_u = _u + [3];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

// ------------------------------------------------

_c = _c + ['RHS_UAZ_MSV_01'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [100];
_t = _t + [10];
_u = _u + [0];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + [""];

_c = _c + ['RHS_Ural_Open_MSV_01'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [200];
_t = _t + [10];
_u = _u + [0];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + [""];

_c = _c + ['rhs_uaz_open_MSV_01'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [90];
_t = _t + [10];
_u = _u + [0];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + [""];

_c = _c + ['rhs_tigr_msv'];
_p = _p + [''];
_n = _n + ['GAZ-233011 (Transport)'];
_o = _o + [200];
_t = _t + [10];
_u = _u + [0];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + [""];

_c = _c + ['rhs_tigr_m_msv'];
_p = _p + [''];
_n = _n + ['GAZ-233114 (Unarmed)'];
_o = _o + [250];
_t = _t + [10];
_u = _u + [0];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + [""];

_c = _c + ['rhs_tigr_sts_msv'];
_p = _p + [''];
_n = _n + ['GAZ-233014 (Armed)'];
_o = _o + [400];
_t = _t + [15];
_u = _u + [1];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + [""];

_c = _c + ['rhsgref_BRDM2_vdv'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [600];
_t = _t + [15];
_u = _u + [0];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + [""];

_c = _c + ['rhs_bmp1_msv'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [800];
_t = _t + [15];
_u = _u + [2];
_f = _f + [CTI_FACTORY_HEAVY];
_s = _s + ["service-medic"];

_c = _c + ['rhs_bmp1d_msv'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [850];
_t = _t + [15];
_u = _u + [2];
_f = _f + [CTI_FACTORY_HEAVY];
_s = _s + ["service-medic"];

_c = _c + ['rhs_bmp1k_msv'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [850];
_t = _t + [15];
_u = _u + [2];
_f = _f + [CTI_FACTORY_HEAVY];
_s = _s + ["service-medic"];

_c = _c + ['rhs_bmp1p_msv'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [900];
_t = _t + [15];
_u = _u + [2];
_f = _f + [CTI_FACTORY_HEAVY];
_s = _s + ["service-medic"];

_c = _c + ['rhs_bmp2e_msv'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [900];
_t = _t + [15];
_u = _u + [2];
_f = _f + [CTI_FACTORY_HEAVY];
_s = _s + ["service-medic"];

_c = _c + ['rhs_bmp2_msv'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [950];
_t = _t + [15];
_u = _u + [3];
_f = _f + [CTI_FACTORY_HEAVY];
_s = _s + ["service-medic"];

_c = _c + ['rhs_bmp3mera_msv'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [1500];
_t = _t + [20];
_u = _u + [3];
_f = _f + [CTI_FACTORY_HEAVY];
_s = _s + ["service-medic"];

_c = _c + ['rhs_bmp3_msv'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [1050];
_t = _t + [20];
_u = _u + [2];
_f = _f + [CTI_FACTORY_HEAVY];
_s = _s + ["service-medic"];

_c = _c + ['rhs_bmp3_late_msv'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [1250];
_t = _t + [30];
_u = _u + [3];
_f = _f + [CTI_FACTORY_HEAVY];
_s = _s + ["service-medic"];

_c = _c + ['rhs_bmp2d_msv'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [1200];
_t = _t + [20];
_u = _u + [3];
_f = _f + [CTI_FACTORY_HEAVY];
_s = _s + ["service-medic"];

_c = _c + ['rhs_bmp2k_msv'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [1350];
_t = _t + [30];
_u = _u + [3];
_f = _f + [CTI_FACTORY_HEAVY];
_s = _s + ["service-medic"];

_c = _c + ['rhs_bmp3m_msv'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [1350];
_t = _t + [20];
_u = _u + [3];
_f = _f + [CTI_FACTORY_HEAVY];
_s = _s + ["service-medic"];

_c = _c + ['rhs_btr60_msv'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [600];
_t = _t + [20];
_u = _u + [1];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + ["service-medic"];

_c = _c + ['rhs_btr70_msv'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [700];
_t = _t + [20];
_u = _u + [1];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + ["service-medic"];

_c = _c + ['rhs_btr80a_msv'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [900];
_t = _t + [20];
_u = _u + [1];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + ["service-medic"];

_c = _c + ['RHS_Ural_Zu23_MSV_0'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [500];
_t = _t + [20];
_u = _u + [2];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + [""];

_c = _c + ['rhs_gaz66o_msv'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [300];
_t = _t + [20];
_u = _u + [0];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + [""];

_c = _c + ['rhs_gaz66_msv'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [350];
_t = _t + [20];
_u = _u + [0];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + [""];

_c = _c + ['RHS_Ural_MSV_01'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [390];
_t = _t + [20];
_u = _u + [0];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + [""];

_c = _c + ['RHS_Ural_Open_MSV_01'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [400];
_t = _t + [20];
_u = _u + [0];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + [""];

_c = _c + ['rhs_gaz66_zu23_msv'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [500];
_t = _t + [20];
_u = _u + [2];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + [""];

_c = _c + ['rhs_kamaz5350_open_msv'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [400];
_t = _t + [20];
_u = _u + [0];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + [""];

_c = _c + ['rhs_kamaz5350_msv'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [410];
_t = _t + [20];
_u = _u + [0];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + [""];

// ------------------------------------------------

_c = _c + ['RHS_BM21_VDV_01'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [3500];
_t = _t + [30];
_u = _u + [0];
_f = _f + [CTI_FACTORY_HEAVY];
_s = _s + [""];

_c = _c + ['rhs_sprut_vdv'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [3500];
_t = _t + [30];
_u = _u + [0];
_f = _f + [CTI_FACTORY_HEAVY];
_s = _s + [""];

_c = _c + ['rhs_t72bc_tv'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [4500];
_t = _t + [30];
_u = _u + [0];
_f = _f + [CTI_FACTORY_HEAVY];
_s = _s + [""];

_c = _c + ['rhs_t72bd_tv'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [5000];
_t = _t + [30];
_u = _u + [1];
_f = _f + [CTI_FACTORY_HEAVY];
_s = _s + [""];

_c = _c + ['rhs_t72be_tv'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [5500];
_t = _t + [30];
_u = _u + [2];
_f = _f + [CTI_FACTORY_HEAVY];
_s = _s + [""];

_c = _c + ['rhs_t80b'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [5000];
_t = _t + [30];
_u = _u + [0];
_f = _f + [CTI_FACTORY_HEAVY];
_s = _s + [""];

_c = _c + ['rhs_t80bv'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [5500];
_t = _t + [30];
_u = _u + [1];
_f = _f + [CTI_FACTORY_HEAVY];
_s = _s + [""];

_c = _c + ['rhs_t80u'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [6500];
_t = _t + [30];
_u = _u + [1];
_f = _f + [CTI_FACTORY_HEAVY];
_s = _s + [""];

_c = _c + ['rhs_t80um'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [7000];
_t = _t + [30];
_u = _u + [2];
_f = _f + [CTI_FACTORY_HEAVY];
_s = _s + [""];

_c = _c + ['rhs_t90a_tv'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [7500];
_t = _t + [30];
_u = _u + [1];
_f = _f + [CTI_FACTORY_HEAVY];
_s = _s + [""];

_c = _c + ['rhs_t90sm_tv'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [8000];
_t = _t + [30];
_u = _u + [2];
_f = _f + [CTI_FACTORY_HEAVY];
_s = _s + [""];

_c = _c + ['rhs_2s1_tv'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [4500];
_t = _t + [30];
_u = _u + [0];
_f = _f + [CTI_FACTORY_HEAVY];
_s = _s + [""];

_c = _c + ['rhs_2s3_tv'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [6500];
_t = _t + [30];
_u = _u + [1];
_f = _f + [CTI_FACTORY_HEAVY];
_s = _s + [""];

// ------------------------------------------------

_c = _c + ['rhs_gaz66_repair_msv'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [425];
_t = _t + [20];
_u = _u + [0];
_f = _f + [CTI_FACTORY_REPAIR];
_s = _s + ["service-repairtruck"];

_c = _c + ['rhs_gaz66_ammo_msv'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [525];
_t = _t + [20];
_u = _u + [0];
_f = _f + [CTI_FACTORY_REPAIR];
_s = _s + ["service-repairtruck"];

_c = _c + ['CTI_Salvager_East'];
_p = _p + [''];
_n = _n + ['Salvage Truck'];
_o = _o + [CTI_VEHICLES_SALVAGER_PRICE];
_t = _t + [25];
_u = _u + [0];
_f = _f + [CTI_FACTORY_REPAIR];
_s = _s + [["rhs_gaz66_ammo_msv","salvager"]];

_c = _c + ['CTI_Salvager_Independent_East'];
_p = _p + [''];
_n = _n + ['Salvage Truck'];
_o = _o + [CTI_VEHICLES_SALVAGER_PRICE];
_t = _t + [25];
_u = _u + [0];
_f = _f + [CTI_FACTORY_REPAIR];
_s = _s + [["rhs_gaz66_ammo_msv","salvager-independent"]];

_c = _c + ['RHS_Ural_Fuel_MSV_01'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [400];
_t = _t + [25];
_u = _u + [0];
_f = _f + [CTI_FACTORY_REPAIR];
_s = _s + ["service-fueltruck"];

_c = _c + ['rhs_gaz66_ammo_msv'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [450];
_t = _t + [25];
_u = _u + [0];
_f = _f + [CTI_FACTORY_AMMO];
_s = _s + ["service-ammotruck"];

_c = _c + ['RHS_Ural_Ammo_VDV_01'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [550];
_t = _t + [25];
_u = _u + [0];
_f = _f + [CTI_FACTORY_AMMO];
_s = _s + ["service-ammotruck"];

_c = _c + ['rhs_kamaz5350_ammo_vdv'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [650];
_t = _t + [25];
_u = _u + [0];
_f = _f + [CTI_FACTORY_AMMO];
_s = _s + ["service-ammotruck"];

// ------------------------------------------------

_c = _c + ['rhs_ka60_c'];
_p = _p + [''];
_n = _n + ['Ka-60'];
_o = _o + [6500];
_t = _t + [35];
_u = _u + [0];
_f = _f + [CTI_FACTORY_AIR];
_s = _s + ["service-medic"];

_c = _c + ['RHS_Mi8MTV3_vdv'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [8000];
_t = _t + [35];
_u = _u + [1];
_f = _f + [CTI_FACTORY_AIR];
_s = _s + [""];

_c = _c + ['RHS_Mi8MTV3_FAB_vdv'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [8500];
_t = _t + [35];
_u = _u + [2];
_f = _f + [CTI_FACTORY_AIR];
_s = _s + [""];

_c = _c + ['RHS_Mi8MTV3_UPK23_vdv'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [8500];
_t = _t + [35];
_u = _u + [2];
_f = _f + [CTI_FACTORY_AIR];
_s = _s + [""];

_c = _c + ['RHS_Mi8AMT_vdv'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [6000];
_t = _t + [35];
_u = _u + [0];
_f = _f + [CTI_FACTORY_AIR];
_s = _s + ["service-medic"];

_c = _c + ['RHS_Mi8mt_vdv'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [6500];
_t = _t + [40];
_u = _u + [0];
_f = _f + [CTI_FACTORY_AIR];
_s = _s + ["service-medic"];

_c = _c + ['RHS_Mi24P_AT_vdv'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [10000];
_t = _t + [40];
_u = _u + [1];
_f = _f + [CTI_FACTORY_AIR];
_s = _s + ["service-medic"];

_c = _c + ['RHS_Mi24P_CAS_vdv'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [12000];
_t = _t + [40];
_u = _u + [2];
_f = _f + [CTI_FACTORY_AIR];
_s = _s + ["service-medic"];

_c = _c + ['RHS_Mi24P_vdv'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [13000];
_t = _t + [40];
_u = _u + [2];
_f = _f + [CTI_FACTORY_AIR];
_s = _s + ["service-ammotruck"];

_c = _c + ['RHS_Mi24V_AT_vdv'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [13500];
_t = _t + [40];
_u = _u + [3];
_f = _f + [CTI_FACTORY_AIR];
_s = _s + ["service-medic"];

_c = _c + ['RHS_Mi24V_vdv'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [14000];
_t = _t + [40];
_u = _u + [3];
_f = _f + [CTI_FACTORY_AIR];
_s = _s + ["service-medic"];

_c = _c + ['RHS_Mi24V_UPK23_vdv'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [14500];
_t = _t + [40];
_u = _u + [3];
_f = _f + [CTI_FACTORY_AIR];
_s = _s + ["service-medic"];

_c = _c + ['RHS_Mi24V_FAB_vdv'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [14500];
_t = _t + [40];
_u = _u + [3];
_f = _f + [CTI_FACTORY_AIR];
_s = _s + ["service-medic"];

_c = _c + ['rhs_mi28n_vvs'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [14000];
_t = _t + [40];
_u = _u + [1];
_f = _f + [CTI_FACTORY_AIR];
_s = _s + [""];

_c = _c + ['rhs_mi28n_s13_vvs'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [11000];
_t = _t + [50];
_u = _u + [0];
_f = _f + [CTI_FACTORY_AIR];
_s = _s + [""];

_c = _c + ['RHS_Ka52_vvs'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [15000];
_t = _t + [50];
_u = _u + [2];
_f = _f + [CTI_FACTORY_AIR];
_s = _s + [""];

_c = _c + ['RHS_Ka52_UPK23_vvs'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [15500];
_t = _t + [60];
_u = _u + [3];
_f = _f + [CTI_FACTORY_AIR];
_s = _s + [""];

_c = _c + ['RHS_mig29sm_vvsc'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [18000];
_t = _t + [60];
_u = _u + [2];
_f = _f + [CTI_FACTORY_AIR];
_s = _s + [""];

_c = _c + ['RHS_TU95MS_vvs_old'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [15000];
_t = _t + [60];
_u = _u + [3];
_f = _f + [CTI_FACTORY_AIR];
_s = _s + [""];

_c = _c + ['RHS_Su25SM_vvs'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [16000];
_t = _t + [60];
_u = _u + [3];
_f = _f + [CTI_FACTORY_AIR];
_s = _s + [""];

_c = _c + ['RHS_T50_vvs_generic'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [25000];
_t = _t + [60];
_u = _u + [3];
_f = _f + [CTI_FACTORY_AIR];
_s = _s + [""];

_c = _c + ['RHS_Su25SM_CAS_vvs'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [17000];
_t = _t + [60];
_u = _u + [3];
_f = _f + [CTI_FACTORY_AIR];
_s = _s + [""];

_c = _c + ['RHS_Su25SM_KH29_vvs'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [18000];
_t = _t + [60];
_u = _u + [3];
_f = _f + [CTI_FACTORY_AIR];
_s = _s + [""];

// ------------------------------------------------

_c = _c + ['O_Boat_Transport_01_F'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [850];
_t = _t + [15];
_u = _u + [0];
_f = _f + [CTI_FACTORY_NAVAL];
_s = _s + [""];

_c = _c + ['O_Boat_Armed_01_hmg_F'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [1250];
_t = _t + [25];
_u = _u + [0];
_f = _f + [CTI_FACTORY_NAVAL];
_s = _s + [""];

[_side, _faction, _c, _p, _n, _o, _t, _u, _f, _s] call compile preprocessFileLineNumbers "Common\Config\Units\Set_Units.sqf";
