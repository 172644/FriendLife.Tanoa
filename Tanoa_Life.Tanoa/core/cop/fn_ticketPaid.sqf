#include "..\..\script_macros.hpp"
/*
    File: fn_ticketPaid.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Verifies that the ticket was paid.
*/
params [
    ["_value",5,[0]],
    ["_unit",objNull,[objNull]],
    ["_cop",objNull,[objNull]]
];
if (isNull _unit || {!(_unit isEqualTo life_ticket_unit)}) exitWith {}; //NO
if (isNull _cop || {!(_cop isEqualTo player)}) exitWith {}; //Double NO


_entreprise = player getVariable ["current_entreprise",objNull];
if (isNull _entreprise) exitWith {closeDialog 0; hint (["STR_NO_ENTERPRISE","Max_Settings_Entreprise","Entreprise_Localization"] call theprogrammer_core_fnc_localize);};
_oldEntACC = _entreprise getVariable ["entreprise_bankacc",0];
_oldEntACC = _oldEntACC + _value;
_entreprise setVariable ["entreprise_bankacc",_oldEntACC,true];
[(_entreprise getVariable ["entreprise_id",0]),5,(_entreprise getVariable ["entreprise_bankacc",0])] remoteExecCall ["max_entreprise_fnc_updateEntreprise",2];
[_entreprise,(name player),_amount,2] remoteExecCall ["max_entreprise_fnc_insertEntrepriseLogs",2];
//BANK = BANK + _value;
[1] call SOCK_fnc_updatePartial;
