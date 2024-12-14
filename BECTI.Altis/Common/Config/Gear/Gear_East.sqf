private ["_faction", "_i", "_p", "_side", "_u"];

_side = _this;
_faction = "East";

_i = [];
_u = [];
_p = [];

//--- Explosives ---

_i = _i		+ ["ATMine_Range_Mag"];
_u = _u		+ [2];
_p = _p		+ [40];

_i = _i		+ ["APERSMine_Range_Mag"];
_u = _u		+ [0];
_p = _p		+ [30];

_i = _i		+ ["APERSBoundingMine_Range_Mag"];
_u = _u		+ [0];
_p = _p		+ [40];

_i = _i		+ ["SLAMDirectionalMine_Wire_Mag"];
_u = _u		+ [0];
_p = _p		+ [25];

_i = _i		+ ["APERSTripMine_Wire_Mag"];
_u = _u		+ [0];
_p = _p		+ [15];

_i = _i		+ ["SatchelCharge_Remote_Mag"];
_u = _u		+ [2];
_p = _p		+ [50];

_i = _i		+ ["DemoCharge_Remote_Mag"];
_u = _u		+ [1];
_p = _p		+ [30];

_i = _i		+ ["ClaymoreDirectionalMine_Remote_Mag"];
_u = _u		+ [0];
_p = _p		+ [20];

_i = _i		+ ["Laserbatteries"];
_u = _u		+ [3];
_p = _p		+ [30];


// --- Rifles ---

_i = _i        + ["CUP_arifle_AKM_early"];
_u = _u        + [0];
_p = _p        + [15];

_i = _i        + ["CUP_arifle_AKM_GL_early"];
_u = _u        + [0];
_p = _p        + [20];

_i = _i        + ["CUP_arifle_AKMN_railed"];
_u = _u        + [2];
_p = _p        + [20];

_i = _i        + ["CUP_arifle_AKMN_railed_afg"];
_u = _u        + [3];
_p = _p        + [20];

_i = _i        + ["CUP_arifle_AKS74U"];
_u = _u        + [0];
_p = _p        + [15];

_i = _i        + ["CUP_arifle_AK74M"];
_u = _u        + [0];
_p = _p        + [20];

_i = _i        + ["CUP_arifle_AK74M_GL"];
_u = _u        + [0];
_p = _p        + [30];

_i = _i        + ["CUP_arifle_AK74M_GL_top_rail"];
_u = _u        + [1];
_p = _p        + [35];

_i = _i        + ["CUP_arifle_AK74M_GL_railed"];
_u = _u        + [2];
_p = _p        + [35];

_i = _i        + ["CUP_arifle_AK74M_top_rail"];
_u = _u        + [1];
_p = _p        + [25];

_i = _i        + ["CUP_arifle_AK74M_railed"];
_u = _u        + [2];
_p = _p        + [30];

_i = _i        + ["CUP_arifle_AK74M_railed_afg"];
_u = _u        + [3];
_p = _p        + [30];

_i = _i        + ["CUP_arifle_AK103"];
_u = _u        + [1];
_p = _p        + [20];

_i = _i        + ["CUP_arifle_AK103_railed"];
_u = _u        + [3];
_p = _p        + [20];

_i = _i        + ["CUP_arifle_AK103_GL"];
_u = _u        + [1];
_p = _p        + [25];

_i = _i        + ["CUP_arifle_AK103_GL_railed"];
_u = _u        + [3];
_p = _p        + [25];

_i = _i        + ["CUP_arifle_AK104"];
_u = _u        + [2];
_p = _p        + [25];

_i = _i        + ["CUP_arifle_AK104_railed"];
_u = _u        + [3];
_p = _p        + [30];

_i = _i        + ["CUP_arifle_AK105"];
_u = _u        + [2];
_p = _p        + [25];

_i = _i        + ["CUP_arifle_AK105_railed"];
_u = _u        + [3];
_p = _p        + [30];

_i = _i        + ["CUP_arifle_AK12_black"];
_u = _u        + [2];
_p = _p        + [30];

_i = _i        + ["CUP_arifle_AK12_AFG_black"];
_u = _u        + [3];
_p = _p        + [35];

_i = _i        + ["CUP_arifle_AK12_VG_black"];
_u = _u        + [3];
_p = _p        + [35];

_i = _i        + ["CUP_arifle_AK12_GP34_black"];
_u = _u        + [2];
_p = _p        + [40];

_i = _i        + ["CUP_arifle_AK15_black"];
_u = _u        + [2];
_p = _p        + [30];

_i = _i        + ["CUP_arifle_AK15_AFG_black"];
_u = _u        + [3];
_p = _p        + [35];

_i = _i        + ["CUP_arifle_AK15_VG_black"];
_u = _u        + [3];
_p = _p        + [35];

_i = _i        + ["CUP_arifle_AK15_GP34_black"];
_u = _u        + [2];
_p = _p        + [40];

_i = _i        + ["CUP_arifle_AS_VAL"];
_u = _u        + [2];
_p = _p        + [40];

_i = _i        + ["CUP_arifle_AS_VAL_VFG"];
_u = _u        + [3];
_p = _p        + [45];

_i = _i        + ["CUP_arifle_OTS14_GROZA_762_Grip"];
_u = _u        + [3];
_p = _p        + [40];

_i = _i        + ["CUP_arifle_OTS14_GROZA_762_GL"];
_u = _u        + [3];
_p = _p        + [45];

_i = _i		    + ["CUP_arifle_AUG_A1"];
_u = _u		    + [3];
_p = _p		    + [25];

_i = _i        + ["CUP_lmg_PKM"];
_u = _u        + [1];
_p = _p        + [65];

_i = _i        + ["CUP_lmg_Pecheneg"];
_u = _u        + [2];
_p = _p        + [75];

_i = _i        + ["CUP_lmg_Pecheneg_B50_vfg"];
_u = _u        + [3];
_p = _p        + [85];
 
_i = _i        + ["CUP_srifle_SVD"];
_u = _u        + [1];
_p = _p        + [65];

_i = _i        + ["CUP_arifle_RPK74"];
_u = _u        + [1];
_p = _p        + [45];

_i = _i        + ["CUP_arifle_RPK74M"];
_u = _u        + [2];
_p = _p        + [55];

_i = _i        + ["CUP_arifle_RPK74M_railed"];
_u = _u        + [3];
_p = _p        + [65];

_i = _i        + ["CUP_sgun_Saiga12K"];
_u = _u        + [2];
_p = _p        + [35];

_i = _i        + ["CUP_sgun_Saiga12K_top_rail"];
_u = _u        + [3];
_p = _p        + [40];
 
// --- Launchers ---
 
_i = _i        + ["rhs_weap_igla"];
_u = _u        + [2];
_p = _p        + [250];

_i = _i        + ["launch_O_Vorona_green_F"];
_u = _u        + [2];
_p = _p        + [250];
 
_i = _i        + ["rhs_weap_rpg26"];
_u = _u        + [0];
_p = _p        + [35];

_i = _i        + ["rhs_weap_rpg75"];
_u = _u        + [0];
_p = _p        + [40];
 
_i = _i        + ["rhs_weap_rpg7"];
_u = _u        + [0];
_p = _p        + [80];
 
_i = _i        + ["rhs_weap_rshg2"];
_u = _u        + [0];
_p = _p        + [40];
 
// --- Pistols ---
 
_i = _i        + ["CUP_hgun_TT"];
_u = _u        + [0];
_p = _p        + [5];
 
_i = _i        + ["CUP_hgun_Makarov"];
_u = _u        + [0];
_p = _p        + [5];

_i = _i        + ["CUP_hgun_CZ75"];
_u = _u        + [1];
_p = _p        + [8];

_i = _i		    + ["JCA_hgun_P320_black_F"];
_u = _u		    + [2];
_p = _p		    + [5];

_i = _i		    + ["JCA_hgun_P226_black_F"];
_u = _u		    + [2];
_p = _p		    + [5];

_i = _i        + ["rhs_weap_rsp30_white"];
_u = _u        + [2];
_p = _p        + [3];

_i = _i        + ["rhs_weap_rsp30_green"];
_u = _u        + [2];
_p = _p        + [3];

_i = _i        + ["rhs_weap_rsp30_red"];
_u = _u        + [2];
_p = _p        + [3];
 
// --- Weapon Accessories ---

_i = _i        + ["CUP_optic_Aimpoint_5000"];
_u = _u        + [0];
_p = _p        + [7];

_i = _i        + ["CUP_optic_CompM2_low"];
_u = _u        + [0];
_p = _p        + [7];

_i = _i        + ["CUP_optic_CompM4"];
_u = _u        + [0];
_p = _p        + [7];

_i = _i        + ["optic_Holosight_blk_F"];
_u = _u        + [0];
_p = _p        + [7];

_i = _i        + ["rhs_acc_pkas"];
_u = _u        + [0];
_p = _p        + [5];
 
_i = _i        + ["rhs_acc_rakursPM"];
_u = _u        + [1];
_p = _p        + [5];

_i = _i        + ["rhs_acc_1p87"];
_u = _u        + [0];
_p = _p        + [7];

_i = _i        + ["rhs_acc_1p63"];
_u = _u        + [0];
_p = _p        + [7];

_i = _i        + ["rhs_acc_pgo7v"];
_u = _u        + [2];
_p = _p        + [7];

_i = _i        + ["rhs_acc_pgo7v2"];
_u = _u        + [2];
_p = _p        + [7];

_i = _i        + ["rhs_acc_pgo7v3"];
_u = _u        + [2];
_p = _p        + [7];

_i = _i        + ["CUP_optic_PSO_1_open"];
_u = _u        + [1];
_p = _p        + [7];

_i = _i        + ["CUP_optic_PSO_3_open"];
_u = _u        + [2];
_p = _p        + [7];
 
_i = _i        + ["rhs_acc_perst1ik_ris"];
_u = _u        + [2];
_p = _p        + [3];

_i = _i        + ["rhs_acc_2dpZenit_ris"];
_u = _u        + [1];
_p = _p        + [3];

_i = _i        + ["CUP_acc_LLM01_L"];
_u = _u        + [1];
_p = _p        + [3];

_i = _i        + ["CUP_acc_LLM_black"];
_u = _u        + [1];
_p = _p        + [3];

_i = _i		   + ["optic_tws"];
_u = _u		   + [2];
_p = _p		   + [5];

_i = _i		   + ["optic_Nightstalker"];
_u = _u		   + [2];
_p = _p		   + [5];

_i = _i        + ["rhs_acc_tgpa"];
_u = _u        + [3];
_p = _p        + [7];

_i = _i        + ["rhs_acc_uuk"];
_u = _u        + [3];
_p = _p        + [7];

_i = _i        + ["CUP_muzzle_Bizon"];
_u = _u        + [3];
_p = _p        + [7];

_i = _i        + ["CUP_muzzle_snds_KZRZP_AK762"];
_u = _u        + [3];
_p = _p        + [7];

// --- Magazines / Munitions ---

_i = _i        + ["rhs_mag_9k38_rocket"];
_u = _u        + [2];
_p = _p        + [30];
 
_i = _i        + ["rhs_rpg7_PG7V_mag"];
_u = _u        + [0];
_p = _p        + [10];
 
_i = _i        + ["rhs_rpg7_PG7VL_mag"];
_u = _u        + [0];
_p = _p        + [10];
 
_i = _i        + ["rhs_rpg7_PG7VR_mag"];
_u = _u        + [0];
_p = _p        + [10];

_i = _i        + ["rhs_rpg7_TBG7V_mag"];
_u = _u        + [0];
_p = _p        + [10];
 
_i = _i        + ["rhs_rpg7_OG7V_mag"];
_u = _u        + [1];
_p = _p        + [8];
 
_i = _i        + ["rhs_rpg7_type69_airburst_mag"];
_u = _u        + [1];
_p = _p        + [10];

_i = _i        + ["Vorona_HEAT"];
_u = _u        + [2];
_p = _p        + [25];

_i = _i        + ["CUP_30Rnd_545x39_AK74M_M"];
_u = _u        + [0];
_p = _p        + [3];

_i = _i        + ["CUP_30Rnd_545x39_AK74_plum_M"];
_u = _u        + [0];
_p = _p        + [3];
 
_i = _i        + ["CUP_30Rnd_545x39_AK_M"];
_u = _u        + [0];
_p = _p        + [3];

_i = _i        + ["CUP_60Rnd_545x39_AK74M_M"];
_u = _u        + [1];
_p = _p        + [3];
 
_i = _i        + ["CUP_30Rnd_545x39_AK12_M"];
_u = _u        + [2];
_p = _p        + [3];

_i = _i        + ["CUP_30Rnd_762x39_AK15_M"];
_u = _u        + [2];
_p = _p        + [3];

_i = _i        + ["CUP_30Rnd_762x39_AK47_bakelite_M"];
_u = _u        + [0];
_p = _p        + [3];

_i = _i        + ["CUP_30Rnd_762x39_AK47_M"];
_u = _u        + [0];
_p = _p        + [3];

_i = _i        + ["CUP_30Rnd_762x39_AK103_bakelite_M"];
_u = _u        + [1];
_p = _p        + [3];
 
_i = _i        + ["CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"];
_u = _u        + [1];
_p = _p        + [5];

_i = _i        + ["CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M"];
_u = _u        + [1];
_p = _p        + [5];

_i = _i        + ["CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M"];
_u = _u        + [2];
_p = _p        + [6];

_i = _i        + ["CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M"];
_u = _u        + [2];
_p = _p        + [4];

_i = _i		    + ["CUP_30Rnd_556x45_AUG"];
_u = _u		    + [3];
_p = _p		    + [6];

_i = _i        + ["CUP_10Rnd_762x54_SVD_M"];
_u = _u        + [1];
_p = _p        + [2];

_i = _i        + ["CUP_5Rnd_B_Saiga12_Slug"];
_u = _u        + [2];
_p = _p        + [2];

_i = _i        + ["CUP_5Rnd_B_Saiga12_Buck_00"];
_u = _u        + [2];
_p = _p        + [2];

_i = _i        + ["CUP_5Rnd_B_Saiga12_HE"];
_u = _u        + [2];
_p = _p        + [2];

_i = _i        + ["CUP_12Rnd_B_Saiga12_Slug"];
_u = _u        + [3];
_p = _p        + [5];

_i = _i        + ["CUP_12Rnd_B_Saiga12_Buck_00"];
_u = _u        + [3];
_p = _p        + [5];

_i = _i        + ["CUP_12Rnd_B_Saiga12_HE"];
_u = _u        + [3];
_p = _p        + [5];

_i = _i        + ["CUP_30Rnd_9x39_SP5_VIKHR_M"];
_u = _u        + [3];
_p = _p        + [4];

_i = _i        + ["CUP_20Rnd_9x39_SP5_VSS_M"];
_u = _u        + [2];
_p = _p        + [3];

_i = _i        + ["CUP_10Rnd_9x39_SP5_VSS_M"];
_u = _u        + [2];
_p = _p        + [2];

_i = _i        + ["CUP_16Rnd_9x19_cz75"];
_u = _u        + [1];
_p = _p        + [2];

_i = _i        + ["CUP_8Rnd_9x18_Makarov_M"];
_u = _u        + [0];
_p = _p        + [2];

_i = _i        + ["CUP_8Rnd_762x25_TT"];
_u = _u        + [0];
_p = _p        + [2];

_i = _i		    + ["JCA_15Rnd_9x21_P226_Mag"];
_u = _u		    + [2];
_p = _p		    + [2];

_i = _i		    + ["JCA_17Rnd_9x21_P320_Mag"];
_u = _u		    + [2];
_p = _p		    + [2];

_i = _i        + ["CUP_1Rnd_HE_GP25_M"];
_u = _u        + [0];
_p = _p        + [2];

_i = _i        + ["CUP_1Rnd_SMOKE_GP25_M"];
_u = _u        + [0];
_p = _p        + [2];

_i = _i        + ["CUP_1Rnd_SmokeRed_GP25_M"];
_u = _u        + [0];
_p = _p        + [2];

_i = _i        + ["CUP_1Rnd_SmokeGreen_GP25_M"];
_u = _u        + [0];
_p = _p        + [2];

_i = _i        + ["CUP_1Rnd_FlareGreen_GP25_M"];
_u = _u        + [1];
_p = _p        + [2];

_i = _i        + ["CUP_1Rnd_FlareRed_GP25_M"];
_u = _u        + [1];
_p = _p        + [2];
 
 // --- Backpacks ---

_i = _i		   + ["O_UAV_01_backpack_F"];
_u = _u		   + [1];
_p = _p		   + [100];

_i = _i		   + ["O_UAV_01_backpack_Custom"];
_u = _u		   + [1];
_p = _p		   + [110];

_i = _i		   + ["O_UAV_FPV_backpack_F"];
_u = _u		   + [1];
_p = _p		   + [130];

_i = _i        + ["rhs_sidor"];
_u = _u        + [0];
_p = _p        + [5];

_i = _i        + ["b_AssaultPack_khk"];
_u = _u        + [0];
_p = _p        + [10];

_i = _i        + ["rhs_rd54_flora1"];
_u = _u        + [0];
_p = _p        + [10];

_i = _i        + ["rhs_rd54_emr1"];
_u = _u        + [0];
_p = _p        + [10];

_i = _i        + ["rhs_rd54"];
_u = _u        + [0];
_p = _p        + [10];

_i = _i        + ["rhs_rk_sht_30_emr"];
_u = _u        + [0];
_p = _p        + [10];
 
_i = _i        + ["rhs_rk_sht_30_emr_engineer_empty"];
_u = _u        + [1];
_p = _p        + [10];
 
_i = _i        + ["rhs_rk_sht_30_olive"];
_u = _u        + [0];
_p = _p        + [10];

_i = _i        + ["rhs_rk_sht_30_olive_engineer_empty"];
_u = _u        + [1];
_p = _p        + [10];
 
_i = _i        + ["rhs_medic_bag"];
_u = _u        + [0];
_p = _p        + [10]; 

_i = _i        + ["rhs_rpg_2"];
_u = _u        + [0];
_p = _p        + [10];

_i = _i        + ["rhs_rpg_empty"];
_u = _u        + [0];
_p = _p        + [10];

_i = _i        + ["rhs_tortila_emr"];
_u = _u        + [2];
_p = _p        + [10];

_i = _i        + ["rhs_tortila_khaki"];
_u = _u        + [2];
_p = _p        + [10];

_i = _i        + ["rhs_tortila_olive"];
_u = _u        + [2];
_p = _p        + [10];

_i = _i		   + ["b_Kitbag_sgg"];
_u = _u		   + [1];
_p = _p		   + [25];

_i = _i		   + ["rhssaf_kitbag_smb"];
_u = _u		   + [1];
_p = _p		   + [25];

_i = _i		   + ["b_parachute"];
_u = _u		   + [0];
_p = _p		   + [25];

// --- Uniforms ---

_i = _i        + ["rhs_uniform_6sh122_gloves_v2"];
_u = _u        + [2];
_p = _p        + [10];

_i = _i        + ["rhs_uniform_6sh122_gloves_v1"];
_u = _u        + [2];
_p = _p        + [10];

_i = _i        + ["rhs_atacs_fg_uniform_6sh122_v1"];
_u = _u        + [2];
_p = _p        + [10];

_i = _i        + ["rhs_atacs_fg_uniform_6sh122_gloves_v1"];
_u = _u        + [2];
_p = _p        + [10];

_i = _i        + ["rhs_atacs_ag_uniform_6sh122_v2"];
_u = _u        + [2];
_p = _p        + [10];

_i = _i        + ["rhs_atacs_ag_uniform_6sh122_gloves_v2"];
_u = _u        + [2];
_p = _p        + [10];
 
_i = _i        + ["rhs_atacs_fg_mix_1_uniform_6sh122_v1"];
_u = _u        + [2];
_p = _p        + [10];

_i = _i        + ["rhs_atacs_fg_mix_2_uniform_6sh122_v1"];
_u = _u        + [2];
_p = _p        + [10];

_i = _i        + ["rhs_uniform_mix_1_6sh122_gloves_v1"];
_u = _u        + [2];
_p = _p        + [10];

_i = _i        + ["rhs_uniform_mix_2_6sh122_gloves_v1"];
_u = _u        + [2];
_p = _p        + [10];
 
_i = _i        + ["rhs_uniform_gorka_r_g_gloves"];
_u = _u        + [3];
_p = _p        + [15];
 
_i = _i        + ["rhs_uniform_gorka_r_y_gloves"];
_u = _u        + [3];
_p = _p        + [15];

_i = _i        + ["rhs_uniform_gorka_1_a"];
_u = _u        + [2];
_p = _p        + [15];

_i = _i        + ["rhs_uniform_gorka_1_b"];
_u = _u        + [2];
_p = _p        + [15];

_i = _i        + ["rhs_uniform_gorka_1_atacs_ag"];
_u = _u        + [2];
_p = _p        + [15];

_i = _i        + ["rhs_uniform_gorka_1_atacs_fg"];
_u = _u        + [2];
_p = _p        + [15];
 
_i = _i        + ["rhssaf_uniform_mig29_pilot"];
_u = _u        + [1];
_p = _p        + [10];

_i = _i        + ["rhs_uniform_emr_patchless"];
_u = _u        + [0];
_p = _p        + [10];

_i = _i        + ["rhs_uniform_vkpo"];
_u = _u        + [1];
_p = _p        + [10];

_i = _i        + ["rhs_uniform_vkpo_gloves"];
_u = _u        + [1];
_p = _p        + [10];

_i = _i        + ["U_O_FullGhillie_sard"];
_u = _u        + [3];
_p = _p        + [30];

_i = _i        + ["U_O_FullGhillie_ard"];
_u = _u        + [3];
_p = _p        + [30];

 
// --- Face Wear ---
 
_i = _i        + ["rhs_facewear_6m2_1"];
_u = _u        + [0];
_p = _p        + [3]; 

_i = _i        + ["rhs_facewear_6m2"];
_u = _u        + [0];
_p = _p        + [3]; 

_i = _i        + ["rhs_6m2_1_nvg"];
_u = _u        + [0];
_p = _p        + [3]; 

_i = _i        + ["rhs_6m2_nvg"];
_u = _u        + [0];
_p = _p        + [3]; 

_i = _i        + ["rhs_ess_black"];
_u = _u        + [0];
_p = _p        + [3]; 

_i = _i        + ["G_Aviator"];
_u = _u        + [0];
_p = _p        + [3]; 

_i = _i        + ["g_Bandanna_khk"];
_u = _u        + [0];
_p = _p        + [3]; 

_i = _i        + ["g_Bandanna_blk"];
_u = _u        + [0];
_p = _p        + [3]; 

_i = _i        + ["g_Bandanna_oli"];
_u = _u        + [0];
_p = _p        + [3]; 

_i = _i        + ["g_Bandanna_tan"];
_u = _u        + [0];
_p = _p        + [3]; 

_i = _i        + ["g_Balaclava_blk"];
_u = _u        + [0];
_p = _p        + [3]; 

_i = _i        + ["g_Balaclava_oli"];
_u = _u        + [0];
_p = _p        + [3]; 

_i = _i        + ["rhs_balaclava"];
_u = _u        + [0];
_p = _p        + [3]; 

_i = _i        + ["rhs_balaclava1_olive"];
_u = _u        + [0];
_p = _p        + [3];

_i = _i        + ["Deg_TB_Green"];
_u = _u        + [0];
_p = _p        + [3]; 

_i = _i        + ["JCA_G_AirPurifyingRespirator_03_olive_tinted_F"];
_u = _u        + [0];
_p = _p        + [5];

_i = _i        + ["JCA_G_AirPurifyingRespirator_03_black_tinted_F"];
_u = _u        + [0];
_p = _p        + [5];
 
// --- Grenades Throwables ---

_i = _i        + ["rhs_mag_nspd"];
_u = _u        + [0];
_p = _p        + [3]; 

_i = _i        + ["rhs_mag_nspn_green"];
_u = _u        + [0];
_p = _p        + [3]; 

_i = _i        + ["rhs_mag_nspn_red"];
_u = _u        + [0];
_p = _p        + [3]; 

_i = _i        + ["rhs_mag_nspn_yellow"];
_u = _u        + [0];
_p = _p        + [3]; 

_i = _i        + ["rhs_mag_plamyam"];
_u = _u        + [0];
_p = _p        + [3]; 

_i = _i        + ["rhs_mag_zarya2"];
_u = _u        + [0];
_p = _p        + [3]; 

_i = _i        + ["rhs_mag_rdg2_black"];
_u = _u        + [0];
_p = _p        + [3]; 

_i = _i        + ["rhs_mag_rdg2_white"];
_u = _u        + [0];
_p = _p        + [3]; 

_i = _i        + ["rhs_mag_rgn"];
_u = _u        + [0];
_p = _p        + [3]; 

_i = _i        + ["rhs_mag_rgo"];
_u = _u        + [0];
_p = _p        + [3]; 
 
// --- Vests ---
 
_i = _i        + ["rhs_6b45"];
_u = _u        + [0];
_p = _p        + [10]; 

_i = _i        + ["rhs_6b45_holster"];
_u = _u        + [0];
_p = _p        + [10]; 

_i = _i        + ["rhs_6b45_light"];
_u = _u        + [0];
_p = _p        + [10]; 

_i = _i        + ["rhs_6b45_mg"];
_u = _u        + [0];
_p = _p        + [10];

_i = _i        + ["rhs_6b45_off"];
_u = _u        + [0];
_p = _p        + [10]; 

_i = _i        + ["rhs_6b45_rifleman"];
_u = _u        + [0];
_p = _p        + [10];

_i = _i        + ["rhs_6b45_rifleman_2"];
_u = _u        + [0];
_p = _p        + [10];  

_i = _i        + ["rhs_6b45_rifleman_grn"];
_u = _u        + [0];
_p = _p        + [10]; 

_i = _i        + ["rhs_6b45_od"];
_u = _u        + [0];
_p = _p        + [10]; 

_i = _i        + ["rhs_6b45_holster_od"];
_u = _u        + [0];
_p = _p        + [10]; 

_i = _i        + ["rhs_6b45_light_od"];
_u = _u        + [0];
_p = _p        + [10];

_i = _i        + ["rhs_6b45_mg_od"];
_u = _u        + [0];
_p = _p        + [10]; 

_i = _i        + ["rhs_6b45_rifleman_od"];
_u = _u        + [0];
_p = _p        + [10];

_i = _i        + ["rhs_6b45_rifleman_2_od"];
_u = _u        + [0];
_p = _p        + [10]; 

_i = _i        + ["rhs_6b45_grn_od"];
_u = _u        + [0];
_p = _p        + [10]; 

_i = _i        + ["AGE_WAS_AK_AtacsFG"];
_u = _u        + [2];
_p = _p        + [20]; 

_i = _i        + ["AGE_WAS_Light_AK_AtacsFG"];
_u = _u        + [2];
_p = _p        + [20]; 

_i = _i        + ["AGE_WAS_Medium_AK_AtacsFG"];
_u = _u        + [2];
_p = _p        + [20]; 

_i = _i        + ["AGE_WAS_Heavy_AK_AtacsFG"];
_u = _u        + [2];
_p = _p        + [20]; 

_i = _i        + ["AGE_WAS_AK_Olive"];
_u = _u        + [2];
_p = _p        + [20]; 

_i = _i        + ["AGE_WAS_Light_AK_Olive"];
_u = _u        + [2];
_p = _p        + [20]; 

_i = _i        + ["AGE_WAS_Medium_AK_Olive"];
_u = _u        + [2];
_p = _p        + [20]; 

_i = _i        + ["AGE_WAS_Heavy_AK_Olive"];
_u = _u        + [2];
_p = _p        + [20]; 

_i = _i        + ["JCA_MCRP_V_CarrierRigKBT_01_compact_coyote_F"];
_u = _u        + [1];
_p = _p        + [20];

_i = _i        + ["JCA_MCRP_V_CarrierRigKBT_01_combat_coyote_F"];
_u = _u        + [1];
_p = _p        + [20];

_i = _i        + ["rhs_6b13_EMR"];
_u = _u        + [2];
_p = _p        + [10]; 

_i = _i        + ["rhs_6b13_EMR_6sh92"];
_u = _u        + [2];
_p = _p        + [10]; 

_i = _i        + ["rhs_6b13_EMR_6sh92_radio"];
_u = _u        + [2];
_p = _p        + [10];

_i = _i        + ["rhs_6b13_EMR_6sh92_vog"];
_u = _u        + [2];
_p = _p        + [10]; 

_i = _i        + ["rhs_6b13_EMR_6sh92_headset_mapcase"];
_u = _u        + [2];
_p = _p        + [10];

_i = _i        + ["rhs_6b13_Flora"];
_u = _u        + [2];
_p = _p        + [10]; 

_i = _i        + ["rhs_6b13_Flora_6sh92"];
_u = _u        + [2];
_p = _p        + [10]; 

_i = _i        + ["rhs_6b13_Flora_6sh92_radio"];
_u = _u        + [2];
_p = _p        + [10];

_i = _i        + ["rhs_6b13_Flora_6sh92_vog"];
_u = _u        + [2];
_p = _p        + [10]; 

_i = _i        + ["rhs_6b13_Flora_6sh92_headset_mapcase"];
_u = _u        + [2];
_p = _p        + [10];

_i = _i        + ["rhs_6sh117_nco"];
_u = _u        + [3];
_p = _p        + [10]; 

_i = _i        + ["rhs_6sh117_nco_azart"];
_u = _u        + [3];
_p = _p        + [10]; 

_i = _i        + ["rhs_6sh117_rifleman"];
_u = _u        + [3];
_p = _p        + [10]; 

_i = _i        + ["rhs_6sh117_ar"];
_u = _u        + [3];
_p = _p        + [10]; 

_i = _i        + ["rhs_6sh117_mg"];
_u = _u        + [3];
_p = _p        + [10]; 

_i = _i        + ["rhs_6sh117_svd"];
_u = _u        + [3];
_p = _p        + [10]; 

_i = _i        + ["rhs_6sh117_val"];
_u = _u        + [3];
_p = _p        + [10]; 

_i = _i        + ["rhs_6sh117_grn"];
_u = _u        + [3];
_p = _p        + [10]; 

_i = _i        + ["rhs_6sh92_digi"];
_u = _u        + [0];
_p = _p        + [10]; 

_i = _i        + ["rhs_6sh92_digi_vog"];
_u = _u        + [0];
_p = _p        + [10]; 

_i = _i        + ["rhs_6sh92_digi_headset"];
_u = _u        + [1];
_p = _p        + [10];

_i = _i        + ["rhs_6sh92_digi_radio"];
_u = _u        + [1];
_p = _p        + [10]; 

_i = _i        + ["rhs_6sh92_digi_vog_headset"];
_u = _u        + [1];
_p = _p        + [10]; 

_i = _i        + ["CMU33PTan"];
_u = _u        + [2];
_p = _p        + [20]; 


// --- Helmets ---

_i = _i        + ["rhs_6b47_emr"];
_u = _u        + [0];
_p = _p        + [10]; 

_i = _i        + ["rhs_6b47_bare"];
_u = _u        + [0];
_p = _p        + [10]; 

_i = _i        + ["rhs_6b47_emr_1"];
_u = _u        + [0];
_p = _p        + [10]; 

_i = _i        + ["rhs_6b47_emr_2"];
_u = _u        + [0];
_p = _p        + [10]; 

_i = _i        + ["rhs_6b47_6B50"];
_u = _u        + [0];
_p = _p        + [10]; 

_i = _i        + ["rhs_6b7_1m"];
_u = _u        + [0];
_p = _p        + [10]; 

_i = _i        + ["rhs_6b7_1m_bala1"];
_u = _u        + [0];
_p = _p        + [10]; 

_i = _i        + ["rhs_6b7_1m_bala2"];
_u = _u        + [0];
_p = _p        + [10]; 

_i = _i        + ["rhs_6b7_1m_ess"];
_u = _u        + [0];
_p = _p        + [10]; 

_i = _i        + ["rhs_6b7_1m_ess_bala"];
_u = _u        + [0];
_p = _p        + [10]; 

_i = _i        + ["rhs_6b7_1m_olive"];
_u = _u        + [0];
_p = _p        + [10]; 

_i = _i        + ["rhs_6b7_1m_bala1_olive"];
_u = _u        + [0];
_p = _p        + [10]; 

_i = _i        + ["rhs_6b7_1m_bala2_olive"];
_u = _u        + [0];
_p = _p        + [10]; 

_i = _i        + ["RCE_d_LSHZ_B_K"];
_u = _u        + [2];
_p = _p        + [20]; 

_i = _i        + ["RCE_w_LSHZ_B_K"];
_u = _u        + [2];
_p = _p        + [20]; 

_i = _i        + ["RCE_d_LSHZC_C_B_K"];
_u = _u        + [2];
_p = _p        + [20]; 

_i = _i        + ["RCE_w_LSHZC_C_B_K"];
_u = _u        + [2];
_p = _p        + [20]; 

_i = _i        + ["rhs_altyn_bala"];
_u = _u        + [3];
_p = _p        + [20]; 

_i = _i        + ["rhs_altyn"];
_u = _u        + [3];
_p = _p        + [20]; 

_i = _i        + ["rhs_altyn_visordown"];
_u = _u        + [3];
_p = _p        + [20]; 

_i = _i        + ["rhs_altyn_novisor_ess_bala"];
_u = _u        + [3];
_p = _p        + [20]; 

_i = _i        + ["rhs_altyn_novisor_ess"];
_u = _u        + [2];
_p = _p        + [15]; 

_i = _i        + ["rhs_altyn_novisor_bala"];
_u = _u        + [2];
_p = _p        + [15]; 

_i = _i        + ["rhs_altyn_novisor"];
_u = _u        + [2];
_p = _p        + [15]; 

_i = _i        + ["rhs_stsh81"];
_u = _u        + [2];
_p = _p        + [15]; 

_i = _i        + ["rhs_zsh7a_mike_green"];
_u = _u        + [1];
_p = _p        + [5]; 

_i = _i        + ["rhs_zsh7a_mike_green_alt"];
_u = _u        + [1];
_p = _p        + [5]; 

_i = _i        + ["rhs_zsh7a"];
_u = _u        + [1];
_p = _p        + [5]; 

_i = _i        + ["rhs_zsh7a_alt"];
_u = _u        + [1];
_p = _p        + [5]; 

_i = _i        + ["rhs_6b48"];
_u = _u        + [0];
_p = _p        + [10]; 

_i = _i        + ["rhs_tsh4"];
_u = _u        + [0];
_p = _p        + [10]; 

_i = _i        + ["rhs_tsh4_ess"];
_u = _u        + [0];
_p = _p        + [10]; 

_i = _i        + ["rhs_tsh4_ess_bala"];
_u = _u        + [0];
_p = _p        + [10]; 

_i = _i        + ["rhs_beanie_green"];
_u = _u        + [0];
_p = _p        + [5]; 

_i = _i        + ["rhs_Booniehat_digi"];
_u = _u        + [0];
_p = _p        + [5]; 

_i = _i        + ["rhs_fieldcap_digi"];
_u = _u        + [0];
_p = _p        + [5]; 

_i = _i        + ["rhs_fieldcap_digi2"];
_u = _u        + [0];
_p = _p        + [5]; 

_i = _i        + ["rhs_vkpo_cap_alt"];
_u = _u        + [1];
_p = _p        + [5]; 

_i = _i        + ["rhs_beret_vdv_early"];
_u = _u        + [1];
_p = _p        + [5]; 

_i = _i        + ["rhs_beret_mp1"];
_u = _u        + [1];
_p = _p        + [5]; 

_i = _i        + ["rhs_ushanka"];
_u = _u        + [0];
_p = _p        + [5]; 


 //--- Weapon Backpacks ---
 
_i = _i        + ["RHS_Podnos_Bipod_Bag"];
_u = _u        + [1];
_p = _p        + [20]; 

_i = _i        + ["RHS_Podnos_Gun_Bag"];
_u = _u        + [1];
_p = _p        + [20];
 
_i = _i        + ["RHS_Metis_Gun_Bag"];
_u = _u        + [1];
_p = _p        + [20];
 
_i = _i        + ["RHS_Metis_Tripod_Bag"];
_u = _u        + [1];
_p = _p        + [20];

_i = _i        + ["RHS_Kornet_Gun_Bag"];
_u = _u        + [1];
_p = _p        + [20];
 
_i = _i        + ["RHS_Kornet_Tripod_Bag"];
_u = _u        + [1];
_p = _p        + [20];
 
_i = _i        + ["RHS_AGS30_Tripod_Bag"];
_u = _u        + [1];
_p = _p        + [30];
 
_i = _i        + ["RHS_AGS30_Gun_Bag"];
_u = _u        + [1];
_p = _p        + [30]; 

_i = _i        + ["RHS_SPG9_Gun_Bag"];
_u = _u        + [1];
_p = _p        + [60];
 
_i = _i        + ["RHS_SPG9_Tripod_Bag"];
_u = _u        + [1];
_p = _p        + [60];
 
_i = _i        + ["RHS_DShkM_TripodHigh_Bag"];
_u = _u        + [1];
_p = _p        + [20]; 

_i = _i        + ["RHS_DShkM_Gun_Bag"];
_u = _u        + [1];
_p = _p        + [20]; 

_i = _i        + ["RHS_DShkM_TripodLow_Bag"];
_u = _u        + [1];
_p = _p        + [20]; 

_i = _i        + ["RHS_Kord_Tripod_Bag"];
_u = _u        + [1];
_p = _p        + [20]; 

_i = _i        + ["RHS_Kord_Gun_Bag"];
_u = _u        + [1];
_p = _p        + [20]; 

_i = _i        + ["RHS_NSV_Tripod_Bag"];
_u = _u        + [1];
_p = _p        + [30]; 

_i = _i        + ["RHS_NSV_Gun_Bag"];
_u = _u        + [1];
_p = _p        + [30]; 


// --- Misc NVG and Binos ---
 
_i = _i         + ["FirstAidKit"];
_u = _u         + [0];
_p = _p         + [3]; 

_i = _i		    + ["Toolkit"];
_u = _u		    + [0];
_p = _p		    + [100];

_i = _i		    + ["Medikit"];
_u = _u		    + [0];
_p = _p		    + [100];

_i = _i		    + ["O_UavTerminal"];
_u = _u		    + [1];
_p = _p		    + [20];

_i = _i         + ["rhs_ipn138"];
_u = _u         + [0];
_p = _p         + [10]; 

_i = _i         + ["rhs_pdu4"];
_u = _u         + [0];
_p = _p         + [10]; 

_i = _i		    + ["Binocular"];
_u = _u		    + [0];
_p = _p		    + [10];

_i = _i		    + ["Rangefinder"];
_u = _u		    + [1];
_p = _p		    + [35];

_i = _i		    + ["Laserdesignator_03"];
_u = _u		    + [3];
_p = _p		    + [150];

_i = _i		    + ["ItemGPS"];
_u = _u		    + [0];
_p = _p		    + [25];

_i = _i		    + ["ItemMap"];
_u = _u		    + [0];
_p = _p		    + [5];

_i = _i		    + ["itemradio"];
_u = _u		    + [0];
_p = _p		    + [10];

_i = _i		    + ["itemcompass"];
_u = _u		    + [0];
_p = _p		    + [5];

_i = _i		    + ["itemwatch"];
_u = _u		    + [0];
_p = _p		    + [5];

_i = _i		    + ["Minedetector"];
_u = _u		    + [0];
_p = _p		    + [25];

_i = _i		+ ["VSM_magpul_flightglove_cut_standalone_NVG"];
_u = _u		+ [0];
_p = _p		+ [15];

_i = _i		+ ["VSM_magpul_flightglove_cut_coyote_standalone_NVG"];
_u = _u		+ [0];
_p = _p		+ [15];

_i = _i		+ ["VSM_MPACT_gloves_black_standalone_NVG"];
_u = _u		+ [0];
_p = _p		+ [15];

_i = _i		+ ["VSM_MPACT_gloves_coyote_standalone_NVG"];
_u = _u		+ [0];
_p = _p		+ [15];

_i = _i		+ ["VSM_MPACT_gloves_od_standalone_NVG"];
_u = _u		+ [0];
_p = _p		+ [15];

_i = _i		+ ["VSM_flightglove_black_standalone_NVG"];
_u = _u		+ [0];
_p = _p		+ [15];

_i = _i		+ ["VSM_flightglove_coyote_standalone_NVG"];
_u = _u		+ [0];
_p = _p		+ [15];

_i = _i		+ ["VSM_flightglove_od_standalone_NVG"];
_u = _u		+ [0];
_p = _p		+ [15];


//--- ADDONS
if (isClass(configFile >> "CfgPatches" >> "ace_main")) then 
{ 
_i = _i		+ ["ACE_tourniquet"];
_u = _u		+ [0];
_p = _p		+ [2];

_i = _i		+ ["ACE_RangeTable_82mm"];
_u = _u		+ [0];
_p = _p		+ [3];

_i = _i		+ ["ACE_adenosine"];
_u = _u		+ [0];
_p = _p		+ [2];

_i = _i		+ ["ACE_ATragMX"];
_u = _u		+ [0];
_p = _p		+ [50];

_i = _i		+ ["ACE_atropine"];
_u = _u		+ [0];
_p = _p		+ [2];

_i = _i		+ ["ACE_fieldDressing"];
_u = _u		+ [0];
_p = _p		+ [2];

_i = _i		+ ["ACE_elasticBandage"];
_u = _u		+ [0];
_p = _p		+ [2];

_i = _i + ["ACE_quikclot"];
_u = _u		+ [0];
_p = _p		+ [2];

_i = _i + ["ACE_SpraypaintBlack"];
_u = _u		+ [0];
_p = _p		+ [3];

_i = _i + ["ACE_bloodIV"];
_u = _u		+ [0];
_p = _p		+ [30];

_i = _i + ["ACE_bloodIV_250"];
_u = _u		+ [0];
_p = _p		+ [15];

_i = _i + ["ACE_bloodIV_500"];
_u = _u		+ [0];
_p = _p		+ [20];

_i = _i + ["ACE_SpraypaintBlue"];
_u = _u		+ [0];
_p = _p		+ [3];

_i = _i + ["ACE_bodyBag"];
_u = _u		+ [0];
_p = _p		+ [5];

_i = _i + ["ACE_CableTie"];
_u = _u		+ [0];
_p = _p		+ [3];

_i = _i + ["ACE_Chemlight_Shield"];
_u = _u		+ [0];
_p = _p		+ [3];

_i = _i + ["ACE_DAGR"];
_u = _u		+ [0];
_p = _p		+ [10];

_i = _i + ["ACE_DefusalKit"];
_u = _u		+ [0];
_p = _p		+ [15];

_i = _i + ["ACE_EarPlugs"];
_u = _u		+ [0];
_p = _p		+ [2];

_i = _i + ["ACE_EntrenchingTool"];
_u = _u		+ [0];
_p = _p		+ [45];

_i = _i + ["ACE_epinephrine"];
_u = _u		+ [0];
_p = _p		+ [2];

_i = _i + ["ACE_Flashlight_MX991"];
_u = _u		+ [0];
_p = _p		+ [5];

_i = _i + ["ACE_SpraypaintGreen"];
_u = _u		+ [0];
_p = _p		+ [3];

_i = _i + ["ACE_Kestrel4500"];
_u = _u		+ [0];
_p = _p		+ [5];

_i = _i + ["ACE_Flashlight_KSF1"];
_u = _u		+ [0];
_p = _p		+ [5];

_i = _i + ["ACE_IR_Strobe_Item"];
_u = _u		+ [0];
_p = _p		+ [5];

_i = _i + ["ACE_M26_Clacker"];
_u = _u		+ [0];
_p = _p		+ [5];

_i = _i + ["ACE_Clacker"];
_u = _u		+ [0];
_p = _p		+ [5];

_i = _i + ["ACE_Flashlight_XL50"];
_u = _u		+ [0];
_p = _p		+ [5];

_i = _i + ["ACE_MapTools"];
_u = _u		+ [0];
_p = _p		+ [5];

_i = _i + ["ACE_microDAGR"];
_u = _u		+ [0];
_p = _p		+ [15];

_i = _i + ["ACE_morphine"];
_u = _u		+ [0];
_p = _p		+ [2];

_i = _i + ["ACE_packingBandage"];
_u = _u		+ [0];
_p = _p		+ [2];

_i = _i + ["ACE_plasmaIV"];
_u = _u		+ [0];
_p = _p		+ [20];

_i = _i + ["ACE_plasmaIV_250"];
_u = _u		+ [0];
_p = _p		+ [10];

_i = _i + ["ACE_plasmaIV_500"];
_u = _u		+ [0];
_p = _p		+ [15];

_i = _i + ["ACE_SpraypaintRed"];
_u = _u		+ [0];
_p = _p		+ [3];

_i = _i + ["ACE_RangeCard"];
_u = _u		+ [0];
_p = _p		+ [5];

_i = _i + ["ACE_salineIV"];
_u = _u		+ [0];
_p = _p		+ [20];

_i = _i + ["ACE_salineIV_250"];
_u = _u		+ [0];
_p = _p		+ [10];

_i = _i + ["ACE_salineIV_500"];
_u = _u		+ [0];
_p = _p		+ [15];

_i = _i + ["ACE_Sandbag_empty"];
_u = _u		+ [0];
_p = _p		+ [1];

_i = _i + ["ACE_SpottingScope"];
_u = _u		+ [0];
_p = _p		+ [10];

_i = _i + ["ACE_Tripod"];
_u = _u		+ [0];
_p = _p		+ [10];

_i = _i + ["ACE_surgicalKit"];
_u = _u		+ [0];
_p = _p		+ [15];

_i = _i + ["ACE_wirecutter"];
_u = _u		+ [0];
_p = _p		+ [30];

_i = _i + ["ACE_Chemlight_HiOrange"];
_u = _u		+ [0];
_p = _p		+ [3];

_i = _i + ["ACE_Chemlight_HiRed"];
_u = _u		+ [0];
_p = _p		+ [3];

_i = _i + ["ACE_Chemlight_HiWhite"];
_u = _u		+ [0];
_p = _p		+ [3];

_i = _i + ["ACE_Chemlight_HiYellow"];
_u = _u		+ [0];
_p = _p		+ [3];

_i = _i + ["ACE_Chemlight_IR"];
_u = _u		+ [0];
_p = _p		+ [3];

_i = _i + ["ACE_Chemlight_Orange"];
_u = _u		+ [0];
_p = _p		+ [3];

_i = _i + ["ACE_Chemlight_White"];
_u = _u		+ [0];
_p = _p		+ [3];

_i = _i + ["ace_gunbag"];
_u = _u		+ [0];
_p = _p		+ [15];

_i = _i + ["ACE_TacticalLadder_Pack"];
_u = _u		+ [0];
_p = _p		+ [15];
};

if (isClass(configFile >> "CfgPatches" >> "task_force_radio")) then 
{ 
_i = _i + ["TFAR_bussole"];
_u = _u		+ [0];
_p = _p		+ [50];

_i = _i + ["TFAR_mr3000_rhs"];
_u = _u		+ [0];
_p = _p		+ [75];
};

[_faction, _i, _u, _p] call compile preprocessFileLineNumbers "Common\Config\Gear\Gear_Config_Set.sqf"; 

//--- Templates (Those lines can be generated in the RPT on purchase by uncommenting the diag_log in Events_UI_GearMenu.sqf >> "onPurchase").
_t = [];

[_faction, _t] call compile preprocessFileLineNumbers "Common\Config\Gear\Gear_Template_Set.sqf"; 