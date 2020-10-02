#include "..\..\script_macros.hpp"
/*
    Author: Jean- Baptiste for The Programmer Forum

    Description : gas station robbery
*/
params [
    ["_shop",ObjNull],
    ["_robber",ObjNull],
    ["_action",-1]
];

/*========Configuration=========*/
_number_cop = 3; //Minimum number of police officers to be able to rob
_add_interpol = true; //Add or not the crime in the interpol
_marker_create = true; //Creation of a marker
_money_fix = 2000; //Fixed money collected
_blocked_time = 300; // Time before the next robbery
_money_random = 4000; //Random money received + fixed money
_time = 180; //Time of the robbery
_temps_atm = 5; //Time before the robber can deposit his money in the ATM (in minutes)
/*=============================*/


if (side _robber != civilian) exitWith {hint "Vous devez être un civil!"};
if ((west countSide playableUnits) < _number_cop) exitWith {hint "Il n'y a pas assez de policiers !"};
if (_robber distance _shop > 5) exitWith {hint "Tu es trop loin ! (5m max)"};
if (vehicle player != _robber) exitWith {hint "Vous devez sortir de votre véhicule !"};
if !(alive _robber) exitWith {};
if (currentWeapon _robber isEqualTo "") exitWith {hint "Vous avez besoin d'un pistolet pour voler !"};
if (_shop getVariable ["robbery_progress",false]) exitWith {hint "Il y a déjà un vol en cours"};

if ((random 80) >= 0) then {
    [1,"ROBBERY ALERT : A silent alarm has just been triggered at a gas station !"] remoteExec ["life_fnc_broadcast",west];
    [_action,_shop] call _fn_create_Marker;
};

_fn_create_Marker = {
    _action = _this select 1;
    _shop = _this select 1;
    _marker = createMarker [format ["marker_var_%1",_action], _shop];
    _marker setMarkerColor "ColorRed";
    _marker setMarkerText "AVERTISSEMENT: VOL EN COURS !";
    _marker setMarkerType "mil_warning";
};

_exit = false;
_money = _money_fix + round (random _money_random);
_title = _shop actionParams _action;
_shop removeAction _action;
_shop setVariable ["robbery_progress",true,true];



disableSerialization;

"progressBar" cutRsc ["life_progress","PLAIN"];
_ui = uiNamespace getVariable "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText "Le vol en cours reste proche ! (5m) (1%)...";
_progress progressSetPosition 0.01;
_cP = 0.01;

if (_marker_create) then {
    [_action,_shop] call _fn_create_Marker;
};

for "_i" from 0 to 1 step 0 do {
    uiSleep (_time / 100);

    _cP = _cP + 0.01;
    _progress progressSetPosition _cP;
    _pgText ctrlSetText format ["Le vol en cours reste proche ! (3m)  (%1%2)...",round (_cP * 100), "%"];

    if (_cP >= 1) exitWith {};
    if (_robber distance _shop > 5) exitWith {_exit = true};
    if (!alive _robber) exitWith {};
    if (_robber getVariable "restrained") exitWith {_exit = true};
    if (life_istazed) exitWith {_exit = true};                                
};

if (_exit) exitWith {
    "progressBar" cutText ["","PLAIN"];
    hint "The store was closed and the police were notified !";
    [1,format["A person just tried to steal a gas station !",_robber,name _robber, _shop]] remoteExec ["life_fnc_broadcast",west];

    playSound3D ["A3\Sounds_F\sfx\alarm_independent.wss", _robber];
    deleteMarker format ["marker_var_%1",_action];
    _shop setVariable ["robbery_progress",false,true];

//    if (_add_interpol) then {
//        [getPlayerUID _robber, _robber getVariable ["realname", name _robber], "211"] remoteExecCall ["life_fnc_wantedAdd", RSERV];
//    };
};

"progressBar" cutText ["","PLAIN"];
titleText[format["Vous avez volé %1 $,fuyez maintenant avant l'arrivée de la Gendarmerie !",[_money] call life_fnc_numberText], "PLAIN"];
playSound3D ["A3\Sounds_F\sfx\alarm_independent.wss", _robber];

["Rob", (getPlayerUID player), side player, getPosATL player, "Shop", "", "", _shop, _money, _money, "", "", format ["Nbr GN : %1, Weapon : [%2, %3]", (west countSide playableUnits), primaryWeapon player, handgunWeapon player]] remoteExec ["TON_fnc_insertLog",2];

[1, format["News : A Gas Station has just been robbed of %1 €",[_money] call life_fnc_numberText]] remoteExec ["life_fnc_broadcast", west];

//if (_add_interpol) then {
//    [getPlayerUID _robber, _robber getVariable ["realname",name _robber], "211"] remoteExecCall ["life_fnc_wantedAdd", RSERV];
//};


life_cash = life_cash + _money;
call SOCK_fnc_updatePartial;
deleteMarker format ["marker_var_%1",_action];
_shop setVariable ["robbery_progress",false,true];

[_shop,_title,_blocked_time] spawn {
    sleep (_this select 2);
    (_this select 0) addAction [((_this select 1) select 0),life_fnc_robSystem];
};

sleep (_temps_atm * 60);
life_use_atm = true;