private ["_marker"];

_priceWheel = 250;

if (CASH < _priceWheel) exitWith { hint "Vous n'avez pas de thune" };
CASH = CASH - _priceWheel; 
"ACE_Wheel" createVehicle getMarkerPos _marker; 