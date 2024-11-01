private ["_side"];

_side = _this;

missionNamespace setVariable [Format["CTI_%1_UPGRADES_ENABLED", _side], [
	true, //--- Barracks
	true, //--- Light
	true, //--- Heavy
	true, //--- Air
	true, //--- Satellite
	(missionNamespace getVariable "CTI_VEHICLES_AIR_FFAR") == 1, //--- Air FFAR
	(missionNamespace getVariable "CTI_VEHICLES_AIR_AT") == 1, //--- Air AT
	(missionNamespace getVariable "CTI_VEHICLES_AIR_AA") == 1, //--- Air AA
	(missionNamespace getVariable "CTI_VEHICLES_AIR_CM") == 1, //--- Air CM
	(missionNamespace getVariable "CTI_TOWNS_OCCUPATION") > 0, //--- Towns Occupation
	(missionNamespace getVariable "CTI_ECONOMY_CURRENCY_SYSTEM") == 0, //--- Supply
	true //--- Gear
]];

missionNamespace setVariable [Format["CTI_%1_UPGRADES_COSTS", _side], [
	[[300,750],[900,1250],[1300,1500]], //--- Barracks
	[[800,1600],[1400,2500],[2700,3000]], //--- Light
	[[2500,3000],[3500,5000],[5500,7000]], //--- Heavy
	[[3500,2500],[6500,5000]], //--- Air
	[[15000,25000]], //--- Satellite
	[[1500,5000]], //--- Air FFAR
	[[5000,20000]], //--- Air AT
	[[7500,30000]], //--- Air AA
	[[4500,14000]], //--- Air CM
	[[1000,100], [2000,200], [3000,300]], //--- Towns Occupation
	[[2500,1000],[5500,3000],[11000,5000],[20000,10000]], //--- Supply
	[[500,1500],[1800,2000],[2500,5000]] //--- Gear
]];

missionNamespace setVariable [Format["CTI_%1_UPGRADES_LEVELS", _side], [
	3, //--- Barracks
	3, //--- Light
	2, //--- Heavy
	3, //--- Air
	1, //--- Satellite
	1, //--- Air FFAR
	1, //--- Air AT
	1, //--- Air AA
	1, //--- Air CM
	3, //--- Towns Occupation
	4, //--- Supply,
	3 //--- Gear
]];

missionNamespace setVariable [Format["CTI_%1_UPGRADES_LINKS", _side], [
	[[CTI_UPGRADE_GEAR,1],[CTI_UPGRADE_GEAR,2],[CTI_UPGRADE_GEAR,3]], //--- Barracks
	[[],[CTI_UPGRADE_BARRACKS,2],[CTI_UPGRADE_BARRACKS,3]], //--- Light
	[[CTI_UPGRADE_LIGHT,2],[CTI_UPGRADE_LIGHT,3]], //--- Heavy
	[[],[CTI_UPGRADE_HEAVY,1],[CTI_UPGRADE_HEAVY,2]], //--- Air
	[[CTI_UPGRADE_AIR, 3]], //--- Satellite
	[[CTI_UPGRADE_AIR, 1]], //--- Air FFAR
	[[CTI_UPGRADE_AIR, 2]], //--- Air AT
	[[CTI_UPGRADE_AIR, 2]], //--- Air AA
	[[CTI_UPGRADE_AIR, 1]], //--- Air CM
	[[],[],[]], //--- Towns Occupation
	[[],[CTI_UPGRADE_LIGHT,1],[CTI_UPGRADE_LIGHT,2],[CTI_UPGRADE_LIGHT,3]], //---Supply
	[[],[CTI_UPGRADE_BARRACKS,1],[CTI_UPGRADE_BARRACKS,2]] //--- Gear
]];

missionNamespace setVariable [Format["CTI_%1_UPGRADES_TIMES", _side], [
	[5,5,5], //--- Barracks
	[5,5,5], //--- Light
	[5,5], //--- Heavy
	[5,5,5], //--- Air
	[30], //--- Satellite
	[90], //--- Air FFAR
	[90], //--- Air AT
	[90], //--- Air AA
	[60], //--- Air CM
	[3,3,3], //--- Towns Occupation
	[5,5,5,5], //--- Supply
	[5,5,5] //--- Gear
]];


if (CTI_IsClient) then {
	missionNamespace setVariable [Format["CTI_%1_UPGRADES_LABELS", _side], [
		["Barracks", "Provides reinforcement of US Rangers Infantry units.<br />Level 1: US Rangers Basic Infantry<br />Level 2: US Rangers Upgraded Infantry<br />Level 3: DEVGRU Operators"], //--- Barracks
		["Light Factory", "Provides reinforcement of USMC Light Vehicles.<br />Level 1: USMC Motorized Vehicles and Trucks<br />Level 2: USMC Motorized APC<br />Level 3: USMC Upgraded Motorized APC"], //--- Light
		["Heavy Factory", "Provides reinforcement of USMC IFV, Tanks and Artillery.<br />Level 1: USMC Basic IFV and Tanks<br />Level 2: USMC Upgraded IFV and Tanks"], //--- Heavy
		["Aircraft Factory", "Provides reinforcement of US Rangers, USMC and USAF Helicopters and Planes.<br />Level 1: USMC and US Rangers Basic Helicopters<br />Level 2: USMC and USAF Attack Helicopters and Planes<br />Level 3: USAF Upgraded Planes"], //--- Air
		["Satellite", "Allows the use of the Real-Time satellite camera."], //--- Satellite
		["Aircraft FFAR", "Unlocks the FFAR Rockets for Aircrafts."], //--- Air FFAR
		["Aircraft AT", "Unlocks the Anti Tank Missiles for Aircrafts."], //--- Air AT
		["Aircraft AA", "Unlocks the Anti Air Missiles for Aircrafts."], //--- Air AA
		["Aircraft Countermeasures", "Allows Aircraft to deploy countermeasures."], //--- Air CM
		["Towns Occupation", "Allows spawning of occupation AI to defend friendly towns from attackers. If 'Income: Towns Occupation' is enabled, it also improves income generation in non-occupied towns"], //--- Towns Occupation
		["Supply", "Increases the rate at which towns increase their SV."], //---Supply
		["Gear", "Allows the use of better WEST equipment in the Gear Menu.<br />Level 1: Basic Weapons<br />Level 2: Upgraded Weapons<br />Level 3: Specialized Weapons"] //--- Gear
	]];
};