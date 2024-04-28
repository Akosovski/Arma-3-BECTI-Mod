private ["_faction", "_i", "_p", "_side", "_u"];

_side = _this;
_faction = "West";

_i = []; // Classname
_u = []; // Unlock Perk
_p = []; // Price

//--- Weapons / Rifles ---

_i = _i		+ ["CUP_arifle_M16A4_Base"];
_u = _u		+ [0];
_p = _p		+ [30];

_i = _i		+ ["CUP_arifle_M16A4_Grip"];
_u = _u		+ [0];
_p = _p		+ [30];

_i = _i		+ ["CUP_arifle_M16A4_GL"];
_u = _u		+ [0];
_p = _p		+ [30];

_i = _i		+ ["JCA_arifle_M4A1_black_F"];
_u = _u		+ [0];
_p = _p		+ [35];

_i = _i		+ ["JCA_arifle_M4A1_GL_black_F"];
_u = _u		+ [0];
_p = _p		+ [35];

_i = _i		+ ["JCA_arifle_M4A1_short_black_F"];
_u = _u		+ [1];
_p = _p		+ [35];

_i = _i		+ ["JCA_arifle_M4A4_AFG_black_F"];
_u = _u		+ [2];
_p = _p		+ [35];

_i = _i		+ ["JCA_arifle_M4A4_VFG_black_F"];
_u = _u		+ [2];
_p = _p		+ [35];

_i = _i		+ ["JCA_arifle_M4A4_GL_black_F"];
_u = _u		+ [2];
_p = _p		+ [35];

_i = _i		+ ["CUP_arifle_Mk16_STD"];
_u = _u		+ [2];
_p = _p		+ [35];

_i = _i		+ ["CUP_arifle_Mk16_STD_EGLM"];
_u = _u		+ [2];
_p = _p		+ [40];

_i = _i		+ ["CUP_arifle_Mk16_STD_FG"];
_u = _u		+ [3];
_p = _p		+ [40];

_i = _i		+ ["CUP_arifle_Mk16_STD_AFG"];
_u = _u		+ [3];
_p = _p		+ [40];

_i = _i		+ ["CUP_arifle_Mk16_STD_SFG"];
_u = _u		+ [3];
_p = _p		+ [40];

_i = _i		+ ["CUP_arifle_Mk17_STD"];
_u = _u		+ [2];
_p = _p		+ [35];

_i = _i		+ ["CUP_arifle_Mk17_STD_EGLM"];
_u = _u		+ [2];
_p = _p		+ [40];

_i = _i		+ ["CUP_arifle_Mk17_STD_FG"];
_u = _u		+ [3];
_p = _p		+ [40];

_i = _i		+ ["CUP_arifle_Mk17_STD_AFG"];
_u = _u		+ [3];
_p = _p		+ [40];

_i = _i		+ ["CUP_arifle_Mk17_STD_SFG"];
_u = _u		+ [3];
_p = _p		+ [40];

_i = _i		+ ["CUP_lmg_m249_E1"];
_u = _u		+ [0];
_p = _p		+ [35];

_i = _i		+ ["CUP_lmg_m249_E2"];
_u = _u		+ [1];
_p = _p		+ [40];

_i = _i		+ ["CUP_lmg_m249_pip1"];
_u = _u		+ [2];
_p = _p		+ [45];

_i = _i		+ ["CUP_lmg_m249_para"];
_u = _u		+ [3];
_p = _p		+ [45];

_i = _i		+ ["CUP_lmg_m240"];
_u = _u		+ [1];
_p = _p		+ [50];

_i = _i		+ ["CUP_lmg_m240_B"];
_u = _u		+ [2];
_p = _p		+ [55];

_i = _i		+ ["JCA_arifle_SR25_black_F"];
_u = _u		+ [2];
_p = _p		+ [40];

_i = _i		+ ["JCA_arifle_SR10_black_F"];
_u = _u		+ [3];
_p = _p		+ [45];

_i = _i		+ ["CUP_srifle_M2010_blk"];
_u = _u		+ [2];
_p = _p		+ [20];

_i = _i		+ ["CUP_srifle_M14_DMR"];
_u = _u		+ [1];
_p = _p		+ [20];

_i = _i		+ ["CUP_srifle_M107_base"];
_u = _u		+ [2];
_p = _p		+ [60];

_i = _i		+ ["CUP_smg_MP5A5"];
_u = _u		+ [1];
_p = _p		+ [20];

_i = _i		+ ["CUP_smg_MP5A5_Rail"];
_u = _u		+ [2];
_p = _p		+ [25];

//--- PISTOLS ---

_i = _i		+ ["CUP_hgun_Colt1911"];
_u = _u		+ [0];
_p = _p		+ [8];

_i = _i		+ ["CUP_hgun_M9A1"];
_u = _u		+ [0];
_p = _p		+ [10];

_i = _i		+ ["CUP_hgun_M17_blk"];
_u = _u		+ [1];
_p = _p		+ [12];

_i = _i		+ ["CUP_hgun_Glock17_blk"];
_u = _u		+ [1];
_p = _p		+ [10];

_i = _i		+ ["CUP_hgun_Mk23"];
_u = _u		+ [2];
_p = _p		+ [15];

//--- Magazines ---

_i = _i		+ ["30Rnd_556x45_Stanag"];
_u = _u		+ [0];
_p = _p		+ [3];

_i = _i		+ ["JCA_30Rnd_556x45_PMAG"];
_u = _u		+ [2];
_p = _p		+ [3];

_i = _i		+ ["CUP_30Rnd_556x45_Emag"];
_u = _u		+ [2];
_p = _p		+ [3];

_i = _i		+ ["150Rnd_556x45_Drum_Mag_F"];
_u = _u		+ [3];
_p = _p		+ [7];

_i = _i		+ ["CUP_30Rnd_556x45_Stanag_Mk16_black"];
_u = _u		+ [2];
_p = _p		+ [3];

_i = _i		+ ["CUP_30Rnd_556x45_Stanag_Mk16"];
_u = _u		+ [2];
_p = _p		+ [3];

_i = _i		+ ["CUP_60Rnd_556x45_SureFire"];
_u = _u		+ [3];
_p = _p		+ [6];

_i = _i		+ ["CUP_20Rnd_762x51_B_SCAR_bkl"];
_u = _u		+ [2];
_p = _p		+ [3];

_i = _i		+ ["CUP_20Rnd_762x51_B_SCAR"];
_u = _u		+ [2];
_p = _p		+ [3];

_i = _i		+ ["CUP_30Rnd_762x51_2_B_SCAR"];
_u = _u		+ [3];
_p = _p		+ [4];

_i = _i		+ ["CUP_30Rnd_762x51_1_B_SCAR"];
_u = _u		+ [3];
_p = _p		+ [4];

_i = _i		+ ["CUP_50Rnd_762x51_B_SCAR"];
_u = _u		+ [3];
_p = _p		+ [6];

_i = _i		+ ["CUP_200Rnd_TE4_Red_Tracer_556x45_M249"];
_u = _u		+ [0];
_p = _p		+ [5];

_i = _i		+ ["CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch"];
_u = _u		+ [2];
_p = _p		+ [5];

_i = _i		+ ["CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"];
_u = _u		+ [1];
_p = _p		+ [5];

_i = _i		+ ["150Rnd_762x51_Box"];
_u = _u		+ [2];
_p = _p		+ [7];

_i = _i		+ ["JCA_20Rnd_762x51_SMAG"];
_u = _u		+ [2];
_p = _p		+ [5];

_i = _i		+ ["JCA_20Rnd_762x51_PMAG"];
_u = _u		+ [3];
_p = _p		+ [5];

_i = _i		+ ["CUP_5Rnd_762x67_M2010_M"];
_u = _u		+ [2];
_p = _p		+ [8];

_i = _i		+ ["CUP_20Rnd_762x51_DMR"];
_u = _u		+ [1];
_p = _p		+ [3];

_i = _i		+ ["CUP_10Rnd_127x99_M107"];
_u = _u		+ [2];
_p = _p		+ [8];

_i = _i		+ ["CUP_30Rnd_9x19_MP5"];
_u = _u		+ [1];
_p = _p		+ [6];

_i = _i		+ ["CUP_7Rnd_45ACP_1911"];
_u = _u		+ [0];
_p = _p		+ [2];

_i = _i		+ ["CUP_15Rnd_9x19_M9"];
_u = _u		+ [0];
_p = _p		+ [2];

_i = _i		+ ["CUP_17Rnd_9x19_glock17"];
_u = _u		+ [1];
_p = _p		+ [2];

_i = _i		+ ["CUP_21Rnd_9x19_M17_Black"];
_u = _u		+ [1];
_p = _p		+ [2];

_i = _i		+ ["CUP_12Rnd_45ACP_mk23"];
_u = _u		+ [2];
_p = _p		+ [2];

_i = _i		+ ["rhs_mag_maaws_HE"];
_u = _u		+ [1];
_p = _p		+ [65];

_i = _i		+ ["rhs_mag_maaws_HEDP"];
_u = _u		+ [1];
_p = _p		+ [65];

_i = _i		+ ["rhs_mag_maaws_HEAT"];
_u = _u		+ [1];
_p = _p		+ [70];

_i = _i		+ ["rhs_mag_smaw_HEAA"];
_u = _u		+ [2];
_p = _p		+ [60];

_i = _i		+ ["rhs_mag_smaw_HEDP"];
_u = _u		+ [2];
_p = _p		+ [60];

_i = _i		+ ["rhs_mag_smaw_SR"];
_u = _u		+ [2];
_p = _p		+ [75];

_i = _i		+ ["rhs_fgm148_magazine_AT"];
_u = _u		+ [3];
_p = _p		+ [90];

_i = _i		+ ["rhs_fim92_mag"];
_u = _u		+ [2];
_p = _p		+ [90];

//--- GL Grenades ---

_i = _i		+ ["1Rnd_HE_Grenade_shell"];
_u = _u		+ [0];
_p = _p		+ [3];

_i = _i		+ ["1Rnd_Smoke_Grenade_shell"];
_u = _u		+ [0];
_p = _p		+ [3];

_i = _i		+ ["1Rnd_SmokeRed_Grenade_shell"];
_u = _u		+ [0];
_p = _p		+ [3];

_i = _i		+ ["1Rnd_SmokeGreen_Grenade_shell"];
_u = _u		+ [0];
_p = _p		+ [3];

_i = _i		+ ["1Rnd_SmokePurple_Grenade_shell"];
_u = _u		+ [0];
_p = _p		+ [3];

_i = _i		+ ["UGL_FlareRed_F"];
_u = _u		+ [0];
_p = _p		+ [3];

_i = _i		+ ["UGL_FlareGreen_F"];
_u = _u		+ [0];
_p = _p		+ [3];

_i = _i		+ ["UGL_FlareYellow_F"];
_u = _u		+ [0];
_p = _p		+ [3];

_i = _i		+ ["UGL_FlareWhite_F"];
_u = _u		+ [0];
_p = _p		+ [3];

//--- Normal Grenades & Smoke ---

_i = _i		+ ["rhs_mag_m67"];
_u = _u		+ [0];
_p = _p		+ [5];

_i = _i		+ ["rhs_grenade_m15_mag"];
_u = _u		+ [1];
_p = _p		+ [15];

_i = _i		+ ["rhs_mag_mk84"];
_u = _u		+ [1];
_p = _p		+ [5];

_i = _i		+ ["rhs_mag_m7a3_cs"];
_u = _u		+ [2];
_p = _p		+ [5];

_i = _i		+ ["rhs_grenade_anm8_mag"];
_u = _u		+ [0];
_p = _p		+ [5];

_i = _i		+ ["rhs_mag_m18_green"];
_u = _u		+ [0];
_p = _p		+ [5];

_i = _i		+ ["rhs_mag_m18_purple"];
_u = _u		+ [0];
_p = _p		+ [5];

_i = _i		+ ["rhs_mag_m18_red"];
_u = _u		+ [0];
_p = _p		+ [5];

_i = _i		+ ["rhs_mag_m18_yellow"];
_u = _u		+ [0];
_p = _p		+ [5];

//--- LAUNCHERS ---

_i = _i		+ ["rhs_weap_M136"];
_u = _u		+ [0];
_p = _p		+ [80];

_i = _i		+ ["rhs_weap_M136_hedp"];
_u = _u		+ [0];
_p = _p		+ [80];

_i = _i		+ ["rhs_weap_M136_hp"];
_u = _u		+ [0];
_p = _p		+ [80];

_i = _i		+ ["rhs_weap_m72a7"];
_u = _u		+ [1];
_p = _p		+ [50];

_i = _i		+ ["rhs_weap_maaws"];
_u = _u		+ [1];
_p = _p		+ [200];

_i = _i		+ ["rhs_weap_smaw"];
_u = _u		+ [2];
_p = _p		+ [190];

_i = _i		+ ["rhs_weap_fim92"];
_u = _u		+ [2];
_p = _p		+ [300];

_i = _i		+ ["rhs_weap_fgm148"];
_u = _u		+ [3];
_p = _p		+ [300];

//--- Backpacks ---

_i = _i		+ ["rhsusf_assault_eagleaiii_coy"];
_u = _u		+ [0];
_p = _p		+ [20];

_i = _i		+ ["rhsusf_falconii_coy"];
_u = _u		+ [0];
_p = _p		+ [10];

_i = _i		+ ["rhsusf_falconii"];
_u = _u		+ [0];
_p = _p		+ [10];

_i = _i		+ ["rhssaf_kitbag_smb"];
_u = _u		+ [0];
_p = _p		+ [15];

_i = _i		+ ["rhsgref_hidf_alicepack"];
_u = _u		+ [0];
_p = _p		+ [25];

_i = _i		+ ["b_parachute"];
_u = _u		+ [0];
_p = _p		+ [25];

//--- Uniforms ---

_i = _i		+ ["rhs_uniform_FROG01_wd"];
_u = _u		+ [0];
_p = _p		+ [10];

_i = _i		+ ["U_B_HeliPilotCoveralls"];
_u = _u		+ [1];
_p = _p		+ [10];

_i = _i		+ ["U_B_PilotCoveralls"];
_u = _u		+ [1];
_p = _p		+ [15];

_i = _i		+ ["rhs_uniform_g3_m81"];
_u = _u		+ [3];
_p = _p		+ [10];

_i = _i		+ ["rhs_uniform_g3_blk"];
_u = _u		+ [3];
_p = _p		+ [10];

_i = _i		+ ["rhs_uniform_g3_mc"];
_u = _u		+ [3];
_p = _p		+ [10];

_i = _i		+ ["rhs_uniform_g3_rgr"];
_u = _u		+ [3];
_p = _p		+ [10];

_i = _i		+ ["rhs_uniform_g3_aor2"];
_u = _u		+ [3];
_p = _p		+ [10];


//--- Vests ---

_i = _i + ["rhsusf_spc"];
_u = _u + [0];
_p = _p + [20];

_i = _i + ["rhsusf_spc_corpsman"];
_u = _u + [0];
_p = _p + [20];

_i = _i + ["rhsusf_spc_crewman"];
_u = _u + [0];
_p = _p + [20];

_i = _i + ["rhsusf_spc_iar"];
_u = _u + [0];
_p = _p + [20];

_i = _i + ["rhsusf_spc_light"];
_u = _u + [0];
_p = _p + [20];

_i = _i + ["rhsusf_spc_mg"];
_u = _u + [0];
_p = _p + [20];

_i = _i + ["rhsusf_spc_marksman"];
_u = _u + [0];
_p = _p + [20];

_i = _i + ["rhsusf_spc_patchless"];
_u = _u + [0];
_p = _p + [20];

_i = _i + ["rhsusf_spc_patchless_radio"];
_u = _u + [0];
_p = _p + [20];

_i = _i + ["rhsusf_spc_rifleman"];
_u = _u + [0];
_p = _p + [20];

_i = _i + ["rhsusf_spc_sniper"];
_u = _u + [0];
_p = _p + [20];

_i = _i + ["rhsusf_spc_squadleader"];
_u = _u + [0];
_p = _p + [20];

_i = _i + ["rhsusf_spc_teamleader"];
_u = _u + [0];
_p = _p + [20];

_i = _i + ["rhsusf_mbav"];
_u = _u + [2];
_p = _p + [20];

_i = _i + ["rhsusf_mbav_grenadier"];
_u = _u + [2];
_p = _p + [20];

_i = _i + ["rhsusf_mbav_light"];
_u = _u + [2];
_p = _p + [20];

_i = _i + ["rhsusf_mbav_mg"];
_u = _u + [2];
_p = _p + [20];

_i = _i + ["rhsusf_mbav_medic"];
_u = _u + [2];
_p = _p + [20];

_i = _i + ["rhsusf_mbav_rifleman"];
_u = _u + [2];
_p = _p + [20];

_i = _i + ["rhsusf_plateframe_sapi"];
_u = _u + [1];
_p = _p + [20];

_i = _i + ["rhsusf_plateframe_grenadier"];
_u = _u + [1];
_p = _p + [20];

_i = _i + ["rhsusf_plateframe_light"];
_u = _u + [1];
_p = _p + [20];

_i = _i + ["rhsusf_plateframe_machinegunner"];
_u = _u + [1];
_p = _p + [20];

_i = _i + ["rhsusf_plateframe_marksman"];
_u = _u + [1];
_p = _p + [20];

_i = _i + ["rhsusf_plateframe_medic"];
_u = _u + [1];
_p = _p + [20];

_i = _i + ["rhsusf_plateframe_rifleman"];
_u = _u + [1];
_p = _p + [20];

_i = _i + ["rhsusf_plateframe_teamleader"];
_u = _u + [1];
_p = _p + [20];

//--- Glasses ---

_i = _i		+ ["rhs_googles_black"];
_u = _u		+ [0];
_p = _p		+ [5];

_i = _i		+ ["rhs_googles_clear"];
_u = _u		+ [0];
_p = _p		+ [5];

_i = _i		+ ["rhs_googles_orange"];
_u = _u		+ [0];
_p = _p		+ [5];

_i = _i		+ ["rhs_googles_yellow"];
_u = _u		+ [0];
_p = _p		+ [5];

_i = _i		+ ["rhs_oakley_goggles_blk"];
_u = _u		+ [0];
_p = _p		+ [8];

_i = _i		+ ["rhs_oakley_goggles_clr"];
_u = _u		+ [0];
_p = _p		+ [8];

_i = _i		+ ["rhs_ess_black"];
_u = _u		+ [0];
_p = _p		+ [8];

//--- Helmets ---

_i = _i     + ["rhsusf_lwh_helmet_marpatwd"];
_u = _u     + [0];
_p = _p     + [10];

_i = _i     + ["rhsusf_lwh_helmet_marpatwd_blk_ess"];
_u = _u     + [0];
_p = _p     + [10];

_i = _i     + ["rhsusf_lwh_helmet_marpatwd_headset_blk2"];
_u = _u     + [0];
_p = _p     + [10];

_i = _i     + ["rhsusf_lwh_helmet_marpatwd_headset_blk"];
_u = _u     + [0];
_p = _p     + [10];

_i = _i     + ["rhsusf_lwh_helmet_marpatwd_headset"];
_u = _u     + [0];
_p = _p     + [10];

_i = _i     + ["rhsusf_lwh_helmet_marpatwd_ess"];
_u = _u     + [0];
_p = _p     + [10];

_i = _i     + ["rhsusf_lwh_helmet_marpatwd_ess"];
_u = _u     + [0];
_p = _p     + [10];

_i = _i     + ["rhsusf_mich_helmet_marpatwd_alt"];
_u = _u     + [2];
_p = _p     + [10];

_i = _i     + ["rhsusf_mich_helmet_marpatwd_alt_headset"];
_u = _u     + [2];
_p = _p     + [10];

_i = _i     + ["rhsusf_mich_helmet_marpatwd_headset"];
_u = _u     + [2];
_p = _p     + [10];

_i = _i     + ["rhsusf_mich_helmet_marpatwd_norotos"];
_u = _u     + [2];
_p = _p     + [10];

_i = _i     + ["rhsusf_mich_helmet_marpatwd_norotos_headset"];
_u = _u     + [3];
_p = _p     + [10];

_i = _i     + ["rhsusf_mich_helmet_marpatwd_norotos_arc"];
_u = _u     + [3];
_p = _p     + [10];

_i = _i     + ["rhsusf_mich_helmet_marpatwd_norotos_arc_headset"];
_u = _u     + [3];
_p = _p     + [10];

_i = _i     + ["rhsusf_mich_bare_norotos_headset"];
_u = _u     + [3];
_p = _p     + [10];

_i = _i     + ["rhsusf_mich_bare_norotos_arc"];
_u = _u     + [3];
_p = _p     + [10];

_i = _i     + ["rhsusf_mich_bare_norotos_arc_alt"];
_u = _u     + [3];
_p = _p     + [10];

_i = _i     + ["rhsusf_mich_bare_norotos_arc_alt_headset"];
_u = _u     + [3];
_p = _p     + [10];

_i = _i     + ["rhsusf_mich_bare_norotos_arc_headset"];
_u = _u     + [3];
_p = _p     + [10];

_i = _i     + ["rhsusf_mich_bare_norotos_semi_headset"];
_u = _u     + [3];
_p = _p     + [10];

_i = _i     + ["rhsusf_mich_bare_norotos_arc_semi"];
_u = _u     + [3];
_p = _p     + [10];

_i = _i     + ["rhsusf_mich_bare_norotos_arc_alt_semi"];
_u = _u     + [3];
_p = _p     + [10];

_i = _i     + ["rhsusf_mich_bare_norotos_arc_alt_semi_headset"];
_u = _u     + [3];
_p = _p     + [10];

_i = _i     + ["rhsusf_mich_bare_norotos_arc_semi_headset"];
_u = _u     + [3];
_p = _p     + [10];

_i = _i     + ["rhsusf_mich_bare_norotos_tan_headset"];
_u = _u     + [3];
_p = _p     + [10];

_i = _i     + ["rhsusf_mich_bare_norotos_arc_tan"];
_u = _u     + [3];
_p = _p     + [10];

_i = _i     + ["rhsusf_mich_bare_norotos_arc_alt_tan"];
_u = _u     + [3];
_p = _p     + [10];

_i = _i     + ["rhsusf_mich_bare_norotos_arc_alt_tan_headset"];
_u = _u     + [3];
_p = _p     + [10];

_i = _i     + ["rhsusf_mich_bare_norotos_arc_tan_headset"];
_u = _u     + [3];
_p = _p     + [10];

_i = _i     + ["rhsusf_opscore_mc_cover_pelt_cam"];
_u = _u     + [2];
_p = _p     + [10];

_i = _i     + ["rhsusf_opscore_rg_cover_pelt"];
_u = _u     + [2];
_p = _p     + [10];

_i = _i     + ["rhsusf_opscore_coy_cover_pelt"];
_u = _u     + [2];
_p = _p     + [10];

_i = _i     + ["rhsusf_opscore_ut_pelt_nsw_cam"];
_u = _u     + [2];
_p = _p     + [10];

_i = _i     + ["rhsusf_opscore_mc_pelt_nsw"];
_u = _u     + [2];
_p = _p     + [10];

_i = _i     + ["rhsusf_opscore_fg_pelt_nsw"];
_u = _u     + [2];
_p = _p     + [10];

_i = _i		+ ["rhsusf_cvc_green_helmet"];
_u = _u		+ [1];
_p = _p		+ [7];

_i = _i		+ ["rhsusf_cvc_green_ess"];
_u = _u		+ [1];
_p = _p		+ [7];

_i = _i		+ ["rhsusf_hgu56p"];
_u = _u		+ [1];
_p = _p		+ [7];

_i = _i		+ ["rhsusf_hgu56p_mask"];
_u = _u		+ [1];
_p = _p		+ [7];

_i = _i		+ ["rhsusf_hgu56p_visor"];
_u = _u		+ [1];
_p = _p		+ [7];

_i = _i		+ ["rhsusf_hgu56p_visor_mask"];
_u = _u		+ [1];
_p = _p		+ [7];

_i = _i		+ ["RHS_jetpilot_usaf"];
_u = _u		+ [2];
_p = _p		+ [7];

_i = _i		+ ["rhsusf_Bowman"];
_u = _u		+ [2];
_p = _p		+ [2];

_i = _i		+ ["rhsusf_bowman_cap"];
_u = _u		+ [2];
_p = _p		+ [4];

_i = _i		+ ["rhs_Booniehat2_marpatwd"];
_u = _u		+ [0];
_p = _p		+ [2];

//--- Weapon Backpacks ---

_i = _i		+ ["RHS_M2_Gun_Bag"];
_u = _u		+ [1];
_p = _p		+ [100];

_i = _i		+ ["RHS_M2_Tripod_Bag"];
_u = _u		+ [1];
_p = _p		+ [50];

_i = _i		+ ["rhs_M252_Gun_Bag"];
_u = _u		+ [1];
_p = _p		+ [100];

_i = _i		+ ["rhs_M252_Bipod_Bag"];
_u = _u		+ [1];
_p = _p		+ [50];

_i = _i		+ ["RHS_M2_MiniTripod_Bag"];
_u = _u		+ [1];
_p = _p		+ [50];

_i = _i		+ ["RHS_Mk19_Gun_Bag"];
_u = _u		+ [2];
_p = _p		+ [100];

_i = _i		+ ["RHS_Mk19_Tripod_Bag"];
_u = _u		+ [2];
_p = _p		+ [50];

_i = _i		+ ["rhs_Tow_Gun_Bag"];
_u = _u		+ [2];
_p = _p		+ [100];

_i = _i		+ ["rhs_TOW_Tripod_Bag"];
_u = _u		+ [2];
_p = _p		+ [50];

//--- Accessories / Optics ---

_i = _i		+ ["rhsusf_acc_ACOG"];
_u = _u		+ [0];
_p = _p		+ [5];

_i = _i		+ ["rhsusf_acc_ACOG2"];
_u = _u		+ [0];
_p = _p		+ [5];

_i = _i		+ ["rhsusf_acc_ACOG3"];
_u = _u		+ [0];
_p = _p		+ [5];

_i = _i		+ ["rhsusf_acc_ACOG_RMR"];
_u = _u		+ [0];
_p = _p		+ [5];

_i = _i		+ ["rhsusf_acc_ELCAN"];
_u = _u		+ [0];
_p = _p		+ [5];

_i = _i		+ ["rhsusf_acc_ELCAN_ard"];
_u = _u		+ [0];
_p = _p		+ [5];

_i = _i		+ ["rhsusf_acc_g33_xps3"];
_u = _u		+ [0];
_p = _p		+ [5];

_i = _i		+ ["rhsusf_acc_eotech_552"];
_u = _u		+ [0];
_p = _p		+ [5];

_i = _i		+ ["rhsusf_acc_eotech_xps3"];
_u = _u		+ [0];
_p = _p		+ [5];

_i = _i		+ ["rhsusf_acc_compm4"];
_u = _u		+ [0];
_p = _p		+ [5];

_i = _i		+ ["CUP_optic_CompM2_black"];
_u = _u		+ [1];
_p = _p		+ [5];

_i = _i		+ ["CUP_optic_CompM2_low"];
_u = _u		+ [1];
_p = _p		+ [5];

_i = _i		+ ["CUP_optic_AC11704_Black"];
_u = _u		+ [1];
_p = _p		+ [5];

_i = _i		+ ["rhsusf_acc_su230"];
_u = _u		+ [3];
_p = _p		+ [5];

_i = _i		+ ["rhsusf_acc_su230_mrds"];
_u = _u		+ [3];
_p = _p		+ [5];

_i = _i		+ ["JCA_optic_MRPS_black"];
_u = _u		+ [2];
_p = _p		+ [5];

_i = _i		+ ["JCA_optic_HPPO_black"];
_u = _u		+ [2];
_p = _p		+ [5];

_i = _i		+ ["rhsusf_optic_maaws"];
_u = _u		+ [1];
_p = _p		+ [15];

_i = _i		+ ["rhs_weap_optic_smaw"];
_u = _u		+ [2];
_p = _p		+ [10];

_i = _i		+ ["CUP_muzzle_snds_M9"];
_u = _u		+ [2];
_p = _p		+ [5];

_i = _i		+ ["CUP_muzzle_snds_mk23"];
_u = _u		+ [2];
_p = _p		+ [5];

_i = _i		+ ["CUP_muzzle_snds_SCAR_L"];
_u = _u		+ [2];
_p = _p		+ [5];

_i = _i		+ ["CUP_muzzle_snds_SCAR_H"];
_u = _u		+ [2];
_p = _p		+ [5];

_i = _i		+ ["CUP_muzzle_snds_socom762rc"];
_u = _u		+ [3];
_p = _p		+ [5];

_i = _i		+ ["CUP_muzzle_snds_m16"];
_u = _u		+ [2];
_p = _p		+ [5];

_i = _i		+ ["CUP_muzzle_snds_MP5"];
_u = _u		+ [2];
_p = _p		+ [5];

_i = _i		+ ["CUP_muzzle_mfsup_Suppressor_M107_Black"];
_u = _u		+ [3];
_p = _p		+ [5];

_i = _i		+ ["rhsusf_acc_anpeq15_light"];
_u = _u		+ [0];
_p = _p		+ [5];

_i = _i		+ ["rhsusf_acc_anpeq15"];
_u = _u		+ [0];
_p = _p		+ [5];

_i = _i		+ ["rhsusf_acc_anpeq15_top"];
_u = _u		+ [0];
_p = _p		+ [5];

_i = _i		+ ["rhsusf_acc_anpeq15side"];
_u = _u		+ [0];
_p = _p		+ [5];

_i = _i		+ ["rhsusf_acc_anpeq15side_bk"];
_u = _u		+ [0];
_p = _p		+ [5];

_i = _i		+ ["rhsusf_acc_anpeq15_bk_light"];
_u = _u		+ [0];
_p = _p		+ [5];

_i = _i		+ ["rhsusf_acc_anpeq15_bk"];
_u = _u		+ [0];
_p = _p		+ [5];

_i = _i		+ ["rhsusf_acc_anpeq15_bk_top"];
_u = _u		+ [0];
_p = _p		+ [5];

_i = _i		+ ["rhsusf_acc_anpeq15a"];
_u = _u		+ [0];
_p = _p		+ [5];

_i = _i		+ ["rhsusf_acc_m952v"];
_u = _u		+ [0];
_p = _p		+ [5];

_i = _i		+ ["CUP_bipod_Harris_1A2_L_BLK"];
_u = _u		+ [0];
_p = _p		+ [5];

//--- Items ---

_i = _i		+ ["CUP_NVG_PVS14"];
_u = _u		+ [0];
_p = _p		+ [15];

_i = _i		+ ["CUP_NVG_PVS15_black"];
_u = _u		+ [0];
_p = _p		+ [15];

_i = _i		+ ["CUP_NVG_GPNVG_black"];
_u = _u		+ [2];
_p = _p		+ [15];

_i = _i		+ ["Binocular"];
_u = _u		+ [0];
_p = _p		+ [5];

_i = _i		+ ["Rangefinder"];
_u = _u		+ [1];
_p = _p		+ [5];

_i = _i		+ ["lerca_1200_black"];
_u = _u		+ [0];
_p = _p		+ [50];

_i = _i		+ ["Laserdesignator_03"];
_u = _u		+ [3];
_p = _p		+ [150];

_i = _i		+ ["ItemGPS"];
_u = _u		+ [0];
_p = _p		+ [10];

_i = _i		+ ["ItemMap"];
_u = _u		+ [0];
_p = _p		+ [2];

_i = _i		+ ["itemradio"];
_u = _u		+ [0];
_p = _p		+ [3];

_i = _i		+ ["itemcompass"];
_u = _u		+ [0];
_p = _p		+ [1];

_i = _i		+ ["itemwatch"];
_u = _u		+ [0];
_p = _p		+ [1];

_i = _i		+ ["FirstAidKit"];
_u = _u		+ [0];
_p = _p		+ [15];

_i = _i		+ ["Toolkit"];
_u = _u		+ [0];
_p = _p		+ [25];

_i = _i		+ ["Medikit"];
_u = _u		+ [0];
_p = _p		+ [15];

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

//--- ADDONS ---

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
_i = _i + ["TFAR_rt1523g_rhs"];
_u = _u		+ [0];
_p = _p		+ [50];

_i = _i + ["TFAR_rt1523g_big_rhs"];
_u = _u		+ [0];
_p = _p		+ [75];
};

[_faction, _i, _u, _p] call compile preprocessFileLineNumbers "Common\Config\Gear\Gear_Config_Set.sqf"; 

//--- Templates (Generated on purchase by uncommenting the diag_log in Events_UI_GearMenu.sqf >> "onPurchase").
_t = [];

[_faction, _t] call compile preprocessFileLineNumbers "Common\Config\Gear\Gear_Template_Set.sqf"; 