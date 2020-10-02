/*
*    FORMAT:
*        STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*/
class VirtualShops {
    //Virtual Shops
    class market {
        name = "STR_Shops_Market";
        side = "";
        conditions = "";
        items[] = { "waterBottle", "rabbit", "apple", "redgull", "tbacon", "pickaxe", "fuelFull", "peach", "storagesmall", "storagebig", "rabbit_raw", "hen_raw", "rooster_raw", "sheep_raw", "goat_raw" };
    };

	class memphis_market {
			name = "STR_Shops_Memphis";
			side = "";
			conditions = "";
			items[] = { "waterBottle", "redgull", "coca", "fanta", "coffee", "cappuccino", "donuts", "salade", "hamburger", "frites", "glace" };
	};
		
	class kfc_market {
			name = "STR_Shops_Kfc";
			side = "";
			conditions = "";
			items[] = { "waterBottle", "redgull", "pepsi", "orangina", "tacos", "bucket", "bucket2", "salade", "frites", "glace" };
	};
		
    class etabli {
		variable = "etabli";
		displayName = "STR_Item_etabli";
		weight = 5;
		buyPrice = 100;
		sellPrice = -1;
		illegal = false;
		edible = -1;
		icon = "";
	};

    class med_market {
        name = "STR_Shops_Market";
        side = "med";
        conditions = "";
        items[] = { "waterBottle", "rabbit", "apple", "redgull", "tbacon", "fuelFull", "peach", "defibrillator" };
    };

    class rebel {
        name = "STR_Shops_Rebel";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = { "waterBottle", "rabbit", "apple", "redgull", "tbacon", "lockpick", "pickaxe", "fuelFull", "peach", "boltcutter", "blastingcharge" };
    };

    class gang {
        name = "STR_Shops_Gang";
        side = "civ";
        conditions = "";
        items[] = { "waterBottle", "rabbit", "apple", "redgull", "tbacon", "lockpick", "pickaxe", "fuelFull", "peach", "boltcutter", "blastingcharge" };
    };

    class wongs {
        name = "STR_Shops_Wongs";
        side = "civ";
        conditions = "";
        items[] = { "turtle_soup", "turtle_raw" };
    };

    class coffee {
        name = "STR_Shops_Coffee";
        side = "";
        conditions = "";
        items[] = { "coffee", "donuts" };
    };

    class f_station_coffee {
        name = "STR_Shop_Station_Coffee";
        side = "";
        conditions = "";
        items[] = { "coffee", "donuts", "redgull", "fuelFull" };
    };

    class drugdealer {
        name = "STR_Shops_DrugDealer";
        side = "civ";
        conditions = "";
        items[] = { "cocaine_processed", "heroin_processed", "marijuana" };
    };

    class oil {
        name = "STR_Shops_Oil";
        side = "civ";
        conditions = "";
        items[] = { "oil_processed", "pickaxe", "fuelFull" };
    };

    class fishmarket {
        name = "STR_Shops_FishMarket";
        side = "civ";
        conditions = "";
        items[] = { "salema_raw", "salema", "ornate_raw", "ornate", "mackerel_raw", "mackerel", "tuna_raw", "tuna", "mullet_raw", "mullet", "catshark_raw", "catshark" };
    };

    class glass {
        name = "STR_Shops_Glass";
        side = "civ";
        conditions = "";
        items[] = { "glass" };
    };

    class iron  {
        name = "STR_Shops_Minerals";
        side = "civ";
        conditions = "";
        items[] = { "iron_refined", "copper_refined" };
    };

    class diamond {
        name = "STR_Shops_Diamond";
        side = "civ";
        conditions = "";
        items[] = { "diamond_uncut", "diamond_cut" };
    };

    class salt {
        name = "STR_Shops_Salt";
        side = "civ";
        conditions = "";
        items[] = { "salt_refined" };
    };

    class cement {
        name = "STR_Shops_Cement";
        side = "civ";
        conditions = "";
        items[] = { "cement" };
    };

    class gold {
        name = "STR_Shops_Gold";
        side = "civ";
        conditions = "";
        items[] = { "goldbar" };
    };
	
	class uranium {
		name = "STR_Shops_Uranium";
        side = "civ";
        conditions = "";
        items[] = { "uranium_refined" };
    };

    class cop {
        name = "STR_Shops_Cop";
        side = "cop";
        conditions = "";
        items[] = { "donuts", "coffee", "spikeStrip", "waterBottle", "rabbit", "apple", "redgull","fuelFull", "defusekit", "defibrillator", "speedcam", "Test_drugs", "Alcootest" };
    };

    class adac {
        name = "STR_Shops_Adac";
        side = "civ";
        conditions = "license_civ_dir";
        items[] = { "donuts", "coffee", "waterBottle", "rabbit", "apple", "peach", "redgull", "fuelFull" };
    };
};

/*
*    CLASS:
*        variable = Variable Name
*        displayName = Item Name
*        weight = Item Weight
*        buyPrice = Item Buy Price
*        sellPrice = Item Sell Price
*        illegal = Illegal Item
*        edible = Item Edible (-1 = Disabled)
*        icon = Item Icon
*        processedItem = Processed Item
*/
class VirtualItems {
    //Virtual Items
	class speedcam {
		variable = "speedcam";
		displayName = "STR_Item_speedcam";
		weight = 2;
		buyPrice = 0;
		sellPrice = -1;
		illegal = false;
		edible = -1;
		icon = "";
	};

	class gazole {
	  variable = "gazole";
	  displayName = "STR_Item_gazole";
	  weight = 2;
	  buyPrice = -1;
	  sellPrice = -1;
	  illegal = false;
	  edible = -1;
	  icon = "";
	};

	class sp95 {
	  variable = "sp95";
	  displayName = "STR_Item_sp95";
	  weight = 2;
	  buyPrice = -1;
	  sellPrice = -1;
	  illegal = false;
	  edible = -1;
	  icon = "";
	};

	class sp98 {
	  variable = "sp98";
	  displayName = "STR_Item_sp98";
	  weight = 2;
	  buyPrice = -1;
	  sellPrice = -1;
	  illegal = false;
	  edible = -1;
	  icon = "";
	};

	class gpl {
	  variable = "gpl";
	  displayName = "STR_Item_gpl";
	  weight = 2;
	  buyPrice = -1;
	  sellPrice = -1;
	  illegal = false;
	  edible = -1;
	  icon = "";
	};

	class bio {
	  variable = "bio";
	  displayName = "STR_Item_bio";
	  weight = 2;
	  buyPrice = -1;
	  sellPrice = -1;
	  illegal = false;
	  edible = -1;
	  icon = "";
	};

	class kerosene {
	  variable = "kerosene";
	  displayName = "STR_Item_kerosene";
	  weight = 2;
	  buyPrice = -1;
	  sellPrice = -1;
	  illegal = false;
	  edible = -1;
	  icon = "";
	};


    //Misc
    class pickaxe {
        variable = "pickaxe";
        displayName = "STR_Item_Pickaxe";
        weight = 1;
        buyPrice = 750;
        sellPrice = 350;
        illegal = false;
        edible = -1;
        icon = "\Assets\Data\icons\ico_pickaxe.paa";
    };

    class defibrillator {
        variable = "defibrillator";
        displayName = "STR_Item_Defibrillator";
        weight = 2;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        icon = "\Assets\Data\icons\ico_defibrillator.paa";
    };

    class toolkit {
        variable = "toolkit";
        displayName = "STR_Item_Toolkit";
        weight = 2;
        buyPrice = 350;
        sellPrice = 100;
        illegal = false;
        edible = -1;
        icon = "\a3\weapons_f\items\data\UI\gear_toolkit_ca.paa";
    };

    class fuelEmpty {
        variable = "fuelEmpty";
        displayName = "STR_Item_FuelE";
        weight = 2;
        buyPrice = -1;
        sellPrice = 10;
        illegal = false;
        edible = -1;
        icon = "\Assets\Data\icons\ico_fuelEmpty.paa";
    };

    class fuelFull {
        variable = "fuelFull";
        displayName = "STR_Item_FuelF";
        weight = 4;
        buyPrice = 850;
        sellPrice = 500;
        illegal = false;
        edible = -1;
        icon = "\Assets\Data\icons\ico_fuel.paa";
    };

    class spikeStrip {
        variable = "spikeStrip";
        displayName = "STR_Item_SpikeStrip";
        weight = 15;
        buyPrice = 25;
        sellPrice = 25;
        illegal = true;
        edible = -1;
        icon = "\Assets\Data\icons\ico_spikeStrip.paa";
    };

    class lockpick {
        variable = "lockpick";
        displayName = "STR_Item_Lockpick";
        weight = 1;
        buyPrice = 150;
        sellPrice = 75;
        illegal = true;
        edible = -1;
        icon = "\Assets\Data\icons\ico_lockpick.paa";
    };

    class goldbar {
        variable = "goldBar";
        displayName = "STR_Item_GoldBar";
        weight = 12;
        buyPrice = -1;
        sellPrice = 55000;
        illegal = true;
        edible = -1;
        icon = "\Assets\Data\icons\ico_goldBar.paa";
    };

    class blastingcharge {
        variable = "blastingCharge";
        displayName = "STR_Item_BCharge";
        weight = 15;
        buyPrice = 35000;
        sellPrice = 10000;
        illegal = true;
        edible = -1;
        icon = "\Assets\Data\icons\ico_blastingCharge.paa";
    };

    class boltcutter {
        variable = "boltCutter";
        displayName = "STR_Item_BCutter";
        weight = 5;
        buyPrice = 7500;
        sellPrice = 1000;
        illegal = true;
        edible = -1;
        icon = "\Assets\Data\icons\ico_boltCutter.paa";
    };

    class defusekit {
        variable = "defuseKit";
        displayName = "STR_Item_DefuseKit";
        weight = 2;
        buyPrice = 25;
        sellPrice = 25;
        illegal = true;
        edible = -1;
        icon = "\Assets\Data\icons\ico_defuseKit.paa";
    };

    class storagesmall {
        variable = "storageSmall";
        displayName = "STR_Item_StorageBS";
        weight = 5;
        buyPrice = 75000;
        sellPrice = 50000;
        illegal = false;
        edible = -1;
        icon = "\Assets\Data\icons\ico_storageSmall.paa";
    };

    class storagebig {
        variable = "storageBig";
        displayName = "STR_Item_StorageBL";
        weight = 10;
        buyPrice = 150000;
        sellPrice = 125000;
        illegal = false;
        edible = -1;
        icon = "\Assets\Data\icons\ico_storageBig.paa";
    };

    //Mined Items
    class oil_unprocessed {
        variable = "oilUnprocessed";
        displayName = "STR_Item_OilU";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "\Assets\Data\icons\ico_oilUnprocessed.paa";
    };

    class oil_processed {
        variable = "oilProcessed";
        displayName = "STR_Item_OilP";
        weight = 1;
        buyPrice = -1;
        sellPrice = 210;
        illegal = false;
        edible = -1;
        icon = "\Assets\Data\icons\ico_oilProcessed.paa";
    };

    class copper_unrefined {
        variable = "copperUnrefined";
        displayName = "STR_Item_CopperOre";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "\Assets\Data\icons\ico_copperore.paa";
    };

    class copper_refined {
        variable = "copperRefined";
        displayName = "STR_Item_CopperIngot";
        weight = 3;
        buyPrice = -1;
        sellPrice = 110;
        illegal = false;
        edible = -1;
        icon = "\Assets\Data\icons\ico_copper.paa";
    };

    class iron_unrefined {
        variable = "ironUnrefined";
        displayName = "STR_Item_IronOre";
        weight = 5;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "\Assets\Data\icons\ico_ironore.paa";
    };

    class iron_refined {
        variable = "ironRefined";
        displayName = "STR_Item_IronIngot";
        weight = 3;
        buyPrice = -1;
        sellPrice = 150;
        illegal = false;
        edible = -1;
        icon = "\Assets\Data\icons\ico_iron.paa";
    };

    class salt_unrefined {
        variable = "saltUnrefined";
        displayName = "STR_Item_Salt";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "\Assets\Data\icons\ico_saltUnprocessed.paa";
    };

    class salt_refined {
        variable = "saltRefined";
        displayName = "STR_Item_SaltR";
        weight = 1;
        buyPrice = -1;
        sellPrice = 85;
        illegal = false;
        edible = -1;
        icon = "\Assets\Data\icons\ico_saltProcessed.paa";
    };

    class sand {
        variable = "sand";
        displayName = "STR_Item_Sand";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "\Assets\Data\icons\ico_sand.paa";
    };

    class glass {
        variable = "glass";
        displayName = "STR_Item_Glass";
        weight = 1;
        buyPrice = -1;
        sellPrice = 130;
        illegal = false;
        edible = -1;
        icon = "\Assets\Data\icons\ico_glass.paa";
    };

    class diamond_uncut {
        variable = "diamondUncut";
        displayName = "STR_Item_DiamondU";
        weight = 4;
        buyPrice = -1;
        sellPrice = 750;
        illegal = false;
        edible = -1;
        icon = "\Assets\Data\icons\ico_diamondUncut.paa";
    };

    class diamond_cut {
        variable = "diamondCut";
        displayName = "STR_Item_DiamondC";
        weight = 2;
        buyPrice = -1;
        sellPrice = 170;
        illegal = false;
        edible = -1;
        icon = "\Assets\Data\icons\ico_diamondCut.paa";
    };

    class rock {
        variable = "rock";
        displayName = "STR_Item_Rock";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "\Assets\Data\icons\ico_rock.paa";
    };

    class cement {
        variable = "cement";
        displayName = "STR_Item_CementBag";
        weight = 1;
        buyPrice = -1;
        sellPrice = 55;
        illegal = false;
        edible = -1;
        icon = "\Assets\Data\icons\ico_cement.paa";
    };
	
	class uranium_unrefined {
        variable = "uraniumUnrefined";
        displayName = "STR_Item_UraniumOre";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "\Assets\Data\icons\ico_uraniumUnprocessed.paa";
    };

    class uranium_refined {
        variable = "uraniumRefined";
        displayName = "STR_Item_Uranium";
        weight = 1;
        buyPrice = -1;
        sellPrice = 1750; //Optional Price
        illegal = true;
        edible = -1;
        icon = "\Assets\Data\icons\ico_uraniumProcessed.paa";
    };

    //Drugs
    class heroin_unprocessed {
        variable = "heroinUnprocessed";
        displayName = "STR_Item_HeroinU";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "\Assets\Data\icons\ico_heroinUnprocessed.paa";
        processedItem = "heroin_processed";
    };

    class heroin_processed {
        variable = "heroinProcessed";
        displayName = "STR_Item_HeroinP";
        weight = 2;
        buyPrice = 2000;
        sellPrice = 1200;
        illegal = true;
        edible = -1;
        icon = "\Assets\Data\icons\ico_heroinProcessed.paa";
    };

    class cannabis {
        variable = "cannabis";
        displayName = "STR_Item_Cannabis";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "\Assets\Data\icons\ico_cannabis.paa";
        processedItem = "marijuana";
    };

    class marijuana {
        variable = "marijuana";
        displayName = "STR_Item_Marijuana";
        weight = 2;
        buyPrice = 1100;
        sellPrice = 600;
        illegal = true;
        edible = -1;
        icon = "\Assets\Data\icons\ico_marijuana.paa";
    };

    class cocaine_unprocessed {
        variable = "cocaineUnprocessed";
        displayName = "STR_Item_CocaineU";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "\Assets\Data\icons\ico_cocaineUnprocessed.paa";
        processedItem = "cocaine_processed";
    };

    class cocaine_processed {
        variable = "cocaineProcessed";
        displayName = "STR_Item_CocaineP";
        weight = 2;
        buyPrice = 1700;
        sellPrice = 900;
        illegal = true;
        edible = -1;
        icon = "\Assets\Data\icons\ico_cocaineProcessed.paa";
    };

    //Drink
    class redgull {
        variable = "redgull";
        displayName = "STR_Item_RedGull";
        weight = 1;
        buyPrice = 50;
        sellPrice = 20;
        illegal = false;
        edible = 50;
        icon = "\Assets\Data\icons\ico_redgull.paa";
    };

    class coffee {
        variable = "coffee";
        displayName = "STR_Item_Coffee";
        weight = 1;
        buyPrice = 5;
        sellPrice = 3;
        illegal = false;
        edible = 40;
        icon = "\Assets\Data\icons\ico_coffee.paa";
    };

    class waterBottle {
        variable = "waterBottle";
        displayName = "STR_Item_WaterBottle";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = 100;
        icon = "\Assets\Data\icons\ico_waterBottle.paa";
    };
	
	class cappuccino {
		variable = "cappuccino";
		displayName = "STR_Item_Cappuccino";
		weight = 1;
		buyPrice = 3;
		sellPrice = 1;
		illegal = false;
		edible = 50;
        icon = "\Assets\Data\icons\custom_icons\cappuccino.paa";
	};
		
	class coca {
		variable = "coca";
		displayName = "STR_Item_Coca";
		weight = 1;
		buyPrice = 3;
		sellPrice = 1;
		illegal = false;
		edible = 50;
        icon = "\Assets\Data\icons\custom_icons\coca.paa";
	};
		
	class pepsi {
		variable = "pepsi";
		displayName = "STR_Item_Pepsi";
		weight = 1;
		buyPrice = 3;
		sellPrice = 1;
		illegal = false;
		edible = 50;
        icon = "\Assets\Data\icons\custom_icons\pepsi.paa";
	};
		
	class orangina {
		variable = "orangina";
		displayName = "STR_Item_Orangina";
		weight = 1;
		buyPrice = 3;
		sellPrice = 1;
		illegal = false;
		edible = 50;
        icon = "\Assets\Data\icons\custom_icons\orangina.paa";
	};
		
	class fanta {
		variable = "fanta";
		displayName = "STR_Item_Fanta";
		weight = 1;
		buyPrice = 3;
		sellPrice = 1;
		illegal = false;
		edible = 50;
        icon = "\Assets\Data\icons\custom_icons\fanta.paa";
	};
		
	class glace {
		variable = "glace";
		displayName = "STR_Item_Glace";
		weight = 1;
		buyPrice = 3;
		sellPrice = 1;
		illegal = false;
		edible = 50;
        icon = "\Assets\Data\icons\custom_icons\glace.paa";
	};

    //Food
    class apple {
        variable = "apple";
        displayName = "STR_Item_Apple";
        weight = 1;
        buyPrice = 6;
        sellPrice = 3;
        illegal = false;
        edible = 10;
        icon = "\Assets\Data\icons\ico_apple.paa";
    };

    class peach {
        variable = "peach";
        displayName = "STR_Item_Peach";
        weight = 1;
        buyPrice = 8;
        sellPrice = 5;
        illegal = false;
        edible = 10;
        icon = "\Assets\Data\icons\ico_peach.paa";
    };

    class tbacon {
        variable = "tbacon";
        displayName = "STR_Item_TBacon";
        weight = 1;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = 40;
        icon = "\Assets\Data\icons\ico_tBacon.paa";
    };

    class donuts {
        variable = "donuts";
        displayName = "STR_Item_Donuts";
        weight = 1;
        buyPrice = 3;
        sellPrice = 0;
        illegal = false;
        edible = 30;
        icon = "\Assets\Data\icons\ico_donuts.paa";
    };
	
	class tacos {
		variable = "tacos";
		displayName = "STR_Item_Tacos";
		weight = 2;
		buyPrice = 8;
		sellPrice = 4;
		illegal = false;
		edible = 100;
        icon = "\Assets\Data\icons\custom_icons\tacos.paa";
	};
		
	class bucket {
		variable = "bucket";
		displayName = "STR_Item_Bucket";
		weight = 1;
		buyPrice = 5;
		sellPrice = 3;
		illegal = false;
		edible = 80;
        icon = "\Assets\Data\icons\custom_icons\buket2.paa";
	};
		
	class bucket2 {
		variable = "bucket2";
		displayName = "STR_Item_Bucket2";
		weight = 1;
		buyPrice = 5;
		sellPrice = 3;
		illegal = false;
		edible = 80;
        icon = "\Assets\Data\icons\custom_icons\buket.paa";
	};
		
				
	class hamburger {
		variable = "hamburger";
		displayName = "STR_Item_Hamburger";
		weight = 1;
		buyPrice = 5;
		sellPrice = 3;
		illegal = false;
		edible = 50;
        icon = "\Assets\Data\icons\custom_icons\burger.paa";
	};
		
	class frites {
		variable = "frites";
		displayName = "STR_Item_Frites";
		weight = 1;
		buyPrice = 3;
		sellPrice = 1;
		illegal = false;
		edible = 50;
        icon = "\Assets\Data\icons\custom_icons\frite.paa";
	};
		
	class salade {
		variable = "salade";
		displayName = "STR_Item_Salade";
		weight = 1;
		buyPrice = 3;
		sellPrice = 1;
		illegal = false;
		edible = 50;
        icon = "\Assets\Data\icons\custom_icons\salade.paa";
	};

    class rabbit_raw {
        variable = "rabbitRaw";
        displayName = "STR_Item_RabbitRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 95;
        illegal = false;
        edible = -1;
        icon = "\Assets\Data\icons\ico_rabbitRaw.paa";
    };

    class rabbit {
        variable = "rabbit";
        displayName = "STR_Item_Rabbit";
        weight = 1;
        buyPrice = 15;
        sellPrice = 11;
        illegal = false;
        edible = 20;
        icon = "\Assets\Data\icons\ico_rabbit.paa";
    };

    class salema_raw {
        variable = "salemaRaw";
        displayName = "STR_Item_SalemaRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 45;
        illegal = false;
        edible = -1;
        icon = "\Assets\Data\icons\ico_salemaRaw.paa";
    };

    class salema {
        variable = "salema";
        displayName = "STR_Item_Salema";
        weight = 1;
        buyPrice = 75;
        sellPrice = 55;
        illegal = false;
        edible = 30;
        icon = "\Assets\Data\icons\ico_cookedFish.paa";
    };

    class ornate_raw {
        variable = "ornateRaw";
        displayName = "STR_Item_OrnateRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 40;
        illegal = false;
        edible = -1;
        icon = "\Assets\Data\icons\ico_ornateRaw.paa";
    };

    class ornate {
        variable = "ornate";
        displayName = "STR_Item_Ornate";
        weight = 1;
        buyPrice = 175;
        sellPrice = 150;
        illegal = false;
        edible = 25;
        icon = "\Assets\Data\icons\ico_cookedFish.paa";
    };

    class mackerel_raw {
        variable = "mackerelRaw";
        displayName = "STR_Item_MackerelRaw";
        weight = 4;
        buyPrice = -1;
        sellPrice = 175;
        illegal = false;
        edible = -1;
        icon = "\Assets\Data\icons\ico_mackerelRaw.paa";
    };

    class mackerel {
        variable = "mackerel";
        displayName = "STR_Item_Mackerel";
        weight = 2;
        buyPrice = 250;
        sellPrice = 200;
        illegal = false;
        edible = 30;
        icon = "\Assets\Data\icons\ico_cookedFish.paa";
    };

    class tuna_raw {
        variable = "tunaRaw";
        displayName = "STR_Item_TunaRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 700;
        illegal = false;
        edible = -1;
        icon = "\Assets\Data\icons\ico_tunaRaw.paa";
    };

    class tuna {
        variable = "tuna";
        displayName = "STR_Item_Tuna";
        weight = 3;
        buyPrice = 1250;
        sellPrice = 1000;
        illegal = false;
        edible = 100;
        icon = "\Assets\Data\icons\ico_cookedFish.paa";
    };

    class mullet_raw {
        variable = "mulletRaw";
        displayName = "STR_Item_MulletRaw";
        weight = 4;
        buyPrice = -1;
        sellPrice = 250;
        illegal = false;
        edible = -1;
        icon = "\Assets\Data\icons\ico_mulletRaw.paa";
    };

    class mullet {
        variable = "mullet";
        displayName = "STR_Item_Mullet";
        weight = 2;
        buyPrice = 600;
        sellPrice = 400;
        illegal = false;
        edible = 80;
        icon = "\Assets\Data\icons\ico_cookedFish.paa";
    };

    class catshark_raw {
        variable = "catsharkRaw";
        displayName = "STR_Item_CatSharkRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 300;
        illegal = false;
        edible = -1;
        icon = "\Assets\Data\icons\ico_catsharkRaw.paa";
    };

    class catshark {
        variable = "catshark";
        displayName = "STR_Item_CatShark";
        weight = 3;
        buyPrice = 750;
        sellPrice = 500;
        illegal = false;
        edible = 100;
        icon = "\Assets\Data\icons\ico_cookedFish.paa";
    };

    class turtle_raw {
        variable = "turtleRaw";
        displayName = "STR_Item_TurtleRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 3000;
        illegal = true;
        edible = -1;
        icon = "\Assets\Data\icons\ico_turtleRaw.paa";
    };

    class turtle_soup {
        variable = "turtleSoup";
        displayName = "STR_Item_TurtleSoup";
        weight = 2;
        buyPrice = 1000;
        sellPrice = 750;
        illegal = false;
        edible = 100;
        icon = "\Assets\Data\icons\ico_turtleSoup.paa";
    };

    class hen_raw {
        variable = "henRaw";
        displayName = "STR_Item_HenRaw";
        weight = 1;
        buyPrice = -1;
        sellPrice = 65;
        illegal = false;
        edible = -1;
        icon = "\Assets\Data\icons\ico_wholeChickenRaw.paa";
    };

    class hen {
        variable = "hen";
        displayName = "STR_Item_Hen";
        weight = 1;
        buyPrice = 115;
        sellPrice = 85;
        illegal = false;
        edible = 65;
        icon = "\Assets\Data\icons\ico_wholeChicken.paa";
    };

    class rooster_raw {
        variable = "roosterRaw";
        displayName = "STR_Item_RoosterRaw";
        weight = 1;
        buyPrice = -1;
        sellPrice = 65;
        illegal = false;
        edible = -1;
        icon = "\Assets\Data\icons\ico_chickenDrumstickRaw.paa";
    };

    class rooster {
        variable = "rooster";
        displayName = "STR_Item_Rooster";
        weight = 115;
        buyPrice = 90;
        sellPrice = 85;
        illegal = false;
        edible = 45;
        icon = "\Assets\Data\icons\ico_chickenDrumstick.paa";
    };

    class sheep_raw {
        variable = "sheepRaw";
        displayName = "STR_Item_SheepRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 95;
        illegal = false;
        edible = -1;
        icon = "\Assets\Data\icons\ico_lambChopRaw.paa";
    };

    class sheep {
        variable = "sheep";
        displayName = "STR_Item_Sheep";
        weight = 2;
        buyPrice = 155;
        sellPrice = 115;
        illegal = false;
        edible = 100;
        icon = "\Assets\Data\icons\ico_lambChop.paa";
    };

    class goat_raw {
        variable = "goatRaw";
        displayName = "STR_Item_GoatRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 115;
        illegal = false;
        edible = -1;
        icon = "\Assets\Data\icons\ico_muttonLegRaw.paa";
    };

    class goat {
        variable = "goat";
        displayName = "STR_Item_Goat";
        weight = 2;
        buyPrice = 175;
        sellPrice = 135;
        illegal = false;
        edible = 100;
        icon = "\Assets\Data\icons\ico_muttonLeg.paa";
    };

    class Alcootest {
        variable = "Alcootest";
        displayName = "STR_Item_Alcootest";
        weight = 2;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        icon = "";
    };

    class Test_drugs {
        variable = "Test_drugs";
        displayName = "STR_Item_Test_drugs";
        weight = 2;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        icon = "";
    };


};
