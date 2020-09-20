/*
    File: fn_revokeLicense.sqf
    Author: Michael Francis

    Description:
    Allows cops to revoke individual licenses, or all licenses. Vehicle related only.
*/
private["_display","_curTarget","_Btn1","_Btn2","_Btn3","_Btn4","_Btn5","_Btn6","_Btn7","_Btn8"];


params [
    ["_curTarget",objNull,[objNull]]
];
disableSerialization;
if (!(createDialog "revokeLicense_Menu")) exitWith {hint "revokeLicense_Menu Fail"};
if(isNull _curTarget) exitWith {hint "Wrong target!"; closeDialog 0;}; //Bad target
if(!isPlayer _curTarget && side _curTarget == civilian) exitWith {hint "Cannot perform this action!"; closeDialog 0;}; //Bad side check?

_display = findDisplay 41000;
_Btn1 = _display displayCtrl 41002;
_Btn2 = _display displayCtrl 41003;
_Btn3 = _display displayCtrl 41004;
_Btn4 = _display displayCtrl 41005;
_Btn5 = _display DisplayCtrl 41006;
_Btn6 = _display DisplayCtrl 41007;
_Btn7 = _display DisplayCtrl 41008;
_Btn8 = _display DisplayCtrl 41009;
life_pInact_curTarget = _curTarget;

_Btn1 buttonSetAction "[4] remoteExecCall [""life_fnc_removeLicenses"",life_pInact_curTarget]; closeDialog 0;";
_Btn2 buttonSetAction "[5] remoteExecCall [""life_fnc_removeLicenses"",life_pInact_curTarget]; closeDialog 0;";
_Btn3 buttonSetAction "[6] remoteExecCall [""life_fnc_removeLicenses"",life_pInact_curTarget]; closeDialog 0;";
_Btn4 buttonSetAction "[7] remoteExecCall [""life_fnc_removeLicenses"",life_pInact_curTarget]; closeDialog 0;";
_Btn5 buttonSetAction "[8] remoteExecCall [""life_fnc_removeLicenses"",life_pInact_curTarget]; closeDialog 0;";
_Btn6 buttonSetAction "[9] remoteExecCall [""life_fnc_removeLicenses"",life_pInact_curTarget]; closeDialog 0;"; 
_Btn7 ctrlShow false;
_Btn8 ctrlShow false;