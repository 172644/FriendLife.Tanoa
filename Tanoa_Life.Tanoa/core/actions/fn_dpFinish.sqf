#include "..\..\script_macros.hpp"
/*
    File: fn_dpFinish.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Finishes the DP Mission and calculates the money earned based
    on distance between A->B
*/
private ["_dp","_dis","_price"];
if ((count nearestObjects[(visiblePosition player),["Hugpo_UPS_Sprinter"],20]) isEqualTo 0) exitWith {hint localize "STR_NOTF_NoNearVehicleUPS"};

_dp = [_this,0,objNull,[objNull]] call BIS_fnc_param;
life_delivery_in_progress = false;
life_dp_point = nil;
_dis = round((getPos life_dp_start) distance (getPos _dp));
_price = round(1.7 * _dis);

["DeliverySucceeded",[format [(localize "STR_NOTF_Earned_1"),[_price] call life_fnc_numberText]]] call bis_fnc_showNotification;
life_cur_task setTaskState "Succeeded";
player removeSimpleTask life_cur_task;
CASH = CASH + _price;
["DP", (getPlayerUID player), side player, getPosATL player, "Delivery", "", _dp, _dp, _price, _price, "", "", format ["From %1 : %2", life_dp_start, getPos life_dp_start]] remoteExec ["TON_fnc_insertLog",2];
[0] call SOCK_fnc_updatePartial;