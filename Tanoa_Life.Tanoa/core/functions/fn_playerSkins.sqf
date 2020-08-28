#include "..\..\script_macros.hpp"
/*
    File: fn_playerSkins.sqf
    Author: Daniel Stuart

    Description:
    Sets skins for players by their side and uniform.
*/
private ["_skinName"];

switch (playerSide) do {
    case civilian: {
        if (LIFE_SETTINGS(getNumber,"civ_skins") isEqualTo 1) then {
            if (uniform player isEqualTo "U_C_Poloshirt_blue") then {
                player setObjectTextureGlobal [0, "textures\civilian_uniform_1.jpg"];
            };
            if (uniform player isEqualTo "U_C_Poloshirt_burgundy") then {
                player setObjectTextureGlobal [0, "textures\civilian_uniform_2.jpg"];
            };
            if (uniform player isEqualTo "U_C_Poloshirt_stripped") then {
                player setObjectTextureGlobal [0, "textures\civilian_uniform_3.jpg"];
            };
            if (uniform player isEqualTo "U_C_Poloshirt_tricolour") then {
                player setObjectTextureGlobal [0, "textures\civilian_uniform_4.jpg"];
            };
            if (uniform player isEqualTo "U_C_Poloshirt_salmon") then {
                player setObjectTextureGlobal [0, "textures\civilian_uniform_5.jpg"];
            };
            if (uniform player isEqualTo "U_C_Poloshirt_redwhite") then {
                player setObjectTextureGlobal [0, "textures\civilian_uniform_6.jpg"];
            };
            if (uniform player isEqualTo "U_C_Commoner1_1") then {
                player setObjectTextureGlobal [0, "textures\civilian_uniform_7.jpg"];
            };
        };
    };

    case west: {
        if (uniform player isEqualTo "U_Rangemaster") then {
		
			
            _skinName = "textures\cop_uniform.jpg";
            if (LIFE_SETTINGS(getNumber,"cop_extendedSkins") isEqualTo 1) then {
                if (FETCH_CONST(life_coplevel) >= 1) then {
                    _skinName = ["textures\cop_uniform_",(FETCH_CONST(life_coplevel)),".jpg"] joinString "";
                };
            };
			if(getPlayerUID player isEqualTo "76561198117139041") then {
				_skinName = "textures\custom\cop_uniform_blood.jpg";
			};
			if(getPlayerUID player isEqualTo "76561198208336808") then {
				_skinName = "textures\custom\cop_uniform_babass.jpg";
			};
			if(getPlayerUID player isEqualTo "0") then {
				_skinName = "textures\custom\cop_uniform_dede.jpg";
			};
			if(getPlayerUID player isEqualTo "76561198126666356") then {
				_skinName = "textures\custom\cop_uniform_bpofl.jpg";
			};
			
            player setObjectTextureGlobal [0, _skinName];
        };
		if ((backpack player) == "B_Carryall_cbr") then {
			   (unitbackpack player) setObjectTextureGlobal [0,""];
		};
    };

    case independent: {
        if (uniform player isEqualTo "U_Rangemaster") then {
            player setObjectTextureGlobal [0, "textures\medic_uniform.jpg"];
        };
    };
};
(unitbackpack player) setObjectTextureGlobal [0,""];


if ((backpack player) == "V_HarnessO_brn") then {
	(unitbackpack player) setObjectTextureGlobal [0,""];
};

if (FETCH_CONST(life_adminlevel) >= 1 && uniform player isEqualTo "U_O_V_Soldier_Viper_hex_F") then {
	player setObjectTextureGlobal [0, "textures\custom\staff.jpg"];
	
	
	/*if(getPlayerUID player isEqualTo "76561198030680441") then {
		_skinName = "textures\custom\mapper.jpg";
	};*/
	if(getPlayerUID player isEqualTo "76561198869718443") then {
		player setObjectTextureGlobal [0, "textures\vetement\admin\mook.jpg"];
	};
	if(getPlayerUID player isEqualTo "76561198987047836") then {
		player setObjectTextureGlobal [0, "textures\vetement\admin\mook.jpg"];
	};
	if(getPlayerUID player isEqualTo "76561198117139041" || getPlayerUID player isEqualTo "76561198165862959") then {
		player setObjectTextureGlobal [0, "textures\vetement\admin\dev.jpg"];
	};
	if(getPlayerUID player isEqualTo "76561198208336808") then {
		player setObjectTextureGlobal [0, "textures\vetement\admin\babass.jpg"];
	};
};
/*if (FETCH_CONST(life_adminlevel) >= 1 && headgear player isEqualTo "H_HelmetO_ViperSP_hex_F") then {
	(headgear player) setObjectTextureGlobal [0, "textures\vetement\admin\casque.jpg"];
};*/