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

class Max_Settings_FuelStations {
    default_lang = "fr"; // fr / en / de / es

    license_refuel_stations = "license_civ_pump"; // this license is required to refuel a pump [and win money :)]
    enable_more_fuel_consumption = true; // true/false  -  if you put true the vehicles will consume more fuel

	class fuel_stations {
		class Land_FuelStation_01_pump_malevil_F { // class = classname of the fuel pump
			fuel_1 = 2000; // number of litter by default and maximum per fuel per pump for the item who have as class "fuel_1" (fuel types are defined below the stations)
			fuel_2 = 2000;
			fuel_3 = 2000;
			fuel_4 = 2000;
			fuel_5 = 2000;
			fuel_6 = 0;
			fuel_7 = 2000;
		};
		class Land_FuelStation_01_pump_F {
			fuel_1 = 2000;
			fuel_2 = 2000;
			fuel_3 = 2000;
			fuel_4 = 2000;
			fuel_5 = 2000;
			fuel_6 = 0;
			fuel_7 = 2000;
		};
		class Land_FuelStation_02_pump_F {
			fuel_1 = 2000;
			fuel_2 = 2000;
			fuel_3 = 2000;
			fuel_4 = 2000;
			fuel_5 = 2000;
			fuel_6 = 0;
			fuel_7 = 2000;
		};
		class Land_fs_feed_F {
			fuel_1 = 2500;
			fuel_2 = 2500;
			fuel_3 = 0;
			fuel_4 = 0;
			fuel_5 = 2000;
			fuel_6 = 0;
			fuel_7 = 0;
		};
		class Land_FuelStation_Feed_F {
			fuel_1 = 0;
			fuel_2 = 0;
			fuel_3 = 0;
			fuel_4 = 0;
			fuel_5 = 0;
			fuel_6 = 10000;
			fuel_7 = 0;
		};
	};

	class fuel_types {
		class fuel_1 {
			displayName = "Gazole"; // not in stringtable ! only the text
			item_refuel = "gazole"; // class and variable of the object (in the config_vItems) which makes it possible to fill the fuel station for this type of fuel
			liter_price = 15; // price per liter of fuel purchased
			liter_price_refuel_station = 12; // price per liter of fuel sold (when you refuel the station)
			liters_per_item_refuel_station = 2; // number of liters in one "item_refuel"
		};
		class fuel_2 {
			displayName = "Essence Sans Plomb 95";
			item_refuel = "sp95";
			liter_price = 9;
			liter_price_refuel_station = 6;
			liters_per_item_refuel_station = 2;
		};
		class fuel_3 {
			displayName = "Essence Sans Plomb 98";
			item_refuel = "sp98";
			liter_price = 12;
			liter_price_refuel_station = 9;
			liters_per_item_refuel_station = 2;
		};
		class fuel_4 {
			displayName = "Gaz de pétrole liquéfié";
			item_refuel = "gpl";
			liter_price = 11;
			liter_price_refuel_station = 8;
			liters_per_item_refuel_station = 2;
		};
		class fuel_5 {
			displayName = "Biocarburant";
			item_refuel = "bio";
			liter_price = 17;
			liter_price_refuel_station = 14;
			liters_per_item_refuel_station = 2;
		};
		class fuel_6 {
			displayName = "Kerosene";
			item_refuel = "kerosene";
			liter_price = 27;
			liter_price_refuel_station = 20;
			liters_per_item_refuel_station = 2;
		};
		class fuel_7 {
            displayName = "Recharge électrique";
            item_refuel = "elctric";
            liter_price = 5;
            liter_price_refuel_station = 4;
            liters_per_item_refuel_station = 2;
        };
	};
};
