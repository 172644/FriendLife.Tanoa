class CfgGather {
    class Resources {
        class apple {
            amount = 5;
            zones[] = { "RES_apple_1", "RES_apple_2", "RES_apple_3", "RES_apple_4" };
            item = "";
            zoneSize = 30;
        };

        class peach {
            amount = 5;
            zones[] = { "RES_peaches_1", "RES_peaches_2", "RES_peaches_3", "RES_peaches_4" };
            item = "";
            zoneSize = 30;
        };

        class heroin_unprocessed {
            amount = 3;
            zones[] = { "DRO_heroin_1" };
            item = "";
            zoneSize = 30;
        };

        class cocaine_unprocessed {
            amount = 3;
            zones[] = { "DRO_cocaine_1" };
            item = "";
            zoneSize = 30;
        };

        class cannabis {
            amount = 3;
            zones[] = { "DRO_weed_1" };
            item = "";
            zoneSize = 30;
        };
    };

/*
This block can be set using percent,if you want players to mine only one resource ,just leave it as it is.
Example:
        class copper_unrefined
    {
            amount = 2;
        zones[] = { "copper_mine" };
        item = "pickaxe";
        mined[] = { "copper_unrefined" };
This will make players mine only copper_unrefined
Now let's go deeper
Example 2:
        class copper_unrefined
    {
            amount = 2;
        zones[] = { "copper_mine" };
        item = "pickaxe";
        mined[] = { {"copper_unrefined",0,25},{"iron_unrefined",25,95},{"diamond_uncut",95,100} };
    };
    This will give :
    25(±1)% to copper_unrefined;
    70(±1)% to iron_unrefined;
    5%(±1)% to diamond_uncut;

                                                         ! Watch Out !
 If percents are used,you MUST put more than 1 resource in the mined parameter
 mined[] = { {"copper_unrefined",0,25} }; NOT OK (But the script will work)
 mined[] = { {"copper_unrefined",0,45 },{"iron_unrefined",45} };  NOT OK (The script won't work )
 mined[] = { {"copper_unrefined",0,45},{"copper_unrefined",80,100} }; NOT OK
 mined[] = { "copper_unrefined" }; OK
 mined[] = { {"copper_unrefined",0,35} , { "iron_unrefined" ,35,100 } }; OK
*/

    class Minerals {
        class copper_unrefined {
            amount = 2;
            zones[] = { "RES_marker_cuivre" };
            item = "pickaxe";
            mined[] = {"copper_unrefined"};
            zoneSize = 30;
        };

        class iron_unrefined {
            amount = 2;
            zones[] = { "RES_marker_iron" };
            item = "pickaxe";
            mined[] = { "iron_unrefined" };
            zoneSize = 30;
        };

        class salt_unrefined {
            amount = 2;
            zones[] = { "RES_salt_mine" };
            item = "pickaxe";
            mined[] = { "salt_unrefined" };
            zoneSize = 30;
        };

        class sand {
            amount = 2;
            zones[] = { "RES_sand_mine" };
            item = "pickaxe";
            mined[] = { "sand" };
            zoneSize = 30;
        };

        class diamond_uncut {
            amount = 2;
            zones[] = { "RES_marker_diamant" };
            item = "pickaxe";
            mined[] = { "diamond_uncut" };
            zoneSize = 30;
        };

        class rock {
            amount = 2;
            zones[] = { "RES_marker_rock" };
            item = "pickaxe";
            mined[] = { "rock" };
            zoneSize = 30;
        };

        class oil_unprocessed {
            amount = 2;
            zones[] = { "RES_oil_field_1" };
            item = "pickaxe";
            mined[] = { "oil_unprocessed" };
            zoneSize = 30;
        };
		
		class uranium_unrefined {
            amount = 15;
            zones[] = { "uranium_mine" };
            item = "pickaxe";
            mined[] = { "uranium_unrefined" };
            zoneSize = 30;
        };
    };
};