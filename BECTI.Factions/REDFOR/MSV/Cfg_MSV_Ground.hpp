
    class ru_msv_d30a : rhs_D30_msv_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "MSV D-30A";
        side = 0;
        faction = "AKO_RU_MSV";
        crew = "ru_msv_rifleman_akm";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "ru_msv_rifleman_akm"; };
        };

        class TransportMagazines {
            class _xx_rhs_mag_3of56_35{
                magazine = "rhs_mag_3of56_35";
                count = 2;
            };
            class _xx_rhs_mag_3of69m_2 {
                magazine = "rhs_mag_3of69m_2";
                count = 15;
            };
        };


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_msv_2s1 : rhs_2s1_tv_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "MSV 2S1";
        side = 0;
        faction = "AKO_RU_MSV";
        crew = "ru_msv_tank_crewman";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "ru_msv_tank_crewman"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    // TANKS // tanks // ----------------------------

    class ru_msv_t72b_1989 : rhs_t72bc_tv_OCimport_03 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "MSV T-72B (1989)";
        side = 0;
        faction = "ako_ru_msv";
        crew = "ru_msv_tank_crewman";

        class Turrets : Turrets {
            class MainTurret : MainTurret {
                gunnerType = "ru_msv_tank_crewman";
                magazines[] = {
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_3bm42",
                    "rhs_mag_3bk18",
                    "rhs_mag_3of26",
                    "rhs_mag_9m119"
                };

                class Turrets : Turrets {
                    class CommanderOptics : CommanderOptics {
                        gunnerType = "ru_msv_tank_crewman";
                    };
                    class CommanderMG : CommanderMG {
                        gunnerType = "";
                    };
                };
            };
        };

        class TransportMagazines {
            class _xx_rhs_mag_762x54mm_250{
                magazine = "rhs_mag_762x54mm_250";
                count = 8;
            };
            class _xx_rhs_mag_3bm42 {
                magazine = "rhs_mag_3bm42";
                count = 1;
            };
            class _xx_rhs_mag_3bk18 {
                magazine = "rhs_mag_3bk18";
                count = 1;
            };
            class _xx_rhs_mag_3of26 {
                magazine = "rhs_mag_3of26";
                count = 1;
            };
            class _xx_rhs_mag_9m119 {
                magazine = "rhs_mag_9m119";
                count = 1;
            };
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsafrf\addons\rhs_t72\data\rhs_t72b_01_co.paa'];_unit setObjectTextureGlobal [1,'rhsafrf\addons\rhs_t72\data\rhs_t72b_02_co.paa'];_unit setObjectTextureGlobal [2,'rhsafrf\addons\rhs_t72\data\rhs_t72b_03_co.paa'];_unit setObjectTextureGlobal [3,'rhsafrf\addons\rhs_t72\data\rhs_t72b_04_co.paa'];_unit setObjectTextureGlobal [4,'rhsafrf\addons\rhs_t72\data\rhs_t72b_05_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "standard";

    };

    class ru_msv_t72b3_2012 : rhs_t72bd_tv_OCimport_03 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "MSV T-72B3 (2012)";
        side = 0;
        faction = "ako_ru_msv";
        crew = "ru_msv_tank_crewman";

        class Turrets : Turrets {
            class MainTurret : MainTurret {
                gunnerType = "ru_msv_tank_crewman";

                magazines[] = {
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_3bm42",
                    "rhs_mag_3bk18",
                    "rhs_mag_3of26",
                    "rhs_mag_9m119"
                };
                class Turrets : Turrets {
                    class CommanderOptics : CommanderOptics {
                        gunnerType = "ru_msv_tank_crewman";
                    };
                    class CommanderMG : CommanderMG {
                        gunnerType = "";
                    };
                };
            };
        };

        class TransportMagazines {
            class _xx_rhs_mag_762x54mm_250{
                magazine = "rhs_mag_762x54mm_250";
                count = 8;
            };
            class _xx_rhs_mag_3bm42 {
                magazine = "rhs_mag_3bm42";
                count = 1;
            };
            class _xx_rhs_mag_3bk18 {
                magazine = "rhs_mag_3bk18";
                count = 1;
            };
            class _xx_rhs_mag_3of26 {
                magazine = "rhs_mag_3of26";
                count = 1;
            };
            class _xx_rhs_mag_9m119 {
                magazine = "rhs_mag_9m119";
                count = 1;
            };
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsafrf\addons\rhs_t72\data\rhs_t72b3_01_co.paa'];_unit setObjectTextureGlobal [1,'rhsafrf\addons\rhs_t72\data\rhs_t72b3_02_co.paa'];_unit setObjectTextureGlobal [2,'rhsafrf\addons\rhs_t72\data\rhs_t72b_03_co.paa'];_unit setObjectTextureGlobal [3,'rhsafrf\addons\rhs_t72\data\rhs_t72b_04_co.paa'];_unit setObjectTextureGlobal [4,'rhsafrf\addons\rhs_t72\data\rhs_t72b_05_co.paa'];_unit setObjectTextureGlobal [5,'rhsafrf\addons\rhs_t72\data\rhs_t72b3_turret_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "standard";

    };

    class ru_msv_t80u : rhs_t80u_OCimport_03 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "MSV T-80U";
        side = 0;
        faction = "ako_ru_msv";
        crew = "ru_msv_tank_crewman";

        class Turrets : Turrets {
            class MainTurret : MainTurret {
                gunnerType = "ru_msv_tank_crewman";

                magazines[] = {
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_3bm42",
                    "rhs_mag_3bk18",
                    "rhs_mag_3of26",
                    "rhs_mag_9m119"
                };
                class Turrets : Turrets {
                    class CommanderOptics : CommanderOptics {
                        gunnerType = "ru_msv_tank_crewman";
                    };
                    class CommanderMG : CommanderMG {
                        gunnerType = "";
                    };
                };
            };
        };

        class TransportMagazines {
            class _xx_rhs_mag_762x54mm_250{
                magazine = "rhs_mag_762x54mm_250";
                count = 8;
            };
            class _xx_rhs_mag_3bm42 {
                magazine = "rhs_mag_3bm42";
                count = 1;
            };
            class _xx_rhs_mag_3bk18 {
                magazine = "rhs_mag_3bk18";
                count = 1;
            };
            class _xx_rhs_mag_3of26 {
                magazine = "rhs_mag_3of26";
                count = 1;
            };
            class _xx_rhs_mag_9m119 {
                magazine = "rhs_mag_9m119";
                count = 1;
            };
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsafrf\addons\rhs_t80u\data\rhs_t80u_01_co.paa'];_unit setObjectTextureGlobal [1,'rhsafrf\addons\rhs_t80u\data\rhs_t80u_02_co.paa'];_unit setObjectTextureGlobal [2,'rhsafrf\addons\rhs_t80u\data\rhs_t80u_03_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "standard";

    };

    class ru_msv_t80um : rhs_t80um_OCimport_03 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "MSV T-80UM";
        side = 0;
        faction = "ako_ru_msv";
        crew = "ru_msv_tank_crewman";

        class Turrets : Turrets {
            class MainTurret : MainTurret {
                gunnerType = "ru_msv_tank_crewman";

                magazines[] = {
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_3bm42",
                    "rhs_mag_3bk18",
                    "rhs_mag_3of26",
                    "rhs_mag_9m119"
                };
                class Turrets : Turrets {
                    class CommanderOptics : CommanderOptics {
                        gunnerType = "ru_msv_tank_crewman";
                    };
                    class CommanderMG : CommanderMG {
                        gunnerType = "";
                    };
                };
            };
        };

        class TransportMagazines {
            class _xx_rhs_mag_762x54mm_250{
                magazine = "rhs_mag_762x54mm_250";
                count = 8;
            };
            class _xx_rhs_mag_3bm42 {
                magazine = "rhs_mag_3bm42";
                count = 1;
            };
            class _xx_rhs_mag_3bk18 {
                magazine = "rhs_mag_3bk18";
                count = 1;
            };
            class _xx_rhs_mag_3of26 {
                magazine = "rhs_mag_3of26";
                count = 1;
            };
            class _xx_rhs_mag_9m119 {
                magazine = "rhs_mag_9m119";
                count = 1;
            };
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsafrf\addons\rhs_t80u\data\rhs_t80u_01_co.paa'];_unit setObjectTextureGlobal [1,'rhsafrf\addons\rhs_t80u\data\rhs_t80u_02b_co.paa'];_unit setObjectTextureGlobal [2,'rhsafrf\addons\rhs_t80u\data\rhs_t80u_03_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "standard";

    };

    class ru_msv_t90_1992 : rhs_t90_tv_OCimport_03 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "MSV T-90 (1992)";
        side = 0;
        faction = "ako_ru_msv";
        crew = "ru_msv_tank_crewman";

        class Turrets : Turrets {
            class MainTurret : MainTurret {
                gunnerType = "ru_msv_tank_crewman";

                magazines[] = {
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_3bm42",
                    "rhs_mag_3bk18",
                    "rhs_mag_3of26",
                    "rhs_mag_9m119"
                };
                class Turrets : Turrets {
                    class CommanderOptics : CommanderOptics {
                        gunnerType = "ru_msv_tank_crewman";
                    };
                    class CommanderMG : CommanderMG {
                        gunnerType = "";
                    };
                };
            };
        };

        class TransportMagazines {
            class _xx_rhs_mag_762x54mm_250{
                magazine = "rhs_mag_762x54mm_250";
                count = 8;
            };
            class _xx_rhs_mag_3bm42 {
                magazine = "rhs_mag_3bm42";
                count = 1;
            };
            class _xx_rhs_mag_3bk18 {
                magazine = "rhs_mag_3bk18";
                count = 1;
            };
            class _xx_rhs_mag_3of26 {
                magazine = "rhs_mag_3of26";
                count = 1;
            };
            class _xx_rhs_mag_9m119 {
                magazine = "rhs_mag_9m119";
                count = 1;
            };
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsafrf\addons\rhs_t72\data\rhs_t72b3_01_co.paa'];_unit setObjectTextureGlobal [1,'rhsafrf\addons\rhs_t72\data\rhs_t72b_02d_co.paa'];_unit setObjectTextureGlobal [2,'rhsafrf\addons\rhs_t72\data\rhs_t72b_03_co.paa'];_unit setObjectTextureGlobal [3,'rhsafrf\addons\rhs_t72\data\rhs_t72b_04_co.paa'];_unit setObjectTextureGlobal [4,'rhsafrf\addons\rhs_t72\data\rhs_t72b_05_co.paa'];_unit setObjectTextureGlobal [5,'rhsafrf\addons\rhs_t72\data\rhs_t90parts_co.paa'];_unit setObjectTextureGlobal [6,'rhsafrf\addons\rhs_t72\data\rhs_t72b3_02_co.paa'];_unit setObjectTextureGlobal [7,''];_unit setObjectTextureGlobal [8,'rhsafrf\addons\rhs_t72\data\rhs_dazzler_co.paa'];_unit setObjectTextureGlobal [9,'rhsafrf\addons\rhs_t72\data\rhs_dazzler_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "standard";

    };

    class ru_msv_t90a_2006 : rhs_t90a_tv_OCimport_03 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "MSV T-90A (2006)";
        side = 0;
        faction = "ako_ru_msv";
        crew = "ru_msv_tank_crewman";

        class Turrets : Turrets {
            class MainTurret : MainTurret {
                gunnerType = "ru_msv_tank_crewman";

                magazines[] = {
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_3bm42",
                    "rhs_mag_3bk18",
                    "rhs_mag_3of26",
                    "rhs_mag_9m119"
                };
                class Turrets : Turrets {
                    class CommanderOptics : CommanderOptics {
                        gunnerType = "ru_msv_tank_crewman";
                    };
                    class CommanderMG : CommanderMG {
                        gunnerType = "";
                    };
                };
            };
        };

        class TransportMagazines {
            class _xx_rhs_mag_762x54mm_250{
                magazine = "rhs_mag_762x54mm_250";
                count = 8;
            };
            class _xx_rhs_mag_3bm42 {
                magazine = "rhs_mag_3bm42";
                count = 1;
            };
            class _xx_rhs_mag_3bk18 {
                magazine = "rhs_mag_3bk18";
                count = 1;
            };
            class _xx_rhs_mag_3of26 {
                magazine = "rhs_mag_3of26";
                count = 1;
            };
            class _xx_rhs_mag_9m119 {
                magazine = "rhs_mag_9m119";
                count = 1;
            };
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsafrf\addons\rhs_t72\data\rhs_t72b3_01_co.paa'];_unit setObjectTextureGlobal [1,'rhsafrf\addons\rhs_t72\data\rhs_t72b3_02_co.paa'];_unit setObjectTextureGlobal [2,'rhsafrf\addons\rhs_t72\data\rhs_t72b_03_co.paa'];_unit setObjectTextureGlobal [3,'rhsafrf\addons\rhs_t72\data\rhs_t72b_04_co.paa'];_unit setObjectTextureGlobal [4,'rhsafrf\addons\rhs_t72\data\rhs_t72b_05_co.paa'];_unit setObjectTextureGlobal [5,'rhsafrf\addons\rhs_t72\data\rhs_t90parts_co.paa'];_unit setObjectTextureGlobal [6,'rhsafrf\addons\rhs_t72\data\rhs_t90a_02_co.paa'];_unit setObjectTextureGlobal [7,''];_unit setObjectTextureGlobal [8,'rhsafrf\addons\rhs_t72\data\rhs_dazzler_co.paa'];_unit setObjectTextureGlobal [9,'rhsafrf\addons\rhs_t72\data\rhs_dazzler_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "standard";

    };

    class ru_msv_t90sm : rhs_t90sm_tv_OCimport_03 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "MSV T-90SM";
        side = 0;
        faction = "ako_ru_msv";
        crew = "ru_msv_tank_crewman";

        class Turrets : Turrets {
            class MainTurret : MainTurret {
                gunnerType = "ru_msv_tank_crewman";

                magazines[] = {
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_3bm42",
                    "rhs_mag_3bk18",
                    "rhs_mag_3of26",
                    "rhs_mag_9m119"
                };
                class Turrets : Turrets {
                    class CommanderOptics : CommanderOptics {
                        gunnerType = "ru_msv_tank_crewman";
                    };
                    class CommanderMG : CommanderMG {
                        gunnerType = "";
                    };
                };
            };
        };

        class TransportMagazines {
            class _xx_rhs_mag_762x54mm_250{
                magazine = "rhs_mag_762x54mm_250";
                count = 8;
            };
            class _xx_rhs_mag_3bm42 {
                magazine = "rhs_mag_3bm42";
                count = 1;
            };
            class _xx_rhs_mag_3bk18 {
                magazine = "rhs_mag_3bk18";
                count = 1;
            };
            class _xx_rhs_mag_3of26 {
                magazine = "rhs_mag_3of26";
                count = 1;
            };
            class _xx_rhs_mag_9m119 {
                magazine = "rhs_mag_9m119";
                count = 1;
            };
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsafrf\addons\rhs_t72\data\rhs_t72b3_01_co.paa'];_unit setObjectTextureGlobal [1,'rhsafrf\addons\rhs_t72\data\rhs_t72b3_02_co.paa'];_unit setObjectTextureGlobal [2,'rhsafrf\addons\rhs_t72\data\rhs_t72b_03_co.paa'];_unit setObjectTextureGlobal [3,'rhsafrf\addons\rhs_t72\data\rhs_t72b_04_co.paa'];_unit setObjectTextureGlobal [4,'rhsafrf\addons\rhs_t72\data\rhs_t90am_01_co.paa'];_unit setObjectTextureGlobal [5,'rhsafrf\addons\rhs_t72\data\rhs_t90am_02_co.paa'];_unit setObjectTextureGlobal [6,'rhsafrf\addons\rhs_t72\data\rhs_t72b3_e_01_co.paa'];_unit setObjectTextureGlobal [7,'rhsafrf\addons\rhs_t72\data\rhs_t72b3_e_02_co.paa'];_unit setObjectTextureGlobal [8,'rhsafrf\addons\rhs_t72\data\rhs_t90parts_co.paa'];_unit setObjectTextureGlobal [9,'rhsafrf\addons\rhs_t72\data\rhs_t90a_02_co.paa'];_unit setObjectTextureGlobal [10,'rhsafrf\addons\rhs_t72\data\rhs_t90sm_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "standard";

    };

    // APC // apc // ----------------------------

    class ru_msv_btr80a : rhs_btr80a_msv_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "MSV BTR-80A";
        side = 0;
        faction = "ako_ru_msv";
        crew = "ru_msv_crewman";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "ru_msv_crewman"; };
            class CommanderOptics : CommanderOptics { gunnerType = ""; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
            class CargoTurret_07 : CargoTurret_07 { gunnerType = ""; };
            class CargoTurret_08 : CargoTurret_08 { gunnerType = ""; };
            class CargoTurret_09 : CargoTurret_09 { gunnerType = ""; };
            class Commander_Out : Commander_Out { gunnerType = ""; };
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_01_std_co.paa'];_unit setObjectTextureGlobal [1,'rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_02_std_co.paa'];_unit setObjectTextureGlobal [2,'rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_03_std_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "standard";

    };

    class ru_msv_btr70 : rhs_btr70_msv_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "MSV BTR-70";
        side = 0;
        faction = "ako_ru_msv";
        crew = "ru_msv_crewman";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "ru_msv_crewman"; };
            class CommanderOptics : CommanderOptics { gunnerType = ""; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
            class CargoTurret_07 : CargoTurret_07 { gunnerType = ""; };
            class CargoTurret_08 : CargoTurret_08 { gunnerType = ""; };
            class Commander_Out : Commander_Out { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsafrf\addons\rhs_btr70\data\btr70_1_co.paa'];_unit setObjectTextureGlobal [1,'rhsafrf\addons\rhs_btr70\data\btr70_2_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "standard";

    };

    class ru_msv_brdm : rhsgref_BRDM2_msv_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "MSV BRDM-2";
        side = 0;
        faction = "ako_ru_msv";
        crew = "ru_msv_crewman";

        class Turrets : Turrets {
            class CommanderOptics : CommanderOptics { gunnerType = ""; };
            class MainTurret : MainTurret { gunnerType = "ru_msv_crewman"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_msv_brdm_at : rhsgref_BRDM2_ATGM_msv_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "MSV BRDM-2 (AT)";
        side = 0;
        faction = "ako_ru_msv";
        crew = "ru_msv_crewman";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "ru_msv_crewman"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    // IFV // ifv // ----------------------------

    class ru_msv_bmp1 : rhs_bmp1_msv_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "MSV BMP-1";
        side = 0;
        faction = "ako_ru_msv";
        crew = "ru_msv_crewman";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "ru_msv_crewman"; };
            class Com_BMP1 : Com_BMP1 { gunnerType = ""; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
            class CargoTurret_07 : CargoTurret_07 { gunnerType = ""; };
            class CargoTurret_08 : CargoTurret_08 { gunnerType = ""; };
            class CargoTurret_09 : CargoTurret_09 { gunnerType = ""; };
            class CargoTurret_10 : CargoTurret_10 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsafrf\addons\rhs_bmp\textures\bmp_1_co.paa'];_unit setObjectTextureGlobal [1,'rhsafrf\addons\rhs_bmp\textures\bmp_2_co.paa'];_unit setObjectTextureGlobal [2,'rhsafrf\addons\rhs_bmp\textures\bmp_3_co.paa'];_unit setObjectTextureGlobal [3,'rhsafrf\addons\rhs_bmp\textures\bmp_4_co.paa'];_unit setObjectTextureGlobal [4,'rhsafrf\addons\rhs_bmp\textures\bmp_5_co.paa'];_unit setObjectTextureGlobal [5,'rhsafrf\addons\rhs_bmp\textures\bmp_6_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "standard";

    };

    class ru_msv_bmp2 : rhs_bmp2_msv_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "MSV BMP-2 (1986)";
        side = 0;
        faction = "ako_ru_msv";
        crew = "ru_msv_crewman";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "ru_msv_crewman"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
            class CargoTurret_07 : CargoTurret_07 { gunnerType = ""; };
            class CargoTurret_08 : CargoTurret_08 { gunnerType = ""; };
            class CargoTurret_09 : CargoTurret_09 { gunnerType = ""; };
            class CargoTurret_10 : CargoTurret_10 { gunnerType = ""; };
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsafrf\addons\rhs_bmp\textures\bmp_1_co.paa'];_unit setObjectTextureGlobal [1,'rhsafrf\addons\rhs_bmp\textures\bmp_2_co.paa'];_unit setObjectTextureGlobal [2,'rhsafrf\addons\rhs_bmp\textures\bmp_3_co.paa'];_unit setObjectTextureGlobal [3,'rhsafrf\addons\rhs_bmp\textures\bmp_4_co.paa'];_unit setObjectTextureGlobal [4,'rhsafrf\addons\rhs_bmp\textures\bmp_5_co.paa'];_unit setObjectTextureGlobal [5,'rhsafrf\addons\rhs_bmp\textures\bmp_6_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "standard";

    };

    class ru_msv_bmp3 : rhs_bmp3_late_msv_OCimport_03 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "MSV BMP-3";
        side = 0;
        faction = "ako_ru_msv";
        crew = "ru_msv_crewman";

        class Turrets : Turrets {
            class MainTurret : MainTurret {
                gunnerType = "ru_msv_tank_crewman";
                class Turrets : Turrets {
                    class CommanderOptics : CommanderOptics {
                        gunnerType = "ru_msv_tank_crewman";
                    };
                };
            };
            class GPMGTurret1 : GPMGTurret1 { gunnerType = "ru_msv_rifleman_ak74m"; };
            class GPMGTurret2 : GPMGTurret2 { gunnerType = "ru_msv_rifleman_ak74m"; };
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_01_co.paa'];_unit setObjectTextureGlobal [1,'rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_02_co.paa'];_unit setObjectTextureGlobal [2,'rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_03_mod_co.paa'];_unit setObjectTextureGlobal [3,'rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_04_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "standard";

    };

    class ru_msv_bmp3_vesna : rhs_bmp3mera_msv_OCimport_03 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "MSV BMP-3 (Vesna-K/A)";
        side = 0;
        faction = "ako_ru_msv";
        crew = "ru_msv_crewman";

        class Turrets : Turrets {
            class MainTurret : MainTurret {
                gunnerType = "ru_msv_tank_crewman";
                class Turrets : Turrets {
                    class CommanderOptics : CommanderOptics {
                        gunnerType = "ru_msv_tank_crewman";
                    };
                };
            };
            class GPMGTurret1 : GPMGTurret1 { gunnerType = "ru_msv_rifleman_ak74m"; };
            class GPMGTurret2 : GPMGTurret2 { gunnerType = "ru_msv_rifleman_ak74m"; };
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_01_3mera_co.paa'];_unit setObjectTextureGlobal [1,'rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_02_3mera_co.paa'];_unit setObjectTextureGlobal [2,'rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_03_3m_co.paa'];_unit setObjectTextureGlobal [3,'rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_04_co.paa'];_unit setObjectTextureGlobal [4,'rhsafrf\addons\rhs_bmp3\data\3m_era_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "standard";

    };

    // CARS // cars // ----------------------------

    class ru_msv_uaz : RHS_UAZ_MSV_01_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "MSV UAZ-3151";
        side = 0;
        faction = "ako_ru_msv";
        crew = "ru_msv_driver";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_msv_uaz_open : rhs_uaz_open_MSV_01_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "MSV UAZ-3151 (Open)";
        side = 0;
        faction = "ako_ru_msv";
        crew = "ru_msv_driver";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_msv_gaz_normal : rhs_tigr_msv_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "MSV GAZ-233011";
        side = 0;
        faction = "ako_ru_msv";
        crew = "ru_msv_driver";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_msv_gaz_armed : rhs_tigr_sts_msv_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "MSV GAZ-233014";
        side = 0;
        faction = "ako_ru_msv";
        crew = "ru_msv_driver";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "ru_msv_rifleman_ak74m"; };
            class AGS_Turret : AGS_Turret { gunnerType = ""; };
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_msv_gaz_unarmed : rhs_tigr_m_msv_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "MSV GAZ-233114";
        side = 0;
        faction = "ako_ru_msv";
        crew = "ru_msv_driver";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = "ru_msv_machinegunner"; };
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    // TRUCKS // trucks // ----------------------------

    class ru_msv_ural_normal : RHS_Ural_MSV_01_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "MSV Ural-4320";
        side = 0;
        faction = "ako_ru_msv";
        crew = "ru_msv_driver";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_msv_ural_flatbed : RHS_Ural_Flat_MSV_01_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "MSV Ural-4320 (Flatbed)";
        side = 0;
        faction = "ako_ru_msv";
        crew = "ru_msv_driver";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_msv_ural_open : RHS_Ural_Open_MSV_01_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "MSV Ural-4320 (Open)";
        side = 0;
        faction = "ako_ru_msv";
        crew = "ru_msv_driver";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_msv_ural_open_flatbed : RHS_Ural_Open_Flat_MSV_01_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "MSV Ural-4320 (Open/Flatbed)";
        side = 0;
        faction = "ako_ru_msv";
        crew = "ru_msv_driver";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_msv_ural_fuel : RHS_Ural_Fuel_MSV_01_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "MSV Ural-4320 (Fuel)";
        side = 0;
        faction = "ako_ru_msv";
        crew = "ru_msv_driver";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_msv_ural_repair : RHS_Ural_Repair_MSV_01_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "MSV Ural-4320 (Repair)";
        side = 0;
        faction = "ako_ru_msv";
        crew = "ru_msv_driver";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_msv_ural_ammo : RHS_Ural_Ammo_MSV_01_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "MSV Ural-4320 (Ammo)";
        side = 0;
        faction = "ako_ru_msv";
        crew = "ru_msv_driver";

        transportAmmo = 9999999;

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_msv_ural_aa : RHS_Ural_Zu23_MSV_01_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "MSV Ural-4320 (ZU-23-2)";
        side = 0;
        faction = "ako_ru_msv";
        crew = "ru_msv_driver";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "ru_msv_rifleman_ak74m"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = "ru_msv_rifleman_ak74m"; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_msv_salvager : ru_msv_ural_repair {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "MSV Salvager";
        side = 0;
        faction = "ako_ru_msv";
        crew = "ru_msv_driver";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    // ARTILLERY // artillery // ----------------------------

    class ru_msv_bm21 : RHS_BM21_MSV_01_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "MSV BM-21 Grad";
        side = 0;
        faction = "ako_ru_msv";
        crew = "ru_msv_rifleman_ak74m";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = ""; };
        };
        
        class Components {
            class TransportPylonsComponent {
                UIPicture = "\rhsafrf\addons\rhs_a2port_car\data\loadouts\RHS_BM21_EDEN_CA.paa";
                class pylons
                {
                    class pylon1
                    {
                        hardpoints[]		= {"RHS_HP_BM21"};
                        priority			= 1;
                        maxweight			= 200;
                        UIposition[]		= {0.12,0.1};
                        bay					= 1;
                        attachment			= "rhs_mag_9m28f_1";
                        turret[] 			= {0};
                        hitpoint 			= HitLauncher;
                    };
                    class pylon2: pylon1 	{priority = 2;	UIposition[] = {__EVAL(0.12+0.19*0),__EVAL(0.1+0.1/2.5)};};
                    class pylon3: pylon1 	{priority = 3;	UIposition[] = {__EVAL(0.12+0.19*0),__EVAL(0.1+0.2/2.5)};};
                    class pylon4: pylon1 	{priority = 4;	UIposition[] = {__EVAL(0.12+0.19*0),__EVAL(0.1+0.3/2.5)};};
                    class pylon5: pylon1 	{priority = 5;	UIposition[] = {__EVAL(0.12+0.19*0),__EVAL(0.1+0.4/2.5)};};
                    class pylon6: pylon1 	{priority = 6;	UIposition[] = {__EVAL(0.12+0.19*0),__EVAL(0.1+0.5/2.5)};};
                    class pylon7: pylon1 	{priority = 7;	UIposition[] = {__EVAL(0.12+0.19*0),__EVAL(0.1+0.6/2.5)};};
                    class pylon8: pylon1 	{priority = 8;	UIposition[] = {__EVAL(0.12+0.19*0),__EVAL(0.1+0.7/2.5)};};
                    class pylon9: pylon1 	{priority = 9;	UIposition[] = {__EVAL(0.12+0.19*0),__EVAL(0.1+0.8/2.5)};};
                    class pylon10: pylon1 	{priority = 10;	UIposition[] = {__EVAL(0.12+0.19*0),__EVAL(0.1+0.9/2.5)};};
                    class pylon11: pylon1 	{priority = 11;	UIposition[] = {__EVAL(0.12+0.19*1),__EVAL(0.1+0.0/2.5)};};
                    class pylon12: pylon1 	{priority = 12;	UIposition[] = {__EVAL(0.12+0.19*1),__EVAL(0.1+0.1/2.5)};};
                    class pylon13: pylon1 	{priority = 13;	UIposition[] = {__EVAL(0.12+0.19*1),__EVAL(0.1+0.2/2.5)};};
                    class pylon14: pylon1 	{priority = 14;	UIposition[] = {__EVAL(0.12+0.19*1),__EVAL(0.1+0.3/2.5)};};
                    class pylon15: pylon1 	{priority = 15;	UIposition[] = {__EVAL(0.12+0.19*1),__EVAL(0.1+0.4/2.5)};};
                    class pylon16: pylon1 	{priority = 16;	UIposition[] = {__EVAL(0.12+0.19*1),__EVAL(0.1+0.5/2.5)};};
                    class pylon17: pylon1 	{priority = 17;	UIposition[] = {__EVAL(0.12+0.19*1),__EVAL(0.1+0.6/2.5)};};
                    class pylon18: pylon1 	{priority = 18;	UIposition[] = {__EVAL(0.12+0.19*1),__EVAL(0.1+0.7/2.5)};};
                    class pylon19: pylon1 	{priority = 19;	UIposition[] = {__EVAL(0.12+0.19*1),__EVAL(0.1+0.8/2.5)};};
                    class pylon20: pylon1 	{priority = 20;	UIposition[] = {__EVAL(0.12+0.19*1),__EVAL(0.1+0.9/2.5)};};
                    class pylon21: pylon1 	{priority = 21;	UIposition[] = {__EVAL(0.12+0.19*2),__EVAL(0.1+0.0/2.5)};};
                    class pylon22: pylon1 	{priority = 22;	UIposition[] = {__EVAL(0.12+0.19*2),__EVAL(0.1+0.1/2.5)};};
                    class pylon23: pylon1 	{priority = 23;	UIposition[] = {__EVAL(0.12+0.19*2),__EVAL(0.1+0.2/2.5)};};
                    class pylon24: pylon1 	{priority = 24;	UIposition[] = {__EVAL(0.12+0.19*2),__EVAL(0.1+0.3/2.5)};};
                    class pylon25: pylon1 	{priority = 25;	UIposition[] = {__EVAL(0.12+0.19*2),__EVAL(0.1+0.4/2.5)};};
                    class pylon26: pylon1 	{priority = 26;	UIposition[] = {__EVAL(0.12+0.19*2),__EVAL(0.1+0.5/2.5)};};
                    class pylon27: pylon1 	{priority = 27;	UIposition[] = {__EVAL(0.12+0.19*2),__EVAL(0.1+0.6/2.5)};};
                    class pylon28: pylon1 	{priority = 28;	UIposition[] = {__EVAL(0.12+0.19*2),__EVAL(0.1+0.7/2.5)};};
                    class pylon29: pylon1 	{priority = 29;	UIposition[] = {__EVAL(0.12+0.19*2),__EVAL(0.1+0.8/2.5)};};
                    class pylon30: pylon1 	{priority = 30;	UIposition[] = {__EVAL(0.12+0.19*2),__EVAL(0.1+0.9/2.5)};};
                    class pylon31: pylon1 	{priority = 31;	UIposition[] = {__EVAL(0.12+0.19*3),__EVAL(0.1+0.0/2.5)};};
                    class pylon32: pylon1 	{priority = 32;	UIposition[] = {__EVAL(0.12+0.19*3),__EVAL(0.1+0.1/2.5)};};
                    class pylon33: pylon1 	{priority = 33;	UIposition[] = {__EVAL(0.12+0.19*3),__EVAL(0.1+0.2/2.5)};};
                    class pylon34: pylon1 	{priority = 34;	UIposition[] = {__EVAL(0.12+0.19*3),__EVAL(0.1+0.3/2.5)};};
                    class pylon35: pylon1 	{priority = 35;	UIposition[] = {__EVAL(0.12+0.19*3),__EVAL(0.1+0.4/2.5)};};
                    class pylon36: pylon1 	{priority = 36;	UIposition[] = {__EVAL(0.12+0.19*3),__EVAL(0.1+0.5/2.5)};};
                    class pylon37: pylon1 	{priority = 37;	UIposition[] = {__EVAL(0.12+0.19*3),__EVAL(0.1+0.6/2.5)};};
                    class pylon38: pylon1 	{priority = 38;	UIposition[] = {__EVAL(0.12+0.19*3),__EVAL(0.1+0.7/2.5)};};
                    class pylon39: pylon1 	{priority = 39;	UIposition[] = {__EVAL(0.12+0.19*3),__EVAL(0.1+0.8/2.5)};};
                    class pylon40: pylon1 	{priority = 40;	UIposition[] = {__EVAL(0.12+0.19*3),__EVAL(0.1+0.9/2.5)};};
                };
            };
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_rva_tochka_he : rhs_9k79_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "RVA 9P129-1M (HE)";
        side = 0;
        faction = "AKO_RU_MSV";
        crew = "ru_msv_rifleman_ak74m";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "ru_msv_officer"; };
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ru_rva_tochka_nuke : rhs_9k79_B_OCimport_02 {
        author = "Akosovski";
        scope = 2;
        scopeCurator = 2;
        displayName = "RVA 9P129-1M (Nuclear)";
        side = 0;
        faction = "AKO_RU_MSV";
        crew = "ru_msv_rifleman_ak74m";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "ru_msv_officer"; };
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsafrf\addons\rhs_ss21_camo\data\tochka_body_co.paa'];_unit setObjectTextureGlobal [1,'rhsafrf\addons\rhs_ss21_camo\data\tochka_misc_co.paa'];_unit setObjectTextureGlobal [2,'rhsafrf\addons\rhs_ss21_camo\data\tochka_bottom_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "camo";

    };