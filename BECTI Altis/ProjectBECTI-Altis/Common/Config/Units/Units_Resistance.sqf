_side = _this;
_faction = "Resistance";

_c = []; //--- Classname
_p = []; //--- Picture. 				'' = auto generated.
_n = []; //--- Name. 					'' = auto generated.
_o = []; //--- Price.
_t = []; //--- Build time.
_u = []; //--- Upgrade level needed.    0 1 2 3...
_f = []; //--- Built from Factory.
_s = []; //--- Script

//--- Infantry ---

_c = _c + ['al_adf_rifleman'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [200];
_t = _t + [5];
_u = _u + [0];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['al_adf_aa_specialist'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [300];
_t = _t + [5];
_u = _u + [1];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['al_adf_at_specialist'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [300];
_t = _t + [5];
_u = _u + [1];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['al_adf_corporal'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [250];
_t = _t + [5];
_u = _u + [1];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['al_adf_marksman'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [250];
_t = _t + [5];
_u = _u + [0];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['al_adf_eod_specialist'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [295];
_t = _t + [5];
_u = _u + [0];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['al_adf_engineer'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [350];
_t = _t + [5];
_u = _u + [0];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['al_adf_crewman'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [260];
_t = _t + [5];
_u = _u + [0];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['al_adf_medic'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [320];
_t = _t + [5];
_u = _u + [0];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['al_adf_machinegunner'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [350];
_t = _t + [5];
_u = _u + [0];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['al_adf_officer'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [350];
_t = _t + [5];
_u = _u + [0];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['al_adf_autorifleman'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [300];
_t = _t + [5];
_u = _u + [1];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];

_c = _c + ['al_adf_sergeant'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [300];
_t = _t + [5];
_u = _u + [1];
_f = _f + [CTI_FACTORY_BARRACKS];
_s = _s + [""];


// --- Vehicles ---

_c = _c + ['rhsgref_nat_ural_work'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [600];
_t = _t + [10];
_u = _u + [0];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + [""];

_c = _c + ['rhsgref_nat_uaz_open'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [550];
_t = _t + [15];
_u = _u + [0];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + [""];

_c = _c + ['rhsgref_nat_uaz_dshkm'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [860];
_t = _t + [15];
_u = _u + [0];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + [""];

_c = _c + ['rhsgref_nat_uaz_ags'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [950];
_t = _t + [20];
_u = _u + [0];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + [""];

_c = _c + ['rhsgref_nat_uaz_spg9'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [1000];
_t = _t + [20];
_u = _u + [2];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + [""];

_c = _c + ['rhsgref_nat_btr70'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [2500];
_t = _t + [30];
_u = _u + [3];
_f = _f + [CTI_FACTORY_LIGHT];
_s = _s + [""];

_c = _c + ['rhsgref_ins_g_t72bc'];
_p = _p + [''];
_n = _n + [''];
_o = _o + [5500];
_t = _t + [30];
_u = _u + [0];
_f = _f + [CTI_FACTORY_HEAVY];
_s = _s + [""];


[_side, _faction, _c, _p, _n, _o, _t, _u, _f, _s] call compile preprocessFileLineNumbers "Common\Config\Units\Set_Units.sqf";