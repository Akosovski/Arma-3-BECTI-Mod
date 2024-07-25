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

// ---------- VMF Infantry ------------

_c = _c + ['ru_vmf_driver'];
_p = _p + ['\rhsafrf\addons\rhs_main\data\icons\vmf.paa'];
_n = _n + ['VMF Driver'];
_o = _o + [140];
_t = _t + [3];
_u = _u + [0];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['ru_vmf_rifleman_ak12'];
_p = _p + ['\rhsafrf\addons\rhs_main\data\icons\vmf.paa'];
_n = _n + ['VMF Rifleman (AK-12)'];
_o = _o + [170];
_t = _t + [3];
_u = _u + [0];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['ru_vmf_rifleman_ak15'];
_p = _p + ['\rhsafrf\addons\rhs_main\data\icons\vmf.paa'];
_n = _n + ['VMF Rifleman (AK-15)'];
_o = _o + [170];
_t = _t + [3];
_u = _u + [0];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['ru_vmf_grenadier_rpg'];
_p = _p + ['\rhsafrf\addons\rhs_main\data\icons\vmf.paa'];
_n = _n + ['VMF Grenadier (RPG-7V2)'];
_o = _o + [230];
_t = _t + [3];
_u = _u + [0];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['ru_vmf_grenadier_gp34'];
_p = _p + ['\rhsafrf\addons\rhs_main\data\icons\vmf.paa'];
_n = _n + ['VMF Grenadier (GP-34)'];
_o = _o + [210];
_t = _t + [3];
_u = _u + [1];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['ru_vmf_aa_specialist'];
_p = _p + ['\rhsafrf\addons\rhs_main\data\icons\vmf.paa'];
_n = _n + ['VMF AA Specialist'];
_o = _o + [450];
_t = _t + [3];
_u = _u + [2];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['ru_vmf_crewman'];
_p = _p + ['\rhsafrf\addons\rhs_main\data\icons\vmf.paa'];
_n = _n + ['VMF Crewman'];
_o = _o + [150];
_t = _t + [3];
_u = _u + [0];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['ru_vmf_efreitor'];
_p = _p + ['\rhsafrf\addons\rhs_main\data\icons\vmf.paa'];
_n = _n + ['VMF Efreitor'];
_o = _o + [240];
_t = _t + [3];
_u = _u + [0];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['ru_vmf_machinegunner'];
_p = _p + ['\rhsafrf\addons\rhs_main\data\icons\vmf.paa'];
_n = _n + ['VMF Machine Gunner'];
_o = _o + [280];
_t = _t + [3];
_u = _u + [1];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['ru_vmf_autorifleman'];
_p = _p + ['\rhsafrf\addons\rhs_main\data\icons\vmf.paa'];
_n = _n + ['VMF Auto Rifleman'];
_o = _o + [250];
_t = _t + [3];
_u = _u + [1];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['ru_vmf_medic'];
_p = _p + ['\rhsafrf\addons\rhs_main\data\icons\vmf.paa'];
_n = _n + ['VMF Medic'];
_o = _o + [200];
_t = _t + [3];
_u = _u + [0];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['ru_vmf_officer'];
_p = _p + ['\rhsafrf\addons\rhs_main\data\icons\vmf.paa'];
_n = _n + ['VMF Officer'];
_o = _o + [250];
_t = _t + [3];
_u = _u + [1];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['ru_vmf_worker'];
_p = _p + ['\rhsafrf\addons\rhs_main\data\icons\vmf.paa'];
_n = _n + ['VMF Worker'];
_o = _o + [CTI_BASE_WORKERS_PRICE];
_t = _t + [3];
_u = _u + [0];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['ru_vmf_engineer'];
_p = _p + ['\rhsafrf\addons\rhs_main\data\icons\vmf.paa'];
_n = _n + ['VMF Engineer'];
_o = _o + [250];
_t = _t + [3];
_u = _u + [1];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['ru_vmf_marksman'];
_p = _p + ['\rhsafrf\addons\rhs_main\data\icons\vmf.paa'];
_n = _n + ['VMF Marksman'];
_o = _o + [300];
_t = _t + [3];
_u = _u + [2];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['ru_vmf_sergeant'];
_p = _p + ['\rhsafrf\addons\rhs_main\data\icons\vmf.paa'];
_n = _n + ['VMF Sergeant'];
_o = _o + [225];
_t = _t + [3];
_u = _u + [1];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['ru_vmf_at_specialist'];
_p = _p + ['\rhsafrf\addons\rhs_main\data\icons\vmf.paa'];
_n = _n + ['VMF AT Specialist'];
_o = _o + [280];
_t = _t + [3];
_u = _u + [1];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['ru_vmf_mortarman_gun'];
_p = _p + ['\rhsafrf\addons\rhs_main\data\icons\vmf.paa'];
_n = _n + ['VMF Mortarman (Gun)'];
_o = _o + [250];
_t = _t + [3];
_u = _u + [1];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['ru_vmf_mortarman_bipod'];
_p = _p + ['\rhsafrf\addons\rhs_main\data\icons\vmf.paa'];
_n = _n + ['VMF Mortarman (Bipod)'];
_o = _o + [220];
_t = _t + [3];
_u = _u + [1];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['ru_vmf_uav_operator'];
_p = _p + ['\rhsafrf\addons\rhs_main\data\icons\vmf.paa'];
_n = _n + ['VMF UAV Operator'];
_o = _o + [250];
_t = _t + [3];
_u = _u + [1];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['ru_vmf_heli_pilot'];
_p = _p + ['\rhsafrf\addons\rhs_main\data\icons\vmf.paa'];
_n = _n + ['VMF Helicopter Pilot'];
_o = _o + [200];
_t = _t + [3];
_u = _u + [1];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['ru_vmf_heli_crew'];
_p = _p + ['\rhsafrf\addons\rhs_main\data\icons\vmf.paa'];
_n = _n + ['VMF Helicopter Crew'];
_o = _o + [200];
_t = _t + [3];
_u = _u + [1];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['ru_vmf_jet_pilot'];
_p = _p + ['\rhsafrf\addons\rhs_main\data\icons\vmf.paa'];
_n = _n + ['VMF Jet Pilot'];
_o = _o + [200];
_t = _t + [3];
_u = _u + [2];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

// ---------- GRU Spetsnaz Operators ------------

_c = _c + ['ru_vmf_spetsnaz_ak12'];
_p = _p + ['\rhsafrf\addons\rhs_main\data\icons\vmf.paa'];
_n = _n + ['GRU Spetsnaz Operator (AK-12)'];
_o = _o + [200];  
_t = _t + [3];
_u = _u + [1];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['ru_vmf_spetsnaz_ak103'];
_p = _p + ['\rhsafrf\addons\rhs_main\data\icons\vmf.paa'];
_n = _n + ['GRU Spetsnaz Operator (AK-103)'];
_o = _o + [200];  
_t = _t + [3];
_u = _u + [1];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['ru_vmf_spetsnaz_ak104'];
_p = _p + ['\rhsafrf\addons\rhs_main\data\icons\vmf.paa'];
_n = _n + ['GRU Spetsnaz Operator (AK-104)'];
_o = _o + [200];
_t = _t + [3];
_u = _u + [3];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['ru_vmf_spetsnaz_ak74m'];
_p = _p + ['\rhsafrf\addons\rhs_main\data\icons\vdv.paa'];
_n = _n + ['GRU Spetsnaz Operator (AK-74M)'];
_o = _o + [200];
_t = _t + [3];
_u = _u + [3];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['ru_vmf_spetsnaz_rpk74m'];
_p = _p + ['\rhsafrf\addons\rhs_main\data\icons\vdv.paa'];
_n = _n + ['GRU Spetsnaz Operator (RPK-74M)'];
_o = _o + [240];
_t = _t + [3];
_u = _u + [3];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['ru_vmf_spetsnaz_svd'];
_p = _p + ['\rhsafrf\addons\rhs_main\data\icons\vdv.paa'];
_n = _n + ['GRU Spetsnaz Operator (SVD)'];
_o = _o + [220];
_t = _t + [3];
_u = _u + [3];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['ru_vmf_spetsnaz_pilot'];
_p = _p + ['\rhsafrf\addons\rhs_main\data\icons\vdv.paa'];
_n = _n + ['GRU Spetsnaz Operator Pilot'];
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

_c = _c + ['ru_vmf_gaz_normal'];
_p = _p + [''];
_n = _n + ['VMF GAZ-233011 (Transport)'];
_o = _o + [200];
_t = _t + [10];
_u = _u + [0];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + [""];

_c = _c + ['ru_vmf_gaz_unarmed'];
_p = _p + [''];
_n = _n + ['VMF GAZ-233114 (Unarmed)'];
_o = _o + [250];
_t = _t + [10];
_u = _u + [0];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + [""];

_c = _c + ['ru_vmf_gaz_armed'];
_p = _p + [''];
_n = _n + ['VMF GAZ-233014 (Armed)'];
_o = _o + [400];
_t = _t + [15];
_u = _u + [1];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + [""];

_c = _c + ['ru_vmf_brdm2'];
_p = _p + [''];
_n = _n + ['VMF BRDM-2'];
_o = _o + [450];
_t = _t + [15];
_u = _u + [0];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + [""];

_c = _c + ['ru_vmf_brdm2_at'];
_p = _p + [''];
_n = _n + ['VMF BRDM-2 (AT)'];
_o = _o + [550];
_t = _t + [15];
_u = _u + [1];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + [""];

// ---------- Trucks ------------

_c = _c + ['ru_vmf_ural_aa'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [550];
_t = _t + [10];
_u = _u + [2];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + [""];

_c = _c + ['ru_vmf_ural_normal'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [380];
_t = _t + [10];
_u = _u + [0];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + ["service-medic"];

_c = _c + ['ru_vmf_ural_open'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [350];
_t = _t + [10];
_u = _u + [0];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + ["service-medic"];

// ---------- IFV / APC ------------

_c = _c + ['ru_vmf_btr60pb'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [650];
_t = _t + [15];
_u = _u + [0];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + ["service-medic"];

_c = _c + ['ru_vmf_btr70'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [800];
_t = _t + [15];
_u = _u + [1];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + ["service-medic"];

_c = _c + ['ru_vmf_btr80a'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [950];
_t = _t + [15];
_u = _u + [2];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + ["service-medic"];

_c = _c + ['ru_vmf_bmp1'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [1150];
_t = _t + [15];
_u = _u + [1];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + ["service-medic"];

_c = _c + ['ru_vmf_bmp2'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [1400];
_t = _t + [15];
_u = _u + [1];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + ["service-medic"];

// ---------- Tanks / Artillery ------------

_c = _c + ['ru_vmf_bm21'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [3000];
_t = _t + [30];
_u = _u + [0];
_f = _f + [CTI_FACTORY_HEAVY];
_s = _s + [""];

_c = _c + ['ru_vmf_t72b_1989'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [4800];
_t = _t + [30];
_u = _u + [0];
_f = _f + [CTI_FACTORY_HEAVY];
_s = _s + [""];

_c = _c + ['ru_vmf_t72b3_2016'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [5500];
_t = _t + [30];
_u = _u + [1];
_f = _f + [CTI_FACTORY_HEAVY];
_s = _s + [""];

_c = _c + ['ru_vmf_t80bv'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [6000];
_t = _t + [30];
_u = _u + [0];
_f = _f + [CTI_FACTORY_HEAVY];
_s = _s + [""];

_c = _c + ['ru_vmf_t80um'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [7000];
_t = _t + [30];
_u = _u + [1];
_f = _f + [CTI_FACTORY_HEAVY];
_s = _s + [""];

_c = _c + ['ru_vmf_t90sa_2004'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [6500];
_t = _t + [30];
_u = _u + [1];
_f = _f + [CTI_FACTORY_HEAVY];
_s = _s + [""];

_c = _c + ['ru_vmf_t90sm'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [7500];
_t = _t + [30];
_u = _u + [2];
_f = _f + [CTI_FACTORY_HEAVY];
_s = _s + [""];

_c = _c + ['ru_msv_t14'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [9300];
_t = _t + [30];
_u = _u + [2];
_f = _f + [CTI_FACTORY_HEAVY];
_s = _s + [""];

// ---------- Support Vehicles (Repair) ------------

_c = _c + ['ru_vmf_ural_repair'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [420];
_t = _t + [20];
_u = _u + [0];
_f = _f + [CTI_FACTORY_REPAIR];
_s = _s + ["service-repairtruck"];

_c = _c + ['ru_vmf_salvager'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [CTI_VEHICLES_SALVAGER_PRICE];
_t = _t + [15];
_u = _u + [0];
_f = _f + [CTI_FACTORY_REPAIR];
_s = _s + ["service-repairtruck"];

_c = _c + ['CTI_Salvager_East'];
_p = _p + [''];
_n = _n + ['VMF Salvage Truck'];
_o = _o + [CTI_VEHICLES_SALVAGER_PRICE];
_t = _t + [15];
_u = _u + [0];
_f = _f + [CTI_FACTORY_REPAIR];
_s = _s + [["ru_vmf_salvager","salvager"]];

_c = _c + ['CTI_Salvager_Independent_East'];
_p = _p + [''];
_n = _n + ['VMF Salvager'];
_o = _o + [CTI_VEHICLES_SALVAGER_PRICE];
_t = _t + [15];
_u = _u + [0];
_f = _f + [CTI_FACTORY_REPAIR];
_s = _s + [["ru_vmf_salvager","salvager-independent"]];

_c = _c + ['ru_vmf_ural_fuel'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [420];
_t = _t + [25];
_u = _u + [0];
_f = _f + [CTI_FACTORY_REPAIR];
_s = _s + ["service-fueltruck"];

// ---------- Support Vehicles (Ammo) ------------

_c = _c + ['ru_vmf_ural_ammo'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [450];
_t = _t + [10];
_u = _u + [0];
_f = _f + [CTI_FACTORY_AMMO];
_s = _s + ["service-ammotruck"];

// ---------- Air Vehicles ------------

_c = _c + ['ru_vmf_k40a'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [500];
_t = _t + [5];
_u = _u + [0];
_f = _f + [CTI_FACTORY_AIR];
_s = _s + [""];

_c = _c + ['ru_vmf_k40b'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [500];
_t = _t + [5];
_u = _u + [0];
_f = _f + [CTI_FACTORY_AIR];
_s = _s + [""];

_c = _c + ['ru_vmf_ka60'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [6500];
_t = _t + [15];
_u = _u + [0];
_f = _f + [CTI_FACTORY_AIR];
_s = _s + ["service-medic","service-ammotruck"];

_c = _c + ['ru_vmf_mi8_normal'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [6500];
_t = _t + [15];
_u = _u + [0];
_f = _f + [CTI_FACTORY_AIR];
_s = _s + ["service-medic","service-ammotruck"];

_c = _c + ['ru_vmf_mi8_gunship'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [8500];
_t = _t + [25];
_u = _u + [1];
_f = _f + [CTI_FACTORY_AIR];
_s = _s + ["service-medic"];

_c = _c + ['ru_vmf_mi24v'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [12500];
_t = _t + [40];
_u = _u + [1];
_f = _f + [CTI_FACTORY_AIR];
_s = _s + ["service-medic"];

_c = _c + ['ru_vmf_ka52'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [15000];
_t = _t + [50];
_u = _u + [2];
_f = _f + [CTI_FACTORY_AIR];
_s = _s + ["service-medic"];

_c = _c + ['ru_vmf_mig29sm'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [18000];
_t = _t + [60];
_u = _u + [2];
_f = _f + [CTI_FACTORY_AIR];
_s = _s + [""];

_c = _c + ['ru_vmf_su25'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [16000];
_t = _t + [60];
_u = _u + [2];
_f = _f + [CTI_FACTORY_AIR];
_s = _s + [""];

_c = _c + ['ru_vmf_su35'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [17500];
_t = _t + [60];
_u = _u + [3];
_f = _f + [CTI_FACTORY_AIR];
_s = _s + [""];

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
