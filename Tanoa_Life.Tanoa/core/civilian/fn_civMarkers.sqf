[] spawn max_fuelstations_fnc_displayLowPumps;

/*
    File: fn_civMarkers.sqf
    Author:

    Description:
    Add markers for civilians in groups.
*/
private ["_markers","_members"];
_markers = [];
_members = [];

for "_i" from 0 to 1 step 0 do {
    sleep 0.5;
    if (visibleMap) then
    {
        _members = units (group player);
		
		if ("Mattaust_Phone" in (assignedItems player) || "ItemGPS" in (assignedItems player)) then {
			_marker = createMarkerLocal ["moi_marker",(visiblePosition player)];
			if("ItemGPS" in (assignedItems player)) then {
				_marker setMarkerTypeLocal "PositionDirection";
				_marker setMarkerDirLocal getDir player;
			} else {
				_marker setMarkerTypeLocal "Position";
			};
			//_marker setMarkerTextLocal "Moi"; // modifier ici le texte
			_marker setMarkerColorLocal "ColorCivilian"; // modifier ici la couleur
			_markers pushBack [_marker,player];
		};
		
        {
            if !(_x isEqualTo player) then {
                _marker = createMarkerLocal [format ["%1_marker",_x],visiblePosition _x];
                _marker setMarkerColorLocal "ColorCivilian";
                _marker setMarkerTypeLocal "Mil_dot";
                _marker setMarkerTextLocal format ["%1", _x getVariable ["realname",name _x]];
                _markers pushBack [_marker,_x];
            };
        } forEach _members;

        while {visibleMap} do
        {
            {
                private ["_unit"];
                _unit = _x select 1;
                if (!isNil "_unit" && !isNull _unit) then {
                      (_x select 0) setMarkerPosLocal (visiblePosition _unit);
                };
            } forEach _markers;
            if (!visibleMap) exitWith {};
            sleep 0.02;
        };

        {deleteMarkerLocal (_x select 0);} forEach _markers;
        _markers = [];
        _members = [];
    };
};
