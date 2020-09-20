/*
    File: fn_checkAssurance.sqf
    Author: BastienWolf

    Description:
    Check If vehicle have a insure !
*/
_vehicle = param [0,objNull,[objNull]];
if (isNull _vehicle) exitWith {};

_insureStatus = _vehicle getVariable ["vehicle_insure_status",0];
if (_insureStatus isEqualTo 1) then {
    hint "Véhicule Assuré";
} else {
    hint "Le Véhicule n'est pas assuré";
};