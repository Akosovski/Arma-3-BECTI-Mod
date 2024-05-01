private ["_side"];

_side = _this;

missionNamespace setVariable [Format["CTI_%1_UPGRADES_ENABLED", _side], [
	true, //--- Barracks
	true, //--- Light
	true, //--- Heavy
	true, //--- Air
	true, //--- Satellite
	true, //--- Air FFAR
	(missionNamespace getVariable "CTI_VEHICLES_AIR_AT") == 1, //--- Air AT
	(missionNamespace getVariable "CTI_VEHICLES_AIR_AA") == 1, //--- Air AA
	(missionNamespace getVariable "CTI_VEHICLES_AIR_CM") == 1, //--- Air CM
	(missionNamespace getVariable "CTI_TOWNS_OCCUPATION") > 0, //--- Towns Occupation
	true //--- Gear
]];

missionNamespace setVariable [Format["CTI_%1_UPGRADES_COSTS", _side], [
	[1500,3000], //--- Barracks [msv 0 - msv 1 - vdv 2]
	[2500], //--- Light
	[5000,10000,15000], //--- Heavy
	[25000], //--- Air
	[75000], //--- Satellite
	[10000], //--- Air FFAR
	[15000], //--- Air AT
	[20000], //--- Air AA
	[8000], //--- Air CM
	[5000, 20000, 40000], //--- Towns Occupation
	[2000] //--- Gear
]];

missionNamespace setVariable [Format["CTI_%1_UPGRADES_LEVELS", _side], [
	2, //--- Barracks
	1, //--- Light
	3, //--- Heavy
	1, //--- Air
	1, //--- Satellite
	1, //--- Air FFAR
	1, //--- Air AT
	1, //--- Air AA
	1, //--- Air CM
	3, //--- Towns Occupation
	1 //--- Gear
]];

missionNamespace setVariable [Format["CTI_%1_UPGRADES_LINKS", _side], [
	[[],[]], //--- Barracks
	[[]], //--- Light
	[[],[],[]], //--- Heavy
	[[]], //--- Air
	[[CTI_UPGRADE_AIR, 1]], //--- Satellite
	[[]], //--- Air FFAR
	[[CTI_UPGRADE_AIR, 1]], //--- Air AT
	[[CTI_UPGRADE_AIR, 1]], //--- Air AA
	[[]], //--- Air CM
	[[CTI_UPGRADE_BARRACKS,1],[CTI_UPGRADE_LIGHT,1],[CTI_UPGRADE_HEAVY,1]], //--- Towns Occupation
	[[CTI_UPGRADE_BARRACKS,1]] //--- Gear
]];

missionNamespace setVariable [Format["CTI_%1_UPGRADES_TIMES", _side], [
	[20,60], //--- Barracks
	[30], //--- Light
	[50,50,50], //--- Heavy
	[90], //--- Air
	[120], //--- Satellite
	[90], //--- Air FFAR
	[90], //--- Air AT
	[90], //--- Air AA
	[60], //--- Air CM
	[60, 70, 80], //--- Towns Occupation
	[20] //--- Gear
]];

if (CTI_IsClient) then {
	missionNamespace setVariable [Format["CTI_%1_UPGRADES_LABELS", _side], [
		["Barracks", "Unlock better infantry units. <br /><br />1st level unlocks better MSV units <br />2nd level unlocks VDV"], //--- Barracks
		["Light Factory", "Unlocks BTRs family vehicles"], //--- Light
		["Heavy Factory", "Unlock better armored units <br /><br />1st level: BMP-2, BMP-3 (early), BMD-1/2, Sprut-SD, T-80B, T-72B obr84/85, 2S3<br />2nd level: T-72B obr89, T-72B3, T-80A, T-80U <br />3rd level: T-80UE1, T-80UM, T-90"], //--- Heavy
		["Aircraft Factory", "Unlock better aircraft units - Armed Mi-8, Mi-24, Ka-52, Su-25"], //--- Air
		["Satellite", "Allows the use of the satellite camera"], //--- Satellite
		["Aircraft FFAR", "Unlocks the FFAR Rockets for Aircrafts"], //--- Air FFAR
		["Aircraft AT", "Unlocks the Anti Tank Missiles for Aircrafts"], //--- Air AT
		["Aircraft AA", "Unlocks the Anti Air Missiles for Aircrafts"], //--- Air AA
		["Aircraft Countermeasures", "Allows Aircraft to deploy countermeasures"], //--- Air CM
		["Towns Occupation", "Allows the spawning of occupation forces which will defend friendly towns against any attackers.<br />It will also improve the income generation in non-occupied towns"], //--- Towns Occupation
		["Gear", "Allows the use of better equipment in the Gear Menu"] //--- Gear
	]];
};