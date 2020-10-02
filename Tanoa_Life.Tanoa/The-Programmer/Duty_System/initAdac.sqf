/*
_null=this execVM "The-Programmer\Duty_System\initAdac.sqf";
*/
_this allowDamage false;
_this enableSimulation false;
_this addAction [(["STR_ACTION_ADAC","The_programmer_Duty_Config","Prise_Service_Localization"] call theprogrammer_core_fnc_localize),{[2] call The_programmer_Duty_fnc_MenuPrise}];
//_this addAction [(["STR_ACTION_ADAC","The_programmer_Duty_Config","Prise_Service_Localization"] call theprogrammer_core_fnc_localize),{[2] call The_programmer_Duty_fnc_MenuPrise}, [], 0, false, true, "", "licence_civ_DIR"];
