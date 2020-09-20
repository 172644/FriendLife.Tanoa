#include "..\script_macros.hpp"
/*
    File: fn_initCop.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Cop Initialization file.
*/
player addRating 9999999;
waitUntil {!(isNull (findDisplay 46))};

if (life_blacklisted) exitWith {
    ["Blacklisted",false,true] call BIS_fnc_endMission;
    sleep 30;
};

if (!(str(player) in ["cop_1","cop_2","cop_3","cop_4"])) then {
    if ((FETCH_CONST(life_coplevel) isEqualTo 0) && (FETCH_CONST(life_adminlevel) isEqualTo 0)) then {
        ["NotWhitelisted",false,true] call BIS_fnc_endMission;
        sleep 35;
    };
};

player setVariable ["copLevel",1];
player setVariable ["rank",(FETCH_CONST(life_coplevel)),true];

[] spawn life_fnc_placeablesInit;

 case 46:{  
            _currentPos = getPosATL life_barrier_activeObj;  
            detach life_barrier_activeObj;  
            life_barrier_activeObj setPos[(getPos life_barrier_activeObj select 0), (getPos life_barrier_activeObj select 1), 0];  
            life_barrier_activeObj enableSimulationGlobal true;  
            life_bar_placey pushBack life_barrier_activeObj;  
            life_barrier_active = false;  
            life_barrier_activeObj = ObjNull;  
            hint "Vous avez placé l'objet !";  
   	};