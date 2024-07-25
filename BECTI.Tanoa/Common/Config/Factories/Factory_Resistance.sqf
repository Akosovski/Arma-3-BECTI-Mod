private ["_side", "_u"];

_side = _this;

missionNamespace setVariable [format["CTI_%1_Diver", _side], "I_diver_f"];
missionNamespace setVariable [format["CTI_%1_Soldier", _side], "ta_tla_rifleman_aks"];
missionNamespace setVariable [format["CTI_%1_Crew", _side], "ta_tla_crewman"];
missionNamespace setVariable [format["CTI_%1_Pilot", _side], "ta_tla_elite_rifleman"];
missionNamespace setVariable [Format["CTI_%1FLAG", _side], "\A3\Ui_f\data\Map\Markers\Flags\tanoa_ca.paa" ];