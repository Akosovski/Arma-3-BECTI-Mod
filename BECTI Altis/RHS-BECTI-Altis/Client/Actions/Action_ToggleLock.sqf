private ["_lock", "_vehicle"];

_vehicle = _this select 0;
_type = typeOf _vehicle;

_lock = if (locked _vehicle == 0) then {2} else {0};
if(_type in ["rhsusf_M1083A1P2_B_M2_d_MHQ_fmtv_usarmy","rhs_gaz66_r142_msv"])then{

	switch _type do
	{
		case "rhsusf_M1083A1P2_B_M2_d_MHQ_fmtv_usarmy" : { [_vehicle,_lock-1] spawn rhs_fnc_fmtv_Deploy };
		case "rhs_gaz66_r142_msv" : {  [_vehicle,_lock-1] spawn rhs_fnc_gaz66_radioDeploy };
		case default {};
	};
};

_vehicle lock _lock;
