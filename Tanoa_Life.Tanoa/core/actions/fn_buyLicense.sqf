#include "..\..\script_macros.hpp"
/*
    File: fn_buyLicense.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Called when purchasing a license. May need to be revised.
*/
private ["_type","_varName","_displayName","_sideFlag","_price"];
_type = _this select 3;

if (!isClass (missionConfigFile >> "Licenses" >> _type)) exitWith {}; //Bad entry?
_displayName = M_CONFIG(getText,"Licenses",_type,"displayName");
_price = M_CONFIG(getNumber,"Licenses",_type,"price");
_sideFlag = M_CONFIG(getText,"Licenses",_type,"side");
_varName = LICENSE_VARNAME(_type,_sideFlag);

if (CASH < _price) exitWith {hint format [localize "STR_NOTF_NE_1",[_price] call life_fnc_numberText,localize _displayName];};
CASH = CASH - _price;

if (LIFE_SETTINGS(getNumber,"player_advancedLog") isEqualTo 1) then {
	if (LIFE_SETTINGS(getNumber,"battlEye_friendlyLogging") isEqualTo 1) then {
		advanced_log = format [localize "STR_DL_ML_LicenceBought",profileName,(getPlayerUID player),_varName,_price,[BANK] call life_fnc_numberText,[CASH] call life_fnc_numberText];
	} else {
		advanced_log = format [localize "STR_DL_ML_LicenceBought",profileName,(getPlayerUID player),_varName,_price,[BANK] call life_fnc_numberText,[CASH] call life_fnc_numberText];
	};
	publicVariableServer "advanced_log";
};

[0] call SOCK_fnc_updatePartial;

titleText[format [localize "STR_NOTF_B_1", localize _displayName,[_price] call life_fnc_numberText],"PLAIN"];
missionNamespace setVariable [_varName,true];

[2] call SOCK_fnc_updatePartial;
[] spawn theprogrammer_markers_filter_fnc_markersUpdate;
[] spawn The_programmer_Duty_fnc_UpdateLicence;
[_type] call max_permisPoints_fnc_permisLicenseCheck;



