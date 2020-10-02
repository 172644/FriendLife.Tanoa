#include "..\script_macros.hpp"
/*
File: fn_initAdac.sqf
Author: Bryan "Tonic" Boardwine
Description:
Initializes the adac..
*/
private["_end"];
player addRating 99999999;
waitUntil {!(isNull (findDisplay 46))};


if (life_blacklisted) exitWith {
    ["Blacklisted",false,true] call BIS_fnc_endMission;
    sleep 30;
};
if ((FETCH_CONST(life_adacLevel)) < 1 && (FETCH_CONST(life_adminlevel) isEqualTo 0)) exitWith {
	["Notwhitelisted",FALSE,TRUE] call BIS_fnc_endMission;
	sleep 35;
};
player setVariable ["rank",(FETCH_CONST(life_coplevel)),true];
//[] call life_fnc_spawnMenu;
//waitUntil{!isNull (findDisplay 38500)}; //Wait for the spawn selection to be open.
//waitUntil{isNull (findDisplay 38500)}; //Wait for the spawn selection to be done.
ACE_IsEngineer = 1;
player setVariable ["ACE_IsEngineer",1];

[] spawn life_fnc_placeablesInit;