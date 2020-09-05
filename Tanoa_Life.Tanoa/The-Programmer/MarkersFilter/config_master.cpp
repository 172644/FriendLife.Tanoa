/*
    Author: 3rk
    Teamspeak 3: ts.the-programmer.com
    Web site: www.the-programmer.com

    Terms of use:
      - This file is forbidden unless you have permission from the author. If you have this file without permission to use it please do not use it and do not share it.
      - If you have permission to use this file, you can use it on your server however it is strictly forbidden to share it.
      - Out of respect for the author please do not delete this information.

*/

class The_Programmer_MarkersOnOff_Config {
	/* ==== DEBUG MODE ==== */
	debug_mode				= false;
	/* ==== MARKERS ALL BUTTON ==== */
	icon_button_activeall 	= "\Assets\Data\The-Programmer\MarkersFilter\icons\bulb.paa";
	text_button_activeall 	= "Tout activer/désactiver";

	/* ====RESET BUTTON ==== */
	icon_button_reset 		= "\Assets\Data\The-Programmer\MarkersFilter\icons\reset.paa";
	text_button_reset 		= "Reset";

	class markers_category {
		/*
		class markers_exemple {
			name 		= "Exemple"; The name of the category
			sigle 		= "EXE"; The sigle of the category which will be used for naming your markers in your mission.sqm ("EXE_something")
			icon 		= "The-Programmer\MarkersFilter\icons\res.paa"; The picture that will be use for the button
			side[] 		= {"CIV","WEST","GUER","EAST"}; The sides that are allowed to see all the markers of the category
			CIV			= Civilian
			WEST		= Cop
			GUER		= Med
			EAST		= East (opfor)
			conditions	= "license_civ_driver"; If you want the category to be shown only for the people who own the driver licence. Can be code too.
		};
		*/

	    class markers_ressources {
			name 		= "Ressources";
			sigle 		= "RES";
			icon 		= "\Assets\Data\The-Programmer\MarkersFilter\icons\res.paa";
			side[] 		= {"CIV","WEST","GUER","EAST"};
			conditions	= "";
	    };

		class markers_traitements {
			name 		= "Traitements";
			sigle 		= "TRT";
			icon 		= "\Assets\Data\The-Programmer\MarkersFilter\icons\trt.paa";
			side[] 		= {"CIV","WEST","EAST"};
			conditions	= "";
		};

		class markers_vendeurs {
			name 		= "Vendeurs";
			sigle 		= "SLR";
			icon 		= "\Assets\Data\The-Programmer\MarkersFilter\icons\slr.paa";
			side[] 		= {"CIV","WEST","GUER","EAST"};
			conditions	= "";
		};

		class markers_dps {
			name 		= "DPS";
			sigle 		= "DPS";
			icon 		= "\Assets\Data\The-Programmer\MarkersFilter\icons\dps.paa";
			side[] 		= {"CIV","WEST","GUER","EAST"};
			conditions	= "";
		};

		class markers_shops {
			name 		= "Magasins";
			sigle 		= "SHO";
			icon 		= "\Assets\Data\The-Programmer\MarkersFilter\icons\sho.paa";
			side[] 		= {"CIV","WEST","GUER","EAST"};
			conditions	= "";
		};

		class markers_entreprises {
			name 		= "Entreprises";
			sigle 		= "ENT";
			icon 		= "\Assets\Data\The-Programmer\MarkersFilter\icons\ent.paa";
			side[] 		= {"CIV","WEST","GUER","EAST"};
			conditions	= "";
		};

		class markers_administrations {
			name 		= "Administrations";
			sigle 		= "ADM";
			icon 		= "\Assets\Data\The-Programmer\MarkersFilter\icons\adm.paa";
			side[] 		= {"CIV","WEST","GUER","EAST"};
			conditions	= "";
		};

		class markers_atms {
			name 		= "Distributeurs";
			sigle 		= "ATM";
			icon 		= "\Assets\Data\The-Programmer\MarkersFilter\icons\atm.paa";
			side[] 		= {"CIV","WEST","GUER","EAST"};
			conditions	= "";
		};
		
		class markers_illegal {
			name 		= "Lieux de drogue";
			sigle 		= "DRO";
			icon 		= "\Assets\Data\The-Programmer\MarkersFilter\icons\DRO.jpg";
			side[] 		= {"CIV"};
			conditions	= "license_civ_Rebel";
		};

		class markers_channels {
			name 		= "Channels 7";
			sigle 		= "CHA";
			icon 		= "\Assets\Data\The-Programmer\MarkersFilter\icons\cha.paa";
			side[] 		= {"CIV","WEST","GUER","EAST"};
			conditions	= "";
		};

		class markers_lieuxTouristiques {
			name 		= "Lieux touristiques";
			sigle 		= "TOU";
			icon 		= "\Assets\Data\The-Programmer\MarkersFilter\icons\tou.paa";
			side[] 		= {"CIV","WEST","GUER","EAST"};
			conditions	= "";
		};
		
	};
};
