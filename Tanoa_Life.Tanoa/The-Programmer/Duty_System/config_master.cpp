/*
    Author: Jean-Park
    Teamspeak 3: ts.the-programmer.com
    Web site: www.the-programmer.com

    Terms of use:
      - This file is forbidden unless you have permission from the author. If you have this file without permission to use it please do not use it and do not share it.
      - If you have permission to use this file, you can use it on your server however it is strictly forbidden to share it.
      - Out of respect for the author please do not delete this information.

*/
#define false 0
#define true 1

class The_programmer_Duty_Config {
    default_lang = "fr"; // fr / en

    tonic_version = 5; //5 if you are on version 5.0 or 4 if you are on version 4.X  

    path_init = "core\init.sqf"; //File destination to be executed : [] execVM "path_init";
    path_fsm = "core\fsm\client.fsm"; //File destination to be executed : [] execFSM "path_fsm";
    briefing = true;

    //open_beeper_key = 48; //https://community.bistudio.com/wiki/DIK_KeyCodes for the keys number (48 = B)

    save_between_disconnection = true; //Save the status of the player between the disconnection
    save_between_reboot = true; //Save the status of the player between reboot

    /*type_of_check = "Type";
    Type : Level, Licence */
    type_of_check = "Level";

    class east_configuration {
        east_side = true; //If you have the east side on your server = true 
        name_of_column_for_adac_level = "adaclevel"; //The name of the column in your database for the adac level

        adaclevel_required = 1; //Minimum Adaclevel level to take up duty
        licence_required_adac[] = {""}; //All licenses that allows you to take up duty

        Adaclevel_required_to_acces_beeper = 20;//Minimum AdacLevel level to open the beeper
        licence_required_to_acces_beeper = ""; //All licenses that allows you to open the beeper 

        class adac_cloting {
            items[] = {
            //{"type","classname"}
            // Type : Uniform, Vest, Magazine, Item, Weapon, Headgear
            {"Uniform","U_Rangemaster"},
            {"Item","ItemMap"},
            {"Item","ItemCompass"},
            {"Item","ItemWatch"},
            {"Item","ItemGPS"}
            }; 
        };
    };

    class Cop_configuration {
        coplevel_required = 20; //Minimum CopLevel level to take up duty
        licence_required_cop[] = {"license_civ_driver"}; //All licenses that allows you to take up duty

        coplevel_required_to_acces_beeper = 20; //Minimum CopLevel level to open the beeper
        licence_required_to_acces_beeper = ""; //All licenses that allows you to open the beeper    

        class Cop_cloting {
            items[] = {
            //{"type","classname"}
            // Type : Uniform, Vest, Magazine, Item, Weapon, Headgear
                {"Uniform","U_Rangemaster"},
                {"Item","ItemMap"},
                {"Item","ItemCompass"},
                {"Item","ItemWatch"},
                {"Item","ItemGPS"}
            };
        };  
    };

    class Medic_configuration {
        mediclevel_required = 20; //Minimum mediclevel level to take up duty
        licence_required_med[] = {"license_civ_boat"};

        medlevel_required_to_acces_beeper = 20; //Minimum Medleve level to open the beeper
        licence_required_to_acces_beeper = ""; //All licenses that allows you to open the beeper  
    
        class med_cloting {
            items[] = {
            //{"type","classname"}
            // Type : Uniform, Vest, Magazine, Item, Weapon, Headgear
                {"Uniform","U_Rangemaster"},
                {"Item","ItemMap"},
                {"Item","ItemCompass"},
                {"Item","ItemWatch"},
                {"Item","ItemGPS"}
            };
        };
    };
};