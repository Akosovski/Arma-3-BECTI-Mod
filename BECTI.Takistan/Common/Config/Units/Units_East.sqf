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

// ---------- VDV Infantry ------------

_c = _c + ['ru_vdv_des_driver'];
_p = _p + ['\rhsafrf\addons\rhs_main\data\icons\vdv.paa'];
_n = _n + ['VDV Driver'];
_o = _o + [140];
_t = _t + [3];
_u = _u + [0];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['ru_vdv_des_rifleman_ak74m'];
_p = _p + ['\rhsafrf\addons\rhs_main\data\icons\vdv.paa'];
_n = _n + ['VDV Rifleman (AK-74M)'];
_o = _o + [170];
_t = _t + [3];
_u = _u + [0];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['ru_vdv_des_rifleman_ak12'];
_p = _p + ['\rhsafrf\addons\rhs_main\data\icons\vdv.paa'];
_n = _n + ['VDV Rifleman (AK-12)'];
_o = _o + [160];
_t = _t + [3];
_u = _u + [0];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['ru_vdv_des_rifleman_ak103'];
_p = _p + ['\rhsafrf\addons\rhs_main\data\icons\vdv.paa'];
_n = _n + ['VDV Rifleman (AK-103)'];
_o = _o + [180];
_t = _t + [3];
_u = _u + [1];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['ru_vdv_des_grenadier_rpg'];
_p = _p + ['\rhsafrf\addons\rhs_main\data\icons\vdv.paa'];
_n = _n + ['VDV Grenadier (RPG-7V2)'];
_o = _o + [210];
_t = _t + [3];
_u = _u + [0];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['ru_vdv_des_grenadier_gp34'];
_p = _p + ['\rhsafrf\addons\rhs_main\data\icons\vdv.paa'];
_n = _n + ['VDV Grenadier (GP-34)'];
_o = _o + [220];
_t = _t + [3];
_u = _u + [1];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['ru_vdv_des_aa_specialist'];
_p = _p + ['\rhsafrf\addons\rhs_main\data\icons\vdv.paa'];
_n = _n + ['VDV AA Specialist'];
_o = _o + [450];
_t = _t + [3];
_u = _u + [2];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['ru_vdv_des_crewman'];
_p = _p + ['\rhsafrf\addons\rhs_main\data\icons\vdv.paa'];
_n = _n + ['VDV Crewman'];
_o = _o + [140];
_t = _t + [3];
_u = _u + [0];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['ru_vdv_des_tank_crewman'];
_p = _p + ['\rhsafrf\addons\rhs_main\data\icons\vdv.paa'];
_n = _n + ['VDV Tank Crewman'];
_o = _o + [160];
_t = _t + [3];
_u = _u + [0];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['ru_vdv_des_efreitor_ak74m'];
_p = _p + ['\rhsafrf\addons\rhs_main\data\icons\vdv.paa'];
_n = _n + ['VDV Efreitor (AK-74M)'];
_o = _o + [240];
_t = _t + [3];
_u = _u + [0];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['ru_vdv_des_efreitor_ak12'];
_p = _p + ['\rhsafrf\addons\rhs_main\data\icons\vdv.paa'];
_n = _n + ['VDV Efreitor (AK-12)'];
_o = _o + [260];
_t = _t + [3];
_u = _u + [0];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['ru_vdv_des_machinegunner'];
_p = _p + ['\rhsafrf\addons\rhs_main\data\icons\vdv.paa'];
_n = _n + ['VDV Machine Gunner'];
_o = _o + [300];
_t = _t + [3];
_u = _u + [1];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['ru_vdv_des_autorifleman'];
_p = _p + ['\rhsafrf\addons\rhs_main\data\icons\vdv.paa'];
_n = _n + ['VDV Auto Rifleman'];
_o = _o + [270];
_t = _t + [3];
_u = _u + [1];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['ru_vdv_des_medic'];
_p = _p + ['\rhsafrf\addons\rhs_main\data\icons\vdv.paa'];
_n = _n + ['VDV Medic'];
_o = _o + [200];
_t = _t + [3];
_u = _u + [0];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['ru_vdv_des_officer'];
_p = _p + ['\rhsafrf\addons\rhs_main\data\icons\vdv.paa'];
_n = _n + ['VDV Officer'];
_o = _o + [250];
_t = _t + [3];
_u = _u + [1];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['ru_vdv_des_worker'];
_p = _p + ['\rhsafrf\addons\rhs_main\data\icons\vdv.paa'];
_n = _n + ['VDV Worker'];
_o = _o + [CTI_BASE_WORKERS_PRICE];
_t = _t + [3];
_u = _u + [0];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['ru_vdv_des_engineer'];
_p = _p + ['\rhsafrf\addons\rhs_main\data\icons\vdv.paa'];
_n = _n + ['VDV Engineer'];
_o = _o + [250];
_t = _t + [3];
_u = _u + [1];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['ru_vdv_des_marksman'];
_p = _p + ['\rhsafrf\addons\rhs_main\data\icons\vdv.paa'];
_n = _n + ['VDV Marksman'];
_o = _o + [300];
_t = _t + [3];
_u = _u + [2];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['ru_vdv_des_sergeant'];
_p = _p + ['\rhsafrf\addons\rhs_main\data\icons\vdv.paa'];
_n = _n + ['VDV Sergeant'];
_o = _o + [225];
_t = _t + [3];
_u = _u + [1];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['ru_vdv_des_at_specialist'];
_p = _p + ['\rhsafrf\addons\rhs_main\data\icons\vdv.paa'];
_n = _n + ['VDV AT Specialist'];
_o = _o + [280];
_t = _t + [3];
_u = _u + [1];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['ru_vdv_des_mortarman_gun'];
_p = _p + ['\rhsafrf\addons\rhs_main\data\icons\vdv.paa'];
_n = _n + ['VDV Mortarman (Gun)'];
_o = _o + [250];
_t = _t + [3];
_u = _u + [1];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['ru_vdv_des_mortarman_bipod'];
_p = _p + ['\rhsafrf\addons\rhs_main\data\icons\vdv.paa'];
_n = _n + ['VDV Mortarman (Bipod)'];
_o = _o + [220];
_t = _t + [3];
_u = _u + [1];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['ru_vdv_des_uav_operator'];
_p = _p + ['\rhsafrf\addons\rhs_main\data\icons\vdv.paa'];
_n = _n + ['VDV UAV Operator'];
_o = _o + [250];
_t = _t + [3];
_u = _u + [1];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['ru_vdv_des_heli_pilot'];
_p = _p + ['\rhsafrf\addons\rhs_main\data\icons\vdv.paa'];
_n = _n + ['VDV Helicopter Pilot'];
_o = _o + [150];  
_t = _t + [3];
_u = _u + [1];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['ru_vdv_des_heli_crewman'];
_p = _p + ['\rhsafrf\addons\rhs_main\data\icons\vdv.paa'];
_n = _n + ['VDV Helicopter Crew'];
_o = _o + [120];  
_t = _t + [3];
_u = _u + [1];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['ru_vdv_des_jet_pilot'];
_p = _p + ['\rhsafrf\addons\rhs_main\data\icons\vdv.paa'];
_n = _n + ['VDV Jet Pilot'];
_o = _o + [250];
_t = _t + [3];
_u = _u + [2];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

// ---------- GRU Spetsnaz Operators ------------

_c = _c + ['ru_vdv_spetsnaz_ak12'];
_p = _p + ['\rhsafrf\addons\rhs_main\data\icons\vdv.paa'];
_n = _n + ['GRU Spetsnaz Operator (AK-12)'];
_o = _o + [200];  
_t = _t + [3];
_u = _u + [3];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['ru_vdv_spetsnaz_ak15'];
_p = _p + ['\rhsafrf\addons\rhs_main\data\icons\vdv.paa'];
_n = _n + ['GRU Spetsnaz Operator (AK-15)'];
_o = _o + [200];  
_t = _t + [3];
_u = _u + [3];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['ru_vdv_spetsnaz_ak104'];
_p = _p + ['\rhsafrf\addons\rhs_main\data\icons\vdv.paa'];
_n = _n + ['GRU Spetsnaz Operator (AK-104)'];
_o = _o + [200];  
_t = _t + [3];
_u = _u + [3];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['ru_vdv_spetsnaz_ak74m'];
_p = _p + ['\rhsafrf\addons\rhs_main\data\icons\vdv.paa'];
_n = _n + ['GRU Spetsnaz Operator (AK-74M)'];
_o = _o + [200];
_t = _t + [3];
_u = _u + [3];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['ru_vdv_spetsnaz_aks74u'];
_p = _p + ['\rhsafrf\addons\rhs_main\data\icons\vdv.paa'];
_n = _n + ['GRU Spetsnaz Operator (AKS-74U)'];
_o = _o + [240];
_t = _t + [3];
_u = _u + [3];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['ru_vdv_spetsnaz_svd'];
_p = _p + ['\rhsafrf\addons\rhs_main\data\icons\vdv.paa'];
_n = _n + ['GRU Spetsnaz Operator (SVD)'];
_o = _o + [220];
_t = _t + [3];
_u = _u + [3];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['ru_vdv_spetsnaz_pilot'];
_p = _p + ['\rhsafrf\addons\rhs_main\data\icons\vdv.paa'];
_n = _n + ['GRU Spetsnaz Pilot'];
_o = _o + [250];
_t = _t + [3];
_u = _u + [3];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

// ---------- Cars ------------

_c = _c + ['ru_msv_uaz_open'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [150];
_t = _t + [10];
_u = _u + [0];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + [""];

_c = _c + ['ru_msv_uaz'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [200];
_t = _t + [10];
_u = _u + [0];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + [""];

_c = _c + ['ru_msv_gaz_normal'];
_p = _p + [''];
_n = _n + ['MSV GAZ-233011 (Transport)'];
_o = _o + [200];
_t = _t + [10];
_u = _u + [0];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + [""];

_c = _c + ['ru_msv_gaz_unarmed'];
_p = _p + [''];
_n = _n + ['MSV GAZ-233114 (Unarmed)'];
_o = _o + [250];
_t = _t + [10];
_u = _u + [0];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + [""];

_c = _c + ['ru_msv_gaz_armed'];
_p = _p + [''];
_n = _n + ['MSV GAZ-233014 (Armed)'];
_o = _o + [400];
_t = _t + [15];
_u = _u + [1];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + [""];

_c = _c + ['ru_msv_brdm'];
_p = _p + [''];
_n = _n + ['MSV BRDM-2'];
_o = _o + [450];
_t = _t + [15];
_u = _u + [0];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + [""];

_c = _c + ['ru_msv_brdm_at'];
_p = _p + [''];
_n = _n + ['MSV BRDM-2 (AT)'];
_o = _o + [550];
_t = _t + [15];
_u = _u + [1];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + [""];

// ---------- Trucks ------------

_c = _c + ['ru_msv_ural_aa'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [550];
_t = _t + [10];
_u = _u + [2];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + [""];

_c = _c + ['ru_msv_ural_normal'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [380];
_t = _t + [10];
_u = _u + [0];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + ["service-medic"];

_c = _c + ['ru_msv_ural_flatbed'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [360];
_t = _t + [10];
_u = _u + [0];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + ["service-medic"];

_c = _c + ['ru_msv_ural_open'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [350];
_t = _t + [10];
_u = _u + [0];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + ["service-medic"];

_c = _c + ['ru_msv_ural_open_flatbed'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [330];
_t = _t + [10];
_u = _u + [0];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + ["service-medic"];

_c = _c + ['ru_vdv_kamaz'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [420];
_t = _t + [20];
_u = _u + [1];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + ["service-medic"];

_c = _c + ['ru_vdv_kamaz_open'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [400];
_t = _t + [20];
_u = _u + [1];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + ["service-medic"];

// ---------- IFV / APC ------------

_c = _c + ['ru_msv_btr70'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [800];
_t = _t + [15];
_u = _u + [1];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + ["service-medic"];

_c = _c + ['ru_msv_btr80a'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [950];
_t = _t + [15];
_u = _u + [2];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + ["service-medic"];

_c = _c + ['ru_msv_bmp1'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [1150];
_t = _t + [15];
_u = _u + [1];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + ["service-medic"];

_c = _c + ['ru_msv_bmp2'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [1400];
_t = _t + [15];
_u = _u + [1];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + ["service-medic"];

_c = _c + ['ru_msv_bmp3'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [1800];
_t = _t + [15];
_u = _u + [2];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + ["service-medic"];

_c = _c + ['ru_msv_bmp3_vesna'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [2200];
_t = _t + [15];
_u = _u + [3];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + ["service-medic"];

_c = _c + ['ru_vdv_bmd4'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [1700];
_t = _t + [15];
_u = _u + [2];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + ["service-medic"];

_c = _c + ['ru_vdv_bmd4m'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [2000];
_t = _t + [15];
_u = _u + [3];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + ["service-medic"];

// ---------- Tanks / Artillery ------------

_c = _c + ['ru_msv_bm21'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [3000];
_t = _t + [30];
_u = _u + [0];
_f = _f + [CTI_FACTORY_HEAVY];
_s = _s + [""];

_c = _c + ['ru_rva_tochka_he'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [4000];
_t = _t + [30];
_u = _u + [1];
_f = _f + [CTI_FACTORY_HEAVY];
_s = _s + [""];

_c = _c + ['ru_rva_tochka_nuke'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [5000];
_t = _t + [30];
_u = _u + [2];
_f = _f + [CTI_FACTORY_HEAVY];
_s = _s + [""];

_c = _c + ['ru_msv_t72b_1989'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [4500];
_t = _t + [30];
_u = _u + [0];
_f = _f + [CTI_FACTORY_HEAVY];
_s = _s + [""];

_c = _c + ['ru_msv_t72b3_2012'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [5500];
_t = _t + [30];
_u = _u + [1];
_f = _f + [CTI_FACTORY_HEAVY];
_s = _s + [""];

_c = _c + ['ru_msv_t80u'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [6000];
_t = _t + [30];
_u = _u + [0];
_f = _f + [CTI_FACTORY_HEAVY];
_s = _s + [""];

_c = _c + ['ru_msv_t80um'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [7000];
_t = _t + [30];
_u = _u + [1];
_f = _f + [CTI_FACTORY_HEAVY];
_s = _s + [""];

_c = _c + ['ru_msv_t90_1992'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [6500];
_t = _t + [30];
_u = _u + [0];
_f = _f + [CTI_FACTORY_HEAVY];
_s = _s + [""];

_c = _c + ['ru_msv_t90a_2006'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [7200];
_t = _t + [30];
_u = _u + [1];
_f = _f + [CTI_FACTORY_HEAVY];
_s = _s + [""];

_c = _c + ['ru_msv_t90sm'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [8000];
_t = _t + [30];
_u = _u + [2];
_f = _f + [CTI_FACTORY_HEAVY];
_s = _s + [""];

// ---------- Support Vehicles (Repair) ------------

_c = _c + ['ru_msv_ural_repair'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [420];
_t = _t + [20];
_u = _u + [0];
_f = _f + [CTI_FACTORY_REPAIR];
_s = _s + ["service-repairtruck"];

_c = _c + ['ru_msv_salvager'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [CTI_VEHICLES_SALVAGER_PRICE];
_t = _t + [15];
_u = _u + [0];
_f = _f + [CTI_FACTORY_REPAIR];
_s = _s + ["service-repairtruck"];

_c = _c + ['CTI_Salvager_East'];
_p = _p + [''];
_n = _n + ['MSV Salvage Truck'];
_o = _o + [CTI_VEHICLES_SALVAGER_PRICE];
_t = _t + [15];
_u = _u + [0];
_f = _f + [CTI_FACTORY_REPAIR];
_s = _s + [["ru_msv_salvager","salvager"]];

_c = _c + ['CTI_Salvager_Independent_East'];
_p = _p + [''];
_n = _n + ['MSV Salvager'];
_o = _o + [CTI_VEHICLES_SALVAGER_PRICE];
_t = _t + [15];
_u = _u + [0];
_f = _f + [CTI_FACTORY_REPAIR];
_s = _s + [["ru_msv_salvager","salvager-independent"]];

_c = _c + ['ru_msv_ural_fuel'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [420];
_t = _t + [25];
_u = _u + [0];
_f = _f + [CTI_FACTORY_REPAIR];
_s = _s + ["service-fueltruck"];

// ---------- Support Vehicles (Ammo) ------------

_c = _c + ['BOX_IND_AmmoVeh_F'];
_p = _p + ['\rhsafrf\addons\rhs_main\data\icons\msv.paa'];
_n = _n + ['MSV Vehicle Ammo Box'];
_o = _o + [50];
_t = _t + [5];
_u = _u + [0];
_f = _f + [CTI_FACTORY_AMMO];
_s = _s + [""];

_c = _c + ['ru_msv_ural_ammo'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [450];
_t = _t + [10];
_u = _u + [0];
_f = _f + [CTI_FACTORY_AMMO];
_s = _s + ["service-ammotruck"];

_c = _c + ['ru_vdv_kamaz_ammo'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [550];
_t = _t + [20];
_u = _u + [0];
_f = _f + [CTI_FACTORY_AMMO];
_s = _s + ["service-ammotruck"];

// ---------- Air Vehicles ------------

_c = _c + ['ru_vdv_k40a'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [500];
_t = _t + [5];
_u = _u + [0];
_f = _f + [CTI_FACTORY_AIR];
_s = _s + [""];

_c = _c + ['ru_vdv_k40b'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [500];
_t = _t + [5];
_u = _u + [0];
_f = _f + [CTI_FACTORY_AIR];
_s = _s + [""];

_c = _c + ['ru_vdv_ka60'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [6500];
_t = _t + [15];
_u = _u + [0];
_f = _f + [CTI_FACTORY_AIR];
_s = _s + ["service-medic","service-ammotruck"];

_c = _c + ['ru_vdv_mi8t'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [6000];
_t = _t + [15];
_u = _u + [0];
_f = _f + [CTI_FACTORY_AIR];
_s = _s + ["service-medic"];

_c = _c + ['ru_vdv_mi8mt'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [6500];
_t = _t + [35];
_u = _u + [1];
_f = _f + [CTI_FACTORY_AIR];
_s = _s + ["service-medic","service-ammotruck"];

_c = _c + ['ru_vdv_mi8mtv3'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [8500];
_t = _t + [35];
_u = _u + [1];
_f = _f + [CTI_FACTORY_AIR];
_s = _s + ["service-medic"];

_c = _c + ['ru_vdv_mi28n'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [10000];
_t = _t + [35];
_u = _u + [0];
_f = _f + [CTI_FACTORY_AIR];
_s = _s + ["service-medic"];

_c = _c + ['ru_vdv_mi24g'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [12500];
_t = _t + [40];
_u = _u + [1];
_f = _f + [CTI_FACTORY_AIR];
_s = _s + ["service-medic"];

_c = _c + ['ru_vdv_ka52'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [15000];
_t = _t + [50];
_u = _u + [2];
_f = _f + [CTI_FACTORY_AIR];
_s = _s + ["service-medic"];

_c = _c + ['ru_vdv_mig29sm'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [16000];
_t = _t + [40];
_u = _u + [1];
_f = _f + [CTI_FACTORY_AIR];
_s = _s + [""];

_c = _c + ['ru_vdv_su35'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [17500];
_t = _t + [40];
_u = _u + [2];
_f = _f + [CTI_FACTORY_AIR];
_s = _s + [""];

_c = _c + ['ru_vdv_tu95ms6'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [18500];
_t = _t + [60];
_u = _u + [2];
_f = _f + [CTI_FACTORY_AIR];
_s = _s + ["service-medic"];

// ------------- Marines ----------------

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
