(unitbackpack player) addWeaponCargoGlobal [uniform player, 1];
//player addItemToBackpack uniform player;
//player addItemToBackpack vest player;

_uniformItemsPlayer = uniformItems player;
_vestItemPlayer = vestItems player;
/*{
	player addItemToBackpack _x;
	//(unitbackpack player) addmagazinecargoGlobal [typeOf _x, 1];
	//(unitbackpack player) addWeaponCargoGlobal [typeOf _x, 1];
} forEach vestItems player;*/

/*{
	player addItemToBackpack _x;
	//(unitbackpack player) addmagazinecargoGlobal [typeOf _x, 1];
	//(unitbackpack player) addWeaponCargoGlobal [typeOf _x, 1];
} forEach uniformItems player;*/

//removeVest player;


player addUniform "U_O_V_Soldier_Viper_hex_F";
[] call life_fnc_playerSkins;
{
	player addItemToUniform _x;
} forEach _uniformItemsPlayer
