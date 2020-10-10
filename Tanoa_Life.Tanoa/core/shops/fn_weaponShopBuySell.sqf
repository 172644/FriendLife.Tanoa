#include "..\..\script_macros.hpp"
/*
    File: fn_weaponShopBuySell.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Master handling of the weapon shop for buying / selling an item.
*/
disableSerialization;
private ["_price","_item","_itemInfo","_bad"];
if ((lbCurSel 38403) isEqualTo -1) exitWith {hint localize "STR_Shop_Weapon_NoSelect"};
_price = lbValue[38403,(lbCurSel 38403)]; if (isNil "_price") then {_price = 0;};
_item = lbData[38403,(lbCurSel 38403)];
_itemInfo = [_item] call life_fnc_fetchCfgDetails;

_bad = "";
private _entrepriseBuy = false;

if(playerSide isEqualTo west || playerSide isEqualTo independent || playerSide isEqualTo east) then {
	_entrepriseBuy = true;
};

if ((_itemInfo select 6) != "CfgVehicles") then {
    if ((_itemInfo select 4) in [4096,131072]) then {
        if (!(player canAdd _item) && (uiNamespace getVariable ["Weapon_Shop_Filter",0]) != 1) exitWith {_bad = (localize "STR_NOTF_NoRoom")};
    };
};

if (_bad != "") exitWith {hint _bad};

if ((uiNamespace getVariable ["Weapon_Shop_Filter",0]) isEqualTo 1) then {
	
	if(_entrepriseBuy) then {
		_entreprise = player getVariable ["current_entreprise",objNull];
		if (isNull _entreprise) exitWith {closeDialog 0; hint (["STR_NO_ENTERPRISE","Max_Settings_Entreprise","Entreprise_Localization"] call theprogrammer_core_fnc_localize);};
		_oldEntACC = _entreprise getVariable ["entreprise_bankacc",0];
		_oldEntACC = _oldEntACC + _price;
		_entreprise setVariable ["entreprise_bankacc",_oldEntACC,true];
		[(_entreprise getVariable ["entreprise_id",0]),5,(_entreprise getVariable ["entreprise_bankacc",0])] remoteExecCall ["max_entreprise_fnc_updateEntreprise",2];
		[_entreprise,(name player),_amount,2] remoteExecCall ["max_entreprise_fnc_insertEntrepriseLogs",2];
		["sold", (getPlayerUID player), side player, getPosATL player, "item", 1, _itemInfo select 1, _itemInfo select 0, _price, _price, "", "", format ["Fond entreprise : %1",_oldEntACC]] remoteExec ["TON_fnc_insertLog",2];
	} else {
		CASH = CASH + _price;
		["sold", (getPlayerUID player), side player, getPosATL player, "item", 1, _itemInfo select 1, _itemInfo select 0, _price, _price, "", "", ""] remoteExec ["TON_fnc_insertLog",2];
	};
			
    [_item,false] call life_fnc_handleItem;
    hint parseText format [localize "STR_Shop_Weapon_Sold",_itemInfo select 1,[_price] call life_fnc_numberText];
    [nil,(uiNamespace getVariable ["Weapon_Shop_Filter",0])] call life_fnc_weaponShopFilter; //Update the menu.
} else {
    private _altisArray = ["Land_u_Barracks_V2_F","Land_i_Barracks_V2_F"];
    private _tanoaArray = ["Land_School_01_F","Land_Warehouse_03_F","Land_House_Small_02_F"];
    private _hideoutObjs = [[["Altis", _altisArray], ["Tanoa", _tanoaArray]]] call TON_fnc_terrainSort;
    private _hideout = (nearestObjects[getPosATL player,_hideoutObjs,25]) select 0;
    if (!_entrepriseBuy && !isNil "_hideout" && {!isNil {group player getVariable "gang_bank"}} && {(group player getVariable "gang_bank") >= _price}) then {
        _action = [
            format [(localize "STR_Shop_Virt_Gang_FundsMSG")+ "<br/><br/>" +(localize "STR_Shop_Virt_Gang_Funds")+ " <t color='#8cff9b'>€%1</t><br/>" +(localize "STR_Shop_Virt_YourFunds")+ " <t color='#8cff9b'>€%2</t>",
                [(group player getVariable "gang_bank")] call life_fnc_numberText,
                [CASH] call life_fnc_numberText
            ],
            localize "STR_Shop_Virt_YourorGang",
            localize "STR_Shop_Virt_UI_GangFunds",
            localize "STR_Shop_Virt_UI_YourCash"
        ] call BIS_fnc_guiMessage;
        if (_action) then {
            hint parseText format [localize "STR_Shop_Weapon_BoughtGang",_itemInfo select 1,[_price] call life_fnc_numberText];
            _funds = group player getVariable "gang_bank";
            _funds = _funds - _price;
			["bought", (getPlayerUID player), side player, getPosATL player, "item", 1, _itemInfo select 1, _itemInfo select 0, _price, _price, "", "", format ["Fond du gang : %1",_funds]] remoteExec ["TON_fnc_insertLog",2];
            group player setVariable ["gang_bank",_funds,true];
            [_item,true] call life_fnc_handleItem;

            if (life_HC_isActive) then {
                [1,group player] remoteExecCall ["HC_fnc_updateGang",HC_Life];
            } else {
                [1,group player] remoteExecCall ["TON_fnc_updateGang",RSERV];
            };


        } else {
            if (_price > CASH) exitWith {hint localize "STR_NOTF_NotEnoughMoney"};
            hint parseText format [localize "STR_Shop_Weapon_BoughtItem",_itemInfo select 1,[_price] call life_fnc_numberText];
            CASH = CASH - _price;
			["bought", (getPlayerUID player), side player, getPosATL player, "item", 1, _itemInfo select 1, _itemInfo select 0, _price, _price, "", "", ""] remoteExec ["TON_fnc_insertLog",2];
			
            [_item,true] call life_fnc_handleItem;
        };
    } else {
		if(_entrepriseBuy) then {
			// LOAD ENTERPRISE IF NECESSARY
			_oldEntACC = 0;
			_entreprise = player getVariable ["current_entreprise",objNull];
			if (isNull _entreprise) exitWith {closeDialog 0; hint (["STR_NO_ENTERPRISE","Max_Settings_Entreprise","Entreprise_Localization"] call theprogrammer_core_fnc_localize);};
			_oldEntACC = _entreprise getVariable ["entreprise_bankacc",0];
			if (_oldEntACC < _price) exitWith {hint (["STR_NOT_ENOUGHT_MONEY_ENTREPRISE_ACC","Max_Settings_Entreprise","Entreprise_Localization"] call theprogrammer_core_fnc_localize);};
			
			// ENTERPRISE BUY
			_oldEntACC = _oldEntACC - _price;
			["bought", (getPlayerUID player), side player, getPosATL player, "item", 1, _itemInfo select 1, _itemInfo select 0, _price, _price, "", "", format ["Fond entreprise : %1",_oldEntACC]] remoteExec ["TON_fnc_insertLog",2];
			[1] call SOCK_fnc_updatePartial;
			_entreprise setVariable ["entreprise_bankacc",_oldEntACC,true];
			[(_entreprise getVariable ["entreprise_id",0]),5,(_entreprise getVariable ["entreprise_bankacc",0])] remoteExecCall ["max_entreprise_fnc_updateEntreprise",2];
			[_entreprise,(name player),_amount,1] remoteExecCall ["max_entreprise_fnc_insertEntrepriseLogs",2];
			hint parseText format [localize "STR_Shop_Weapon_BoughtItem",_itemInfo select 1,[_price] call life_fnc_numberText];
			
			
			if (_itemInfo select 0 == "ACE_Wheel") then {
				_spawnedWheel = false;
				_posSpawn = nearestObjects[position player,["VR_Area_01_square_1x1_grey_F"],15];
				{
					if(!_spawnedWheel) then {
						createVehicle ["ACE_Wheel", [(visiblePosition _x select 0), (visiblePosition _x select 1), (getPosATL _x select 2) + 0.15], [], 0, "CAN_COLLIDE"];
						_spawnedWheel = true;
					};
				} forEach _posSpawn;
			} else {
				[_item,true] call life_fnc_handleItem;
			};
		} else {
			// PERSONAL BUY 
			if (_price > CASH) exitWith {hint localize "STR_NOTF_NotEnoughMoney"};
			CASH = CASH - _price;
			["bought", (getPlayerUID player), side player, getPosATL player, "item", 1, _itemInfo select 1, _itemInfo select 0, _price, _price, "", "", ""] remoteExec ["TON_fnc_insertLog",2];
			hint parseText format [localize "STR_Shop_Weapon_BoughtItem",_itemInfo select 1,[_price] call life_fnc_numberText];
			
			
			if (_itemInfo select 0 == "ACE_Wheel") then {
				_spawnedWheel = false;
				_posSpawn = nearestObjects[position player,["VR_Area_01_square_1x1_grey_F"],15];
				{
					if(!_spawnedWheel) then {
						createVehicle ["ACE_Wheel", [(visiblePosition _x select 0), (visiblePosition _x select 1), (getPosATL _x select 2) + 0.15], [], 0, "CAN_COLLIDE"];
						_spawnedWheel = true;
					};
				} forEach _posSpawn;
			} else {
				[_item,true] call life_fnc_handleItem;
			};
		};
		
		
    };
};
[0] call SOCK_fnc_updatePartial;
[3] call SOCK_fnc_updatePartial;
