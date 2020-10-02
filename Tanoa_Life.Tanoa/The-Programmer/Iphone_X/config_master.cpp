/*
    Author: Jean_Park

    
    • Discord : https://discord.gg/DhFUFsq 
    • Email : contact@the-programmer.com 
    • Site : the-programmer.com -> support

    Terms of use:
        - This file is forbidden unless you have permission from the author. If you have this file without permission to use it please do not use it and do not share it.
        - If you have permission to use this file, you can use it on your server however it is strictly forbidden to share it.
        - Out of respect for the author please do not delete this information
*/
#define false 0
#define true 1

class The_Programmer_Settings_Iphone {
    default_lang = "fr"; // fr / en / es

    gps_script_enable = true;
    interpol_script_enable = true;
    phone_numbers_script_enable = true;
    advanced_phone_script_enable = true;
    bill_system_script_enable = true;
    companies_script_enable = true;
    governement_script_enable = false;
    dispatch_script_enable = true;
    whitelist_menu_script_enable = true;
    dynamic_market_script_enable = false;
    farming_helper_script_enable = false;

    enable_cellphone_animations = true; // You need to put the "The_Programmer_Cellphone" mod into your modpack !

    reboot_1 = "01H00";
    reboot_2 = "06H00";
    reboot_3 = "12H00";
    reboot_4 = "18H00";

    default_wallpaper = "\Assets\Data\The-Programmer\Iphone_X\textures\fonds\fond_1.paa";

    Fond[] = {
        {"Forest","\Assets\Data\The-Programmer\Iphone_X\textures\fonds\fond_1.paa"},
        {"Dark & Red","\Assets\Data\The-Programmer\Iphone_X\textures\fonds\fond_2.paa"},
        {"Iphone X","\Assets\Data\The-Programmer\Iphone_X\textures\fonds\fond_3.paa"},
        {"Aninme Wallpaper","\Assets\Data\The-Programmer\Iphone_X\textures\fonds\fond_4.paa"},
        {"BMW Wallpaper","\Assets\Data\The-Programmer\Iphone_X\textures\fonds\fond_5.paa"},
        {"Ferrari Wallpaper","\Assets\Data\The-Programmer\Iphone_X\textures\fonds\fond_6.paa"}
    };

    Son_sms[] = {
        {"Mario Mushroom","mario_mushroom"},
        {"Classic Whistle","classic_whistle"},
        {"Iphone","Notif_iphone"},
        {"Samsung","Samsung"}
    };

    Sonnerie[] = {
        {"ArmyWakeup","ArmyWakeup"},
        {"Bahbahbah","bahbahbah"},
        {"Dont Worry Be Happy","DontWorryBeHappy"},
        {"Hurr Durr","HurrDurr"},
        {"Iphone","IsThatMyiPhone"},
        {"Rocket Ship","RocketShip"},
        {"Smoke Weed","SmokeWeed"}
    };

    class Cfg_Buttons {
        class Clefs {
            action = "createDialog ""The_Programmer_Iphone_Key_Menu"";";
            displayName = "Clés";
            condition = "";
            //picture = "\Assets\Data\The-Programmer\Iphone_X\textures\icons\clef.paa";
            picture = "\Assets\Data\The-Programmer\Iphone_X\textures\icons\keys.paa";
        };
        class Setting {
            action = "if ((getNumber (missionConfigFile >> ""The_Programmer_Settings_Iphone"" >> ""advanced_phone_script_enable"")) isEqualTo 1) then {createDialog ""The_Programmer_Iphone_Settings_Menu_3""} else {if ((getNumber (missionConfigFile >> ""The_Programmer_Settings_Iphone"" >> ""phone_numbers_script_enable"")) isEqualTo 1) then {createDialog ""The_Programmer_Iphone_Settings_Menu_2""} else {createDialog ""The_Programmer_Iphone_Settings_Menu""};};";
            displayName = "Réglages";
            condition = "";
            picture = "\Assets\Data\The-Programmer\Iphone_X\textures\icons\reglage.paa";
        };
        class contact {
            action = "[1] spawn the_programmer_iphone_fnc_contact_menu;";
            displayName = "Contacts";
            condition = "((getNumber (missionConfigFile >> ""The_Programmer_Settings_Iphone"" >> ""advanced_phone_script_enable"")) isEqualTo 1) || ((getNumber (missionConfigFile >> ""The_Programmer_Settings_Iphone"" >> ""phone_numbers_script_enable"")) isEqualTo 1)";
            picture = "\Assets\Data\The-Programmer\Iphone_X\textures\icons\contact.paa";
        };
        class ButtonMyGang {
            action = "if (isNil ""life_action_gangInUse"") then {if(isNil {(group player) getVariable ""gang_owner""}) then {createDialog ""The_Programmer_Iphone_Create_Gang_Menu"";} else {[] spawn the_programmer_iphone_fnc_apps_gang;};};";
            displayName = "Gang";
            condition = "";
            picture = "\Assets\Data\The-Programmer\Iphone_X\textures\icons\groupe.paa";
        };
        class Licences {
            action = "[] call the_programmer_iphone_fnc_apps_license;";
            displayName = "Licences";
            condition = "";
            picture = "\Assets\Data\The-Programmer\Iphone_X\textures\icons\licence.paa";
        };
        class SyncData {
            action = "[] call SOCK_fnc_syncData;";
            displayName = "Sync Data";
            condition = "";
            picture = "\Assets\Data\The-Programmer\Iphone_X\textures\icons\syncro.paa";
        };
        class UpdateClothes {
            action = "[] call life_fnc_playerSkins;";
            displayName = "Rafraichir tenue";
            condition = "";
            //picture = "\MapMarkers\Data\marchev_icon.paa";
            picture = "\Assets\Data\The-Programmer\Iphone_X\textures\icons\clothes.paa";
        };
        class Banking {
            action = "[1] call the_programmer_iphone_fnc_apps_payEasy;";
            displayName = "PayEasy";
            condition = "";
            //picture = "\Assets\Data\The-Programmer\Iphone_X\textures\icons\banque.paa";
            picture = "\Assets\Data\The-Programmer\Iphone_X\textures\icons\money.paa";
        };
        class Inventaire {
            action = "createDialog ""The_Programmer_Iphone_Stuff_Menu"";";
            displayName = "Inventaire";
            condition = "";
            //picture = "\Assets\Data\The-Programmer\Iphone_X\textures\icons\sac.paa";
            picture = "\Assets\Data\The-Programmer\Iphone_X\textures\icons\bag.paa";
        };
        class Message {
            action = "if (((getNumber (missionConfigFile >> ""The_Programmer_Settings_Iphone"" >> ""phone_numbers_script_enable"")) isEqualTo 1) || ((getNumber (missionConfigFile >> ""The_Programmer_Settings_Iphone"" >> ""advanced_phone_script_enable"")) isEqualTo 1)) then {createDialog ""The_Programmer_Iphone_Cell_Menu""} else {createDialog ""The_Programmer_Iphone_Cell_TONIC_Menu""};";
            displayName = "Message";
            condition = "";
            picture = "\Assets\Data\The-Programmer\Iphone_X\textures\icons\chat.paa";
        };
        /*class Weather {
            action = "[] spawn the_programmer_iphone_fnc_apps_weather;";
            displayName = "Météo";
            condition = "";
            picture = "\Assets\Data\The-Programmer\Iphone_X\textures\icons\Meteo.paa";
        };
        class Camera {
            action = "[] spawn the_programmer_iphone_fnc_apps_camera;";
            displayName = "Caméra";
            condition = "((getNumber (missionConfigFile >> ""The_Programmer_Settings_Iphone"" >> ""enable_cellphone_animations"")) isEqualTo 1)";
            picture = "\Assets\Data\The-Programmer\Iphone_X\textures\icons\camera.paa";
        };
        class PasteMe {
            action = "createDialog ""The_Programmer_Paste_Me"";";
            displayName = "Paste Me";
            condition = "";
            picture = "\Assets\Data\The-Programmer\Iphone_X\textures\icons\pasteme.paa";
        };*/
        class Entreprise {
            action = "[] spawn max_entreprise_fnc_openMenu;";
            displayName = "Entreprise";
            condition = "((getNumber (missionConfigFile >> ""The_Programmer_Settings_Iphone"" >> ""companies_script_enable"")) isEqualTo 1)";
            picture = "\Assets\Data\The-Programmer\Iphone_X\textures\icons\Entreprise.paa";
        };
        class Governement {
            action = "closeDialog 0; [] spawn max_gouvernement_fnc_selectGovernementMenu;";
            displayName = "Gouvernement";
            condition = "((getNumber (missionConfigFile >> ""The_Programmer_Settings_Iphone"" >> ""governement_script_enable"")) isEqualTo 1)";
            picture = "\Assets\Data\The-Programmer\Iphone_X\textures\icons\Gouvernement.paa";
        };
        class GPS {
            action = "[] call gps_menu_fnc_loadGPSMenu;";
            displayName = "GPS";
            condition = "((getNumber (missionConfigFile >> ""The_Programmer_Settings_Iphone"" >> ""gps_script_enable"")) isEqualTo 1)";
            picture = "\Assets\Data\The-Programmer\Iphone_X\textures\icons\gps.paa";
        };
        class Clavier {
            action = "createDialog ""The_Programmer_Iphone_Clavier_Menu"";";
            displayName = "Pavé numérique";
            condition = "((getNumber (missionConfigFile >> ""The_Programmer_Settings_Iphone"" >> ""advanced_phone_script_enable"")) isEqualTo 1)";
            picture = "\Assets\Data\The-Programmer\Iphone_X\textures\icons\call.paa";
        };
        class Facture {
            action = "createDialog ""facture_list"";";
            displayName = "Factures";
            condition = "((getNumber (missionConfigFile >> ""The_Programmer_Settings_Iphone"" >> ""bill_system_script_enable"")) isEqualTo 1)";
            picture = "\Assets\Data\The-Programmer\Iphone_X\textures\icons\facture.paa";
        };
        class DynamicMarket {
            action = "[] spawn theprogrammer_fnc_bourseViewInit;";
            displayName = "Bourse";
            condition = "((getNumber (missionConfigFile >> ""The_Programmer_Settings_Iphone"" >> ""dynamic_market_script_enable"")) isEqualTo 1)";
            picture = "\Assets\Data\The-Programmer\Iphone_X\textures\icons\bourse.paa";
        };
		//class DynamicMarket {  //Nom de la class (n'influe en rien sur le fonctionne du bouton il doit être juste unique) 
            //action = "createDialog ""life_dymarket_prices"";"; //L'action que le bouton va exécuter (correspond au onButtonClick dans le player_inv.hpp)
            //displayName = "Bourse"; // Le nom du bouton qui s'affiche quand on met le curseur dessus 
            //condition = ""; // Condition pour afficher uniquement le bouton à une certaine personne/groupe 
            //picture = "The-Programmer\Iphone_X\textures\icons\bourse.paa"; // La destination de l'image pour l'icon 
		//};
		class objetsplacable {  //Nom de la class (n'influe en rien sur le fonctionne du bouton il doit être juste unique) 
            action = "[] spawn life_fnc_placeablesMenu; closeDialog 0;"; //L'action que le bouton va exécuter (correspond au onButtonClick dans le player_inv.hpp)
            displayName = "Objets placable"; // Le nom du bouton qui s'affiche quand on met le curseur dessus 
            condition = ""; // Condition pour afficher uniquement le bouton à une certaine personne/groupe 
            picture = "\Assets\Data\The-Programmer\Iphone_X\textures\icons\cone.paa"; // La destination de l'image pour l'icon
		};
        class FarmingHelper {
            action = "createDialog ""The_Programmer_FarmingHelper_Menu"";";
            displayName = "Farms";
            condition = "((getNumber (missionConfigFile >> ""The_Programmer_Settings_Iphone"" >> ""farming_helper_script_enable"")) isEqualTo 1)";
            picture = "\Assets\Data\The-Programmer\Iphone_X\textures\icons\farming.paa";
        };
        class Admin {
            action = "createDialog ""the_programmer_admin_menu"";";
            displayName = "Admin Menu";
            condition = "((call life_adminlevel) >= 1)";
            picture = "\Assets\Data\The-Programmer\Iphone_X\textures\icons\admin.paa";
        };
        class CallsManagement {
            action = "[] spawn max_callsmanage_fnc_openCallsManagementMenu;";
            displayName = "Dispatch";
            condition = "(((getNumber (missionConfigFile >> ""The_Programmer_Settings_Iphone"" >> ""dispatch_script_enable"")) isEqualTo 1) && !(playerSide isEqualTo civilian))";
            picture = "\Assets\Data\The-Programmer\Iphone_X\textures\icons\dispatch.paa";
        };
        class Interpol {
            action = "if ((getNumber (missionConfigFile >> ""The_Programmer_Settings_Iphone"" >> ""interpol_script_enable"")) isEqualTo 1) then {closeDialog 0; [0] remoteExec [""max_interpol_fnc_getInterpol"",2];} else {[] call life_fnc_wantedMenu;};";
            displayName = "Interpol";
            condition = "playerSide isEqualTo West";
            picture = "\Assets\Data\The-Programmer\Iphone_X\textures\icons\police.paa";
        };
        class WhiteList {
            action = "createDialog ""whitelist_menu"";";
            displayName = "Whitelist Menu";
            condition = "((call life_adminlevel) >= 1) && ((getNumber (missionConfigFile >> ""The_Programmer_Settings_Iphone"" >> ""whitelist_menu_script_enable"")) isEqualTo 1)";
            picture = "\Assets\Data\The-Programmer\Iphone_X\textures\icons\whitelist.paa";
        };
        class Heal {
            action = "[objNull, player] call ace_medical_treatment_fnc_fullHeal;";
            displayName = "Heal";
            condition = "((call life_adminlevel) >= 1)";
            //picture = "\Assets\Data\icons\vita.paa";
            picture = "\Assets\Data\The-Programmer\Iphone_X\textures\icons\heal.paa";
        };
    };
};
