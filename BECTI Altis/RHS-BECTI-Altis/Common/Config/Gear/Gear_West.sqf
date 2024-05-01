private ["_faction", "_i", "_p", "_side", "_u"];

_side = _this;
_faction = "West";

_i = [];
_u = [];
_p = [];

//--- Magazines
_i pushBack "rhs_mine_M19_ammo";
_u pushBack 1;
_p pushBack 20;

_i pushBack "APERSMine_Range_Mag";
_u pushBack 1;
_p pushBack 10;

_i pushBack "APERSBoundingMine_Range_Mag";
_u pushBack 1;
_p pushBack 10;

_i pushBack "SLAMDirectionalMine_Wire_Mag";
_u pushBack 0;
_p pushBack 10;

_i pushBack "APERSTripMine_Wire_Mag";
_u pushBack 1;
_p pushBack 5;

_i pushBack "rhsusf_m112x4_mag";
_u pushBack 2;
_p pushBack 20;

_i pushBack "rhsusf_m112_mag";
_u pushBack 1;
_p pushBack 15;

_i pushBack "ClaymoreDirectionalMine_Remote_Mag";
_u pushBack 0;
_p pushBack 10;

_i pushBack "Laserbatteries";
_u pushBack 2;
_p pushBack 5;

//Magazines
_i pushBack "rhs_mag_30Rnd_556x45_Mk318_Stanag";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_mag_30Rnd_556x45_M855A1_Stanag";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_mag_30Rnd_556x45_M200_Stanag";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhsusf_100Rnd_556x45_soft_pouch";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhsusf_200Rnd_556x45_soft_pouch";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhsusf_50Rnd_762x51";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhsusf_50Rnd_762x51_m80a1epr";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhsusf_50Rnd_762x51_m993";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhsusf_100Rnd_762x51";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhsusf_100Rnd_762x51_m80a1epr";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhsusf_100Rnd_762x51_m993";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhsusf_mag_7x45acp_MHP";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhsusf_20Rnd_762x51_m993_Mag";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhsusf_20Rnd_762x51_m118_special_Mag";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhsusf_5Rnd_300winmag_xm2010";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhsusf_5Rnd_00Buck";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhsusf_8Rnd_00Buck";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhsusf_5Rnd_Slug";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhsusf_8Rnd_Slug";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhsusf_5Rnd_HE";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhsusf_8Rnd_HE";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhsusf_5Rnd_FRAG";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhsusf_8Rnd_FRAG";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_m136_mag";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_m136_hedp_mag";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_m136_hp_mag";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_fgm148_magazine_AT";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_fim92_mag";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_mag_M433_HEDP";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_mag_M4009";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_mag_m576";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_mag_M585_white";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_mag_M661_green";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_mag_M662_red";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_mag_M713_red";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_mag_M714_white";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_mag_M715_green";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_mag_M716_yellow";
_u pushBack 0;
_p pushBack 10;

//Endo magz
_i pushBack "rhs_mag_m67";
_u pushBack 0;
_p pushBack 2;

_i pushBack "rhs_mag_m69";
_u pushBack 0;
_p pushBack 2;

_i pushBack "rhs_mag_mk84";
_u pushBack 0;
_p pushBack 1;

_i pushBack "rhs_mag_an_m8hc";
_u pushBack 0;
_p pushBack 2;

_i pushBack "rhs_mag_m18_green";
_u pushBack 0;
_p pushBack 2;

_i pushBack "rhs_mag_m18_purple";
_u pushBack 0;
_p pushBack 2;

_i pushBack "rhs_mag_m18_red";
_u pushBack 0;
_p pushBack 2;

_i pushBack "rhs_mag_m18_yellow";
_u pushBack 0;
_p pushBack 2;

_i pushBack "rhs_mag_mk3a2";
_u pushBack 0;
_p pushBack 2;

_i pushBack "rhs_mag_m7a3_cs";
_u pushBack 0;
_p pushBack 2;

_i pushBack "rhs_mag_an_m14_th3";
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




//--- Weapons
_i pushBack "rhs_weap_m4";
_u pushBack 0;
_p pushBack 20;

_i pushBack "rhs_weap_m4_grip";
_u pushBack 0;
_p pushBack 20;

_i pushBack "rhs_weap_m4_grip2";
_u pushBack 0;
_p pushBack 20;

_i pushBack "rhs_weap_m4_bipod";
_u pushBack 0;
_p pushBack 20;

_i pushBack "rhs_weap_m4_carryhandle";
_u pushBack 0;
_p pushBack 20;

_i pushBack "rhs_weap_m4_carryhandle_pmag";
_u pushBack 0;
_p pushBack 20;

_i pushBack "rhs_weap_m4_m320";
_u pushBack 0;
_p pushBack 20;

_i pushBack "rhs_weap_m4a1";
_u pushBack 0;
_p pushBack 25;

_i pushBack "rhs_weap_m4a1_grip";
_u pushBack 0;
_p pushBack 25;

_i pushBack "rhs_weap_m4a1_grip2";
_u pushBack 0;
_p pushBack 25;

_i pushBack "rhs_weap_m4a1_bipod";
_u pushBack 0;
_p pushBack 25;

_i pushBack "rhs_weap_m4a1_m320";
_u pushBack 0;
_p pushBack 25;

_i pushBack "rhs_weap_m16a4";
_u pushBack 0;
_p pushBack 20;

_i pushBack "rhs_weap_m16a4_grip";
_u pushBack 0;
_p pushBack 20;

_i pushBack "rhs_weap_m16a4_bipod";
_u pushBack 0;
_p pushBack 20;

_i pushBack "rhs_weap_m16a4_carryhandle";
_u pushBack 0;
_p pushBack 20;

_i pushBack "rhs_weap_m16a4_carryhandle_pmag";
_u pushBack 0;
_p pushBack 20;

_i pushBack "rhs_weap_mk18";
_u pushBack 0;
_p pushBack 25;

_i pushBack "rhs_weap_mk18_grip2";
_u pushBack 0;
_p pushBack 25;

_i pushBack "rhs_weap_m4a1_blockII";
_u pushBack 0;
_p pushBack 25;

_i pushBack "rhs_weap_m4a1_blockII_grip2";
_u pushBack 0;
_p pushBack 25;

_i pushBack "rhs_weap_m240B";
_u pushBack 0;
_p pushBack 30;

_i pushBack "rhs_weap_m240B_CAP";
_u pushBack 0;
_p pushBack 30;

_i pushBack "rhs_weap_m240G";
_u pushBack 0;
_p pushBack 30;


_i pushBack "rhs_weap_m249_pip_S";
_u pushBack 0;
_p pushBack 30;

_i pushBack "rhs_weap_m249_pip_S_para";
_u pushBack 0;
_p pushBack 30;

_i pushBack "rhs_weap_m249_pip_S_vfg";
_u pushBack 0;
_p pushBack 30;

_i pushBack "rhs_weap_m249_pip_L";
_u pushBack 0;
_p pushBack 30;

_i pushBack "rhs_weap_m249_pip_L_para";
_u pushBack 0;
_p pushBack 30;

_i pushBack "rhs_weap_m249_pip_L_vfg";
_u pushBack 0;
_p pushBack 30;

_i pushBack "rhs_weap_mk14";
_u pushBack 0;
_p pushBack 50;

_i pushBack "rhs_weap_sr25";
_u pushBack 0;
_p pushBack 50;

_i pushBack "rhs_weap_sr25_ec";
_u pushBack 0;
_p pushBack 50;

_i pushBack "rhsusf_weap_m1911a1";
_u pushBack 0;
_p pushBack 50;

_i pushBack "rhs_weap_XM2010";
_u pushBack 0;
_p pushBack 60;

_i pushBack "rhs_weap_XM2010_d";
_u pushBack 0;
_p pushBack 60;

_i pushBack "rhs_weap_XM2010_wd";
_u pushBack 0;
_p pushBack 60;

_i pushBack "rhs_weap_XM2010_sa";
_u pushBack 0;
_p pushBack 60;

_i pushBack "rhs_weap_M590_5RD";
_u pushBack 0;
_p pushBack 30;

_i pushBack "rhs_weap_M590_8RD";
_u pushBack 0;
_p pushBack 30;

_i pushBack "rhs_weap_M320";
_u pushBack 0;
_p pushBack 50;

_i pushBack "rhs_weap_M136";
_u pushBack 0;
_p pushBack 30;

_i pushBack "rhs_weap_M136_hedp";
_u pushBack 0;
_p pushBack 30;

_i pushBack "rhs_weap_M136_hp";
_u pushBack 0;
_p pushBack 30;

_i pushBack "rhs_weap_fgm148";
_u pushBack 0;
_p pushBack 80;

_i pushBack "rhs_weap_fim92";
_u pushBack 0;
_p pushBack 80;

//--- Uniforms
_i pushBack "rhs_uniform_cu_ucp";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_uniform_cu_ocp";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_uniform_cu_ocp_82nd";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_uniform_cu_ocp_101st";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_uniform_cu_ocp_10th";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_uniform_cu_ucp_82nd";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_uniform_cu_ucp_101st";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_uniform_cu_ucp_10th";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_uniform_FROG01_d";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_uniform_FROG01_wd";
_u pushBack 0;
_p pushBack 10;

_i pushBack "rhs_uniform_FROG01_m81";
_u pushBack 0;
_p pushBack 10;



//--- Vests
_i pushBack "rhsusf_iotv_ucp";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_iotv_ucp_medic";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_iotv_ucp_grenadier";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_iotv_ucp_repair";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_iotv_ucp_rifleman";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_iotv_ucp_SAW";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_iotv_ucp_squadleader";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_iotv_ucp_teamleader";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_iotv_ocp";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_iotv_ocp_medic";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_iotv_ocp_grenadier";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_iotv_ocp_repair";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_iotv_ocp_rifleman";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_iotv_ocp_SAW";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_iotv_ocp_squadleader";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_iotv_ocp_teamleader";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_spc";
_u pushBack 0;
_p pushBack 5;


//--- Backpacks
_i pushBack "rhsusf_assault_eagleaiii_ucp";
_u pushBack 0;
_p pushBack 15;

_i pushBack "rhsusf_assault_eagleaiii_ocp";
_u pushBack 0;
_p pushBack 15;

_i pushBack "rhsusf_assault_eagleaiii_ocp_engineer";
_u pushBack 0;
_p pushBack 15;

_i pushBack "rhsusf_assault_eagleaiii_ocp_medic";
_u pushBack 0;
_p pushBack 15;

_i pushBack "rhsusf_assault_eagleaiii_ocp_demo";
_u pushBack 0;
_p pushBack 15;

_i pushBack "rhsusf_assault_eagleaiii_coy";
_u pushBack 0;
_p pushBack 15;

_i pushBack "rhsusf_falconii";
_u pushBack 0;
_p pushBack 15;

_i pushBack "tf_rt1523g_rhs";
_u pushBack 0;
_p pushBack 55;

_i pushBack "RHS_M2_Gun_Bag";
_u pushBack 0;
_p pushBack 15;

_i pushBack "RHS_M2_Tripod_Bag";
_u pushBack 0;
_p pushBack 15;

_i pushBack "RHS_M2_MiniTripod_Bag";
_u pushBack 0;
_p pushBack 15;

_i pushBack "RHS_Mk19_Gun_Bag";
_u pushBack 0;
_p pushBack 15;

_i pushBack "RHS_Mk19_Tripod_Bag";
_u pushBack 0;
_p pushBack 15;


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

_i pushBack "rhs_googles_clear";
_u pushBack 0;
_p pushBack 2;

_i pushBack "rhs_googles_black";
_u pushBack 0;
_p pushBack 2;

//--- Helms

_i pushBack "rhsusf_ach_bare";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_ach_bare_ess";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_ach_bare_headset";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_ach_bare_headset_ess";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_ach_bare_tan";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_ach_bare_tan_ess";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_ach_bare_tan_headset";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_ach_bare_tan_headset_ess";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_ach_bare_wood";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_ach_bare_wood_ess";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_ach_bare_wood_headset";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_ach_bare_wood_headset_ess";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_ach_bare_des";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_ach_bare_des_ess";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_ach_bare_des_headset";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_ach_bare_des_headset_ess";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_ach_bare_semi";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_ach_bare_semi_ess";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_ach_bare_semi_headset";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_ach_bare_semi_headset_ess";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_ach_bare_ucp";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_ach_helmet_ess_ucp";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_ach_helmet_headset_ucp";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_ach_helmet_headset_ess_ucp";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_ach_bare_ocp";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_ach_helmet_ess_ocp";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_ach_helmet_headset_ocp";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_ach_helmet_headset_ess_ocp";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_ach_helmet_m81";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_opscore_02";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_opscore_01";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_opscore_02_tan";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_opscore_01_tan";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_opscore_04_ocp";
_u pushBack 0;
_p pushBack 2;

_i pushBack "rhsusf_opscore_03_ocp";
_u pushBack 0;
_p pushBack 2;

_i pushBack "rhs_Booniehat_ucp";
_u pushBack 0;
_p pushBack 2;

_i pushBack "rhs_Booniehat_ocp";
_u pushBack 0;
_p pushBack 2;

_i pushBack "rhsusf_patrolcap_ucp";
_u pushBack 0;
_p pushBack 2;

_i pushBack "rhsusf_patrolcap_ocp";
_u pushBack 0;
_p pushBack 2;

_i pushBack "rhsusf_cvc_helmet";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_cvc_ess";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_cvc_green_helmet";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_cvc_green_ess";
_u pushBack 0;
_p pushBack 5;

_i pushBack "H_PilotHelmetHeli_B";
_u pushBack 0;
_p pushBack 5;

_i pushBack "H_CrewHelmetHeli_B";
_u pushBack 0;
_p pushBack 5;



_i pushBack "rhsusf_lwh_helmet_marpatd";
_u pushBack 0;
_p pushBack 15;

_i  pushBack "rhsusf_lwh_helmet_marpatwd";
_u pushBack 0;
_p pushBack 15;

_i pushBack "rhsusf_mich_helmet_marpatwd";
_u pushBack 0;
_p pushBack 15;

_i  pushBack "rhsusf_mich_helmet_marpatwd_headset";
_u pushBack 0;
_p pushBack 15;

_i  pushBack "rhsusf_mich_helmet_marpatd";
_u pushBack 0;
_p pushBack 15;

_i pushBack "rhsusf_mich_helmet_marpatd_headset";
_u pushBack 0;
_p pushBack 15;

_i  pushBack "rhsusf_mich_helmet_marpatwd_alt";
_u pushBack 0;
_p pushBack 15;

_i  pushBack "rhsusf_mich_helmet_marpatwd_alt_headset";
_u pushBack 0;
_p pushBack 15;

_i  pushBack "rhsusf_mich_helmet_marpatd_alt";
_u pushBack 0;
_p pushBack 15;

_i  pushBack "rhsusf_mich_helmet_marpatd_alt_headset";
_u pushBack 0;
_p pushBack 15;

_i  pushBack "rhsusf_mich_helmet_marpatwd_norotos";
_u pushBack 0;
_p pushBack 15;

_i  pushBack "rhsusf_mich_helmet_marpatwd_norotos_headset";
_u pushBack 0;
_p pushBack 15;

_i  pushBack "rhsusf_mich_helmet_marpatd_norotos";
_u pushBack 0;
_p pushBack 15;

_i  pushBack "rhsusf_mich_helmet_marpatd_norotos_headset";
_u pushBack 0;
_p pushBack 15;

_i  pushBack "rhsusf_mich_helmet_marpatwd_norotos_arc";
_u pushBack 0;
_p pushBack 15;

_i  pushBack "rhsusf_mich_helmet_marpatwd_norotos_arc_headset";
_u pushBack 0;
_p pushBack 15;

_i  pushBack "rhsusf_mich_helmet_marpatd_norotos_arc";
_u pushBack 0;
_p pushBack 15;

_i  pushBack "rhsusf_mich_helmet_marpatd_norotos_arc_headset";
_u pushBack 0;
_p pushBack 15;

_i  pushBack "rhsusf_mich_bare";
_u pushBack 0;
_p pushBack 15;

_i  pushBack "rhsusf_mich_bare_headset";
_u pushBack 0;
_p pushBack 15;

_i  pushBack "rhsusf_mich_bare_alt";
_u pushBack 0;
_p pushBack 15;

_i  pushBack "rhsusf_mich_bare_norotos_alt";
_u pushBack 0;
_p pushBack 15;

_i  pushBack "rhsusf_mich_bare_norotos_alt_headset";
_u pushBack 0;
_p pushBack 15;

_i  pushBack "rhsusf_mich_bare_norotos_arc_alt";
_u pushBack 0;
_p pushBack 15;

_i  pushBack "rhsusf_mich_bare_norotos_arc_alt_headset";
_u pushBack 0;
_p pushBack 15;

_i  pushBack "rhsusf_mich_bare_norotos";
_u pushBack 0;
_p pushBack 15;

_i  pushBack "rhsusf_mich_bare_norotos_headset";
_u pushBack 0;
_p pushBack 15;

_i  pushBack "rhsusf_mich_bare_norotos_arc";
_u pushBack 0;
_p pushBack 15;

_i  pushBack "rhsusf_mich_bare_norotos_arc_headset";
_u pushBack 0;
_p pushBack 15;

_i  pushBack "rhsusf_mich_bare_tan";
_u pushBack 0;
_p pushBack 15;

_i  pushBack "rhsusf_mich_bare_tan_headset";
_u pushBack 0;
_p pushBack 15;

_i  pushBack "rhsusf_mich_bare_alt_tan";
_u pushBack 0;
_p pushBack 15;

_i  pushBack "rhsusf_mich_bare_norotos_tan";
_u pushBack 0;
_p pushBack 15;

_i  pushBack "rhsusf_mich_bare_norotos_tan_headset";
_u pushBack 0;
_p pushBack 15;

_i  pushBack "rhsusf_mich_bare_norotos_alt_tan";
_u pushBack 0;
_p pushBack 15;

_i  pushBack "rhsusf_mich_bare_norotos_alt_tan_headset";
_u pushBack 0;
_p pushBack 15;

_i  pushBack "rhsusf_mich_bare_norotos_arc_tan";
_u pushBack 0;
_p pushBack 15;

_i  pushBack "rhsusf_mich_bare_norotos_arc_tan_headset";
_u pushBack 0;
_p pushBack 15;

_i  pushBack "rhsusf_mich_bare_norotos_arc_alt_tan";
_u pushBack 0;
_p pushBack 15;

_i  pushBack "rhsusf_mich_bare_norotos_arc_alt_tan_headset";
_u pushBack 0;
_p pushBack 15;

_i  pushBack "rhsusf_mich_bare_semi";
_u pushBack 0;
_p pushBack 15;

_i  pushBack "rhsusf_mich_bare_semi_headset";
_u pushBack 0;
_p pushBack 15;

_i  pushBack "rhsusf_mich_bare_alt_semi";
_u pushBack 0;
_p pushBack 15;

_i  pushBack "rhsusf_mich_bare_norotos_semi";
_u pushBack 0;
_p pushBack 15;

_i  pushBack "rhsusf_mich_bare_norotos_semi_headset";
_u pushBack 0;
_p pushBack 15;

_i  pushBack "rhsusf_mich_bare_norotos_alt_semi";
_u pushBack 0;
_p pushBack 15;

_i  pushBack "rhsusf_mich_bare_norotos_alt_semi_headset";
_u pushBack 0;
_p pushBack 15;

_i  pushBack "rhsusf_mich_bare_norotos_arc_semi";
_u pushBack 0;
_p pushBack 15;

_i  pushBack "rhsusf_mich_bare_norotos_arc_semi_headset";
_u pushBack 0;
_p pushBack 15;

_i  pushBack "rhsusf_mich_bare_norotos_arc_alt_semi";
_u pushBack 0;
_p pushBack 15;

_i  pushBack "rhsusf_mich_bare_norotos_arc_alt_semi_headset";
_u pushBack 0;
_p pushBack 15;

//--- Accessories
_i pushBack "rhsusf_acc_anpeq15";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_acc_anpeq15_light";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_acc_anpeq15a";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_acc_anpeq15side";
_u pushBack 0;
_p pushBack 5;


_i pushBack "rhsusf_acc_EOTECH";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_acc_eotech_552";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_acc_LEUPOLDMK4";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_acc_LEUPOLDMK4_2";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_acc_ELCAN";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_acc_ACOG_PIP";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_acc_ACOG";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_acc_ACOG2";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_acc_ACOG3";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_acc_compm4";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_acc_SR25S";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_acc_harris_bipod";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_acc_M2010S";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_acc_rotex5_grey";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_acc_rotex5_tan";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_acc_nt4_black";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_acc_nt4_tan";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_acc_SF3P556";
_u pushBack 0;
_p pushBack 5;

_i pushBack "rhsusf_acc_SFMB556";
_u pushBack 0;
_p pushBack 5;


//--- Items
_i pushBack "rhsusf_ANPVS_14";
_u pushBack 0;
_p pushBack 15;

_i pushBack "rhsusf_ANPVS_15";
_u pushBack 0;
_p pushBack 15;

_i pushBack "lerca_1200_black";
_u pushBack 0;
_p pushBack 5;

_i pushBack "lerca_1200_tan";
_u pushBack 0;
_p pushBack 5;

_i pushBack "Leupold_Mk4";
_u pushBack 0;
_p pushBack 5;


_i pushBack "Laserdesignator";
_u pushBack 0;
_p pushBack 50;

_i pushBack "ItemGPS";
_u pushBack 0;
_p pushBack 10;

_i pushBack "B_UavTerminal";
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

[_faction, _i, _u, _p] call compile preprocessFileLineNumbers "Common\Config\Gear\Gear_Config_Set.sqf";

//--- Templates (Generated on purchase by uncommenting the diag_log in Events_UI_GearMenu.sqf >> "onPurchase").
_t = [];
_t = _t 	+ [];


[_faction, _t] call compile preprocessFileLineNumbers "Common\Config\Gear\Gear_Template_Set.sqf";