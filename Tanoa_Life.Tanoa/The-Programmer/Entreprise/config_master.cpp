/*
    Author: Maxence Lyon
    Altis DEV: https://altisdev.com/user/maxence-lyon
    Teamspeak 3: ts.the-programmer.com
    Web site: www.the-programmer.com
    Steam: « Une Vache Sur CS – Maxence », please leave a message on my profile who says the exact reason before adding me.

    Terms of use:
      - This file is forbidden unless you have permission from the author. If you have this file without permission to use it please do not use it and do not share it.
      - If you have permission to use this file, you can use it on your server however it is strictly forbidden to share it.
      - Out of respect for the author please do not delete this information.

    License number:
    Server's name:
    Owner's name:
*/
#define true 1
#define false 0

class Max_Settings_Entreprise {
    default_lang = "fr"; // fr / en / de / es

    textures_base_path = "\Assets\Data\The-Programmer\Entreprise\textures";

    allow_acces_to_create_company_forearch_player = true;
    allowed_licenses[] = { "license_civ_entrepreneur" }; //Only if allow_acces_to_create_company_forearch_player = false // OPTIONAL OPTION
    allowed_playerid[] = { "" }; //Only if allow_acces_to_create_company_forearch_player = false // OPTIONAL OPTION

    price_upgrade_100_storage = 500;
    price_upgrade_1000_storage = 1500;

    open_color = "colorIndependent"; // check : https://community.bistudio.com/wiki/CfgMarkerColors_Arma_3
    close_color = "ColorGrey";
    open_or_close_for_new_employes = false;

    blacklisted_virtual_items[] = {"pickaxe","defibrillator","lockpick","goldbar","blastingcharge","boltcutter","defusekit"}; // Items that the company's CEO cannot buy from his employees (config class of the item)

    class positions_entreprises {
        class DIR {
            markerVar = "ENT_marker_dir";
            radius = 50;
            price = 0;
        };
        class Gendarmerie {
            markerVar = "";
            radius = 50;
            price = 0;
        };
        class ServiceSecours {
            markerVar = "";
            radius = 50;
            price = 0;
        };
        class entreprise4 {
            markerVar = "entreprise_4";
            radius = 50;
            price = 0;
        };
        class entreprise5 {
            markerVar = "entreprise_5";
            radius = 75;
            price = 0;
        };
    };

    class types_entreprises {
        class autoentreprise {
            displayName = "Auto-entreprise";
            max_stock_commum = 1500;
            max_stock_private = 500;
            max_players = 1;
            price = 0;
        };
        class sarl {
            displayName = "SARL";
            max_stock_commum = 3000;
            max_stock_private = 2000;
            max_players = 3;
            price = 0;
        };
        class sas {
            displayName = "SAS";
            max_stock_commum = 5000;
            max_stock_private = 3500;
            max_players = 5;
            price = 0;
        };
        class sa {
            displayName = "SA";
            max_stock_commum = 10000;
            max_stock_private = 7500;
            max_players = 8;
            price = 0;
        };
        class public {
            displayName = "SP (Service Public)";
            max_stock_commum = 100000;
            max_stock_private = 75000;
            max_players = 30;
            price = 0;
        };
    };
};
