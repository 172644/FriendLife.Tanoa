/*
*    FORMAT:
*        STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*            
*
*    ARRAY FORMAT:
*        0: STRING (Classname): Item Classname
*        1: STRING (Nickname): Nickname that will appear purely in the shop dialog
*        2: SCALAR (Buy price)
*        3: SCALAR (Sell price): To disable selling, this should be -1
*        4: STRING (Conditions): Same as above conditions string
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        conditions = "license_civ_gun";
        items[] = {
            { "hgun_Rook40_F", "", 6500, 3250, "" },
            { "hgun_Pistol_01_F", "", 7000, 3500, "" }, //Apex DLC
            { "hgun_Pistol_heavy_02_F", "", 9850, 4925, "" },
            { "hgun_ACPC2_F", "", 11500, 5750, "" },
            { "SMG_05_F", "", 18000, 9000, "" }, //Apex DLC
            { "hgun_PDW2000_F", "", 20000, 10000, "" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 125, 60, "" },
            { "6Rnd_45ACP_Cylinder", "", 150, 75, "" },
            { "9Rnd_45ACP_Mag", "", 200, 100, "" },
            { "30Rnd_9x21_Mag", "", 250, 125, "" },
            { "30Rnd_9x21_Mag_SMG_02", "", 250, 125, "" }, //Apex DLC
            { "10Rnd_9x21_Mag", "", 250, 125, "" } //Apex DLC
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 2500, 1250, "" }
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = {
            { "arifle_TRG20_F", "", 25000, 12500, "" },
            { "arifle_Katiba_F", "", 30000, 15000, "" },
            { "srifle_DMR_01_F", "", 50000, 25000, "" },
            { "arifle_SDAR_F", "", 20000, 10000, "" },
            { "arifle_AK12_F", "", 22000, 11000, "" }, //Apex DLC
            { "arifle_AKS_F", "", 22000, 11000, "" }, //Apex DLC
            { "arifle_AKM_F", "", 22000, 11000, "" }, //Apex DLC
            { "arifle_ARX_blk_F", "", 22000, 11000, "" }, //Apex DLC
            { "arifle_SPAR_01_blk_F", "", 33000, 16500, "" }, //Apex DLC
            { "arifle_CTAR_blk_F", "", 30000, 15000, "" } //Apex DLC
        };
        mags[] = {
            { "30Rnd_556x45_Stanag", "", 300, 150, "" },
            { "30Rnd_762x39_Mag_F", "", 300, 150, "" }, //Apex DLC
            { "30Rnd_545x39_Mag_F", "", 300, 150, "" }, //Apex DLC
            { "30Rnd_65x39_caseless_green", "", 275, 140, "" },
            { "10Rnd_762x54_Mag", "", 500, 250, "" },
            { "20Rnd_556x45_UW_mag", "", 125, 60, "" },
            { "30Rnd_580x42_Mag_F", "", 125, 60, "" } //Apex DLC
        };
        accs[] = {
            { "optic_ACO_grn", "", 3500, 1750, "" },
            { "optic_Holosight", "", 3600, 1800, "" },
            { "optic_Hamr", "", 7500, 3750, "" },
            { "acc_flashlight", "", 1000, 500, "" }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        conditions = "";
        items[] = {
            { "hgun_Rook40_F", "", 1500, 750, "" },
            { "hgun_Pistol_heavy_02_F", "", 2500, 1250, "" },
            { "hgun_ACPC2_F", "", 4500, 2250, "" },
            { "hgun_PDW2000_F", "", 9500, 4750, "" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 125, 60, "" },
            { "6Rnd_45ACP_Cylinder", "", 150, 75, "" },
            { "9Rnd_45ACP_Mag", "", 200, 100, "" },
            { "30Rnd_9x21_Mag", "", 250, 125, "" }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 950, 475, "" }
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        conditions = "";
        items[] = {
            { "ACE_EarPlugs", "", 50, 25, "" },
			{ "Binocular", "", 150, 75, "" },
            { "ItemGPS", "", 100, 50, "" },
            { "ItemMap", "", 50, 25, "" },
            { "ItemCompass", "", 50, 25, "" },
            { "ItemWatch", "", 50, 25, "" },
            { "ACE_fieldDressing", "", 25, 15, "" },
            { "NVGoggles", "", 2000, 1000, "" },
            { "axe", "", 300, 150, "" },
            { "pickaxe", "", 300, 150, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        conditions = "";
        items[] = {
            { "ACE_EarPlugs", "", 50, 25, "" },
			{ "Binocular", "", 150, 75, "" },
            { "ItemGPS", "", 100, 50, "" },
            { "ItemMap", "", 50, 25, "" },
            { "ItemCompass", "", 50, 25, "" },
            { "ItemWatch", "", 50, 25, "" },
            { "ACE_fieldDressing", "", 25, 15, "" },
            { "NVGoggles", "", 2000, 1000, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "Altis Cop Shop";
        side = "cop";
        conditions = "";
        items[] = {
            { "ACE_EarPlugs", "", 0, 0, "" },
			{ "Binocular", "", 0, 0, "" },
            { "ItemGPS", "", 0, 0, "" },
			{ "ItemCompass", "", 0, 0, "" },
            { "FirstAidKit", "", 0, 0, "" },
            { "NVGogglesB_blk_F", "", 0, 0, "" },
			{ "ItemWatch", "", 0, 0, "" },
			{ "ItemMap", "", 0, 0, "" },
			{ "BT01_F", $STR_W_items_StunPistol, 0, 0, "" },
            { "HandGrenade_Stone", $STR_W_items_Flashbang, 0, 0, "" },
            { "arifle_SDAR_F", $STR_W_items_TaserRifle, 0, 0, "" },
            { "hgun_Rook40_F", "", 0, 0, "call life_coplevel >= 1" },
            { "SMG_05_F", "", 0, 0, "call life_coplevel >= 1" },
            { "arifle_SPAR_01_blk_F", "", 0, 0, "call life_coplevel >= 2" },
            { "SMG_02_F", "", 0, 0, "call life_coplevel >= 2" },
            { "arifle_Katiba_F", "", 0, 0, "call life_coplevel >= 3" },
            { "srifle_LRR_F", "", 0, 0, "call life_coplevel >= 3" }
        };
        mags[] = {
			{ "Taser_mag", "", 0, 0, "" },
            { "20Rnd_556x45_UW_mag", $STR_W_mags_TaserRifle, 0, 0, "" },
            { "30Rnd_9x21_Mag", "", 0, 0, "call life_coplevel >= 1" },
            { "30Rnd_9x21_Mag_SMG_02", "", 0, 0, "call life_coplevel >= 1" },
            { "30Rnd_556x45_Stanag", "", 0, 0, "call life_coplevel >= 2" },
            { "30Rnd_65x39_caseless_green", "", 0, 0, "call life_coplevel >= 3" },
            { "7Rnd_408_Mag", "", 0, 0, "call life_coplevel >= 3" }
        };
        accs[] = {
            { "optic_Arco_AK_blk_F", "", 0, 0, "" },
            { "ACE_optic_LRPS_PIP", "", 0, 0, "" },
            { "optic_Nightstalker", "", 0, 0, "" },
            { "optic_Yorris", "", 0, 0, "" },
            { "optic_aco", "", 0, 0, "" }
        };
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        conditions = "";
        items[] = {
            { "ACE_EarPlugs", "", 0, 0, "" },
			{ "ItemGPS", "", 0, 0, "" },
			{ "ItemCompass", "", 0, 0, "" },
			{ "ItemMap", "", 0, 0, "" },
            { "Binocular", "", 0, 0, "" },
            { "NVGoggles", "", 0, 0, "" },
			{ "ItemWatch", "", 0, 0, "" },
			{ "FirstAidKit", "", 0, 0, "" },
			{ "defibinvch", "", 0, 0, "" },
			{ "ACE_morphine", "", 0, 0, "" },
			{ "ACE_adenosine", "", 0, 0, "" },
			{ "ACE_epinephrine", "", 0, 0, "" },
			{ "ACE_fieldDressing", "", 0, 0, "" },
			{ "ACE_elasticBandage", "", 0, 0, "" },
			{ "ACE_quikclot", "", 0, 0, "" },
			{ "ACE_salineIV_250", "", 0, 0, "" },
			{ "ACE_salineIV_500", "", 0, 0, "" },
			{ "ACE_salineIV", "", 0, 0, "" },
			{ "ACE_plasmaIV_250", "", 0, 0, "" },
			{ "ACE_plasmaIV_500", "", 0, 0, "" },
			{ "ACE_plasmaIV", "", 0, 0, "" },
			{ "ACE_bloodIV_250", "", 0, 0, "" },
			{ "ACE_bloodIV_500", "", 0, 0, "" },
			{ "ACE_bloodIV", "", 0, 0, "" },
			{ "ACE_splint", "", 0, 0, "" },
			{ "ACE_bodyBag", "", 0, 0, "" }
        };
        mags[] = {};
        accs[] = {};
    };
};
