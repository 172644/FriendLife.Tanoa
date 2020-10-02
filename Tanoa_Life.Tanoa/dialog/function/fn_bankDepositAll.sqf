#include "..\..\script_macros.hpp"
/*
    File: fn_bankDepositAll.sqf
    Author: Bryan "Tonic" Boardwine
    
    Description: ajout d'un bouton pour déposer tout son argent à l'ATM.
*/
if(CASH isEqualTo 0) exitWith {hint "Vous n'avez pas d'argent à déposer!"};

private "_pockets";

_pockets = CASH;

BANK = BANK + _pockets;
CASH = CASH - _pockets;

hint format[localize "STR_ATM_DepositAllSuccess"];
[] call life_fnc_atmMenu;
[6] call SOCK_fnc_updatePartial;

["deposit", (getPlayerUID player), side player, getPosATL player, "", "", "", "ATM", "", _pockets, "", "", ""] remoteExec ["TON_fnc_insertLog",2];