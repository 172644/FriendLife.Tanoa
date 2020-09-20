#include "..\script_macros.hpp"
/*
    File: init.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Master client initialization file
*/

private ["_handle","_timeStamp","_extDB_notLoaded"];
life_firstSpawn = true;
life_session_completed = false;
0 cutText[localize "STR_Init_ClientSetup","BLACK FADED"];
0 cutFadeOut 9999999;
_timeStamp = diag_tickTime;
_extDB_notLoaded = "";
diag_log "----------------------------------------------------------------------------------------------------";
diag_log "--------------------------------- Starting Altis Life Client Init ----------------------------------";
diag_log "------------------------------------------ Version 5.0.0 -------------------------------------------";
diag_log "----------------------------------------------------------------------------------------------------";
waitUntil {!isNull player && player == player}; //Wait till the player is ready
enableSentences false;

//Setup initial client core functions
diag_log "::Life Client:: Initialization Variables";
[] call compile preprocessFileLineNumbers "core\configuration.sqf";

diag_log "::Life Client:: Variables initialized";
diag_log "::Life Client:: Setting up Eventhandlers";
[] call life_fnc_setupEVH;

diag_log "::Life Client:: Eventhandlers completed";
diag_log "::Life Client:: Setting up user actions";
[] call life_fnc_setupActions;

diag_log "::Life Client:: User actions completed";
diag_log "::Life Client:: Waiting for server functions to transfer..";
waitUntil {(!isNil "TON_fnc_clientGangLeader")};

diag_log "::Life Client:: Received server functions.";
0 cutText [localize "STR_Init_ServerReady","BLACK FADED"];
0 cutFadeOut 99999999;

diag_log "::Life Client:: Waiting for the server to be ready..";
waitUntil {!isNil "life_server_isReady"};
waitUntil {!isNil "life_HC_isActive" && {!isNil "life_server_extDB_notLoaded"}};

if (life_server_extDB_notLoaded) exitWith {
    999999 cutText [localize "STR_Init_ExtdbFail","BLACK FADED"];
    999999 cutFadeOut 99999999;
};

waitUntil {life_server_isReady};
[] call SOCK_fnc_dataQuery;
waitUntil {life_session_completed};
0 cutText[localize "STR_Init_ClientFinish","BLACK FADED"];
0 cutFadeOut 9999999;

//diag_log "::Life Client:: Group Base Execution";
[] spawn life_fnc_escInterupt;

//Set bank amount for new players
switch (playerSide) do {
    case west: {
        life_paycheck = LIFE_SETTINGS(getNumber,"paycheck_cop");
    };
    case civilian: {
        life_paycheck = LIFE_SETTINGS(getNumber,"paycheck_civ");
    };
    case independent: {
        life_paycheck = LIFE_SETTINGS(getNumber,"paycheck_med");
    };
	case sideLogic:
	{
    _handle = [] spawn life_fnc_initZeus;
    waitUntil {scriptDone _handle};
	};
};

switch (playerSide) do {
    case west: {
        _handle = [] spawn life_fnc_initCop;
        waitUntil {scriptDone _handle};
    };
    case civilian: {
        //Initialize Civilian Settings
        _handle = [] spawn life_fnc_initCiv;
        waitUntil {scriptDone _handle};
    };
    case independent: {
        //Initialize Medics and blah
        _handle = [] spawn life_fnc_initMedic;
        waitUntil {scriptDone _handle};
    };
};

player setVariable ["restrained",false,true];
player setVariable ["Escorting",false,true];
player setVariable ["transporting",false,true];
player setVariable ["playerSurrender",false,true];

diag_log "Past Settings Init";

diag_log "Executing client.fsm";
waitUntil {!(isNull (findDisplay 46))};

diag_log "Display 46 Found";
if (isNil "The_programmer_initialised") then { (findDisplay 46) displayAddEventHandler ["KeyDown", "_this call life_fnc_keyHandler"];};
player addRating 99999999;

[player,life_settings_enableSidechannel,playerSide] remoteExecCall ["TON_fnc_manageSC",RSERV];
0 cutText ["","BLACK IN"];
[] call life_fnc_hudSetup;

/* Set up frame-by-frame handlers */
LIFE_ID_PlayerTags = ["LIFE_PlayerTags","onEachFrame","life_fnc_playerTags"] call BIS_fnc_addStackedEventHandler;
LIFE_ID_RevealObjects = ["LIFE_RevealObjects","onEachFrame","life_fnc_revealObjects"] call BIS_fnc_addStackedEventHandler;

player setVariable ["steam64ID",getPlayerUID player];
player setVariable ["realname",profileName,true];
player setVariable ["RP_ID",random 99999,true]; 
//player setVariable ["realname",format ["%1", random 99999],true]; 

life_fnc_moveIn = compileFinal
"
    life_disable_getIn = false;
    player moveInCargo (_this select 0);
    life_disable_getOut = true;
";

life_fnc_RequestClientId = player;
publicVariableServer "life_fnc_RequestClientId"; //Variable OwnerID for HeadlessClient

[] spawn life_fnc_survival;

[] spawn {
    for "_i" from 0 to 1 step 0 do {
        waitUntil {(!isNull (findDisplay 49)) && {(!isNull (findDisplay 602))}}; // Check if Inventory and ESC dialogs are open
        (findDisplay 49) closeDisplay 2; // Close ESC dialog
        (findDisplay 602) closeDisplay 2; // Close Inventory dialog
    };
};

life_paycheck = compile (if (life_paycheck isEqualType "") then { life_paycheck} else {str(life_paycheck)}); //Make the paycheck static.
if (LIFE_SETTINGS(getNumber,"enable_fatigue") isEqualTo 0) then {player enableFatigue false;};

/*
    https://feedback.bistudio.com/T117205 - disableChannels settings cease to work when leaving/rejoining mission
    Universal workaround for usage in a preInit function. - AgentRev
    Remove if Bohemia actually fixes the issue.
*/
{
    _x params [["_chan",-1,[0]], ["_noText","false",[""]], ["_noVoice","false",[""]]];

    _noText = [false,true] select ((["false","true"] find toLower _noText) max 0);
    _noVoice = [false,true] select ((["false","true"] find toLower _noVoice) max 0);

    _chan enableChannel [!_noText, !_noVoice];

} forEach getArray (missionConfigFile >> "disableChannels");

[] call life_fnc_playerSkins;
/*
if (life_HC_isActive) then {
    [getPlayerUID player,player getVariable ["realname",name player]] remoteExec ["HC_fnc_wantedProfUpdate",HC_Life];
} else {
    [getPlayerUID player,player getVariable ["realname",name player]] remoteExec ["life_fnc_wantedProfUpdate",RSERV];
};//*/

life_hideoutBuildings = [];
{
    private _building = nearestBuilding getMarkerPos _x;
    life_hideoutBuildings pushBack _building;
    false
} count ["gang_area_1","gang_area_2","gang_area_3"];

[] spawn theprogrammer_core_fnc_clientInit;
[] spawn The_programmer_Duty_fnc_init_Service;

if !(profileNamespace getVariable ["license_civ_driver_removed",false]) then {
    license_civ_driver = false;
    profileNamespace setVariable ["license_civ_driver_removed",true];
    [2] call SOCK_fnc_updatePartial; saveProfileNamespace;
};


diag_log "----------------------------------------------------------------------------------------------------";
diag_log format ["               End of Altis Life Client Init :: Total Execution Time %1 seconds ",(diag_tickTime) - _timeStamp];
diag_log "----------------------------------------------------------------------------------------------------";


/*
    Author: Maxence for The Programmer Forum

    Description: Task Force Radio Check
*/
[] spawn {
    _teamspeakName = "FRIENDS Life";
    _temspeakAdress = "85.190.161.53";
    _channelName = "TaskForceRadio";

    // Editing code below is not recommended
   _isAdmin = false;
    if !(isNil "life_adminlevel") then {
        if ((call life_adminlevel) > 0) then {
            _isAdmin = true;
            titleText ["La vérification de présence dans le canal Task Force Radio est désactivé comme vous êtes admin !","BLACK IN"];
        };
    };
    if (_isAdmin) exitWith {};

    if (isNil "TFAR_fnc_isTeamSpeakPluginEnabled") exitwith {
        999999 cutText ["Task Force Radio n'est pas activé pas sur votre ordinateur. Veuillez re-synchroniser et réessayer","BLACK FADED"];
        999999 cutFadeOut 99999999;
    };

    _tfarEnabled = true;
    _playerOnTeamspeak = true;
    _playerInChannel = false;
    _sleep = 2;
    _alreadyKnow = false;

    while {true} do {
        if !([] call TFAR_fnc_isTeamSpeakPluginEnabled) then {
            titleText ["Veuillez activer Task Force Radio dans vos plugins teamspeak ! Pour ce faire, rendez-vous dans l'onglet réglages de teamspeak puis plugins et activez-le.", "BLACK"];
            _tfarEnabled = false;
        } else {
            _tfarEnabled = true;
        };

        if !(_channelName == (call TFAR_fnc_getTeamSpeakChannelName)) then {
            titleText ["Veuillez 'reload' votre plugin Task Force Radio pour être déplacer dans le canal vocal ! Pour ce faire rendez-vous dans les réglages de teamspeak puis plugins puis appuyez sur le bouton 'relaod'.", "BLACK"];
            _playerInChannel = false;
        } else {
            _playerInChannel = true;
        };

        if (_tfarEnabled && _playerOnTeamspeak && _playerInChannel) then {
            if !(_alreadyKnow) then {
                titleText ["Task Force Radio est bien initialisé, bienvenue !","BLACK IN"];
                _alreadyKnow = true;
            };
            _sleep = 5;
        } else {
            _alreadyKnow = false;
            _sleep = 2;
        };
       
        sleep _sleep;
    };  
};


// down weapon when exit veh
player addEventHandler ["GetOutMan", {
    if (!(currentWeapon player isEqualTo "")) then {
        player action ["SwitchWeapon", player, player, 100];
    }
}];




// switch anim sit
MAC_fnc_switchMove = {
    private["_object","_anim"];
    _object = _this select 0;
    _anim = _this select 1;
    _object switchMove _anim;
};

