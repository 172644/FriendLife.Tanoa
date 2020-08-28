/*
_null=this execVM "The-Programmer\Duty_System\initMed.sqf";
*/
_this allowDamage false;
_this enableSimulation false;
_this addAction [(["STR_ACTION_MED","The_programmer_Duty_Config","Prise_Service_Localization"] call theprogrammer_core_fnc_localize),{[1] call The_programmer_Duty_fnc_MenuPrise}];
