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
/*while {!life_HC_isActive} do {
	sleep 120;
}
if (life_HC_isActive) then {
	diag_log format ["SPAWN VEHICLE ------- 1.HC_fnc_spawnVehicle"];
	[150,"76561198117139041",[10928.514,7857.281,0],nil,0,0,"toto"] remoteExec ["HC_fnc_spawnVehicle",HC_Life];
} else {
	diag_log format ["SPAWN VEHICLE ------- 2.HC_fnc_spawnVehicle"];
	[150,"76561198117139041",[10928.514,7857.281,0],nil,0,0,"toto"] remoteExec ["TON_fnc_spawnVehicle",RSERV];
};//*/
/*if (life_HC_isActive && !RSERV) then {
	diag_log format ["SPAWN VEHICLE ------- 1.TON_fnc_spawnVehicleAfterReboot"];
	remoteExec ["HC_fnc_spawnVehicleAfterReboot",HC_Life];
} else {
	diag_log format ["SPAWN VEHICLE ------- 2.TON_fnc_spawnVehicleAfterReboot"];
	remoteExec ["TON_fnc_spawnVehicleAfterReboot",RSERV];
};*/

showChat false;
currentNamespace setVariable ["diffRebootTime",(diag_tickTime-(diag_tickTime%1))];
sleep 60;

while {true} do {
	
	
	/*
	_nbHourReboot = 5;
	if((_hour >= 1 && _hour < 7) || (_hour >= 12 && _hour < 18)) then {
		_nbHourReboot = 6;
	};
	if((_hour >= 18 || _hour isEqualTo 0) then {
		_nbHourReboot = 7;
	};
	_maxMinReboot = _nbHourReboot*60;
	_actualMin = diag_tickTime/60;
	
	_tempestIn = 999;
	if(_actualMin > (_maxMinReboot-30) && _actualMin < (_maxMinReboot-29) && ) then {
		_tempestIn = 30;
	};
	if(_actualMin > (_maxMinReboot-15) && _actualMin < (_maxMinReboot-14) && ) then {
		_tempestIn = 15;
	};
	if(_actualMin > (_maxMinReboot-10) && _actualMin < (_maxMinReboot-9) && ) then {
		_tempestIn = 10;
	};
	if(_actualMin > (_maxMinReboot-5) && _actualMin < (_maxMinReboot-4) && ) then {
		_tempestIn = 5;
	};
	if(_actualMin > (_maxMinReboot-3) && _actualMin < (_maxMinReboot-2) && ) then {
		_tempestIn = 3;
	};
	if(_actualMin > (_maxMinReboot-1) && _actualMin < (_maxMinReboot) && ) then {
		_tempestIn = 1;
	};
	
	if (_tempestIn <= 30) then {
		[ "/!\ ALERTE MÉTÉO /!\ ", format ["Une tempête est prévu d'ici peu de temps."], format ["Vous avez environ %1 minutes pour vous abriter", _tempestIn]] spawn BIS_fnc_infoText;
	};//*/
	
	
	
	
	
    //diag_log format ["-----------------------------------------------------------------------"];
    //diag_log format ["------------------------  START CUSTOM ACTION -------------------------"];
	
    //player globalChat format ["LOCAL_DATE : %1 - %2", (currentNamespace getVariable ["diffRebootTime",0]), diag_tickTime];
    //player globalChat format ["DATE : %2 - %1", diag_tickTime, missionStart];
	
	if(getPlayerUID player isEqualTo "76561198117139041") then {
		//_CowsSlot = FETCH_CONFIG3(getArray,"CfgWeapons","srifle_DMR_01_ACO_F","WeaponSlotsInfo","CowsSlot","compatibleItems");
        //player globalChat "MSG LOG : Save vehicules";
		
        //player globalChat format ["DATE : %1", missionStart];
		
		//[ "/!\ ALERTE MÉTÉO /!\ ", format ["Une tempête est prévu pour 18h"], format ["Vous avez environ %1 minutes pour vous abriter", "30"]] spawn BIS_fnc_infoText;
		//diag_log format ["srifle_DMR_01_ACO_F : %1", _CowsSlot];
		//diag_log format ["srifle_DMR_01_ACO_F : %1", FETCH_CONFIG3(getArray,"CfgWeapons",srifle_DMR_01_ACO_F,"WeaponSlotsInfo","MuzzleSlot","compatibleItems")];
		//diag_log format ["srifle_DMR_01_ACO_F : %1", FETCH_CONFIG3(getArray,"CfgWeapons",srifle_DMR_01_ACO_F,"WeaponSlotsInfo","PointerSlot","compatibleItems")];
		//diag_log format ["srifle_DMR_01_ACO_F : %1", FETCH_CONFIG3(getArray,"CfgWeapons",srifle_DMR_01_ACO_F,"WeaponSlotsInfo","UnderBarrelSlot","compatibleItems")];
		/*cashPlayer = "extDB3" callExtension "4:SQL:SELECT player.cash From player";
        player globalChat format["CASH PLAYER: %1", cashPlayer ];
		cashPlayer = "extDB3" callExtension "4:SQL:SELECT '98' From player";
        player globalChat format["CUSTOM: %1", custom ];*/
		//diag_log format ["-----------------------------------------------------------------------"];
		//diag_log format ["----------------------------  START SPAWN -----------------------------"];
		
		
		/*if (life_HC_isActive) then {
			remoteExec ["HC_fnc_spawnVehicleAfterReboot",HC_Life];
		} else {
			remoteExec ["TON_fnc_spawnVehicleAfterReboot",RSERV];
		};*/
		
		
		/*
		if (life_HC_isActive) then {
			diag_log format ["SPAWN VEHICLE ------- 1.HC_fnc_spawnVehicle"];
			[150,"76561198117139041",[10928.514,7857.281,0],nil,0,0,"toto"] remoteExec ["HC_fnc_spawnVehicle",HC_Life];
		} else {
			diag_log format ["SPAWN VEHICLE ------- 2.HC_fnc_spawnVehicle"];
			[150,"76561198117139041",[10928.514,7857.281,0],nil,0,0,"toto"] remoteExec ["TON_fnc_spawnVehicle",RSERV];
		};//*/

		//diag_log format ["-------------------------- SPAWN FINISHED -----------------------------"];
		//diag_log format ["-----------------------------------------------------------------------"];
	};
	
	
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
	
	
	sleep 60;
	showChat false;
	
	//*
	// -------- GET NEXT REBOOT :
	_currentDiff = (currentNamespace getVariable ["diffRebootTime", 0]);
	_diffFromConnected = (diag_tickTime-(diag_tickTime%1)) - _currentDiff;
    //player globalChat format ["%1 - %2 = %3", diag_tickTime, _currentDiff, _diffFromConnected];
	_hour = missionStart select 3;
	_rebootHour = 0;
	if(_hour >= 1 && _hour < 7) then {
		_rebootHour = 7;
	};
	if(_hour >= 7 && _hour < 12) then {
		_rebootHour = 12;
	};
	if(_hour >= 12 && _hour < 18) then {
		_rebootHour = 18;
	};
	if(_hour >= 18 || _hour isEqualTo 0) then {
		_rebootHour = 1;
	};
	
	
	// -------- GET ACTUAL DATE :
	_addSecond = _diffFromConnected%60;
	_addMinute = ((_diffFromConnected - _addSecond)/60)%60;
	_addHour = ((((_diffFromConnected - _addSecond)/60) - _addMinute)/60);
    //player globalChat format ["%1:%2:%3 - %4", _addHour, _addMinute, _addSecond, missionStart];
    //player globalChat format ["%1:%2:%3 - %4", missionStart select 3, missionStart select 4, missionStart select 5, missionStart];
	
	_actualsecond = (missionStart select 5) + _addSecond;
	_actualminute = (missionStart select 4) + _addMinute;
	_actualhour = (missionStart select 3) + _addHour;
	if(_actualsecond >= 60) then {
		_actualsecond = _actualsecond%60;
		_actualminute = _actualminute + 1;
	};
	if(_actualminute >= 60) then {
		_actualminute = _actualminute%60;
		_actualhour = _actualhour + 1;
	};
	if(_actualhour >= 24) then {
		_actualhour = _actualhour%24;
	};
	
    //player globalChat format ["%1h%2 - %3", _actualhour, _actualminute, _actualsecond];
	
	// -------- SHOW TEMPEST MESSAGE :
	_showMessage = false;
	if((_actualHour+1) isEqualTo _rebootHour) then {	
		switch (_actualminute) do {
			case 30: { _showMessage = true; };
			case 45: { 
				_showMessage = true; 
				0 setOvercast 0.3;
				forceWeatherChange;
			};
			case 50: { 
				_showMessage = true; 
				0 setOvercast 0.5;
				0 setRain 0.1;
				forceWeatherChange;
			};
			case 55: { 
				_showMessage = true; 
				0 setOvercast 0.8;
				0 setRain 0.3;
				forceWeatherChange;
			};
			case 57: { 
				_showMessage = true; 
				0 setOvercast 1;
				0 setRain 0.7;
				forceWeatherChange;
			};
			case 59: { 
				_showMessage = true; 
				0 setOvercast 1;
				0 setRain 1;
				forceWeatherChange;
			};
		};
	};
	//_showMessage = true;
	if(_showMessage) then {
		//[ "/!\ ALERTE MÉTÉO /!\ ", format ["Tempête prévu pour %1h", _rebootHour], format ["Vous avez environ %1 minutes pour vous abriter", (_actualminute-60)]] spawn BIS_fnc_infoText;
		[
			["/!\ ALERTE MÉTÉO /!\ ",2,1],
			[format ["Tempête prévu pour %1h", _rebootHour],2,1],
			[format ["Vous avez environ %1 minutes pour trouver un abrit.", (60-_actualminute)],2,1,8]
		] spawn BIS_fnc_EXP_camp_SITREP;
	};//*/
}