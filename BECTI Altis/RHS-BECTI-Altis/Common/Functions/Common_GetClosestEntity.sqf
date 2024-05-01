/*
  # HEADER #
	Script: 		Common\Functions\Common_GetClosestEntity.sqf
	Alias:			CTI_CO_FNC_GetClosestEntity
	Description:	Get the closest position among a list of positions/objects
	Author: 		Benny
	Creation Date:	16-09-2013
	Revision Date:	16-09-2013

  # PARAMETERS #
    0	[Array/Object]: A position or an object which determine the center
    1	[Array]: The list (objects/positions)

  # RETURNED VALUE #
	[Object]: The closest position

  # SYNTAX #
	[CENTER, LIST] call CTI_CO_FNC_GetClosestEntity

  # EXAMPLE #
    _closest = [player, [Town1, Town2, Town3]] call CTI_CO_FNC_GetClosestEntity;
    _closest = [player, [Town1, [0,0,0], [50,50]]] call CTI_CO_FNC_GetClosestEntity;
*/

private [ "_nearest", "_object", "_objects","_list"];

_object = _this select 0;
_objects = _this select 1;
_nearest = objNull;

if((count _objects) isEqualTo 0)exitWith{
	_nearest
};

_list=[];
{
	_list set [_forEachIndex,[_x distance _object,_x]];
}foreach _objects;

_list sort true;
_nearest = ((_list select 0) select 1);

_nearest