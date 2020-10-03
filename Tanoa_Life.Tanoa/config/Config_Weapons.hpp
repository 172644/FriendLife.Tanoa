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
            { "hgun_Rook40_F", "", 1500, 750, "" },
            { "hgun_Pistol_01_F", "", 3000, 1500, "" }, //Apex DLC
            { "hgun_Pistol_heavy_02_F", "", 5850, 2925, "" },
            { "hgun_ACPC2_F", "", 11500, 5750, "" },
            { "SMG_05_F", "", 8000, 4000, "" }, //Apex DLC
            { "hgun_PDW2000_F", "", 10000, 5000, "" }
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
            { "optic_ACO_grn_smg", "", 500, 250, "" }
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = {
			{ "ACE_CableTie", "", 100, 0, "" },			
            { "srifle_LRR_LRPS_F", "", 20000, 10000, "" },
			{ "arifle_Katiba_ACO_pointer_F", "", 5000, 2500, "" },
			{ "SMG_02_ARCO_pointg_F", "", 4000, 2000, "" },
			{ "arifle_SPAR_01_blk_ERCO_Pointer_F", "", 6500, 3250, "" },
			{ "SMG_05_F", "", 4000, 2000, "" },
			{ "hgun_Rook40_snds_F", "", 1400, 700, "" },
			{ "optic_Arco_AK_blk_F", "", 200, 100, "" },
            { "ACE_optic_LRPS_PIP", "", 200, 100, "" },
            { "optic_Nightstalker", "", 200, 100, "" },
            { "optic_Yorris", "", 200, 100, "" },
			{ "acc_flashlight", "", 200, 100, "" },
            { "optic_aco", "", 200, 100, "" }
        };
        mags[] = {
            { "30Rnd_9x21_Mag", "", 100, 50, "" },
            { "30Rnd_9x21_Mag_SMG_02", "", 100, 50, "" },
            { "30Rnd_556x45_Stanag", "", 100, 50, "" },
            { "30Rnd_65x39_caseless_green", "", 100, 50, "" },
            { "7Rnd_408_Mag", "", 100, 50, "" }
        };
        accs[] = {
            { "optic_ERCO_blk_F", "", 100, 50, "" },
            { "optic_Arco", "", 100, 50, "" },
            { "acc_pointer_IR", "", 100, 50, "" },
            { "optic_ACO_grn", "", 100, 50, "" }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        conditions = "";
        items[] = {
            { "hgun_Rook40_F", "", 6500, 3250, "" },
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
            { "ACE_EarPlugs", "", 50, -1, "" },
			{ "Binocular", "", 100, -1, "" },
            { "ItemGPS", "", 100, -1, "" },
            { "ItemMap", "", 50, -1, "" },
            { "ItemCompass", "", 50, -1 "" },
            { "ItemWatch", "", 50, -1, "" },
            { "ACE_fieldDressing", "", 25, -1, "" },
			{ "ToolKit", "", 350, -1, "" },
			{ "tf_anprc152", "", 500, -1, "" },
            { "NVGoggles", "", 2000, -1, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        conditions = "";
        items[] = {
            { "ACE_EarPlugs", "", 50, -1, "" },
			{ "Binocular", "", 150, -1, "" },
            { "ItemGPS", "", 100, -1, "" },
            { "ItemMap", "", 50, -1, "" },
            { "ItemCompass", "", 50, -1, "" },
            { "ItemWatch", "", 50, -1, "" },
			{ "tf_anprc152", "", 500, -1, "" },
            { "ACE_fieldDressing", "", 25, -1, "" },
            { "NVGoggles", "", 2000, -1, "" },
			{ "ToolKit", "", 350, -1, "" },
			{ "ACE_Wheel", "", 200, -1, "" }
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
            { "srifle_LRR_LRPS_F", "", 10000, 10000, "call life_coplevel >= 10" },
			{ "arifle_Katiba_ACO_pointer_F", "", 2500, 2500, "call life_coplevel >= 5" },
			{ "SMG_02_ARCO_pointg_F", "", 1800, 1800, "call life_coplevel >= 4" },
			{ "arifle_SPAR_01_blk_ERCO_Pointer_F", "", 3100, 3100, "call life_coplevel >= 6" },
			{ "SMG_05_F", "", 2000, 2000, "call life_coplevel >= 2" },
			{ "hgun_Rook40_snds_F", "", 700, 7000, "call life_coplevel >= 1" },
			{ "CSW_M26C", $STR_W_items_StunPistol, 500, 500, "call life_coplevel >= 1" },
			{ "CSW_FN57_Ballistic_Shield", "", 500, 500, "call life_coplevel >= 5" },
			{ "CSW_FN57_Barska", "", 700, 700, "call life_coplevel >= 5" },
			{ "CSW_20Rnd_57x28_SS190", "", 50, 50, "call life_coplevel >= 5" },
			{ "CSW_FN57_Shield", "", 500, 500, "call life_coplevel >= 5" },
			{ "optic_Arco_AK_blk_F", "", 100, 100, "" },
            { "ACE_optic_LRPS_PIP", "", 100, 100, "" },
            { "optic_Nightstalker", "", 100, 100, "" },
            { "optic_Yorris", "", 100, 100, "" },
			{ "acc_flashlight", "", 100, 100, "" },
            { "optic_aco", "", 100, 100, "" }
        };
        mags[] = {
			{ "CSW_Taser_Probe_Mag", "", 50, 50, "call life_coplevel >= 1" },
            { "30Rnd_9x21_Mag", "", 50, 50, "call life_coplevel >= 1" },
            { "30Rnd_9x21_Mag_SMG_02", "", 50, 50, "call life_coplevel >= 2" },
            { "30Rnd_556x45_Stanag", "", 50, 50, "call life_coplevel >= 6" },
            { "30Rnd_65x39_caseless_green", "", 50, 50, "call life_coplevel >= 5" },
            { "7Rnd_408_Mag", "", 50, 50, "call life_coplevel >= 10" }
        };
        accs[] = {
            /*{ "muzzle_snds_L", "", 0, 0, "" },
            { "optic_arco_ak_blk_f", "", 0, 0, "" }, // PAS UTILISÉ
            { "ace_optic_lrps_pip", "", 0, 0, "" }, // PAS UTILISÉ
            { "optic_nightstalker", "", 0, 0, "" },
            { "optic_yorris", "", 0, 0, "" },
			{ "acc_flashlight", "", 0, 0, "" },
            { "optic_aco", "", 0, 0, "" }*/
			
			{ "CSW_FN57_Barska", "", 100, 100, "call life_coplevel >= 5" },
			{ "CSW_20Rnd_57x28_SS190", "", 100, 100, "call life_coplevel >= 5" },
			{ "CSW_FN57_Shield", "", 100, 100, "call life_coplevel >= 5" },
            { "optic_ERCO_blk_F", "", 100, 100, "" },
            { "optic_Arco", "", 100, 100, "" },
            { "acc_pointer_IR", "", 100, 100, "" },
            { "optic_ACO_grn", "", 100, 100, "" }
        };
    };
	
	class Cop_store {
        name = "Altis Cop Store";
        side = "cop";
        conditions = "";
        items[] = {
			{ "ACE_key_west", "", 0, 0, "" },
            { "ACE_EarPlugs", "", 50, 500, "" },
			{ "Binocular", "", 100, 100, "" },
            { "ItemGPS", "", 100, 100, "" },
            { "ItemMap", "", 50, 50, "" },
            { "ItemCompass", "", 50, 50, "" },
			{ "tf_anprc152", "", 50, 50, "" },
			{ "NVGogglesB_blk_F", "", 2000, 2000, "" },
            { "ItemWatch", "", 50, 50, "" },
			{ "ToolKit", "", 300, 300, "" },
			{ "FirstAidKit", "", 100, 0, "" },
			{ "defibinvch", "", 100, 0, "" },
			{ "ACE_CableTie", "", 30, 0, "" },
			{ "ACE_rope36", "", 50, 50, "" },
			{ "ACE_SpottingScopeObject", "", 500, 500, "call life_coplevel >= 4" },
			{ "ACE_TripodObject", "", 500, 500, "call life_coplevel >= 4" },
			{ "HandGrenade_Stone", $STR_W_items_Flashbang, 20, 20, "call life_coplevel >= 3" }
        };
        mags[] = {};
        accs[] = {};
    };
	
	//Adac shop	
	class adac_store {
        name = "Altis Dir Store";
        side = "civ";
        conditions = "license_adac_DIR";
        items[] = {
			{ "ACE_key_east", "", 0, 0, "" },
			{ "triangleinvch", "", 20, -1, "" },
            { "ACE_EarPlugs", "", 50, -1, "" },
			{ "Binocular", "", 100, -1, "" },
            { "ItemGPS", "", 100, -1, "" },
            { "ItemMap", "", 50, -1, "" },
            { "ItemCompass", "", 50, -1 "" },
            { "ItemWatch", "", 50, -1, "" },
            { "ACE_fieldDressing", "", 25, -1, "" },
			{ "ToolKit", "", 250, -1, "" },
			{ "tf_anprc152", "", 500, -1, "" },
            { "NVGoggles", "", 2000, -1, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        conditions = "";
        items[] = {
			{ "ACE_key_inp", "", 0, 0, "" },
            { "ACE_EarPlugs", "", 50, 0, "" },
			{ "ItemGPS", "", 100, 0, "" },
			{ "ItemCompass", "", 50, 0, "" },
			{ "ItemMap", "", 50, 0, "" },
            { "Binocular", "", 100, 0, "" },
            { "NVGoggles", "", 2000, 0, "" },
			{ "tf_anprc152", "", 500, 250, "" },
			{ "ItemWatch", "", 50, 0, "" },
			{ "ToolKit", "", 350, -1, "" },
			{ "FirstAidKit", "", 100, 0, "" },
			{ "defibinvch", "", 100, 0, "" },
			{ "ACE_morphine", "", 20, 0, "" },
			{ "ACE_adenosine", "", 20, 0, "" },
			{ "ACE_epinephrine", "", 20, 0, "" },
			{ "ACE_fieldDressing", "", 10, 0, "" },
			{ "ACE_elasticBandage", "", 10, 0, "" },
			{ "ACE_quikclot", "", 10, 0, "" },
			{ "ACE_salineIV_250", "", 20, 0, "" },
			{ "ACE_salineIV_500", "", 30, 0, "" },
			{ "ACE_salineIV", "", 40, 0, "" },
			{ "ACE_plasmaIV_250", "", 20, 0, "" },
			{ "ACE_plasmaIV_500", "", 30, 0, "" },
			{ "ACE_plasmaIV", "", 0, 40, "" },
			{ "ACE_bloodIV_250", "", 20, 0, "" },
			{ "ACE_bloodIV_500", "", 30, 0, "" },
			{ "ACE_bloodIV", "", 40, 0, "" },
			{ "collier_cv", "", 50, 0, "" },
			{ "ACE_splint", "", 50, 0, "" },
			{ "ACE_bodyBag", "", 50, 0, "" }
        };
        mags[] = {};
        accs[] = {};
    };
};
