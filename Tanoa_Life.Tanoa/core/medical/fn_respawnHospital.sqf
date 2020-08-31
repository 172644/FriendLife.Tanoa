#include "..\..\script_macros.hpp"
/*
    Fichier: fn_respawnedHospital.sqf
    Auteur: Bryan "Tonic" Boardwine

    Description:
    Configure le joueur après respawn.
*/
life_action_inUse = false;
life_use_atm = true;
life_hunger = 100;
life_thirst = 100;
life_carryWeight = 0;
CASH = 0;

life_respawned = false;
player playMove "AmovPercMstpSnonWnonDnon";

life_corpse setVariable ["Revive",nil,true];
life_corpse setVariable ["name",nil,true];
life_corpse setVariable ["Reviving",nil,true];

player setVariable ["Revive",nil,true];
player setVariable ["name",nil,true];
player setVariable ["Reviving",nil,true];

if (!isNull life_corpse) then {
    private "_containers";
    life_corpse setVariable ["Revive",true,true];
//    _containers = nearestObjects[life_corpse,["WeaponHolderSimulated"],5];
//    {deleteVehicle _x;} forEach _containers;
    deleteVehicle life_corpse;
};

life_deathCamera cameraEffect ["TERMINATE","BACK"];
camDestroy life_deathCamera;

player allowDamage false;
player setPos (getMarkerPos "civ_spawnHospital"); // Vous pouvez renommer le point "civ_spawnHospital" par le celui que vous souhaitez.
player allowDamage true;
if !(isDamageAllowed player) then {player allowDamage true;};

if (life_is_arrested) exitWith {
    hint localize "STR_Jail_Suicide";
    life_is_arrested = false;
    [player,true] spawn life_fnc_jail;
    [] call SOCK_fnc_updateRequest;
};

[] call SOCK_fnc_updateRequest;
[] call life_fnc_hudUpdate