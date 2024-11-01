private ["_faction", "_i", "_p", "_side", "_u"];

_side = _this;
_faction = "West";

_i = [];
_u = [];
_p = [];

//--- Magazines
_i pushBack "rhs_mine_tm62m_mag";
_u pushBack 0;
_p pushBack 10;
/*
_i pushBack "rhs_mine_pmn2_mag";
_u pushBack 1;
_p pushBack 5;

_i pushBack "SatchelCharge_Remote_Mag";
_u pushBack 2;
_p pushBack 20;

_i pushBack "DemoCharge_Remote_Mag";
_u pushBack 1;
_p pushBack 15;

_i pushBack "ClaymoreDirectionalMine_Remote_Mag";
_u pushBack 0;
_p pushBack 10;

_i pushBack "Laserbatteries";
_u pushBack 2;
_p pushBack 5;

_i pushBack "rhs_mine_pmn2";
_u pushBack 1;
_p pushBack 10;

_i pushBack "rhs_mine_tm62m";
_u pushBack 1;
_p pushBack 10;

_i pushBack "rhs_30Rnd_545x39_AK";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhs_30Rnd_545x39_AK_green";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhs_30Rnd_545x39_7n10_AK";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhs_30Rnd_545x39_7n22_AK";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhs_45Rnd_545X39_AK";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhs_45Rnd_545X39_AK_Green";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhs_45Rnd_545X39_7N10_AK";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhs_45Rnd_545X39_7N22_AK";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhs_30Rnd_762x39mm";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhs_30Rnd_762x39mm_tracer";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhs_30Rnd_762x39mm_89";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhs_100Rnd_762x54mmR";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhs_100Rnd_762x54mmR_green";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhs_10Rnd_762x54mmR_7N1";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhs_mag_9x19_17";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhs_mag_9x18_12_57N181S";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhs_mag_9k38_rocket";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhs_rpg7_PG7VL_mag";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhs_rpg7_PG7VR_mag";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhs_rpg7_OG7V_mag";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhs_rpg7_TBG7V_mag";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhs_rpg26_mag";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhs_rshg2_mag";
_u pushBack 0;
_p pushBack 5;

// _i pushBack "RPG32_AA_F";
// _u pushBack 1;
// _p pushBack 75;

_i pushBack "rhs_mag_rgd5";
_u pushBack 0;
_p pushBack 2;

_i pushBack "rhs_mag_rdg2_white";
_u pushBack 0;
_p pushBack 2;

_i pushBack "rhs_mag_rdg2_black";
_u pushBack 0;
_p pushBack 2;

_i pushBack "rhs_mag_nspn_yellow";
_u pushBack 0;
_p pushBack 2;

_i pushBack "rhs_mag_nspn_red";
_u pushBack 0;
_p pushBack 2;

_i pushBack "rhs_mag_nspn_green";
_u pushBack 0;
_p pushBack 2;

_i pushBack "rhs_mag_nspd";
_u pushBack 0;
_p pushBack 2;

_i pushBack "rhs_mag_fakel";
_u pushBack 0;
_p pushBack 2;

_i pushBack "rhs_mag_fakels";
_u pushBack 0;
_p pushBack 2;

_i pushBack "rhs_mag_zarya2";
_u pushBack 0;
_p pushBack 2;

_i pushBack "rhs_mag_plamyam";
_u pushBack 0;
_p pushBack 2;

_i pushBack "HandGrenade_Stone";
_u pushBack 0;
_p pushBack 1;

_i pushBack "rhs_VOG25";
_u pushBack 0;
_p pushBack 2;

_i pushBack "rhs_VOG25p";
_u pushBack 0;
_p pushBack 2;

_i pushBack "rhs_vg40tb";
_u pushBack 0;
_p pushBack 2;

_i pushBack "rhs_vg40sz";
_u pushBack 0;
_p pushBack 2;

_i pushBack "rhs_vg40op_white";
_u pushBack 0;
_p pushBack 2;

_i pushBack "rhs_vg40op_green";
_u pushBack 0;
_p pushBack 2;

_i pushBack "rhs_vg40op_red";
_u pushBack 0;
_p pushBack 2;

_i pushBack "rhs_GRD40_white";
_u pushBack 0;
_p pushBack 2;

_i pushBack "rhs_GRD40_green";
_u pushBack 0;
_p pushBack 2;

_i pushBack "rhs_GRD40_red";
_u pushBack 0;
_p pushBack 2;


_i pushBack "SmokeShellOrange";
_u pushBack 0;
_p pushBack 2;

_i pushBack "Chemlight_green";
_u pushBack 0;
_p pushBack 2;

_i pushBack "Chemlight_red";
_u pushBack 0;
_p pushBack 2;

_i pushBack "Chemlight_yellow";
_u pushBack 0;
_p pushBack 2;

_i pushBack "Chemlight_blue";
_u pushBack 0;
_p pushBack 2;


//--- Weapons (Nested array elements are defined but skiped in the gear menu)
_i pushBack "rhs_weap_ak74m_dtk";
_u pushBack 0;
_p pushBack 20;

_i pushBack "rhs_weap_ak74m_folded_dtk";
_u pushBack 0;
_p pushBack 20;

_i pushBack "rhs_weap_ak74m_camo_dtk";
_u pushBack 0;
_p pushBack 20;

_i pushBack "rhs_weap_ak74m_desert_dtk";
_u pushBack 0;
_p pushBack 20;

_i pushBack "rhs_weap_ak74m_plummag_dtk";
_u pushBack 0;
_p pushBack 20;

_i pushBack "rhs_weap_ak74m_2mag_dtk";
_u pushBack 0;
_p pushBack 20;

_i pushBack "rhs_weap_ak74m_2mag_camo_dtk";
_u pushBack 0;
_p pushBack 20;

_i pushBack "rhs_weap_ak74m_gp25_dtk";
_u pushBack 0;
_p pushBack 20;

_i pushBack "rhs_weap_ak103_dtk";
_u pushBack 0;
_p pushBack 25;

_i pushBack "rhs_weap_ak103_1_dtk";
_u pushBack 0;
_p pushBack 25;

_i pushBack "rhs_weap_ak103_2_dtk";
_u pushBack 0;
_p pushBack 25;

_i pushBack "rhs_weap_ak103_npz_dtk";
_u pushBack 0;
_p pushBack 25;

_i pushBack "rhs_weap_akm";
_u pushBack 0;
_p pushBack 25;

_i pushBack "rhs_weap_akms";
_u pushBack 0;
_p pushBack 25;

_i pushBack "rhs_weap_akm_gp25";
_u pushBack 0;
_p pushBack 25;

_i pushBack "rhs_weap_akms_gp25";
_u pushBack 0;
_p pushBack 25;

_i pushBack "rhs_weap_rsp30_white";
_u pushBack 0;
_p pushBack 25;

_i pushBack "rhs_weap_rsp30_green";
_u pushBack 0;
_p pushBack 25;

_i pushBack "rhs_weap_rsp30_red";
_u pushBack 0;
_p pushBack 25;

_i pushBack "rhs_weap_pya";
_u pushBack 0;
_p pushBack 25;

_i pushBack "rhs_weap_makarov_pmm";
_u pushBack 0;
_p pushBack 25;

_i pushBack "rhs_weap_tr8";
_u pushBack 0;
_p pushBack 25;

_i pushBack "rhs_weap_pkp";
_u pushBack 0;
_p pushBack 30;

_i pushBack "rhs_weap_pkm";
_u pushBack 0;
_p pushBack 30;

_i pushBack "rhs_weap_svdp";
_u pushBack 0;
_p pushBack 50;

_i pushBack "rhs_weap_svdp_wd";
_u pushBack 0;
_p pushBack 50;

_i pushBack "rhs_weap_svds";
_u pushBack 0;
_p pushBack 50;

_i pushBack "rhs_weap_svdp_npz";
_u pushBack 0;
_p pushBack 50;

_i pushBack "rhs_weap_svdp_wd_npz";
_u pushBack 0;
_p pushBack 50;

_i pushBack "rhs_weap_svds_npz";
_u pushBack 0;
_p pushBack 50;

_i pushBack "rhs_weap_rpg7";
_u pushBack 0;
_p pushBack 50;

_i pushBack "rhs_weap_igla";
_u pushBack 0;
_p pushBack 80;

_i pushBack "rhs_weap_rpg18";
_u pushBack 0;
_p pushBack 30;

_i pushBack "rhs_weap_rpg26";
_u pushBack 0;
_p pushBack 30;

_i pushBack "rhs_weap_rshg2";
_u pushBack 0;
_p pushBack 30;

//--- Uniforms
_i pushBack "rhs_uniform_flora";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_uniform_vdv_flora";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_uniform_msv_emr";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_uniform_vdv_emr";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_uniform_vdv_mflora";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_uniform_m88_patchless";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_uniform_df15";
_u pushBack 0;
_p pushBack 15;


//--- Vests



_i pushBack "rhs_6sh46";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_6b13";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_6b13_6sh92";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_6b13_crewofficer";
_u pushBack 0;
_p pushBack 10;


_i pushBack "rhs_6b13_6sh92_vog";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_6b13_6sh92_headset_mapcase";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_6b13_6sh92_radio";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_6b13_flora";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_6b13_Flora_crewofficer";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_6b13_Flora_6sh92_vog";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_6b13_Flora_6sh92_headset_mapcase";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_6b13_Flora_6sh92_radio";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_6b13_emr";
_u pushBack 0;
_p pushBack 10;


_i pushBack "rhs_6b23";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_6b23_crewofficer";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_6b23_engineer";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_6b23_medic";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_6b23_rifleman";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_6b23_6sh92";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_6b23_6sh92_radio";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_6b23_6sh92_vog";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_6b23_6sh92_vog_headset";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_6b23_6sh92_headset";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_6b23_6sh92_headset_mapcase";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_6b23_digi";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_6b23_digi_crewofficer";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_6b23_digi_engineer";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_6b23_digi_medic";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_6b23_digi_rifleman";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_6b23_digi_6sh92";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_6b23_digi_6sh92_radio";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_6b23_digi_6sh92_vog";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_6b23_digi_6sh92_vog_headset";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_6b23_digi_6sh92_headset";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_6b23_digi_6sh92_headset_mapcase";
_u pushBack 0;
_p pushBack 10;


//mflora
_i pushBack "rhs_6b23_ML";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_6b23_ML_crewofficer";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_6b23_ML_engineer";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_6b23_ML_medic";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_6b23_ML_rifleman";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_6b23_ML_6sh92";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_6b23_ML_6sh92_radio";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_6b23_ML_6sh92_vog";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_6b23_ML_6sh92_vog_headset";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_6b23_ML_6sh92_headset";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_6b23_ML_6sh92_headset_mapcase";
_u pushBack 0;
_p pushBack 10;

//6sh92

_i pushBack "rhs_6sh92";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_6sh92_vog";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_6sh92_vog_headset";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_6sh92_headset";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_6sh92_radio";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_6sh92_digi";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_6sh92_digi_vog";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_6sh92_digi_vog_headset";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_6sh92_digi_headset";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_6sh92_digi_radio";
_u pushBack 0;
_p pushBack 10;

//other
_i pushBack "rhs_6sh46";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_vest_commander";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_vydra_3m";
_u pushBack 0;
_p pushBack 10;

//--- Backpacks
_i pushBack "rhs_assault_umbts";
_u pushBack 0;
_p pushBack 15;

_i pushBack "rhs_assault_umbts_engineer";
_u pushBack 0;
_p pushBack 15;

_i pushBack "rhs_sidor";
_u pushBack 0;
_p pushBack 15;

_i pushBack "rhs_rpg";
_u pushBack 0;
_p pushBack 15;

_i pushBack "RHS_NSV_Gun_Bag";
_u pushBack 0;
_p pushBack 15;

_i pushBack "RHS_NSV_Tripod_Bag";
_u pushBack 0;
_p pushBack 15;

_i pushBack "tf_bussole";
_u pushBack 0;
_p pushBack 55;

//--- Glasses
_i pushBack "G_Combat";
_u pushBack 0;
_p pushBack 5;

_i pushBack "G_Diving";
_u pushBack 1;
_p pushBack 5;

_i pushBack "G_Shades_Black";
_u pushBack 0;
_p pushBack 2;

_i pushBack "G_Tactical_Clear";
_u pushBack 1;
_p pushBack 4;

_i pushBack "G_Sport_Blackred";
_u pushBack 0;
_p pushBack 2;

_i pushBack "rhs_balaclava";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhs_scarf";
_u pushBack 0;
_p pushBack 5;

//--- Helms
_i pushBack "rhs_6b27m_green";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhs_6b27m_green_ess";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhs_6b27m_green_bala";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhs_6b27m_green_ess_bala";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhs_6b27m";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhs_6b27m_ess";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhs_6b27m_bala";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhs_6b27m_ess_bala";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhs_6b27m_digi";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhs_6b27m_digi_bala";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhs_6b28_green";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhs_6b28_green_ess";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhs_6b28_green_bala";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhs_6b28_green_ess_bala";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhs_6b28";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhs_6b28_ess";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhs_6b28_bala";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhs_6b28_ess_bala";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhs_6b28_flora";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhs_6b28_flora_ess";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhs_6b28_flora_bala";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhs_6b28_flora_ess_bala";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhs_Booniehat_digi";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhs_Booniehat_flora";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhs_beanie";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhs_beanie_green";
_u pushBack 0;
_p pushBack 5;



_i pushBack "rhs_fieldcap";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhs_fieldcap_digi";
_u pushBack 0;
_p pushBack 5;


_i pushBack "rhs_fieldcap_helm";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhs_fieldcap_helm_digi";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhs_tsh4";
_u pushBack 0;
_p pushBack 7;

_i pushBack "rhs_tsh4_ess";
_u pushBack 0;
_p pushBack 7;

_i pushBack "rhs_tsh4_bala";
_u pushBack 0;
_p pushBack 7;

_i pushBack "rhs_tsh4_ess_bala";
_u pushBack 0;
_p pushBack 7;

_i pushBack "rhs_zsh7a_mike";
_u pushBack 0;
_p pushBack 7;

_i pushBack "rhs_zsh7a";
_u pushBack 0;
_p pushBack 7;

//--- Accessories
_i pushBack "rhs_acc_tgpa";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhs_acc_tgpv";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhs_acc_dtk";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhs_acc_dtk1";
_u pushBack 0;
_p pushBack 5;


_i pushBack "rhs_acc_dtk1k";
_u pushBack 0;
_p pushBack 5;


_i pushBack "rhs_acc_dtk3";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhs_acc_dtk4screw";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhs_acc_dtk4short";
_u pushBack 0;
_p pushBack 5;


_i pushBack "rhs_acc_dtk4long";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhs_acc_pbs1";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhs_acc_ak5";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhs_acc_1p29";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhs_acc_1p63";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhs_acc_1p78";
_u pushBack 0;
_p pushBack 5;


_i pushBack "rhs_acc_ekp1";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhs_acc_1pn93_1";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhs_acc_1pn93_2";
_u pushBack 0;
_p pushBack 5;


_i pushBack "rhs_acc_pgo7v";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhs_acc_pkas";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhs_acc_pso1m2";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhs_acc_npz";
_u pushBack 0;
_p pushBack 5;


//--- Items
_i pushBack "NVGoggles";
_u pushBack 0;
_p pushBack 15;

_i pushBack "rhs_pdu4";
_u pushBack 2;
_p pushBack 50;

_i pushBack "ItemGPS";
_u pushBack 0;
_p pushBack 10;

_i pushBack "O_UavTerminal";
_u pushBack 2;
_p pushBack 25;

_i pushBack "ItemMap";
_u pushBack 0;
_p pushBack 2;

_i pushBack "itemradio";
_u pushBack 0;
_p pushBack 3;

_i pushBack "itemcompass";
_u pushBack 0;
_p pushBack 1;

_i pushBack "itemwatch";
_u pushBack 0;
_p pushBack 1;

_i pushBack "Toolkit";
_u pushBack 0;
_p pushBack 25;

_i pushBack "FirstAidKit";
_u pushBack 0;
_p pushBack 15;

_i pushBack "Medikit";
_u pushBack 0;
_p pushBack 15;

_i pushBack "Binocular";
_u pushBack 0;
_p pushBack 5;
*/

[_faction, _i, _u, _p] call compile preprocessFileLineNumbers "Common\Config\Gear\Gear_Config_Set.sqf";

//--- Templates (Those lines can be generated in the RPT on purchase by uncommenting the diag_log in Events_UI_GearMenu.sqf >> "onPurchase").
_t = [];
_t = _t		+ [];


[_faction, _t] call compile preprocessFileLineNumbers "Common\Config\Gear\Gear_Template_Set.sqf";