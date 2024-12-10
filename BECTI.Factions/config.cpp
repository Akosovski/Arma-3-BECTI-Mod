class CfgPatches {
    class AKO_AL_ADF {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.62;
        requiredAddons[] = {};
        author = "Akosovski";
        authors[] = {"Akosovski"};
    };
    class AKO_TA_TLA {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.62;
        requiredAddons[] = {};
        author = "Akosovski";
        authors[] = {"Akosovski"};
    };
    class AKO_TK_ISIS {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.62;
        requiredAddons[] = {};
        author = "Akosovski";
        authors[] = {"Akosovski"};
    };
    class AKO_RU_MSV {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.62;
        requiredAddons[] = {};
        author = "Akosovski";
        authors[] = {"Akosovski"};
    };
    class AKO_RU_VDV {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.62;
        requiredAddons[] = {};
        author = "Akosovski";
        authors[] = {"Akosovski"};
    };
    class AKO_RU_VMF {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.62;
        requiredAddons[] = {};
        author = "Akosovski";
        authors[] = {"Akosovski"};
    };
    class AKO_US_USMC {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.62;
        requiredAddons[] = {};
        author = "Akosovski";
        authors[] = {"Akosovski"};
    };
    class AKO_US_RG {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.62;
        requiredAddons[] = {};
        author = "Kaga No Kami";
        authors[] = {"Kaga No Kami"};
    };
    class AKO_US_USAF {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.62;
        requiredAddons[] = {};
        author = "Kaga No Kami";
        authors[] = {"Kaga No Kami"};
    };
};

class CBA_Extended_EventHandlers_base;

class CfgFactionClasses {
    class AKO_AL_ADF {
        displayName = "Ako's Altis (ADF)";
        side = 2;
        flag = "\A3\ui_f\data\map\markers\flags\Altis_ca.paa";
        icon = "\A3\ui_f\data\map\markers\flags\Altis_ca.paa";
        priority = 0;
    };
    class AKO_TA_TLA {
        displayName = "Ako's Tanoa (TLA)";
        side = 2;
        flag = "\A3\Ui_f\data\Map\Markers\Flags\tanoa_ca.paa";
        icon = "\A3\Ui_f\data\Map\Markers\Flags\tanoa_ca.paa";
        priority = 0;
    };
    class AKO_TK_ISIS {
        displayName = "Ako's Takistan (ISIS)";
        side = 2;
        flag = "\CUP\BaseConfigs\CUP_BaseConfigs\data\Flags\flag_tkm_co.paa";
        icon = "\CUP\BaseConfigs\CUP_BaseConfigs\data\Flags\flag_tkm_co.paa";
        priority = 0;
    };
    class AKO_RU_MSV {
        displayName = "Ako's Russia (MSV)";
        side = 0;
        flag = "\a3\UI_F_Enoch\Data\CfgMarkers\Russia_CA.paa";
        icon = "\a3\UI_F_Enoch\Data\CfgMarkers\Russia_CA.paa";
        priority = 0;
    };
    class AKO_RU_VDV {
        displayName = "Ako's Russia (VDV)";
        side = 0;
        flag = "\rhsafrf\addons\rhs_main\data\flag_map\Flag_vdv_CO.paa";
        icon = "\rhsafrf\addons\rhs_main\data\flag_map\Flag_vdv_CO.paa";
        priority = 0;
    };
    class AKO_RU_VMF {
        displayName = "Ako's Russia (VMF)";
        side = 0;
        flag = "\rhsafrf\addons\rhs_main\data\flag_map\Flag_vmf_CO.paa";
        icon = "\rhsafrf\addons\rhs_main\data\flag_map\Flag_vmf_CO.paa";
        priority = 0;
    };
    class AKO_US_USMC {
        displayName = "Ako's USA (USMC)";
        side = 1;
        flag = "\A3\ui_f\data\map\markers\flags\USA_ca.paa";
        icon = "\A3\ui_f\data\map\markers\flags\USA_ca.paa";
        priority = 0;
    };
    class AKO_US_RG {
        displayName = "Ako's USA (RANGERS)";
        side = 1;
        flag = "\A3\ui_f\data\map\markers\flags\USA_ca.paa";
        icon = "\A3\ui_f\data\map\markers\flags\USA_ca.paa";
        priority = 0;
    };
    class AKO_US_USAF {
        displayName = "Ako's USA (AIR FORCE)";
        side = 1;
        flag = "\A3\ui_f\data\map\markers\flags\USA_ca.paa";
        icon = "\A3\ui_f\data\map\markers\flags\USA_ca.paa";
        priority = 0;
    };
};

class CfgGroups {
    class Indep {

        class AKO_AL_ADF {
            name = "Ako's Altis (ADF)";
        };
        class AKO_TA_TLA {
            name = "Ako's Tanoa (TLA)";
        };
        class AKO_TK_ISIS {
            name = "Ako's Takistan (ISIS)";
        };

    };
    class EAST {

        class AKO_RU_MSV {
            name = "Ako's Russia (MSV)";
        };
        class AKO_RU_VDV {
            name = "Ako's Russia (VDV)";
        };
        class AKO_RU_VMF {
            name = "Ako's Russia (VMF)";
        };
    };
    class WEST {

        class AKO_US_USMC {
            name = "Ako's America (USMC)";
        };
        class AKO_US_RG {
            name = "Ako's America (RANGERS)";
        };
        class AKO_US_USAF {
            name = "Ako's America (AIR FORCE)";
        };
    };
};

class CfgVehicles {
    
    // BLUFOR // ---------------------------------------
    #include "BLUFOR\USMC\Cfg_USMC_Infantry.hpp"
    #include "BLUFOR\USMC\Cfg_USMC_Infantry_Desert.hpp"
    #include "BLUFOR\USMC\Cfg_USMC_Ground.hpp"
    #include "BLUFOR\USMC\Cfg_USMC_Air.hpp"

    #include "BLUFOR\USRG\Cfg_USRG_Infantry.hpp"
    #include "BLUFOR\USRG\Cfg_USRG_Ground.hpp"
    #include "BLUFOR\USRG\Cfg_USRG_Air.hpp"

    #include "BLUFOR\USAF\Cfg_USAF_Combined.hpp"

    // REDFOR // ---------------------------------------
    #include "REDFOR\MSV\Cfg_MSV_Infantry.hpp"
    #include "REDFOR\MSV\Cfg_MSV_Ground.hpp"

    #include "REDFOR\VDV\Cfg_VDV_Infantry.hpp"
    #include "REDFOR\VDV\Cfg_VDV_Ground.hpp"
    #include "REDFOR\VDV\Cfg_VDV_Air.hpp"

    #include "REDFOR\VMF\Cfg_VMF_Infantry.hpp"

    // INDEPENDENT // ----------------------------------
    #include "INDEPENDENT\ADF\Cfg_ADF_Combined.hpp"
    #include "INDEPENDENT\TLA\Cfg_TLA_Combined.hpp"
    #include "INDEPENDENT\ISIS\Cfg_ISIS_Combined.hpp"
}
