/*
    File: fn_setupActions.sqf
    Author:

    Description:
    Master addAction file handler for all client-based actions.
*/

life_actions = [];

switch (playerSide) do {

    //Civilian
    case civilian: {
        //Drop fishing net
        life_actions pushBack (player addAction[localize "STR_pAct_DropFishingNet",life_fnc_dropFishingNet,"",0,false,false,"",'
        (surfaceisWater (getPos vehicle player)) && (vehicle player isKindOf "Ship") && life_carryWeight < life_maxWeight && speed (vehicle player) < 2 && speed (vehicle player) > -1 && !life_net_dropped ']);

        //Rob person
        life_actions pushBack (player addAction[localize "STR_pAct_RobPerson",life_fnc_robAction,"",0,false,false,"",'
        !isNull cursorObject && player distance cursorObject < 3.5 && isPlayer cursorObject && animationState cursorObject == "Incapacitated" && !(cursorObject getVariable ["robbed",false]) ']);
		
    };
	
    
    //Cops
    case west: { 
	
	//gendarme 
	    life_actions = life_actions + [player addAction["<t color='#00FF00'>présenter ma Plaque</t>",life_fnc_civPasseport,"",1,false,true,"",' playerSide == civilian && !isNull cursorTarget && cursorTarget isKindOf "Man" ']];
	};
    
    //EMS
    case independent: { };

};

life_actions pushBack (
	player addAction["<t color='#0099FF'>S'asseoir</t>",{[cursorObject,player] execVM "script\Sitting\sitdown.sqf"},true,1,true,true,"""",
	'player distance cursorObject < 3 && {([str cursorObject,"bench"] call KRON_StrInStr || [str cursorObject,"chair"] call KRON_StrInStr) || ((typeOf cursorObject) in ["tas_fauteuille_gen","tas_banquette_kfc","tas_banquette_double_kfc","tas_chaise_1_kfc","tas_chaise_kfc","Land_ChairWood_F","Land_OfficeChair_01_F","equipement_hospital_bed","equipement_clinic_bed","equipement_xray_machine","equipement_cat_scan_machine","Land_Magazine_rifle_F"])}']
);