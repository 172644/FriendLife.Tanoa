#include "..\..\script_macros.hpp"
/*
    File: fn_onPlayerRespawn.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Does something but I won't know till I write it...
*/
private ["_unit","_corpse","_containers"];
_unit = _this select 0;
_corpse = _this select 1;
life_corpse = _corpse;

_rp_id = random 99999;
//Set some vars on our new body.
_unit setVariable ["restrained",false,true];
_unit setVariable ["Escorting",false,true];
_unit setVariable ["transporting",false,true];
_unit setVariable ["playerSurrender",false,true];
_unit setVariable ["steam64id",getPlayerUID player,true]; //Reset the UID.
_unit setVariable ["realname",profileName,true]; //Reset the players name.
_unit setVariable ["RP_ID", _rp_id,true]; //Reset the players ID.

if (LIFE_SETTINGS(getNumber,"battlEye_friendlyLogging") isEqualTo 1) then {
	advanced_log = format [localize "STR_DL_ML_GetRPID",profileName,(getPlayerUID player),_rp_id,[BANK] call life_fnc_numberText,[CASH] call life_fnc_numberText];
} else {
	advanced_log = format [localize "STR_DL_ML_GetRPID",profileName,(getPlayerUID player),_rp_id,[BANK] call life_fnc_numberText,[CASH] call life_fnc_numberText];
};
publicVariableServer "advanced_log";


_unit addRating 1e12; //Set our rating to a high value, this is for a ARMA engine thing.
player playMoveNow "AmovPpneMstpSrasWrflDnon";

[] call life_fnc_setupActions;
[_unit,life_settings_enableSidechannel,playerSide] remoteExecCall ["TON_fnc_manageSC",RSERV];
if (LIFE_SETTINGS(getNumber,"enable_fatigue") isEqualTo 0) then {player enableFatigue false;};

player setVariable ["The_Programmer_Identity_Init",false]; 
[player] remoteExec ["the_programmer_identity_fnc_IdentityRequestCard",2];
