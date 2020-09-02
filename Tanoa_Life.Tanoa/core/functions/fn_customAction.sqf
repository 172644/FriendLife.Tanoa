/*_dataArray = ["Vehicles", "Data", "Cars", "ARRAY"] call iniDB_read;

{
  _classname = _x select 0;
  _position = _x select 1;
  _direction = _x select 2;
  _damage = _x select 3;
  _fuel = _x select 4;

  _vehicle = _classname createVehicle _position;
  _vehicle setDir _direction;
  _vehicle setDamage _damage;
  _vehicle setFuel _fuel;

  sleep 0.01;
} forEach _dataArray;*/
while {!life_HC_isActive} do {
	sleep 120;
}
if (life_HC_isActive) then {
	diag_log format ["SPAWN VEHICLE ------- 1.HC_fnc_spawnVehicle"];
	[150,"76561198117139041",[10928.514,7857.281,0],nil,0,0,"toto"] remoteExec ["HC_fnc_spawnVehicle",HC_Life];
} else {
	diag_log format ["SPAWN VEHICLE ------- 2.HC_fnc_spawnVehicle"];
	[150,"76561198117139041",[10928.514,7857.281,0],nil,0,0,"toto"] remoteExec ["TON_fnc_spawnVehicle",RSERV];
};//*/
if (life_HC_isActive && !RSERV) then {
	diag_log format ["SPAWN VEHICLE ------- 1.TON_fnc_spawnVehicleAfterReboot"];
	remoteExec ["HC_fnc_spawnVehicleAfterReboot",HC_Life];
} else {
	diag_log format ["SPAWN VEHICLE ------- 2.TON_fnc_spawnVehicleAfterReboot"];
	remoteExec ["TON_fnc_spawnVehicleAfterReboot",RSERV];
};
	
while {true} do {
	sleep 120;
    //diag_log format ["-----------------------------------------------------------------------"];
    //diag_log format ["------------------------  START CUSTOM ACTION -------------------------"];
	
	
	if(getPlayerUID player isEqualTo "76561198117139041") then {
        player globalChat "MSG LOG : Save vehicules";
		/*cashPlayer = "extDB3" callExtension "4:SQL:SELECT player.cash From player";
        player globalChat format["CASH PLAYER: %1", cashPlayer ];
		cashPlayer = "extDB3" callExtension "4:SQL:SELECT '98' From player";
        player globalChat format["CUSTOM: %1", custom ];*/
    diag_log format ["-----------------------------------------------------------------------"];
    diag_log format ["----------------------------  START SPAWN -----------------------------"];
/*if (life_HC_isActive) then {
	remoteExec ["HC_fnc_spawnVehicleAfterReboot",HC_Life];
} else {
	remoteExec ["TON_fnc_spawnVehicleAfterReboot",RSERV];
};*/
    //*
	if (life_HC_isActive) then {
		diag_log format ["SPAWN VEHICLE ------- 1.HC_fnc_spawnVehicle"];
        [150,"76561198117139041",[10928.514,7857.281,0],nil,0,0,"toto"] remoteExec ["HC_fnc_spawnVehicle",HC_Life];
    } else {
		diag_log format ["SPAWN VEHICLE ------- 2.HC_fnc_spawnVehicle"];
        [150,"76561198117139041",[10928.514,7857.281,0],nil,0,0,"toto"] remoteExec ["TON_fnc_spawnVehicle",RSERV];
    };//*/

    diag_log format ["-------------------------- SPAWN FINISHED -----------------------------"];
    diag_log format ["-----------------------------------------------------------------------"];
	};
	
	
    //diag_log format ["---------------------- CUTOM ACTION FINISHED --------------------------"];
    //diag_log format ["-----------------------------------------------------------------------"];
	
	
    //player globalChat "Message Test 60 sec";
	
	/*sleep 7150;
    player globalChat "Message Test 1h59";
	sleep 50;*/
	//*
//	if (LIFE_SETTINGS(getNumber,"player_advancedLog") isEqualTo 1) then {
//		if (LIFE_SETTINGS(getNumber,"battlEye_friendlyLogging") isEqualTo 1) then {
//			advanced_log = format [localize "STR_DL_ML_customLog","Test 60 sec"];
//		} else {
//			advanced_log = format [localize "STR_DL_ML_customLog","Test 60 sec"];
//		};
//		publicVariableServer "advanced_log";
//	};
/*
    //diag_log format ["%1, %2", player, time];
    diag_log format ["-----------------------------------------------------------------------"];
    diag_log format ["------------------------  START SAVE VEHICULE -------------------------"];

	_vehicleArray = nearestObjects [[0,0,0], ["Car"], 22000];

	dataArray = [];
	{
	  _classname = typeOf _x;
	  _position = getPos _x;
	  _direction = getDir _x;
	  _damage = damage _x;
	  _fuel = fuel _x;
	  
	  dataArray pushBack [_classname, _position, _direction, _damage, _fuel];
      diag_log format ["save %1 positionned at : %2", _classname, _position];
	} forEach _vehicleArray;

	["Vehicles", "Data", "Cars", dataArray] call iniDB_write;
    diag_log format ["---------------------- SAVE VEHICULE FINISHED -------------------------"];
    diag_log format ["-----------------------------------------------------------------------"];//*/
}