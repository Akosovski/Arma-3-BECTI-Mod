_side = _this;
_faction = "West";

_c = []; //--- Classname
_p = []; //--- Picture. 				'' = auto generated.
_n = []; //--- Name. 					'' = auto generated.
_o = []; //--- Price.
_t = []; //--- Build time.
_u = []; //--- Upgrade level needed.    0 1 2 3...
_f = []; //--- Built from Factory.
_s = []; //--- Script

//--- Infantry US Marines ---

_c = _c + ['us_usmc_des_rifleman_m16'];
_p = _p + ['rhsusf\addons\rhsusf_main\data\usmclogo.paa'];
_n = _n + ['USMC Rifleman (M16A4)'];
_o = _o + [150];
_t = _t + [3];
_u = _u + [0];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['us_usmc_des_rifleman_m4a1'];
_p = _p + ['rhsusf\addons\rhsusf_main\data\usmclogo.paa'];
_n = _n + ['USMC Rifleman (M4A1)'];
_o = _o + [150];
_t = _t + [3];
_u = _u + [0];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['us_usmc_des_rifleman_at'];
_p = _p + ['rhsusf\addons\rhsusf_main\data\usmclogo.paa'];
_n = _n + ['USMC Rifleman (M136)'];
_o = _o + [180];
_t = _t + [3];
_u = _u + [0];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['us_usmc_des_grenadier_m16a4'];
_p = _p + ['rhsusf\addons\rhsusf_main\data\usmclogo.paa'];
_n = _n + ['USMC Grenadier (M16A4)'];
_o = _o + [200];
_t = _t + [3];
_u = _u + [0];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['us_usmc_des_grenadier_m4a1'];
_p = _p + ['rhsusf\addons\rhsusf_main\data\usmclogo.paa'];
_n = _n + ['USMC Grenadier (M4A1)'];
_o = _o + [200];
_t = _t + [3];
_u = _u + [0];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['us_usmc_des_autorifleman_m249'];
_p = _p + ['rhsusf\addons\rhsusf_main\data\usmclogo.paa'];
_n = _n + ['USMC Auto Rifleman (M249)'];
_o = _o + [220];
_t = _t + [3];
_u = _u + [0];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['us_usmc_des_officer'];
_p = _p + ['rhsusf\addons\rhsusf_main\data\usmclogo.paa'];
_n = _n + ['USMC Officer'];
_o = _o + [200];
_t = _t + [3];
_u = _u + [0];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['us_usmc_des_sergeant'];
_p = _p + ['rhsusf\addons\rhsusf_main\data\usmclogo.paa'];
_n = _n + ['USMC Sergeant'];
_o = _o + [250];
_t = _t + [3];
_u = _u + [0];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['us_usmc_des_lance_corporal'];
_p = _p + ['rhsusf\addons\rhsusf_main\data\usmclogo.paa'];
_n = _n + ['USMC Lance Corporal'];
_o = _o + [220];
_t = _t + [3];
_u = _u + [0];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['us_usmc_des_corpsman'];
_p = _p + ['rhsusf\addons\rhsusf_main\data\usmclogo.paa'];
_n = _n + ['USMC Corpsman (Medic)'];
_o = _o + [190];
_t = _t + [3];
_u = _u + [0];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['us_usmc_des_aa_specialist'];
_p = _p + ['rhsusf\addons\rhsusf_main\data\usmclogo.paa'];
_n = _n + ['USMC AA Specialist (FIM-92F)'];
_o = _o + [450];
_t = _t + [3];
_u = _u + [2];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['us_usmc_des_at_specialist'];
_p = _p + ['rhsusf\addons\rhsusf_main\data\usmclogo.paa'];
_n = _n + ['USMC AT Specialist (MAAWS)'];
_o = _o + [390];
_t = _t + [3];
_u = _u + [2];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['us_usmc_des_mortarman_gun'];
_p = _p + ['rhsusf\addons\rhsusf_main\data\usmclogo.paa'];
_n = _n + ['USMC Mortarman (Gun)'];
_o = _o + [250];
_t = _t + [3];
_u = _u + [1];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['us_usmc_des_mortarman_bipod'];
_p = _p + ['rhsusf\addons\rhsusf_main\data\usmclogo.paa'];
_n = _n + ['USMC Mortarman (Bipod)'];
_o = _o + [220];
_t = _t + [3];
_u = _u + [1];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['us_usmc_des_uav_operator'];
_p = _p + ['rhsusf\addons\rhsusf_main\data\usmclogo.paa'];
_n = _n + ['USMC UAV Operator'];
_o = _o + [250];
_t = _t + [3];
_u = _u + [1];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['us_usmc_des_missileman'];
_p = _p + ['rhsusf\addons\rhsusf_main\data\usmclogo.paa'];
_n = _n + ['USMC AT Missileman (SMAW)'];
_o = _o + [350];
_t = _t + [3];
_u = _u + [1];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['us_usmc_des_crewman'];
_p = _p + ['rhsusf\addons\rhsusf_main\data\usmclogo.paa'];
_n = _n + ['USMC Crewman'];
_o = _o + [150];
_t = _t + [3];
_u = _u + [0];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['us_usmc_des_worker'];
_p = _p + ['rhsusf\addons\rhsusf_main\data\usmclogo.paa'];
_n = _n + ['USMC Worker'];
_o = _o + [CTI_BASE_WORKERS_PRICE];
_t = _t + [3];
_u = _u + [0];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['us_usmc_des_heli_pilot'];
_p = _p + ['rhsusf\addons\rhsusf_main\data\usmclogo.paa'];
_n = _n + ['USMC Helicopter Pilot'];
_o = _o + [120];
_t = _t + [3];
_u = _u + [1];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['us_usmc_des_heli_crewman'];
_p = _p + ['rhsusf\addons\rhsusf_main\data\usmclogo.paa'];
_n = _n + ['USMC Helicopter Crew'];
_o = _o + [110];
_t = _t + [3];
_u = _u + [1];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['us_usmc_jet_pilot'];
_p = _p + ['rhsusf\addons\rhsusf_main\data\usmclogo.paa'];
_n = _n + ['USMC Jet Pilot'];
_o = _o + [150];
_t = _t + [3];
_u = _u + [2];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['us_usmc_des_marksman'];
_p = _p + ['rhsusf\addons\rhsusf_main\data\usmclogo.paa'];
_n = _n + ['USMC Marksman'];
_o = _o + [250];
_t = _t + [3];
_u = _u + [2];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['us_usmc_des_engineer'];
_p = _p + ['rhsusf\addons\rhsusf_main\data\usmclogo.paa'];
_n = _n + ['USMC Combat Engineer'];
_o = _o + [250];
_t = _t + [3];
_u = _u + [1];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['us_usmc_des_machinegunner'];
_p = _p + ['rhsusf\addons\rhsusf_main\data\usmclogo.paa'];
_n = _n + ['USMC Machine Gunner'];
_o = _o + [280];
_t = _t + [3];
_u = _u + [1];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['us_usmc_des_sniper'];
_p = _p + ['rhsusf\addons\rhsusf_main\data\usmclogo.paa'];
_n = _n + ['USMC Sniper (M107)'];
_o = _o + [350];
_t = _t + [3];
_u = _u + [2];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

//--- FORECON Operators ---

_c = _c + ['us_usmc_forecon_chief'];
_p = _p + ['rhsusf\addons\rhsusf_main\data\socomlogo.paa'];
_n = _n + ['FORECON Chief'];
_o = _o + [350];
_t = _t + [3];
_u = _u + [3];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['us_usmc_forecon_eod'];
_p = _p + ['rhsusf\addons\rhsusf_main\data\socomlogo.paa'];
_n = _n + ['FORECON EOD Specialist'];
_o = _o + [330];
_t = _t + [3];
_u = _u + [3];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['us_usmc_forecon_marksman'];
_p = _p + ['rhsusf\addons\rhsusf_main\data\socomlogo.paa'];
_n = _n + ['FORECON Marksman'];
_o = _o + [350];
_t = _t + [3];
_u = _u + [3];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['us_usmc_forecon_m4a4'];
_p = _p + ['rhsusf\addons\rhsusf_main\data\socomlogo.paa'];
_n = _n + ['FORECON Operator (M4A4)'];
_o = _o + [300];
_t = _t + [3];
_u = _u + [3];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['us_usmc_forecon_mk16'];
_p = _p + ['rhsusf\addons\rhsusf_main\data\socomlogo.paa'];
_n = _n + ['FORECON Operator (Mk16)'];
_o = _o + [320];
_t = _t + [3];
_u = _u + [3];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['us_usmc_forecon_mk17'];
_p = _p + ['rhsusf\addons\rhsusf_main\data\socomlogo.paa'];
_n = _n + ['FORECON Operator (Mk17)'];
_o = _o + [320];
_t = _t + [3];
_u = _u + [3];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['us_usmc_forecon_m249'];
_p = _p + ['rhsusf\addons\rhsusf_main\data\socomlogo.paa'];
_n = _n + ['FORECON Operator (M249)'];
_o = _o + [350];
_t = _t + [3];
_u = _u + [3];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['us_usmc_forecon_eglm'];
_p = _p + ['rhsusf\addons\rhsusf_main\data\socomlogo.paa'];
_n = _n + ['FORECON Operator (EGLM)'];
_o = _o + [330];
_t = _t + [3];
_u = _u + [3];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['us_usmc_forecon_m136'];
_p = _p + ['rhsusf\addons\rhsusf_main\data\socomlogo.paa'];
_n = _n + ['FORECON Operator (M136)'];
_o = _o + [350];
_t = _t + [3];
_u = _u + [3];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['us_usmc_forecon_heli_pilot'];
_p = _p + ['rhsusf\addons\rhsusf_main\data\socomlogo.paa'];
_n = _n + ['FORECON Helicopter Pilot'];
_o = _o + [300];
_t = _t + [3];
_u = _u + [3];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

//--- Cars ---

_c = _c + ['B_Quadbike_01_F'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [175];
_t = _t + [10];
_u = _u + [0];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + [""];

_c = _c + ['us_usmc_m1123'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [200];
_t = _t + [20];
_u = _u + [0];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + [""];

_c = _c + ['us_usmc_m1123_half'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [190];
_t = _t + [20];
_u = _u + [0];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + [""];

_c = _c + ['us_usmc_m1123_open'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [180];
_t = _t + [20];
_u = _u + [0];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + [""];

_c = _c + ['us_usmc_m1151a1'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [250];
_t = _t + [20];
_u = _u + [0];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + [""];

_c = _c + ['us_usmc_m1151a1_m240'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [260];
_t = _t + [20];
_u = _u + [0];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + [""];

_c = _c + ['us_usmc_m1151a1_m2'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [300];
_t = _t + [20];
_u = _u + [0];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + [""];

_c = _c + ['us_usmc_m1151a1_mk19'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [350];
_t = _t + [20];
_u = _u + [1];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + [""];

_c = _c + ['us_usmc_m1151a1_crows_m2'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [500];
_t = _t + [20];
_u = _u + [2];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + [""];

_c = _c + ['us_usmc_m1151a1_crows_mk19'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [600];
_t = _t + [20];
_u = _u + [2];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + [""];

//--- Trucks ---

_c = _c + ['us_usmc_m1078a1'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [350];
_t = _t + [20];
_u = _u + [0];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + ["service-medic"];

_c = _c + ['us_usmc_m1078a1_flatbed'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [300];
_t = _t + [20];
_u = _u + [0];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + ["service-medic"];

_c = _c + ['us_usmc_m977a4'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [500];
_t = _t + [20];
_u = _u + [1];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + ["service-medic"];

// --- APC ---

_c = _c + ['us_usmc_m1126_m2'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [950];
_t = _t + [20];
_u = _u + [1];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + ["service-medic"];

_c = _c + ['us_usmc_m1126_mk19'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [1100];
_t = _t + [20];
_u = _u + [1];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + ["service-medic"];

_c = _c + ['us_usmc_m1134_aa'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [1200];
_t = _t + [20];
_u = _u + [1];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + ["service-medic"];

//--- APC / Artillery ---

_c = _c + ['us_usmc_m113a3_unarmed'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [600];
_t = _t + [30];
_u = _u + [0];
_f = _f + [CTI_FACTORY_HEAVY];
_s = _s + ["service-medic"];

_c = _c + ['us_usmc_m113a3_m2'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [800];
_t = _t + [30];
_u = _u + [0];
_f = _f + [CTI_FACTORY_HEAVY];
_s = _s + ["service-medic"];

_c = _c + ['us_usmc_m113a3_mk19'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [950];
_t = _t + [30];
_u = _u + [0];
_f = _f + [CTI_FACTORY_HEAVY];
_s = _s + ["service-medic"];

_c = _c + ['us_usmc_m2a3'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [2500];
_t = _t + [30];
_u = _u + [1];
_f = _f + [CTI_FACTORY_HEAVY];
_s = _s + ["service-medic"];

_c = _c + ['us_usmc_m2a3_b1'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [3000];
_t = _t + [30];
_u = _u + [1];
_f = _f + [CTI_FACTORY_HEAVY];
_s = _s + ["service-medic"];

_c = _c + ['us_usmc_m2a3_b2'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [3500];
_t = _t + [30];
_u = _u + [2];
_f = _f + [CTI_FACTORY_HEAVY];
_s = _s + ["service-medic"];

_c = _c + ['us_usmc_m6a2_aa'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [3800];
_t = _t + [30];
_u = _u + [2];
_f = _f + [CTI_FACTORY_HEAVY];
_s = _s + ["service-medic"];

_c = _c + ['us_usmc_m142_clus'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [5500];
_t = _t + [30];
_u = _u + [1];
_f = _f + [CTI_FACTORY_HEAVY];
_s = _s + [""];

_c = _c + ['us_usmc_m142_he'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [5500];
_t = _t + [30];
_u = _u + [1];
_f = _f + [CTI_FACTORY_HEAVY];
_s = _s + [""];

//--- Tanks Heavy ---

_c = _c + ['us_usmc_m1a1fep'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [6500];
_t = _t + [30];
_u = _u + [0];
_f = _f + [CTI_FACTORY_HEAVY];
_s = _s + [""];

_c = _c + ['us_usmc_m1a2sepv1_t1'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [7000];
_t = _t + [30];
_u = _u + [1];
_f = _f + [CTI_FACTORY_HEAVY];
_s = _s + [""];

_c = _c + ['us_usmc_m1a2sepv1_t2'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [8000];
_t = _t + [30];
_u = _u + [2];
_f = _f + [CTI_FACTORY_HEAVY];
_s = _s + [""];

_c = _c + ['us_usmc_m1a2sepv2'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [8500];
_t = _t + [30];
_u = _u + [2];
_f = _f + [CTI_FACTORY_HEAVY];
_s = _s + [""];

//--- Support Vehicles Repair ---

_c = _c + ['us_usmc_m977a4_repair'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [525];
_t = _t + [25];
_u = _u + [0];
_f = _f + [CTI_FACTORY_REPAIR];
_s = _s + ["service-repairtruck"];

_c = _c + ['us_usmc_salvager'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [CTI_VEHICLES_SALVAGER_PRICE];
_t = _t + [20];
_u = _u + [0];
_f = _f + [CTI_FACTORY_REPAIR];
_s = _s + ["service-repairtruck"];

_c = _c + ['CTI_Salvager_West'];
_p = _p + [''];
_n = _n + ['USMC Salvage Truck'];
_o = _o + [CTI_VEHICLES_SALVAGER_PRICE];
_t = _t + [450];
_u = _u + [0];
_f = _f + [CTI_FACTORY_REPAIR];
_s = _s + [["us_usmc_salvager","salvager"]];

_c = _c + ['CTI_Salvager_Independent_West'];
_p = _p + [''];
_n = _n + ['USMC Salvager'];
_o = _o + [CTI_VEHICLES_SALVAGER_PRICE];
_t = _t + [25];
_u = _u + [0];
_f = _f + [CTI_FACTORY_REPAIR];
_s = _s + [["us_usmc_salvager","salvager-independent"]];

_c = _c + ['us_usmc_m977a4_fuel'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [500];
_t = _t + [25];
_u = _u + [0];
_f = _f + [CTI_FACTORY_REPAIR];
_s = _s + ["service-fueltruck"];

//--- Support Vehicles Ammo ---

_c = _c + ['BOX_NATO_AmmoVeh_F'];
_p = _p + ['rhsusf\addons\rhsusf_main\data\usmclogo.paa'];
_n = _n + ['USMC Vehicle Ammo Box'];
_o = _o + [50];
_t = _t + [5];
_u = _u + [0];
_f = _f + [CTI_FACTORY_AMMO];
_s = _s + [""];

_c = _c + ['us_usmc_m1152a1_ammo'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [250];
_t = _t + [20];
_u = _u + [0];
_f = _f + [CTI_FACTORY_AMMO];
_s = _s + ["service-ammotruck"];

_c = _c + ['us_usmc_m977a4_ammo'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [550];
_t = _t + [25];
_u = _u + [0];
_f = _f + [CTI_FACTORY_AMMO];
_s = _s + ["service-ammotruck"];

_c = _c + ['us_usmc_m113a3_ammo'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [650];
_t = _t + [10];
_u = _u + [0];
_f = _f + [CTI_FACTORY_AMMO];
_s = _s + ["service-ammotruck"];

//--- Vehicles Air ---

_c = _c + ['us_usaf_mq4a'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [500];
_t = _t + [5];
_u = _u + [0];
_f = _f + [CTI_FACTORY_AIR];
_s = _s + [];

_c = _c + ['us_usaf_mq4b'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [500];
_t = _t + [5];
_u = _u + [0];
_f = _f + [CTI_FACTORY_AIR];
_s = _s + [];

_c = _c + ['us_usmc_uh1y_unarmed'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [7000];
_t = _t + [15];
_u = _u + [0];
_f = _f + [CTI_FACTORY_AIR];
_s = _s + ["service-medic"];

_c = _c + ['us_usmc_uh1y_rocket'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [8000];
_t = _t + [15];
_u = _u + [1];
_f = _f + [CTI_FACTORY_AIR];
_s = _s + ["service-medic"];

_c = _c + ['us_usmc_uh1y_armed'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [8200];
_t = _t + [15];
_u = _u + [1];
_f = _f + [CTI_FACTORY_AIR];
_s = _s + ["service-medic","service-ammotruck"];

_c = _c + ['us_usmc_ah1z'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [10000];
_t = _t + [20];
_u = _u + [0];
_f = _f + [CTI_FACTORY_AIR];
_s = _s + [""];

_c = _c + ['us_usmc_ch53e'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [13000];
_t = _t + [35];
_u = _u + [2];
_f = _f + [CTI_FACTORY_AIR];
_s = _s + ["service-medic","service-ammotruck"];

_c = _c + ['us_usmc_uh60m'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [10000];
_t = _t + [35];
_u = _u + [0];
_f = _f + [CTI_FACTORY_AIR];
_s = _s + ["service-medic","service-ammotruck"];

_c = _c + ['us_usmc_uh60m_ews'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [12000];
_t = _t + [35];
_u = _u + [1];
_f = _f + [CTI_FACTORY_AIR];
_s = _s + ["service-medic"];

_c = _c + ['us_usmc_uh80'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [16000];
_t = _t + [35];
_u = _u + [1];
_f = _f + [CTI_FACTORY_AIR];
_s = _s + ["service-medic"];

_c = _c + ['us_usmc_ch47f'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [14000];
_t = _t + [35];
_u = _u + [0];
_f = _f + [CTI_FACTORY_AIR];
_s = _s + ["service-medic","service-ammotruck"];

_c = _c + ['us_usmc_oh6m'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [6000];
_t = _t + [35];
_u = _u + [1];
_f = _f + [CTI_FACTORY_AIR];
_s = _s + ["service-medic"];

_c = _c + ['us_usmc_mh6m'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [7000];
_t = _t + [35];
_u = _u + [1];
_f = _f + [CTI_FACTORY_AIR];
_s = _s + ["service-medic"];

_c = _c + ['us_usmc_ah6m'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [7000];
_t = _t + [35];
_u = _u + [1];
_f = _f + [CTI_FACTORY_AIR];
_s = _s + ["service-medic"];

_c = _c + ['us_usaf_ah64d'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [15000];
_t = _t + [35];
_u = _u + [1];
_f = _f + [CTI_FACTORY_AIR];
_s = _s + [""];

_c = _c + ['us_usaf_f16c'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [18500];
_t = _t + [35];
_u = _u + [1];
_f = _f + [CTI_FACTORY_AIR];
_s = _s + [""];

_c = _c + ['us_usaf_f15ex'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [20000];
_t = _t + [35];
_u = _u + [2];
_f = _f + [CTI_FACTORY_AIR];
_s = _s + [""];

_c = _c + ['us_usaf_f35c'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [19000];
_t = _t + [35];
_u = _u + [2];
_f = _f + [CTI_FACTORY_AIR];
_s = _s + [""];

_c = _c + ['us_usaf_f22a'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [22000];
_t = _t + [35];
_u = _u + [2];
_f = _f + [CTI_FACTORY_AIR];
_s = _s + [""];

_c = _c + ['us_usaf_c130j'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [20000];
_t = _t + [35];
_u = _u + [2];
_f = _f + [CTI_FACTORY_AIR];
_s = _s + ["service-medic"];

//--- Vehicles Naval

_c = _c + ['B_Boat_Transport_01_F'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [850];
_t = _t + [15];
_u = _u + [0];
_f = _f + [CTI_FACTORY_NAVAL];
_s = _s + [""];

_c = _c + ['B_Boat_Armed_01_minigun_F'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [1250];
_t = _t + [25];
_u = _u + [0];
_f = _f + [CTI_FACTORY_NAVAL];
_s = _s + [""];

[_side, _faction, _c, _p, _n, _o, _t, _u, _f, _s] call compile preprocessFileLineNumbers "Common\Config\Units\Set_Units.sqf";
