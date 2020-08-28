class CarShops {
    /*
    *    ARRAY FORMAT:
    *        0: STRING (Classname)
    *        1: STRING (Condition)
    *    FORMAT:
    *        STRING (Conditions) - Must return boolean :
    *            String can contain any amount of conditions, aslong as the entire
    *            string returns a boolean. This allows you to check any levels, licenses etc,
    *            in any combination. For example:
    *                "call life_coplevel && license_civ_someLicense"
    *            This will also let you call any other function.
    *
    *   BLUFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_WEST
    *   OPFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EAST
    *   Independent Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_GUER
    *   Civilian Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_CIV
    */
    class civ_car {
        side = "civ";
        conditions = "";
        vehicles[] = {
            /*{ "B_Quadbike_01_F", "" },
            { "C_Hatchback_01_F", "" },
            { "C_Offroad_01_F", "" },
            { "C_SUV_01_F", "" },
            { "C_Hatchback_01_sport_F", "" },
            { "C_Van_01_transport_F", "" },
            { "C_Offroad_02_unarmed_F", "" }, //Apex DLC*/
			
            { "ch206_civ", "" },
            { "chMito", "" },
            { "chsandero", "" },
            { "chGolfIV", "" },
            { "Zoech", "" },
            { "chds3", "" },
            { "chduster14_civ", "" }
        };
    };

    class civ_sport {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "chClioIVRS", "" },
            { "d3s_skyline_02", "" },
            { "d3s_giulia_quad_16", "" },
            { "d3s_RS6_20", "" },
            { "d3s_stelvio_19_MNSTR", "" },
            { "d3s_dbs_19", "" },
            { "d3s_rapide_10", "" },
            { "d3s_continentalGT_18", "" },
            { "d3s_G12_20_745", "" },
            { "d3s_chiron_18", "" },
            { "d3s_camaro_zl1_17", "" },
            { "d3s_CorvetteZR1_19", "" },
            { "d3s_challenger_15", "" },
            { "d3s_599GTO_12", "" },
            { "chf_california", "" },
            { "d3s_F8Tributo_20", "" },
            { "d3s_xesv_17", "" },
            { "d3s_veneno_13", "" },
            { "d3s_amazing_a45_16_EX", "" },
            { "d3s_911gt3rs_18", "" },
            { "d3s_wrx_17_FnF8", "" },
            { "d3s_teslaS_16_Mark_42", "" },
            { "AlpineArdos_reflet", "" }
        };
    };

    class civ_oldcar {
        side = "civ";
        conditions = "";
        vehicles[] = {
        	{"4lf6_civ",""},
        	{"4l_civ",""},
        	{"chBeetle",""},
        	{"chMehari",""},
        	{"ch2CV",""},
        	{"chRS2",""},
        	{"j9ch",""},
        	{"chaustin",""},
        	{"chr12",""},
        	{"chds_21",""},
        	{"d3s_willys",""},
        	{"chGolfI",""},
        	{"d3s_javelin_72",""},
        	{"chdauphine",""},
        	{"type_hch",""},
        	{"d3s_skylark_52",""},
        	{"d3s_model_a",""},
        	{"chKarmannGhia",""},
        	{"chT1",""},
        	{"d3s_hornet_53",""},
        	{"ch504",""},
        	{"chr8_2",""},
        	{"V12_AE86",""},
        	{"d3s_coronet_70",""},
        	{"d3s_roadrunner_71_GTX",""},
        	{"d3s_eldorado_68",""},
        	{"chR5Turbo",""},
        	{"d3s_challenger_70",""},
        	{"d3s_e38_98",""},
        	{"cha110",""},
        	{"d3s_300SL_55",""},
        	{"ch250_GTO",""}
        };
    };

    class civ_4x4suv {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "C_Offroad_02_unarmed_F", "" },
            { "chrr_svr", "" },
            { "cWrangler_1", "" },
            { "d3s_cherokee_18_TRCK", "" },
            { "chTouareg", "" },
            { "d3s_raptor_17", "" },
            { "chH1_ST", "" },
            { "d3s_g65amg_Mansory", "" },
            { "d3s_f85_15_m", "" },
            { "d3s_dbx_19", "" },
            { "d3s_Q7_15", "" },
            { "d3s_bentayga_18", "" },
            { "d3s_G07_x30d_19", "" },
            { "d3s_fpace_17_s", "" }
        };
    };

    class civ_moto {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "1200RT_ch", "" },
            { "S1000RR_ch", "" },
            { "fatboy_ch", "" },
            { "FJR1300_ch", "" },
            { "xj6_ch", "" },
            { "r125_ch", "" },
            { "d3s_KTM_1290_Super_Duke", "" }
        };
    };

    class civ_familly {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "Renault_Espace_civ", "" },
            { "d3s_juke_15", "" },
            { "chmegane_4_estate_civ", "" },
            { "mondeoswch_civ", "" },
            { "Scenic3_civ", "" },
            { "chfocussw3p2", "" },
            { "partner2_civ", "" },
            { "d3s_vklasse_17", "" }
        };
    };

    class civ_berline {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "Renault_ClioIV_civ", "" },
            { "chgolf7_civ", "" },
            { "chds4", "" },
            { "chds3", "" },
            { "d3s_giulietta_16", "" },
            { "chNouvelle_Coccinelle", "" },
            { "chBrera", "" },
            { "chLeaf", "" },
            { "d3s_300C_12", "" },
            { "ch508", "" },
            { "chds5", "" },
            { "d3s_civic_17", "" }
        };
    };

    class civ_DIR {
        side = "civ";
        conditions = "License_civ_DIR";
        vehicles[] = {
            { "chbalayeuse", "" },
            { "chchariot", "" },
            { "chGrue_Mobile", "" },
            { "KangooII1_DIR", "" },
            { "Master3_DIR", "" },
            { "d3s_W2100", "" },
            { "d3s_baumaschinen", "" },
            { "d3s_W2100", "" },
            { "ClioIV_DIR", "" },
            { "DIR_peugeot_expert", "" },
            { "DIR_master3_v2", "" },
            { "Trafic3_DIR", "" },
            { "DIR_benne_orange", "" },
            { "DIR_gors_benne", "" },
            { "DIR_renault_saleuse", "" }
        };
    };

    class kart_shop {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "C_Kart_01_Blu_F", "" },
            { "C_Kart_01_Fuel_F", "" },
            { "C_Kart_01_Red_F", "" },
            { "C_Kart_01_Vrana_F", "" }
        };
    }; 

    class civ_utility {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "berlingo2_cciv", "" },
            { "kangooII1_cciv", "" },
            { "chexpert3_cciv", "" },
            { "master3p2_civ_car", "" },
            { "ch_sprinter_civ", "" }
        };
    };


    class civ_truck {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "midlum_p2", "" },
            { "d3s_scania_16_30", "" },
            { "Renault_Range_T", "" },
            { "d3s_actros_14", "" }
        };
    };

    class civ_air {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "C_Plane_Civil_01_F", "" },
            { "do228_ch_Blanc", "" },
            {"C_Heli_Light_01_civil_F",""},
            {"I_C_Heli_Light_01_civil_F",""}
        };
    };

    class civ_ship {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "C_Scooter_Transport_01_F", "" },
            { "I_C_Boat_Transport_02_F", "" },
            { "C_Boat_Civil_01_F", "" },
            { "C_Grady_White_01_F", "" },
            { "C_Grady_White_01_F", "" },
            { "B_SDV_01_F", "" } 
        };
    };

    class civ_craft {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "fgtz3", "" },
            { "V12_SKYLINEFNF", "" },
            { "V12_SUPRAFNF", "" },
            { "V12_ECLIPSEFNF1", "" },
            { "chBeetle_53", "" },
            { "406_taxi", "" },
            {"V12_JETTA",""}
        };
    };

    class civ_DP {
        side = "civ";
        conditions = "License_civ_DP";
        vehicles[] = {
            { "chTransport_L", "" },
            { "RealMan_DepanPL", "" },
            { "RealMan_DepanVL", "" },
        };
    };

    class reb_car {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "d3s_g800_17", "" },
            { "d3s_tahoe_EX", "" },
            { "d3s_kuruma_gtaV", "" },
            { "d3s_w212s_13_EX", "" },
            { "d3s_svr_17_007", "" },
            { "d3s_maz_7429", "" },
            { "d3s_SRmh_9500_cov", "" }
        };
    };

    class reb_air {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "I_Heli_light_03_unarmed_F", "" },
            { "O_Heli_Light_02_unarmed_F", "" },
            { "EC635_Unarmed", "" }
        };
    };

    class med_shop {
        side = "med";
        conditions = "";
        vehicles[] = {
            /*{ "C_Offroad_01_F", "" },
            { "I_Truck_02_medical_F", "" },
            { "O_Truck_03_medical_F", "" },
            { "B_Truck_01_medical_F", "" }*/
            { "brancardch", "" },
            { "devidoirch", "" },
            { "devidoirchvsr", "" },
            { "berlingo2_vlcg", "" },
            { "chduster14_vlhr", "" },
            { "EPA", "" },
            { "chepa_Mercedes_Atego_1530", "" },
            { "fcch", "" },
            { "chfmogp", "" },
            { "VSR", "" },
            { "chVSAV_Sprinter", "" },
            { "chvsavar_sprinter", "" },
            { "PMA", "" },
            { "chps5g", "" },
            { "VPC", "" }
        };
    };

    class med_air_hs {
        side = "med";
        conditions = "";
        vehicles[] = {
            { "EC135SClu", "" }
        };
    };

    class medic_ship {
        side = "cop";
        conditions = "";
        vehicles[] = {
            { "C_rescue_01_F", "" }
        };
    };

    class cop_car {
        side = "cop";
        conditions = "";
        vehicles[] = {
            /*{ "C_Offroad_01_F", "" },
            { "C_SUV_01_F", "" },
            { "C_Hatchback_01_sport_F", "call life_coplevel >= 1" },
            { "B_MRAP_01_F", "call life_coplevel >= 2" },
            { "B_MRAP_01_hmg_F", "call life_coplevel >= 3" },//*/
			
            { "1200RT_gn_ch", "call life_coplevel >= 1" },
            { "chduster14_gn", "call life_coplevel >= 1" },
            { "chfcrs", "call life_coplevel >= 1" },
            { "ranger17ch_GN", "call life_coplevel >= 1" },
            { "chExpert3_gn", "call life_coplevel >= 1" },
            { "megane_4_estate_gn", "call life_coplevel >= 1" },
            { "SubaruWRXgn", "call life_coplevel >= 1" },
            { "ClioV_GN", "call life_coplevel >= 1" },
            { "mondeovch_gn_bana", "call life_coplevel >= 1" },
            { "focusch3_gn_bana", "call life_coplevel >= 1" },
            { "mondeoswch_gn_bana", "call life_coplevel >= 1" },
            { "cmax_gn_bana", "call life_coplevel >= 1" },
            { "chrr_svr_gn_bana", "call life_coplevel >= 1" },
            { "chglof7_gn_bana", "call life_coplevel >= 1" }
        };

    class cop_gouvernement {
        side = "cop";
        conditions = "";
        vehicles[] = {
            { "d3s_amazing_f10_12_UNM_GOV1", "" },
            { "d3s_ctsv_16_unm", "" },
            { "chTown_Car", "" },
            { "d3s_vv222_18", "" },
            { "d3s_s600_14", "" },
            { "d3s_dawn_16_III", "" },
            { "Renault_ClioIV_civ_ae", "" }
        };
    };

    };

    class cop_air {
        side = "cop";
        conditions = "call life_coplevel >= 3";
        vehicles[] = {
            { "EC135GNlu", "call life_coplevel >= 4" }
        };
    };

    class cop_ship {
        side = "cop";
        conditions = "";
        vehicles[] = {
            { "C_Test_Boat_01_F", "" }
        };
    };
};

class LifeCfgVehicles {
    /*
    *    Vehicle Configs (Contains textures and other stuff)
    *
    *    "price" is the price before any multipliers set in Master_Config are applied.
    *
    *    Default Multiplier Values & Calculations:
    *       Civilian [Purchase, Sell]: [1.0, 0.5]
    *       Cop [Purchase, Sell]: [0.5, 0.5]
    *       Medic [Purchase, Sell]: [0.75, 0.5]
    *       ChopShop: Payout = price * 0.25
    *       GarageSell: Payout = price * [0.5, 0.5, 0.5, -1]
    *       Cop Impound: Payout = price * 0.1
    *       Pull Vehicle from Garage: Cost = price * [1, 0.5, 0.75, -1] * [0.5, 0.5, 0.5, -1]
    *           -- Pull Vehicle & GarageSell Array Explanation = [civ,cop,medic,east]
    *
    *       1: STRING (Condition)
    *    Textures config follows { Texture Name, side, {texture(s)path}, Condition}
    *    Texture(s)path follows this format:
    *    INDEX 0: Texture Layer 0
    *    INDEX 1: Texture Layer 1
    *    INDEX 2: Texture Layer 2
    *    etc etc etc
    *
    */

    class Default {
        vItemSpace = -1;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    // Apex DLC
    class C_Boat_Transport_02_F {
        vItemSpace = 100;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 22000;
        textures[] = {
            { "Civilian", "civ", {
                "\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_civilian_CO.paa"
            }, "" },
            { "Black", "cop", {
                "\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_CO.paa"
            }, "" }
        };
    };

    // Apex DLC
    class C_Offroad_02_unarmed_F {
        vItemSpace = 65;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 48500;
        fuel = "fuel_1";
        textures[] = {
            { "Black", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa"
            }, "" },
            { "Blue", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa"
            }, "" },
            { "Green", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa"
            }, "" },
            { "Orange", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_orange_co.paa"
            }, "" },
            { "Red", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa"
            }, "" },
            { "White", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa"
            }, "" }
        };
    };

    // Apex DLC
    /*class C_Plane_Civil_01_F {
        vItemSpace = 75;
        conditions = "license_civ_pilot || {!(playerSide isEqualTo civilian)}";
        price = 150000;
        textures[] = {
            { "Racing (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, "" },
            { "Racing", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, "" },
            { "Red Line (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, "" },
            { "Red Line", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, "" },
            { "Tribal (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, "" },
            { "Tribal", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, "" },
            { "Blue Wave (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, "" },
            { "Blue Wave", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, "" }
        };
    };*/

    // Apex DLC
    class O_T_LSV_02_unarmed_F {
        vItemSpace = 100;
        conditions = "";
        price = 100000;
        textures[] = {
            { "Arid", "civ", {
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_arid_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_arid_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_arid_CO.paa"
            }, "" },
            { "Black", "civ", {
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_black_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa"
            }, "" },
            { "Green Hex", "civ", {
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_ghex_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_ghex_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa"
            }, "" }
        };
    };

    class I_Truck_02_medical_F {
        vItemSpace = 150;
        conditions = "";
        price = 25000;
        textures[] = {};
    };

    class O_Truck_03_medical_F {
        vItemSpace = 200;
        conditions = "";
        price = 45000;
        textures[] = {};
    };

    class B_Truck_01_medical_F {
        vItemSpace = 250;
        conditions = "";
        price = 60000;
        textures[] = {};
    };

    class C_Rubberboat {
        vItemSpace = 45;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 5000;
        textures[] = { };
    };

    class B_Heli_Transport_01_F {
        vItemSpace = 200;
        conditions = "license_cop_cAir || {!(playerSide isEqualTo west)}";
        price = 200000;
        textures[] = {};
    };

    class B_MRAP_01_hmg_F {
        vItemSpace = 100;
        conditions = "";
        price = 750000;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" }
        };
    };

    class B_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        conditions = "license_cop_cg || {!(playerSide isEqualTo west)}";
        price = 75000;
        textures[] = { };
    };

    class B_Boat_Transport_01_F {
        vItemSpace = 45;
        conditions = "license_cop_cg || {!(playerSide isEqualTo west)}";
        price = 3000;
        textures[] = { };
    };

    class O_Truck_03_transport_F {
        vItemSpace = 285;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 200000;
        textures[] = { };
    };

    class O_Truck_03_device_F {
        vItemSpace = 350;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 450000;
        textures[] = { };
    };

    class Land_CargoBox_V1_F {
        vItemSpace = 5000;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class Box_IND_Grenades_F {
        vItemSpace = 350;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class B_supplyCrate_F {
        vItemSpace = 700;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class B_G_Offroad_01_F {
        vItemSpace = 65;
        conditions = "";
        price = 12500;
        textures[] = { };
    };

    class B_G_Offroad_01_armed_F {
        vItemSpace = 65;
        conditions = "license_civ_rebel || {!(playerSide isEqualTo civilian)}";
        price = 750000;
        textures[] = { };
    };

    class C_Boat_Civil_01_F {
        vItemSpace = 50;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 50950;
        fuel = "fuel_1";
        textures[] = { };
    };

    class C_Boat_Civil_01_police_F {
        vItemSpace = 85;
        conditions = "license_cop_cg || {!(playerSide isEqualTo west)}";
        price = 20000;
        textures[] = { };
    };

    class B_Truck_01_box_F {
        vItemSpace = 450;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 350000;
        textures[] = { };
    };

    class B_Truck_01_transport_F {
        vItemSpace = 325;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 275000;
        textures[] = { };
    };

    class O_MRAP_02_F {
        vItemSpace = 60;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 150000;
        textures[] = { };
    };

    class C_Offroad_01_F {
        vItemSpace = 65;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 12500;
        textures[] = {
            { "Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
            }, "" },
            { "Yellow", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
            }, "" },
            { "White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            }, "" },
            { "Blue", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            }, "" },
            { "Dark Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            }, "" },
            { "Blue / White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
            }, "" },
            { "Taxi", "civ", {
                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            }, "" },
            { "Police", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            }, "" }
        };
    };

    class C_Kart_01_Blu_F {
        vItemSpace = 20;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 15000;
        textures[] = {};
    };
/*
To edit another information in this classes you can use this exemple.
class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{
    vItemSpace = 40;
    price = ;
};

will modify the virtual space and the price of the vehicle, but other information such as license and textures will pick up the vehicle declare at : Vehicle {};
*/
    class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{}; // Get all information of C_Kart_01_Blu_F
    class C_Kart_01_Red_F : C_Kart_01_Blu_F{};
    class C_Kart_01_Vrana_F : C_Kart_01_Blu_F{};

    class C_Hatchback_01_sport_F {
        vItemSpace = 45;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 40000;
        textures[] = {
            { "Red", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
            }, "" },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
            }, "" },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
            }, "" },
            { "Black / White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
            }, "" },
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
            }, "" },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
            }, "" },
            { "Police", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            }, "" }
        };
    };

    class B_Quadbike_01_F {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2500;
        textures[] = {
            { "Brown", "cop", {
                "\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa"
            }, "" },
            { "Digi Desert", "reb", {
                "\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"
            }, "" },
            { "Black", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa"
            }, "" },
            { "Blue", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
            }, "" },
            { "Red", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"
            }, "" },
            { "White", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa"
            }, "" },
            { "Digi Green", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa"
            }, "" },
            { "Hunter Camo", "civ", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            }, "" },
            { "Rebel Camo", "reb", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            }, "" }
        };
    };

    class I_Truck_02_covered_F {
        vItemSpace = 250;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 100000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            }, "" },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" }
        };
    };

    class I_Truck_02_transport_F {
        vItemSpace = 200;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 75000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            }, "" },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" }
        };
    };

    class O_Truck_03_covered_F {
        vItemSpace = 300;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 250000;
        textures[] = {};
    };

    class C_Hatchback_01_F {
        vItemSpace = 40;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 9500;
        textures[] = {
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            }, "" },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            }, "" },
            { "Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            }, "" },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            }, "" },
            { "Yellow", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            }, "" },
            { "White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            }, "" },
            { "Grey", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            }, "" },
            { "Black", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            }, "" }
        };
    };

    class C_SUV_01_F {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 30000;
        textures[] = {
            { "Dark Red", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
            }, "" },
            { "Silver", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
            }, "" },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
            }, "" },
            { "Police", "cop", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_02_co.paa"
            }, "" }
        };
    };

    class C_Van_01_transport_F {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 45000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            }, "" },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            }, "" }
        };
    };

    class C_Van_01_box_F {
        vItemSpace = 150;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 60000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            }, "" },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            }, "" }
        };
    };

    class B_MRAP_01_F {
        vItemSpace = 65;
        conditions = "";
        price = 30000;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" }
        };
    };

     class B_Heli_Light_01_stripped_F {
        vItemSpace = 90;
        conditions = "";
        price = 275000;
        textures[] = {
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            }, "" }
        };
    };

    class B_Heli_Light_01_F {
        vItemSpace = 90;
        conditions = "license_civ_pilot || {license_cop_cAir} || {license_med_mAir}";
        price = 245000;
        textures[] = {
            { "Police", "cop", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"
            }, "" },
            { "Sheriff", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"
            }, "" },
            { "Civ Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            }, "" },
            { "Civ Red", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            }, "" },
            { "Blueline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            }, "" },
            { "Elliptical", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            }, "" },
            { "Furious", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            }, "" },
            { "Jeans Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            }, "" },
            { "Speedy Redline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            }, "" },
            { "Sunset", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            }, "" },
            { "Vrana", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            }, "" },
            { "Waves Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            }, "" },
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            }, "" },
            { "Digi Green", "reb", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            }, "" },
            { "Digi Green", "reb", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            }, "" },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            }, "" }
        };
    };

    /*class C_Heli_Light_01_civil_F : B_Heli_Light_01_F {
        vItemSpace = 75;
        price = 245000;
    };*/
/*
    class O_Heli_Light_02_unarmed_F {
        vItemSpace = 210;
        conditions = "license_civ_pilot || {license_med_mAir} || {(playerSide isEqualTo west)}";
        price = 750000;
        textures[] = {
            { "Black", "cop", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            }, "" },
            { "White / Blue", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
            }, "" },
            { "Digi Green", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            }, "" },
            { "Desert Digi", "reb", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa"
            }, "" },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            }, "" }
        };
    };*/

    class B_SDV_01_F {
        vItemSpace = 0;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 5000000;
        fuel = "fuel_1";
        textures[] = { };
    };

    class C_Van_01_fuel_F {
        vItemSpace = 20;
        vFuelSpace = 19500;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 120000;
        textures[] = {
            { "White", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_co.paa"
            }, "" },
            { "Red", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_red_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_red_co.paa"
            }, "" }
        };
    };

    class I_Truck_02_fuel_F {
        vItemSpace = 40;
        vFuelSpace = 42000;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 200000;
        textures[] = {
            { "White", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_fuel_co.paa"
            }, "" }
        };
    };

    class B_Truck_01_fuel_F {
        vItemSpace = 50;
        vFuelSpace = 50000;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 250000;
        textures[] = {};
    };
	
	/*/////////////////////////////////////////////////////////////////////////////////////
	///////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////*/

	/* ///////////// Citadines ///////////// */
	
    class ch206_civ {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 5750;
		fuel = "fuel_1";
        textures[] = { };
    };
	
    class chMito {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 6890;
		fuel = "fuel_1";
        textures[] = { };
    };
	
    class chsandero {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 8290;
		fuel = "fuel_1";
        textures[] = { };
    };
	
    class chGolfIV {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 10000;
		fuel = "fuel_1";
        textures[] = { };
    };
	
    class Zoech {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 11400;
		fuel = "fuel_7";
        textures[] = { };
    };
	
    class chds3 {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 11990;
		fuel = "fuel_1";
        textures[] = { };
    };
	
    class chduster14_civ {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 12490;
		fuel = "fuel_1";
        textures[] = { };
    };
	
    class chCeed {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 12500;
		fuel = "fuel_1";
        textures[] = { };
    };

    /* ///////////// Berline ///////////// */

    class Renault_ClioIV_civ {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 14100;
        fuel = "fuel_2";
        textures[] = { };
    };  

    class chgolf7_civ {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 22500;
        fuel = "fuel_2";
        textures[] = { };
    };  

    class chds4 {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 23800;
        fuel = "fuel_2";
        textures[] = { };
    };  

    class d3s_giulietta_16 {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 26750;
        fuel = "fuel_2";
        textures[] = { };
    };

    class chNouvelle_Coccinelle {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 28400;
        fuel = "fuel_1";
        textures[] = { };
    }; 

    class chBrera {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 33850;
        fuel = "fuel_2";
        textures[] = { };
    }; 

    class chLeaf {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 33900;
        fuel = "fuel_7";
        textures[] = { };
    };     

    class d3s_300C_12 {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 34700;
        fuel = "fuel_2";
        textures[] = { };
    }; 

    class ch508 {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 37300;
        fuel = "fuel_1";
        textures[] = { };
    };

    class chds5 {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 40000;
        fuel = "fuel_2";
        textures[] = { };
    };

    class d3s_civic_17 {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 30000;
        fuel = "fuel_2";
        textures[] = { };
    };

    /* ///////////// Familliale ///////////// */

    class Renault_Espace_civ {
        vItemSpace = 75;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 15000;
        fuel = "fuel_1";
        textures[] = { };
    };

    class d3s_juke_15 {
        vItemSpace = 75;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 19990;
        fuel = "fuel_2";
        textures[] = { };
    };

    class chmegane_4_estate_civ {
        vItemSpace = 75;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 23200;
        fuel = "fuel_1";
        textures[] = { };
    };

    class mondeoswch_civ {
        vItemSpace = 75;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 24210;
        fuel = "fuel_1";
        textures[] = { };
    };

    class Scenic3_civ {
        vItemSpace = 75;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 27600;
        fuel = "fuel_1";
        textures[] = { };
    };

    class chfocussw3p2 {
        vItemSpace = 75;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 27800;
        fuel = "fuel_1";
        textures[] = { };
    };

    class partner2_civ {
        vItemSpace = 75;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 29800;
        fuel = "fuel_1";
        textures[] = { };
    };

    class d3s_vklasse_17 {
        vItemSpace = 75;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 90000;
        fuel = "fuel_1";
        textures[] = { };
    };

	/* ///////////// Utilitaire ///////////// */

    class Berlingo2_cciv {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 36500;
        fuel = "fuel_2";
        textures[] = { };
    };

    class kangooII1_cciv {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 36000;
        fuel = "fuel_1";
        textures[] = { };
    };

    class chexpert3_cciv {
        vItemSpace = 160;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 40750;
        fuel = "fuel_1";
        textures[] = { };
    };

    class master3p2_civ_car {
        vItemSpace = 260;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 42250;
        fuel = "fuel_1";
        textures[] = { };
    };

    class ch_sprinter_civ {
        vItemSpace = 300;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 49900;
        fuel = "fuel_1";
        textures[] = { };
    };

    /* ///////////// Bateau ///////////// */

    class C_Scooter_Transport_01_F {
        vItemSpace = 0;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 4200;
        fuel = "fuel_2";
        textures[] = { };
    };

    class I_C_Boat_Transport_02_F {
        vItemSpace = 25;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 32400;
        fuel = "fuel_2";
        textures[] = { };
    };

    class C_Grady_White_01_F {
        vItemSpace = 50;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 117720;
        fuel = "fuel_2";
        textures[] = { };
    };

    class Burnes_MK10_1 {
        vItemSpace = 0;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 10000000;
        fuel = "fuel_1";
        textures[] = { };
    };

    /* ///////////// Camion ///////////// */

    class midlum_p2 {
        vItemSpace = 500;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 155000;
        fuel = "fuel_1";
        textures[] = { };
    };

    class d3s_scania_16_30 {
        vItemSpace = 800;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 225000;
        fuel = "fuel_1";
        textures[] = { };
    };  

    class Renault_Range_T {
        vItemSpace = 1100;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 320000;
        fuel = "fuel_1";
        textures[] = { };
    };

    class d3s_actros_14 {
        vItemSpace = 1100;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 320000;
        fuel = "fuel_1";
        textures[] = { };
    };  

    /* ///////////// Moto ///////////// */

    class 1200RT_ch {
        vItemSpace = 25;
        conditions = "license_civ_moto || {!(playerSide isEqualTo civilian)}";
        price = 17850;
        fuel = "fuel_2";
        textures[] = { };
    };

    class S1000RR_ch {
        vItemSpace = 25;
        conditions = "license_civ_moto || {!(playerSide isEqualTo civilian)}";
        price = 21250;
        fuel = "fuel_2";
        textures[] = { };
    }; 

    class fatboy_ch {
        vItemSpace = 25;
        conditions = "license_civ_moto || {!(playerSide isEqualTo civilian)}";
        price = 24190;
        fuel = "fuel_2";
        textures[] = { };
    }; 

    class GSXR_ch {
        vItemSpace = 25;
        conditions = "license_civ_moto || {!(playerSide isEqualTo civilian)}";
        price = 19799;
        fuel = "fuel_2";
        textures[] = { };
    };

    class FJR1300_ch {
        vItemSpace = 25;
        conditions = "license_civ_moto || {!(playerSide isEqualTo civilian)}";
        price = 16999;
        fuel = "fuel_2";
        textures[] = { };
    };

    class xj6_ch {
        vItemSpace = 25;
        conditions = "license_civ_moto || {!(playerSide isEqualTo civilian)}";
        price = 6799;
        fuel = "fuel_2";
        textures[] = { };
    };

    class r125_ch {
        vItemSpace = 25;
        conditions = "license_civ_moto || {!(playerSide isEqualTo civilian)}";
        price = 7099;
        fuel = "fuel_2";
        textures[] = { };
    };

    class d3s_KTM_1290_Super_Duke {
        vItemSpace = 25;
        conditions = "license_civ_moto || {!(playerSide isEqualTo civilian)}";
        price = 5800;
        fuel = "fuel_2";
        textures[] = { };
    };

    /* ///////////// Voiture de sport ///////////// */

    class chClioIVRS {
        vItemSpace = 75;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 22100;
        fuel = "fuel_2";
        textures[] = { };
    };

    class d3s_skyline_02 {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 78880;
        fuel = "fuel_2";
        textures[] = { };
    };

    class d3s_giulia_quad_16 {
        vItemSpace = 75;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 88900;
        fuel = "fuel_2";
        textures[] = { };
    };

    class d3s_RS6_20 {
        vItemSpace = 90;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 130950;
        fuel = "fuel_2";
        textures[] = { };
    };

    class d3s_stelvio_19_MNSTR {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 48865;
        fuel = "fuel_2";
        textures[] = { };
    };

    class d3s_dbs_19 {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 283544;
        fuel = "fuel_2";
        textures[] = { };
    };

    class d3s_rapide_10 {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 197455;
        fuel = "fuel_2";
        textures[] = { };
    };

    class d3s_continentalGT_18 {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 197160;
        fuel = "fuel_2";
        textures[] = { };
    };

    class d3s_G12_20_745 {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 116300;
        fuel = "fuel_2";
        textures[] = { };
    };

    class d3s_chiron_18 {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 25000000;
        fuel = "fuel_2";
        textures[] = { };
    };

    class d3s_camaro_zl1_17 {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 40965;
        fuel = "fuel_2";
        textures[] = { };
    };

    class d3s_CorvetteZR1_19 {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 229900;
        fuel = "fuel_2";
        textures[] = { };
    };

    class d3s_challenger_15 {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 64406;
        fuel = "fuel_2";
        textures[] = { };
    };

    class d3s_599GTO_12 {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 600000;
        fuel = "fuel_2";
        textures[] = { };
    };

    class chf_california {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 78252;
        fuel = "fuel_2";
        textures[] = { };
    };

    class d3s_F8Tributo_20 {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 232694;
        fuel = "fuel_2";
        textures[] = { };
    };

    class d3s_xesv_17 {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 183500;
        fuel = "fuel_2";
        textures[] = { };
    };

    class d3s_veneno_13 {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 8090000;
        fuel = "fuel_2";
        textures[] = { };
    };

    class d3s_amazing_a45_16_EX {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 69700;
        fuel = "fuel_2";
        textures[] = { };
    };

    class d3s_911gt3rs_18 {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 198335;
        fuel = "fuel_2";
        textures[] = { };
    };

    class d3s_wrx_17_FnF8 {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 20618;
        fuel = "fuel_2";
        textures[] = { };
    };

    class d3s_teslaS_16_Mark_42 {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 83990;
        fuel = "fuel_7";
        textures[] = { };
    };

    class AlpineArdos_reflet {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 61652;
        fuel = "fuel_2";
        textures[] = { };
    };

    /* ///////////// SUV 4x4 ///////////// */

    class chrr_svr {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 49633;
        fuel = "fuel_2";
        textures[] = { };
    };

    class cWrangler_1 {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 50650;
        fuel = "fuel_1";
        textures[] = { };
    };

    class d3s_cherokee_18_TRCK {
        vItemSpace = 75;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 71464;
        fuel = "fuel_2";
        textures[] = { };
    };

    class chTouareg {
        vItemSpace = 75;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 88260;
        fuel = "fuel_2";
        textures[] = { };
    };

    class d3s_raptor_17 {
        vItemSpace = 75;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 103900;
        fuel = "fuel_1";
        textures[] = { };
    };

    class chH1_ST {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 130000;
        fuel = "fuel_1";
        textures[] = { };
    };

    class d3s_g65amg_Mansory {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 159880;
        fuel = "fuel_2";
        textures[] = { };
    };

    class d3s_f85_15_m {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 73500;
        fuel = "fuel_2";
        textures[] = { };
    };

    class d3s_dbx_19 {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 195126;
        fuel = "fuel_2";
        textures[] = { };
    };

    class d3s_Q7_15 {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 195126;
        fuel = "fuel_1";
        textures[] = { };
    };

    class d3s_bentayga_18 {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 169320;
        fuel = "fuel_2";
        textures[] = { };
    };

    class d3s_G07_x30d_19 {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 102050;
        fuel = "fuel_2";
        textures[] = { };
    };

    class d3s_fpace_17_s {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 47700;
        fuel = "fuel_2";
        textures[] = { };
    };


	/* ///////////// Gendarmerie ///////////// */
	
	
    class 1200RT_gn_ch {
        vItemSpace = 25;
        conditions = "license_civ_moto || {!(playerSide isEqualTo civilian)}";
        price = 0;
        fuel = "fuel_1";
        textures[] = { };
    };
	
    class chduster14_gn {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 0;
        fuel = "fuel_1";
        textures[] = { };
    };
	
    class chfcrs {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 0;
        fuel = "fuel_2";
        textures[] = { };
    };
	
    class ranger17ch_GN {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 0;
        fuel = "fuel_1";
        textures[] = { };
    };
	
    class chExpert3_gn {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 0;
        fuel = "fuel_1";
        textures[] = { };
    };
	
    class megane_4_estate_gn {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 0;
        fuel = "fuel_1";
        textures[] = { };
    };
	
    class SubaruWRXgn {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 0;
        fuel = "fuel_1";
        textures[] = { };
    };

    class ClioV_GN {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 0;
        fuel = "fuel_1";
        textures[] = {};
    };

    class mondeovch_gn_bana {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 0;
        fuel = "fuel_1";
        textures[] = {};
    };

    class focusch3_gn_bana {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 0;
        fuel = "fuel_1";
        textures[] = {};
    };
	
    class mondeoswch_gn_bana {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 0;
        fuel = "fuel_1";
        textures[] = {};
    };

    class cmax_gn_bana {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 0;
        fuel = "fuel_1";
        textures[] = {};
    };

    class Renault_Espace_gn_bana {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 0;
        fuel = "fuel_1";
        textures[] = {};
    };

    class chrr_svr_gn_bana {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 0;
        fuel = "fuel_1";
        textures[] = {};
    };

    class chglof7_gn_bana {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 0;
        fuel = "fuel_1";
        textures[] = {};
    };

    class EC135GNlu {
        vItemSpace = 25;
        conditions = "license_civ_pilot || {!(playerSide isEqualTo civilian)}";
        price = 0;
        fuel = "fuel_6";
        textures[] = {};
    };

    class C_Test_Boat_01_F {
        vItemSpace = 25;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 0;
        fuel = "fuel_6";
        textures[] = {};
    };
	/* ///////////// Pompier ///////////// */
	
    class brancardch {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 0;
        fuel = "fuel_1";
        textures[] = { };
    };
	
    class devidoirch {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 0;
        fuel = "fuel_1";
        textures[] = { };
    };
	
    class devidoirchvsr {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 0;
        fuel = "fuel_1";
        textures[] = { };
    };
	
    class berlingo2_vlcg {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 0;
        fuel = "fuel_1";
        textures[] = { };
    };
	
    class chduster14_vlhr {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 0;
        fuel = "fuel_1";
        textures[] = { };
    };
	
    class EPA {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 0;
        fuel = "fuel_1";
        textures[] = { };
    };
	
    class chepa_Mercedes_Atego_1530 {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 0;
        fuel = "fuel_1";
        textures[] = { };
    };
	
    class fcch {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 0;
        fuel = "fuel_1";
        textures[] = { };
    };
	
    class chfmogp {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 0;
        fuel = "fuel_1";
        textures[] = { };
    };
	
    class VSR {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 0;
        fuel = "fuel_1";
        textures[] = { };
    };
	
    class chVSAV_Sprinter {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 0;
        fuel = "fuel_1";
        textures[] = { };
    };
	
    class chvsavar_sprinter {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 0;
        fuel = "fuel_1";
        textures[] = { };
    };
	
    class PMA {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 0;
        fuel = "fuel_1";
        textures[] = { };
    };
	
    class chps5g {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 0;
        fuel = "fuel_1";
        textures[] = { };
    };
	
    class VPC {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 0;
        fuel = "fuel_1";
        textures[] = { };
    };

    class EC135SClu {
        vItemSpace = 25;
        conditions = "license_civ_pilot || {!(playerSide isEqualTo civilian)}";
        price = 0;
        fuel = "fuel_6";
        textures[] = { };
    };

    class C_rescue_01_F {
        vItemSpace = 25;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 0;
        fuel = "fuel_1";
        textures[] = { };
    };

	/* ///////////// DIR ///////////// */
	
    class chbalayeuse {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 0;
        fuel = "fuel_1";
        textures[] = {};
    };

    class chchariot {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 0;
        fuel = "fuel_1";
        textures[] = {};
    };

    class chGrue_Mobile {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 0;
        fuel = "fuel_1";
        textures[] = {};
    };

    class KangooII1_DIR {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 0;
        fuel = "fuel_1";
        textures[] = {};
    };

    class Master3_DIR {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 0;
        fuel = "fuel_1";
        textures[] = {};
    };

    class d3s_baumaschinen {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 0;
        fuel = "fuel_1";
        textures[] = {};
    };

    class d3s_W2100 {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 0;
        fuel = "fuel_1";
        textures[] = {};
    };

    class ClioIV_DIR {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 0;
        fuel = "fuel_1";
        textures[] = {};
    };

    class DIR_peugeot_expert {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 0;
        fuel = "fuel_1";
        textures[] = {};
    };

    class DIR_master3_v2 {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 0;
        fuel = "fuel_1";
        textures[] = {};
    };

    class Trafic3_DIR {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 0;
        fuel = "fuel_1";
        textures[] = {};
    };

    class DIR_benne_orange {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 0;
        fuel = "fuel_1";
        textures[] = {};
    };

    class DIR_gors_benne {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 0;
        fuel = "fuel_1";
        textures[] = {};
    };

    class DIR_renault_saleuse {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 0;
        fuel = "fuel_1";
        textures[] = {};
    };

    /* ///////////// DEPANNEUR ///////////// */

    class chTransport_L {
        vItemSpace = 100;
        conditions = "license_civ_driver";
        price = 0;
        fuel = "fuel_1";
        textures[] = { };
    };

    class RealMan_DepanPL  {
        vItemSpace = 100;
        conditions = "license_civ_driver";
        price = 0;
        fuel = "fuel_1";
        textures[] = { };
    };

    class RealMan_DepanVL {
        vItemSpace = 100;
        conditions = "license_civ_driver";
        price = 0;
        fuel = "fuel_1";
        textures[] = { };
    };

    /* ///////////// Gouvernement ///////////// */

    class d3s_amazing_f10_12_UNM_GOV1 {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 0;
        fuel = "fuel_1";
        textures[] = { };
    };

    class d3s_ctsv_16_unm {
        vItemSpace = 100;
        conditions = "license_civ_driver";
        price = 0;
        fuel = "fuel_1";
        textures[] = { };
    };

    class d3s_escalade_16_cop {
        vItemSpace = 100;
        conditions = "license_civ_driver";
        price = 0;
        fuel = "fuel_1";
        textures[] = { };
    };

    class d3s_vv222_18 {
        vItemSpace = 100;
        conditions = "license_civ_driver";
        price = 0;
        fuel = "fuel_1";
        textures[] = { };
    };

    class d3s_s600_14 {
        vItemSpace = 100;
        conditions = "license_civ_driver";
        price = 0;
        fuel = "fuel_1";
        textures[] = { };
    };

    class d3s_dawn_16_III {
        vItemSpace = 100;
        conditions = "license_civ_driver";
        price = 0;
        fuel = "fuel_1";
        textures[] = { };
    };

    class Renault_ClioIV_civ_ae {
        vItemSpace = 100;
        conditions = "license_civ_driver";
        price = 0;
        fuel = "fuel_1";
        textures[] = { };
    };

    /* ///////////// Rebelle ///////////// */ 
    
    class d3s_g800_17 {
        vItemSpace = 90;
        conditions = "license_civ_driver";
        price = 875000;
        fuel = "fuel_2";
        textures[] = { };
    };

    class d3s_tahoe_EX {
        vItemSpace = 90;
        conditions = "license_civ_driver";
        price = 875000;
        fuel = "fuel_2";
        textures[] = { };
    };

    class d3s_kuruma_gtaV {
        vItemSpace = 75;
        conditions = "license_civ_driver";
        price = 266264;
        fuel = "fuel_2";
        textures[] = { };
    };

    class d3s_w212s_13_EX {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 140000;
        fuel = "fuel_2";
        textures[] = { };
    };

    class d3s_svr_17_007 {
        vItemSpace = 75;
        conditions = "license_civ_driver";
        price = 71200;
        fuel = "fuel_2";
        textures[] = { };
    };

    class d3s_maz_7429 {
        vItemSpace = 900;
        conditions = "license_civ_driver";
        price = 350000;
        fuel = "fuel_2";
        textures[] = { };
    };

    class d3s_SRmh_9500_cov {
        vItemSpace = 1200;
        conditions = "license_civ_driver";
        price = 400000;
        fuel = "fuel_2";
        textures[] = { };
    };

    class I_Heli_light_03_unarmed_F {
        vItemSpace = 0;
        conditions = "license_civ_pilot";
        price = 600000;
        fuel = "fuel_6";
        textures[] = { };
    };

    class O_Heli_Light_02_unarmed_F {
        vItemSpace = 0;
        conditions = "license_civ_pilot || {license_med_mAir} || {(playerSide isEqualTo west)}";
        price = 700000;
        fuel = "fuel_6";
        textures[] = {
            { "Black", "reb", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            }, "" },
            { "Black", "cop", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            }, "" },
            { "White / Blue", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
            }, "" },
            { "Digi Green", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            }, "" },
            { "Desert Digi", "reb", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa"
            }, "" },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            }, "" }
        };
    };

    class EC635_Unarmed {
        vItemSpace = 0;
        conditions = "license_civ_pilot";
        price = 830500;
        fuel = "fuel_6";
        textures[] = { };
    };

    /* ///////////// CIVIL AERIEN ///////////// */ 

    class C_Plane_Civil_01_F {
        vItemSpace = 0;
        conditions = "license_civ_pilot";
        price = 84620;
        fuel = "fuel_6";
        textures[] = {
            { "Racing (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, "" },
            { "Racing", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, "" },
            { "Red Line (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, "" },
            { "Red Line", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, "" },
            { "Tribal (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, "" },
            { "Tribal", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, "" },
            { "Blue Wave (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, "" },
            { "Blue Wave", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, "" }};
    };

    class do228_ch_Blanc {
        vItemSpace = 0;
        conditions = "license_civ_pilot";
        price = 500000;
        fuel = "fuel_6";
        textures[] = { };
    };

    class C_Heli_Light_01_civil_F {
        vItemSpace = 0;
        conditions = "license_civ_pilot";
        price = 600000;
        fuel = "fuel_6";
        textures[] = { };
    };

    class I_C_Heli_Light_01_civil_F {
        vItemSpace = 0;
        conditions = "license_civ_pilot";
        price = 650000;
        fuel = "fuel_6";
        textures[] = { };
    };

    /* ///////////// CRAFT ///////////// */ 
    class fgtz3 {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_2";
        textures[] = { };
    };

    class V12_SKYLINEFNF {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_2";
        textures[] = { };
    };

    class V12_SUPRAFNF {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_2";
        textures[] = { };
    };

    class V12_ECLIPSEFNF1 {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_2";
        textures[] = { };
    };

    class chBeetle_53 {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_2";
        textures[] = { };
    };

    class 406_taxi {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_2";
        textures[] = { };
    };

    class V12_JETTA {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_2";
        textures[] = { };
    };

    /* ///////////// OLD CAR ///////////// */ 
    class 4lf6_civ {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_2";
        price = 7000;
        textures[] = { };
    };

    class 4l_civ {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_2";
        price = 9500;
        textures[] = { };
    };

    class chBeetle {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_2";
        price = 10000;
        textures[] = { };
    };

    class chMehari {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_2";
        price = 15500;
        textures[] = { };
    };

    class ch2CV {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_2";
        price = 20000;
        textures[] = { };
    };

    class chRS2 {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_2";
        price = 20000;
        textures[] = { };
    };

    class j9ch {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_1";
        price = 20000;
        textures[] = { };
    };

    class chaustin {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_2";
        price = 24500;
        textures[] = { };
    };

    class chr12 {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_2";
        price = 25000;
        textures[] = { };
    };

    class chds_21 {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_2";
        price = 29500;
        textures[] = { };
    };

    class d3s_willys {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_1";
        price = 29973;
        textures[] = { };
    };

    class chGolfI {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_2";
        price = 30000;
        textures[] = { };
    };

    class d3s_javelin_72 {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_2";
        price = 32848;
        textures[] = { };
    };

    class chdauphine {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_2";
        price = 33900;
        textures[] = { };
    };

    class type_hch {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_2";
        price = 3500;
        textures[] = { };
    };

    class d3s_skylark_52 {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_2";
        price = 37915;
        textures[] = { };
    };

    class d3s_model_a {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_2";
        price = 40500;
        textures[] = { };
    };

    class chKarmannGhia {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_2";
        price = 44800;
        textures[] = { };
    };

    class chT1 {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_2";
        price = 49500;
        textures[] = { };
    };

    class d3s_hornet_53 {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_2";
        price = 52600;
        textures[] = { };
    };

    class ch504 {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_2";
        price = 55000;
        textures[] = { };
    };

    class chr8_2 {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_2";
        price = 55000;
        textures[] = { };
    };

    class V12_AE86 {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_1";
        price = 57000;
        textures[] = { };
    };

    class d3s_coronet_70 {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_2";
        price = 57299;
        textures[] = { };
    };

    class d3s_roadrunner_71_GTX {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_2";
        price = 36247;
        textures[] = { };
    };

    class d3s_eldorado_68 {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_2";
        price = 69900;
        textures[] = { };
    };

    class chR5Turbo {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_2";
        price = 79650;
        textures[] = { };
    };

    class d3s_challenger_70 {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_2";
        price = 799000;
        textures[] = { };
    };

    class d3s_e38_98 {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_2";
        price = 97750;
        textures[] = { };
    };

    class cha110 {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_2";
        price = 130000;
        textures[] = { };
    };

    class d3s_300SL_55 {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_2";
        price = 1300000;
        textures[] = { };
    };

    class ch250_GTO {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_2";
        price = 4500000;
        textures[] = { };
    };
};
