#include "..\..\script_macros.hpp"
/*
    File: fn_virt_buy.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Buy a virtual item from the store.
*/
private ["_type","_price","_amount","_diff","_name","_hideout"];
if ((lbCurSel 2401) isEqualTo -1) exitWith {hint localize "STR_Shop_Virt_Nothing"};
_type = lbData[2401,(lbCurSel 2401)];
_price = lbValue[2401,(lbCurSel 2401)];
_amount = ctrlText 2404;
if (!([_amount] call TON_fnc_isnumber)) exitWith {hint localize "STR_Shop_Virt_NoNum";};
_diff = [_type,parseNumber(_amount),life_carryWeight,life_maxWeight] call life_fnc_calWeightDiff;
_amount = parseNumber(_amount);
if (_diff <= 0) exitWith {hint localize "STR_NOTF_NoSpace"};
_amount = _diff;
private _altisArray = ["Land_u_Barracks_V2_F","Land_i_Barracks_V2_F"];
private _tanoaArray = ["Land_School_01_F","Land_Warehouse_03_F","Land_House_Small_02_F"];
private _hideoutObjs = [[["Altis", _altisArray], ["Tanoa", _tanoaArray]]] call TON_fnc_terrainSort;
_hideout = (nearestObjects[getPosATL player,_hideoutObjs,25]) select 0;
if ((_price * _amount) > CASH && {!isNil "_hideout" && {!isNil {group player getVariable "gang_bank"}} && {(group player getVariable "gang_bank") <= _price * _amount}}) exitWith {hint localize "STR_NOTF_NotEnoughMoney"};
if ((time - life_action_delay) < 0.2) exitWith {hint localize "STR_NOTF_ActionDelay";};
life_action_delay = time;

_name = M_CONFIG(getText,"VirtualItems",_type,"displayName");

if(playerSide isEqualTo west || playerSide isEqualTo independent || playerSide isEqualTo east) then {
	_entrepriseBuy = true;
};

if ([true,_type,_amount] call life_fnc_handleInv) then {
    if (_entrepriseBuy isEqualTo false && !isNil "_hideout" && {!isNil {group player getVariable "gang_bank"}} && {(group player getVariable "gang_bank") >= _price}) then {
        _action = [
            format [(localize "STR_Shop_Virt_Gang_FundsMSG")+ "<br/><br/>" +(localize "STR_Shop_Virt_Gang_Funds")+ " <t color='#8cff9b'>$%1</t><br/>" +(localize "STR_Shop_Virt_YourFunds")+ " <t color='#8cff9b'>$%2</t>",
                [(group player getVariable "gang_bank")] call life_fnc_numberText,
                [CASH] call life_fnc_numberText
            ],
            localize "STR_Shop_Virt_YourorGang",
            localize "STR_Shop_Virt_UI_GangFunds",
            localize "STR_Shop_Virt_UI_YourCash"
        ] call BIS_fnc_guiMessage;
        if (_action) then {
            hint format [localize "STR_Shop_Virt_BoughtGang",_amount,(localize _name),[(_price * _amount)] call life_fnc_numberText];
            _funds = group player getVariable "gang_bank";
            _funds = _funds - (_price * _amount);
            group player setVariable ["gang_bank",_funds,true];

            if (life_HC_isActive) then {
                [1,group player] remoteExecCall ["HC_fnc_updateGang",HC_Life];
            } else {
                [1,group player] remoteExecCall ["TON_fnc_updateGang",RSERV];
            };

        } else {
            if ((_price * _amount) > CASH) exitWith {[false,_type,_amount] call life_fnc_handleInv; hint localize "STR_NOTF_NotEnoughMoney";};
            hint format [localize "STR_Shop_Virt_BoughtItem",_amount,(localize _name),[(_price * _amount)] call life_fnc_numberText];
            CASH = CASH - _price * _amount;
        };
    } else {
		_entreprise = nil;
		if(_entrepriseBuy) then {
			// LOAD ENTERPRISE IF NECESSARY
			_oldEntACC = 0;
			_entreprise = player getVariable ["current_entreprise",objNull];
			if (isNull _entreprise) exitWith {closeDialog 0; hint (["STR_NO_ENTERPRISE","Max_Settings_Entreprise","Entreprise_Localization"] call theprogrammer_core_fnc_localize);};
			_oldEntACC = _entreprise getVariable ["entreprise_bankacc",0];
			if (_oldEntACC < _price) exitWith {hint (["STR_NOT_ENOUGHT_MONEY_ENTREPRISE_ACC","Max_Settings_Entreprise","Entreprise_Localization"] call theprogrammer_core_fnc_localize);};
			
			// ENTERPRISE BUY
			_oldEntACC = _oldEntACC - _amount;
			[1] call SOCK_fnc_updatePartial;
			_entreprise setVariable ["entreprise_bankacc",_oldEntACC,true];
			[(_entreprise getVariable ["entreprise_id",0]),5,(_entreprise getVariable ["entreprise_bankacc",0])] remoteExecCall ["max_entreprise_fnc_updateEntreprise",2];
			[_entreprise,(name player),_amount,1] remoteExecCall ["max_entreprise_fnc_insertEntrepriseLogs",2];
		} else {
			// PERSONAL BUY 
			if (_price > CASH) exitWith {hint localize "STR_NOTF_NotEnoughMoney"};
			CASH = CASH - _amount;
		};
        hint format [localize "STR_Shop_Virt_BoughtItem",_amount,(localize _name),[(_price * _amount)] call life_fnc_numberText];
		
		
		if (LIFE_SETTINGS(getNumber,"player_advancedLog") isEqualTo 1) then {
			if (LIFE_SETTINGS(getNumber,"battlEye_friendlyLogging") isEqualTo 1) then {
				advanced_log = format [localize "STR_DL_ML_vitualItemBuy",profileName,(getPlayerUID player),_amount,_name,_price,(_price * _amount),[BANK] call life_fnc_numberText,[CASH] call life_fnc_numberText];
			} else {
				advanced_log = format [localize "STR_DL_ML_vitualItemBuy",profileName,(getPlayerUID player),_amount,_name,_price,(_price * _amount),[BANK] call life_fnc_numberText,[CASH] call life_fnc_numberText];
			};
			publicVariableServer "advanced_log";
		};
    };
    [] call life_fnc_virt_update;
};

[0] call SOCK_fnc_updatePartial;
[3] call SOCK_fnc_updatePartial;
