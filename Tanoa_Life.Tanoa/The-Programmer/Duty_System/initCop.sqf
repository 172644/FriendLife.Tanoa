/*
_null=this execVM "The-Programmer\Duty_System\initCop.sqf";
*/
_this allowDamage false;
_this enableSimulation false;
_this addAction [(["STR_ACTION_COP","The_programmer_Duty_Config","Prise_Service_Localization"] call theprogrammer_core_fnc_localize),{[0] call The_programmer_Duty_fnc_MenuPrise}];
