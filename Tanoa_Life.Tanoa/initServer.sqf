/*
    File: initServer.sqf
    Author:

    Description:
    Starts the initialization of the server.
*/
if (!(_this select 0)) exitWith {}; //Not server

addMissionEventHandler["HandleDisconnect",{
    params ["_unit", "_id", "_uid", "_name"];
    diag_log format["DISCONNECT: %1 %2 %3",_name, _unit, _uid];
    profileNamespace setVariable [
        _uid,
        [
            getPosATL _unit,
            getDammage _unit,
            getFatigue _unit,
            getStamina _unit,
            _unit getUnitTrait "Medic",
            _unit getUnitTrait "Engineer",
            getAllOwnedMines _unit
        ]
    ];
    saveProfileNamespace;
    diag_log format["DISCONNECT: SAVED %1",profileNamespace getVariable _uid];
}];

[] call compile preprocessFileLineNumbers "\life_server\init.sqf";