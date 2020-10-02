#include "..\..\script_macros.hpp"
/*
    File: fn_storeVehicle.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Stores the vehicle in the garage.
*/
private ["_nearVehicles","_vehicle"];
if !(isNull objectParent player) then {
    _vehicle = vehicle player;
} else {
    _nearVehicles = nearestObjects[getPos (_this select 0),["Car","Air","Ship"],30]; //Fetch vehicles within 30m.
    if (count _nearVehicles > 0) then {
        {
            if (!isNil "_vehicle") exitWith {}; //Kill the loop.
            _vehData = _x getVariable ["vehicle_info_owners",[]];
            if (count _vehData  > 0) then {
                _vehOwner = ((_vehData select 0) select 0);
                if ((getPlayerUID player) == _vehOwner) exitWith {
                    _vehicle = _x;
                };
            };
        } forEach _nearVehicles;
    };
};

if (isNil "_vehicle") exitWith {hint localize "STR_Garage_NoNPC"};
if (isNull _vehicle) exitWith {};
if (!alive _vehicle) exitWith {hint localize "STR_Garage_SQLError_Destroyed"};
if (typeOf _vehicle == "Burnes_MK10_1") exitWith { hint "No MK10 !"; };

_storetext = localize "STR_Garage_Store_Success";

["storeVehicle", (getPlayerUID player), side player, getPosATL player, (_vehicle getVariable ["dbInfo",[]]) select 1, "", typeOf _vehicle, _vehicle, "", "", typeOf _vehicle, "", (_vehicle getVariable ["dbInfo",[]])] remoteExec ["TON_fnc_insertLog",2];


if (life_HC_isActive) then {
    [_vehicle,false,(_this select 1),_storetext] remoteExec ["HC_fnc_vehicleStore",HC_Life];
} else {
    [_vehicle,false,(_this select 1),_storetext] remoteExec ["TON_fnc_vehicleStore",RSERV];
};

hint localize "STR_Garage_Store_Server";
life_garage_store = true;
