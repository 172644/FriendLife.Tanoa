#include "..\..\script_macros.hpp"
/*
    File: fn_buyClothes.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Buys the current set of clothes and closes out of the shop interface.
*/
private ["_price"];
if ((lbCurSel 3101) isEqualTo -1) exitWith {titleText[localize "STR_Shop_NoClothes","PLAIN"];};

_price = 0;
{
    if (!(_x isEqualTo -1)) then {
        _price = _price + _x;
    };
} forEach life_clothing_purchase;

if (_price > CASH) exitWith {titleText[localize "STR_Shop_NotEnoughClothes","PLAIN"];};
CASH = CASH - _price;

if (LIFE_SETTINGS(getNumber,"battlEye_friendlyLogging") isEqualTo 1) then {
	advanced_log = format [localize "STR_DL_ML_ClotheBuy",profileName,(getPlayerUID player),lbCurSel 3105,_price,_price,[BANK] call life_fnc_numberText,[CASH] call life_fnc_numberText];
} else {
	advanced_log = format [localize "STR_DL_ML_ClotheBuy",profileName,(getPlayerUID player),lbCurSel 3105,_price,_price,[BANK] call life_fnc_numberText,[CASH] call life_fnc_numberText];
};
publicVariableServer "advanced_log";

[0] call SOCK_fnc_updatePartial;

life_clothesPurchased = true;
[] call life_fnc_playerSkins;
closeDialog 0;