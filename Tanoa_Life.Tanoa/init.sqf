/*
    File: init.sqf
    Author: 
    
    Description:
    
*/
StartProgress = false;

if (hasInterface) then {
    [] execVM "briefing.sqf"; //Load Briefing
};
[] execVM "KRON_Strings.sqf";

[] spawn life_fnc_autoMessages; // Message Auto

StartProgress = true;

[] execVM "core\functions\fn_customAction.sqf"; 

