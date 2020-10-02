/*
    File: fn_setupEVH.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Master eventhandler file
*/
player addEventHandler["Killed", {_this call life_fnc_onPlayerKilled}];
player addEventHandler["handleDamage",{_this call life_fnc_handleDamage;}];
player addEventHandler["Respawn", {_this call life_fnc_onPlayerRespawn}];
player addEventHandler["Take",{_this call life_fnc_onTakeItem}]; //Prevent people from taking stuff they shouldn't...
player addEventHandler["Fired",{_this call life_fnc_onFired}];
player addEventHandler["InventoryClosed", {_this call life_fnc_inventoryClosed}];
player addEventHandler["InventoryOpened", {_this call life_fnc_inventoryOpened}];
player addEventHandler["FiredNear", {[] execVM "core\functions\fn_firstView.sqf"; ["Event", (getPlayerUID player), side player, getPosATL player, "FiredNear", "", "", "", "", "", "", "", ""] remoteExec ["TON_fnc_insertLog",2]; }];


	
/*
player addEventHandler["Take",{_this call life_fnc_onTakeItem;}]; //Prevent people from taking stuff they shouldn't...
player addEventHandler["Killed", {_this call life_fnc_onPlayerKilled;}];
player addEventHandler["handleDamage",{
	_this call life_fnc_handleDamage;
	//["Event", _(getPlayerUID player), side player, getPosATL player, "handleDamage", "", "", currentWeapon player, "", "", vehicle player, "", ""] remoteExec ["TON_fnc_insertLog",2];
}];

player addEventHandler["Respawn", {
	_this call life_fnc_onPlayerRespawn;
	//["Event", _(getPlayerUID player), side player, getPosATL player, "Respawn", "", "", "", "", "", vehicle player, "", ""] remoteExec ["TON_fnc_insertLog",2];
}];

player addEventHandler["Fired",{
	_this call life_fnc_onFired;
	//["Event", _(getPlayerUID player), side player, getPosATL player, "Fired", "", "", currentWeapon player, "", "", vehicle player, "", ""] remoteExec ["TON_fnc_insertLog",2];
}];
	
player addEventHandler["InventoryClosed", {
	_this call life_fnc_inventoryClosed;
	//["Event", _(getPlayerUID player), side player, getPosATL player, "InventoryClosed", "", "", "", "", "", vehicle player, "", ""] remoteExec ["TON_fnc_insertLog",2];
}];

player addEventHandler["InventoryOpened", {
	_this call life_fnc_inventoryOpened;
	//["Event", _(getPlayerUID player), side player, getPosATL player, "InventoryOpened", "", "", "", "", "", vehicle player, "", ""] remoteExec ["TON_fnc_insertLog",2];
}];

player addEventHandler["FiredNear", {
	[] execVM "core\functions\fn_firstView.sqf";
	//["Event", _(getPlayerUID player), side player, getPosATL player, "FiredNear", "", "", currentWeapon player, "", "", vehicle player, "", ""] remoteExec ["TON_fnc_insertLog",2];
	["Event", _(getPlayerUID player), side player, getPosATL player, "FiredNear", "", "", "", "", "", "", "", ""] remoteExec ["TON_fnc_insertLog",2];
}];

player addEventHandler ["GetOutMan", {
	params ["_unit", "_role", "_vehicle", "_turret"];
	
    if (!(currentWeapon player isEqualTo "")) then {
        player action ["SwitchWeapon", player, player, 100];
    };
	
	["Event", (getPlayerUID player), side player, getPosATL player, "exitVehicle", "", "", "", "", "", "", "", ""] remoteExec ["TON_fnc_insertLog",2];
	//["exit", (getPlayerUID player), side player, getPosATL player, "vehicule", "", "", _vehicle, "", "", typeOf _vehicle, "", _role] remoteExec ["TON_fnc_insertLog",2];
	//["exit", (getPlayerUID player), side player, getPosATL player, "vehicule", "", getText(configFile >> "CfgVehicles" >> typeOf _vehicle >> "displayName"), _vehicle, "", "", typeOf _vehicle, "", _role] remoteExec ["TON_fnc_insertLog",2];
}];

player addEventHandler ["GetInMan", {
	params ["_unit", "_role", "_vehicle", "_turret"];
	
	["Event", (getPlayerUID player), side player, getPosATL player, "enterVehicule", "", "", "", "", "", "", "", ""] remoteExec ["TON_fnc_insertLog",2];
	//["enter", (getPlayerUID player), side player, getPosATL player, "vehicule", "", "", _vehicle, "", "", typeOf _vehicle, "", _role] remoteExec ["TON_fnc_insertLog",2];
	//["enter", (getPlayerUID player), side player, getPosATL player, "vehicule", "", getText(configFile >> "CfgVehicles" >> typeOf _vehicle >> "displayName"), _vehicle, "", "", typeOf _vehicle, "", _role] remoteExec ["TON_fnc_insertLog",2];
}];*/