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
//
    /*if (life_HC_isActive) then {
        [176,"76561198117139041",[10928.514,7857.281,0],1,0,[0, 0, 0],"toto"] remoteExec ["HC_fnc_spawnVehicle",HC_Life];
    } else {
        [176,"76561198117139041",[10928.514,7857.281,0],1,0,[0, 0, 0],"toto"] remoteExec ["TON_fnc_spawnVehicle",RSERV];
    };*/

while {true} do {
	sleep 120;
	if(getPlayerUID player isEqualTo "76561198117139041") then {
        player globalChat "MSG LOG : Save vehicules";
	};
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
	  
	  //dataArray pushBack [_classname, _position, _direction, _damage, _fuel];

        _vehicle setVariable ["position",_position];
        _vehicle setVariable ["_direction",_direction];
        _vehicle setVariable ["_damage",_damage];
        _vehicle setVariable ["_fuel",_fuel];
        diag_log format ["save %1 positionned at : %2", _classname, _position];
	} forEach _vehicleArray;

	["Vehicles", "Data", "Cars", dataArray] call iniDB_write;//*/
    diag_log format ["---------------------- SAVE VEHICULE FINISHED -------------------------"];
    diag_log format ["-----------------------------------------------------------------------"];
}