/*
    File: fn_setupEVH.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Master eventhandler file
*/
//https://community.bistudio.com/wiki/Arma_3:_Event_Handlers
/*
Dammaged
Explosion
Fired
FiredNear
LandedTouchDown
Put / Take
*/
player addEventHandler["Killed", {_this call life_fnc_onPlayerKilled}];
player addEventHandler["handleDamage",{_this call life_fnc_handleDamage;}];
player addEventHandler["Take",{_this call life_fnc_onTakeItem}]; //Prevent people from taking stuff they shouldn't...
player addEventHandler["Respawn", {_this call life_fnc_onPlayerRespawn;  ["Event", (getPlayerUID player), side player, getPosATL player, "Respawn", "", "", "", "", "", "", "", ""] remoteExec ["TON_fnc_insertLog",2];}];
player addEventHandler["Put",{ params ["_unit", "_container", "_item"]; ["Event", (getPlayerUID player), side player, getPosATL player, "Put", "", "", _item, "", "", "", "", _container] remoteExec ["TON_fnc_insertLog",2]; }];
player addEventHandler["Take",{ params ["_unit", "_container", "_item"]; ["Event", (getPlayerUID player), side player, getPosATL player, "Take", "", "", _item, "", "", "", "", _container] remoteExec ["TON_fnc_insertLog",2]; }];
player addEventHandler["Fired",{_this call life_fnc_onFired; ["Event", (getPlayerUID player), side player, getPosATL player, "Fired", "", "", currentWeapon player, "", "", "", "", ""] remoteExec ["TON_fnc_insertLog",2]; }];
player addEventHandler["InventoryClosed", {_this call life_fnc_inventoryClosed; ["Event", (getPlayerUID player), side player, getPosATL player, "InventoryClosed", "", "", currentWeapon player, "", "", typeOf vehicle player, "", vehicle player] remoteExec ["TON_fnc_insertLog",2];}];
player addEventHandler["InventoryOpened", {_this call life_fnc_inventoryOpened; ["Event", (getPlayerUID player), side player, getPosATL player, "InventoryOpened", "", "", currentWeapon player, "", "", typeOf vehicle player, "", vehicle player] remoteExec ["TON_fnc_insertLog",2];}];
player addEventHandler["FiredNear", {[] execVM "core\functions\fn_firstView.sqf"; ["Event", (getPlayerUID player), side player, getPosATL player, "FiredNear", "", "", currentWeapon player, "", "", "", "", ""] remoteExec ["TON_fnc_insertLog",2]; }];
player addEventHandler ["GetInMan", { params ["_unit", "_role", "_vehicle", "_turret"]; ["Event", (getPlayerUID player), side player, getPosATL player, "enterVehicle", "", getText(configFile >> "CfgVehicles" >> typeOf _vehicle >> "displayName"), _vehicle, "", "", typeOf _vehicle, "", _role] remoteExec ["TON_fnc_insertLog",2];}];
player addEventHandler ["GetOutMan", {
	params ["_unit", "_role", "_vehicle", "_turret"];
	
    if (!(currentWeapon player isEqualTo "")) then {
        player action ["SwitchWeapon", player, player, 100];
    };
	
	private _vInfo = _vehicle getVariable ["dbInfo",[]];
    private _damage = getAllHitPointsDamage _vehicle;
    [
        format ["%1", (_vInfo select 0)],
        format ["%1", (_vInfo select 1)],
        format ["%1", getPosATL _vehicle],
        getDir _vehicle,
        format ["%1", fuel _vehicle],
        format ["%1", _damage select 2]
    ] remoteExec ["TON_fnc_saveVehiclePos",2];
	["Event", (getPlayerUID player), side player, getPosATL player, "exitVehicle", "", getText(configFile >> "CfgVehicles" >> typeOf _vehicle >> "displayName"), _vehicle, "", "", typeOf _vehicle, "", _role] remoteExec ["TON_fnc_insertLog",2];
}];
