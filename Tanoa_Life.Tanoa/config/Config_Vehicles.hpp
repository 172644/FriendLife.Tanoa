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
            { "Alessio206", "" },
            { "chMito", "" },
            { "chsandero", "" },
            { "Zoech", "" },
            { "chds3", "" },
            { "chduster14_civ", "" },
			{ "chCeed", "" }
        };
    };

    class civ_sport {
        side = "civ";
        conditions = "";
        vehicles[] = {
			{ "AlessioWRXRally", "" },
			{ "d3s_camaro_zl1_17", "" },
			{ "d3s_stelvio_19_MNSTR", "" },
			{ "d3s_challenger_15", "" },
			{ "V12_DEMON_NOIR", "" },
			{ "d3s_skyline_02", "" },
			{ "AlessioC63M", "" },
			{ "d3s_teslaS_16_Mark_42", "" },
			{ "V12_C63AMG16_BLEU", "" },
			{ "AlessioGTRMat", "" },
			{ "d3s_G12_20_745", "" },
			{ "AlessioM5", "" },
			{ "AlessioR8Mat", "" },
			{ "AlessioE63sM", "" },
			{ "d3s_continentalGT_18", "" },
			{ "V12_GHOST", "" }		
        };
    };
	
	class civ_supercar {
        side = "civ";
        conditions = "";
        vehicles[] = {
			{ "AlessioCaymanMat", "" },
			{ "V12_KTM_XBOW", "" },
			{ "V12_GHIBLI", "" },
			{ "V12_CARRERA_S_NOIR", "" },
			{ "chf_california", "" },
			{ "V12_AMGGT_NOIR", "" },
			{ "d3s_rapide_10", "" },
			{ "d3s_911gt3rs_18", "" },
			{ "AlessioPanamera", "" },
			{ "AlessioM8Mat", "" },
			{ "V12_GTC4", "" },
			{ "AlessioGallardo", "" },
			{ "V12_CORVETTE_MK12_JAUNE", "" },
			{ "d3s_dbs_19", "" },
			{ "V12_MILLENNIO_JAUNE", "" },
			{ "AlessioGTBMat", "" },
			{ "Alessio458", "" },
			{ "V12_PISTA19", "" },
			{ "AlessioSuperfast", "" },
			{ "AlessioAventadorM", "" },
			{ "Alessio918", "" },
			{ "d3s_599GTO_12", "" },
			{ "AlessioLaFerrariMat", "" },
			{ "AlessioHuayra", "" },
			{ "AlessioAgera", "" },
			{ "V12_DIVO", "" }			
        };
    };

    class civ_oldcar {
        side = "civ";
        conditions = "";
        vehicles[] = {
			{ "4lf6_civ", "" },
			{ "4l_civ", "" },
			{ "chBeetle", "" },
			{ "chMehari", "" },
			{ "V12_2CV_NOIR", "" },
			{ "chRS2", "" },
			{ "j9ch", "" },
			{ "chaustin_mb", "" },
			{ "V12_CIVIC_TODO", "" },
			{ "chaustin_uk", "" },
			{ "V12_CORRADO_ROUGE", "" },
			{ "chds_21", "" },			
			{ "d3s_willys", "" },
			{ "d3s_javelin_72", "" },
			{ "chdauphine_yellow", "" },
			{ "type_hch", "" },
			{ "d3s_skylark_54", "" },
			{ "V12_MK21", "" },
			{ "V12_S2000_NOIR", "" },
			{ "chKarmannGhia", "" },
			{ "mgrace1", "" },
			{ "V12_ELCAMINO", "" },
			{ "chT1", "" },
			{ "V12_VENDURAM", "" },
			{ "d3s_hornet_54", "" },
			{ "ch504", "" },
			{ "chr8_2", "" },
			{ "V12_AE86_INITIAL_D", "" },
			{ "d3s_coronet_70", "" },
			{ "V12_CHEVELLESSBJ_NOIR", "" },
			{ "d3s_roadrunner_71_GTX", "" },
			{ "d3s_eldorado_68", "" },
			{ "V12_Z4", "" },
			{ "chR5Turbo", "" },
			{ "d3s_challenger_70", "" },
			{ "V12_BELAIR_BLEU", "" },			
			{ "V12_COBRA_KAKI", "" },
			{ "cha110", "" },
			{ "Alessio190", "" },
			{ "d3s_300SL_55", "" },
			{ "ch250_GTO_rouge", "" }
        };
    };

    class civ_4x4suv {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "C_Offroad_02_unarmed_F", "" },
            { "d3s_svr_17_V8", "" },
            { "cWrangler_1", "" },
            { "V12_CLASSX_NOIR", "" },
            { "V12_X6_MET", "" },
            { "AlessioTouaregM", "" },
            { "V12_MACAN_NOIR", "" },
            { "V12_ESCALADE_MET", "" },
            { "V12_H1_NOIR", "" },
            { "V12_H1TOP_NOIRB", "" },
            { "V12_GL63AMG", "" },
            { "V12_URUS19", "" }
        };
    };

    class civ_moto {
        side = "civ";
        conditions = "";
        vehicles[] = {
			{ "r125_ch", "" },
			{ "xj6_ch", "" },
			{ "V12_TMAX2017", "" },
			{ "FJR1300_ch", "" },
            { "1200RT_ch", "" },
			{ "GSXR_ch", "" },
			{ "V12_DIAVEL_NR", "" },
            { "S1000RR_ch", "" },
            { "fatboy_ch", "" },
            { "V12_CAN_AM_NOIR", "" }
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
            { "d3s_vklasse_17", "" },
			{ "AlessioRS4Mat", "" },
			{ "V12_RS6AV20B", "" }
        };
    };

    class civ_berline {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "AlessioWRXMat", "" },
            { "d3s_giulietta_16", "" },
            { "chds4_noir", "" },
            { "d3s_civic_17_R", "" },
            { "AlessioIXMRMat", "" },
            { "d3s_300C_12", "" },
            { "V12_CL651", "" },
            { "V12_V6_BLEU", "" },
            { "V12_GTS2", "" },
            { "V12_CUPRA3", "" },
            { "AlpineArdos_bleu", "" },
            { "V12_RS3_BLEU", "" },
			{ "AlessioBM4M", "" },
			{ "AlessioRS5", "" },
			{ "V12_RS7", "" }
        };
    };

    class civ_DIR {
        side = "adac";
        conditions = "";
        vehicles[] = {
            { "chbalayeuse", "" },
            { "chchariot", "" },
            { "KangooII1_DIR", "" },
            { "Master3_DIR", "" },
            { "d3s_W2100", "" },
            { "d3s_baumaschinen", "" },
            { "d3s_W2100", "" },
            { "ClioIV_DIR", "" },
            { "DIR_peugeot_expert", "" },
            { "Trafic3_DIR", "" },
			{ "depanneuse", "" },
            { "depanneuse_pl", "" },
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
            { "ch_sprinter_civ", "" },
			{ "C_Van_01_fuel_F", "" }
        };
    };

    class civ_truck {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "midlum_p2", "" },
            { "V12_STRALIS21", "" },
            { "Renault_Range_T", "" },
            { "d3s_actros_14_giga", "" },
			{ "chciternvol_total", "" }
        };
    };

    class civ_air {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "C_Plane_Civil_01_F", "" },
            { "do228_ch_Blanc", "" },
            {"C_Heli_Light_01_civil_F",""},
            {"B_Heli_Light_01_F",""},
			{"d3s_AS_365",""}			
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
            { "Burnes_MK10_1", "" },
            { "B_SDV_01_F", "" } 
        };
    };

    class civ_craft {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "chBeetle_53", "" },
            { "Alessio190Scarface", "" },
            { "fgtz3", "" },
            { "V12_S15_FNF", "" },
            { "V12_S2001_SUKI", "" },
            { "V12_SKYLINEFNF", "" },
            { "ixmrdrift", "" },
            { "V12_EVO7", "" },
            { "d3s_wrx_17_FnF8", "" },
        };
    };

    class reb_car {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "d3s_tahoe_EX", "" },
            { "d3s_w212s_13_EX", "" },
            { "AlessioBarrack", "" }
        };
    };

    class reb_air {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "O_Heli_Light_02_unarmed_F", "" },
			{ "I_Heli_light_03_unarmed_F", "" },
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
	
	class samu_shop {
        side = "med";
        conditions = "";
        vehicles[] = {
            { "brancardch", "" },
            { "mondeoswch_samu", "" },
            { "ranger17ch_samu", "" },
            { "ch_umh_iveco", "" }
        };
    };

    class med_air_hs {
        side = "med";
        conditions = "";
        vehicles[] = {
            { "EC135SClu", "" }
        };
    };
	
	class samu_air_hs {
        side = "med";
        conditions = "";
        vehicles[] = {
            { "EC135SAlu", "" }
        };
    };

    class medic_ship {
        side = "med";
        conditions = "";
        vehicles[] = {
            { "C_rescue_01_F", "" }
        };
    };

    class cop_car {
        side = "cop";
        conditions = "";
        vehicles[] = {
			{ "1200RT_gn_ch", "call life_coplevel >= 2" },
			{ "Alessio206GND", "call life_coplevel >= 1" },
			{ "ClioIV_GN", "call life_coplevel >= 1" },
			{ "megane_4_estate_gn", "call life_coplevel >= 2" },
			{ "chfcrs", "call life_coplevel >= 3" },
			{ "AlessioWRXGND", "call life_coplevel >= 3" },
			{ "AlessioGTRGNDM", "call life_coplevel >= 7" },
			{ "AlessioRS4GND", "call life_coplevel >= 4" },
			{ "AlessioC63GND", "call life_coplevel >= 7" },
			{ "ranger17ch_GN", "call life_coplevel >= 3" },
			{ "chExpert3_gn", "call life_coplevel >= 2" },
			{ "mondeovch_gn_bana", "call life_coplevel >= 3" },
			{ "focusch3_gn_bana", "call life_coplevel >= 3" },
			{ "cmax_gn_bana", "call life_coplevel >= 4" },
			{ "mondeoswch_gn_bana", "call life_coplevel >= 4" },
			{ "Renault_Espace_gn_bana", "call life_coplevel >= 3" },
			{ "chgolf7_gn_bana", "call life_coplevel >= 5" },
			{ "chrr_svr_gn_bana", "call life_coplevel >= 5" },
			{ "IvecoCh_GN", "call life_coplevel >= 7" },
			{ "V12_H1ASSAULT", "call life_coplevel >= 7" }
        };	
	};
	
    class cop_gouvernement {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "d3s_ctsv_16_unm", "" },
            { "d3s_vv222_18", "" },
            { "d3s_s600_14", "" },
            { "d3s_dawn_16_III", "" },
            { "Renault_ClioIV_civ_ae", "" }
        };
    
    };

    class civ_ups {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "Hugpo_UPS_Sprinter", "" }
        };
    };

    class cop_air {
        side = "cop";
        conditions = "call life_coplevel >= 3";
        vehicles[] = {
            { "EC135GNlu", "call life_coplevel >= 4" },
			{ "O_Heli_Light_02_unarmed_F", "call life_coplevel >= 7" }
        };
    };

    class cop_ship {
        side = "cop";
        conditions = "";
        vehicles[] = {
            { "C_Test_Boat_01_F", "call life_coplevel >= 3" },
			{ "SH_BLS_GD", "call life_coplevel >= 3" }
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

    class d3s_hornet_53_carkill {
        vItemSpace = 10;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 1000000;
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
        price = 750000;
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
        vItemSpace = 200;
        vFuelSpace = 9500;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
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
	
    class Alessio206 {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 5800;
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
        vItemSpace = 30;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 8290;
		fuel = "fuel_1";
        textures[] = { };
    };
	
    class Zoech {
        vItemSpace = 30;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 11400;
		fuel = "fuel_7";
        textures[] = { };
    };
	
    class chds3 {
        vItemSpace = 35;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 11990;
		fuel = "fuel_1";
        textures[] = { };
    };
	
    class chduster14_civ {
        vItemSpace = 45;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 12490;
		fuel = "fuel_1";
        textures[] = { };
    };
	
    class chCeed {
        vItemSpace = 45;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 12500;
		fuel = "fuel_1";
        textures[] = { };
    };

    /* ///////////// Berline ///////////// */

    class AlessioWRXMat {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 20600;
        fuel = "fuel_2";
        textures[] = { };
    };  

    class d3s_giulietta_16 {
        vItemSpace = 55;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 26750;
        fuel = "fuel_2";
        textures[] = { };
    };  

    class chds4_noir {
        vItemSpace = 55;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 29800;
        fuel = "fuel_2";
        textures[] = { };
    };  

    class d3s_civic_17_R {
        vItemSpace = 55;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 30000;
        fuel = "fuel_2";
        textures[] = { };
    };

    class AlessioIXMRMat {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 32700;
        fuel = "fuel_1";
        textures[] = { };
    }; 

    class d3s_300C_12 {
        vItemSpace = 55;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 34700;
        fuel = "fuel_2";
        textures[] = { };
    }; 

    class V12_CL651 {
        vItemSpace = 55;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 38600;
        fuel = "fuel_7";
        textures[] = { };
    };     

    class V12_V6_BLEU {
        vItemSpace = 55;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 39700;
        fuel = "fuel_2";
        textures[] = { };
    }; 

    class V12_GTS2 {
        vItemSpace = 55;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 43300;
        fuel = "fuel_1";
        textures[] = { };
    };

    class V12_CUPRA3 {
        vItemSpace = 55;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 49150;
        fuel = "fuel_2";
        textures[] = { };
    };

    class AlpineArdos_bleu {
        vItemSpace = 60;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 61500;
        fuel = "fuel_2";
        textures[] = { };
    };

    class V12_RS3_BLEU {
        vItemSpace = 60;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 62800;
        fuel = "fuel_2";
        textures[] = { };
    };

    class AlessioBM4M {
        vItemSpace = 65;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 89250;
        fuel = "fuel_2";
        textures[] = { };
    };

    class AlessioRS5 {
        vItemSpace = 70;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 97570;
        fuel = "fuel_2";
        textures[] = { };
    };

    class V12_RS7 {
        vItemSpace = 70;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 110000;
        fuel = "fuel_2";
        textures[] = { };
    };

    /* ///////////// Familliale ///////////// */

    class Renault_Espace_civ {
        vItemSpace = 90;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 15000;
        fuel = "fuel_1";
        textures[] = { };
    };

    class d3s_juke_15 {
        vItemSpace = 80;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 19900;
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
        price = 24200;
        fuel = "fuel_1";
        textures[] = { };
    };

    class Scenic3_civ {
        vItemSpace = 80;
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
        vItemSpace = 95;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 90000;
        fuel = "fuel_1";
        textures[] = { };
    };

    class AlessioRS4Mat {
        vItemSpace = 80;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 95500;
        fuel = "fuel_1";
        textures[] = { };
    };

    class V12_RS6AV20B {
        vItemSpace = 85;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 120000;
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
        vItemSpace = 10;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 4200;
        fuel = "fuel_2";
        textures[] = { };
    };

    class I_C_Boat_Transport_02_F {
        vItemSpace = 50;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 32400;
        fuel = "fuel_2";
        textures[] = { };
    };

    class C_Grady_White_01_F {
        vItemSpace = 70;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 117720;
        fuel = "fuel_2";
        textures[] = { };
    };

   // class rksla3_lcvpmk5_ind_viv_generic_grey {
   //     vItemSpace = 0;
   //     conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
   //     price = 500000;
   //     fuel = "fuel_1";
   //     textures[] = { };
   // };

    class Burnes_MK10_1 {
        vItemSpace = 20;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 5000000;
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

    class V12_STRALIS21 {
        vItemSpace = 800;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 285500;
        fuel = "fuel_1";
        textures[] = { };
    };

	class chciternvol_total {
        vItemSpace = 600;
        vFuelSpace = 25000;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 250000;
        textures[] = { };
	};		

    class Renault_Range_T {
        vItemSpace = 1100;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 320000;
        fuel = "fuel_1";
        textures[] = { };
    };

    class d3s_actros_14_giga {
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

    class V12_DIAVEL_NR {
        vItemSpace = 25;
        conditions = "license_civ_moto || {!(playerSide isEqualTo civilian)}";
        price = 20490;
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

    class V12_TMAX2017 {
        vItemSpace = 25;
        conditions = "license_civ_moto || {!(playerSide isEqualTo civilian)}";
        price = 13300;
        fuel = "fuel_2";
        textures[] = { };
    };

    class xj6_ch {
        vItemSpace = 25;
        conditions = "license_civ_moto || {!(playerSide isEqualTo civilian)}";
        price = 7800;
        fuel = "fuel_2";
        textures[] = { };
    };

    class r125_ch {
        vItemSpace = 25;
        conditions = "license_civ_moto || {!(playerSide isEqualTo civilian)}";
        price = 6900;
        fuel = "fuel_2";
        textures[] = { };
    };

    class V12_CAN_AM_NOIR {
        vItemSpace = 25;
        conditions = "license_civ_moto || {!(playerSide isEqualTo civilian)}";
        price = 30800;
        fuel = "fuel_2";
        textures[] = { };
    };

    /* ///////////// Voiture de sport ///////////// */

    class AlessioWRXRally {
        vItemSpace = 75;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 45000;
        fuel = "fuel_2";
        textures[] = { };
    };

    class d3s_camaro_zl1_17 {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 47965;
        fuel = "fuel_2";
        textures[] = { };
    };

    class d3s_stelvio_19_MNSTR {
        vItemSpace = 75;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 53700;
        fuel = "fuel_2";
        textures[] = { };
    };

    class d3s_challenger_15 {
        vItemSpace = 90;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 56490;
        fuel = "fuel_2";
        textures[] = { };
    };

    class V12_DEMON_NOIR {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 74600;
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

    class AlessioC63M {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 83350;
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

    class V12_C63AMG16_BLEU {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 89100;
        fuel = "fuel_2";
        textures[] = { };
    };

    class AlessioGTRMat {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 115000;
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

    class AlessioM5 {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 138850;
        fuel = "fuel_2";
        textures[] = { };
    };

    class AlessioR8Mat {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 147540;
        fuel = "fuel_2";
        textures[] = { };
    };

    class AlessioE63sM {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 156300;
        fuel = "fuel_2";
        textures[] = { };
    };

    class d3s_continentalGT_18 {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 197160;
        fuel = "fuel_2";
        textures[] = { };
    };

    class V12_GHOST {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 261520;
        fuel = "fuel_2";
        textures[] = { };
    };
	
    /* ///////////// SUPER CAR ///////////// */

    class AlessioCaymanMat {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 82600;
        fuel = "fuel_2";
        textures[] = { };
    };

    class V12_KTM_XBOW {
        vItemSpace = 30;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 145300;
        fuel = "fuel_2";
        textures[] = { };
    };

    class V12_GHIBLI {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 165100;
        fuel = "fuel_2";
        textures[] = { };
    };

    class V12_CARRERA_S_NOIR {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 175500;
        fuel = "fuel_2";
        textures[] = { };
    };

    class chf_california {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 185100;
        fuel = "fuel_2";
        textures[] = { };
    };

    class V12_AMGGT_NOIR {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 190500;
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

    class d3s_911gt3rs_18 {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 198335;
        fuel = "fuel_2";
        textures[] = { };
    };

    class AlessioPanamera {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 205850;
        fuel = "fuel_2";
        textures[] = { };
    };

    class AlessioM8Mat {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 220800;
        fuel = "fuel_2";
        textures[] = { };
    };

    class V12_GTC4 {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 234500;
        fuel = "fuel_2";
        textures[] = { };
    };

    class AlessioGallardo {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 265300;
        fuel = "fuel_2";
        textures[] = { };
    };

    class V12_CORVETTE_MK12_JAUNE {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 271600;
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

    class V12_MILLENNIO_JAUNE {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 292800;
        fuel = "fuel_2";
        textures[] = { };
    };

    class AlessioGTBMat {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 305000;
        fuel = "fuel_2";
        textures[] = { };
    };

    class Alessio458 {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 310450;
        fuel = "fuel_2";
        textures[] = { };
    };

    class V12_PISTA19 {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 320000;
        fuel = "fuel_2";
        textures[] = { };
    };

    class AlessioSuperfast {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 355000;
        fuel = "fuel_2";
        textures[] = { };
    };

    class AlessioAventadorM {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 475300;
        fuel = "fuel_2";
        textures[] = { };
    };

    class d3s_599GTO_12 {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 600000;
        fuel = "fuel_2";
        textures[] = { };
    };

    class Alessio918 {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 750000;
        fuel = "fuel_2";
        textures[] = { };
    };

    class AlessioLaFerrariMat {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 1253700;
        fuel = "fuel_2";
        textures[] = { };
    };

    class AlessioHuayra {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2350000;
        fuel = "fuel_2";
        textures[] = { };
    };

    class AlessioAgera {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2850000;
        fuel = "fuel_2";
        textures[] = { };
    };

    class V12_DIVO {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 5000000;
        fuel = "fuel_2";
        textures[] = { };
    };

    /* ///////////// SUV 4x4 ///////////// */

    class d3s_svr_17_V8 {
        vItemSpace = 55;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 49600;
        fuel = "fuel_2";
        textures[] = { };
    };

    class cWrangler_1 {
        vItemSpace = 60;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 50650;
        fuel = "fuel_1";
        textures[] = { };
    };

    class V12_CLASSX_NOIR {
        vItemSpace = 85;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 62900;
        fuel = "fuel_2";
        textures[] = { };
    };

    class V12_X6_MET {
        vItemSpace = 85;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 73500;
        fuel = "fuel_1";
        textures[] = { };
    };

    class AlessioTouaregM {
        vItemSpace = 80;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 88200;
        fuel = "fuel_1";
        textures[] = { };
    };

    class V12_MACAN_NOIR {
        vItemSpace = 90;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 938000;
        fuel = "fuel_2";
        textures[] = { };
    };

    class V12_ESCALADE_MET {
        vItemSpace = 90;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 111000;
        fuel = "fuel_2";
        textures[] = { };
    };

    class V12_H1_NOIR {
        vItemSpace = 90;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 130000;
        fuel = "fuel_1";
        textures[] = { };
    };

    class V12_H1TOP_NOIRB {
        vItemSpace = 80;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 135000;
        fuel = "fuel_2";
        textures[] = { };
    };

    class V12_GL63AMG {
        vItemSpace = 90;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 146000;
        fuel = "fuel_2";
        textures[] = { };
    };

    class V12_URUS19 {
        vItemSpace = 95;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 223300;
        fuel = "fuel_2";
        textures[] = { };
    };


	/* ///////////// Gendarmerie ///////////// */
	
	
    class 1200RT_gn_ch {
        vItemSpace = 25;
        conditions = "";
        price = 17850;
        fuel = "fuel_1";
        textures[] = { };
    };
	
    class Alessio206GND {
        vItemSpace = 25;
        conditions = "";
        price = 7000;
        fuel = "fuel_1";
        textures[] = { };
    };
	
    class ClioIV_GN {
        vItemSpace = 25;
        conditions = "";
        price = 14000;
        fuel = "fuel_2"; 
		textures[] = { };
    };
	
    class chfcrs {
        vItemSpace = 25;
        conditions = "";
        price = 47000;
        fuel = "fuel_2";       
	};
	
    class AlessioWRXGND {
        vItemSpace = 25;
        conditions = "";
        price = 32000;
        fuel = "fuel_2"; 
		textures[] = { };
    };
	
    class AlessioGTRGNDM {
        vItemSpace = 25;
        conditions = "";
        price = 110000;
        fuel = "fuel_2";
		textures[] = { };
    };
	
    class AlessioRS4GND {
        vItemSpace = 25;
        conditions = "";
        price = 100000;
        fuel = "fuel_2";
		textures[] = { };
    };
	
    class AlessioC63GND {
        vItemSpace = 25;
        conditions = "";
        price = 92000;
        fuel = "fuel_2";
        textures[] = { };
    };
	
    class ranger17ch_GN {
        vItemSpace = 25;
        conditions = "";
        price = 40000;
        fuel = "fuel_1";
        textures[] = { };
    };
	
    class chExpert3_gn {
        vItemSpace = 25;
        conditions = "";
        price = 27000;
        fuel = "fuel_1";
        textures[] = { };
    };
	
    class IvecoCh_GN {
        vItemSpace = 25;
        conditions = "";
        price = 45000;
        fuel = "fuel_1";
        textures[] = { };
    };
	
    class megane_4_estate_gn {
        vItemSpace = 25;
        conditions = "";
        price = 25000;
        fuel = "fuel_1";
        textures[] = { };
    };

    class mondeovch_gn_bana {
        vItemSpace = 25;
        conditions = "";
        price = 43000;
        fuel = "fuel_1";
        textures[] = {};
    };

    class focusch3_gn_bana {
        vItemSpace = 25;
        conditions = "";
        price = 22500;
        fuel = "fuel_1";
        textures[] = {};
    };
	
    class mondeoswch_gn_bana {
        vItemSpace = 25;
        conditions = "";
        price = 45000;
        fuel = "fuel_1";
        textures[] = {};
    };

    class cmax_gn_bana {
        vItemSpace = 25;
        conditions = "";
        price = 32000;
        fuel = "fuel_1";
        textures[] = {};
    };

    class Renault_Espace_gn_bana {
        vItemSpace = 25;
        conditions = "";
        price = 30000;
        fuel = "fuel_1";
        textures[] = {};
    };

    class chrr_svr_gn_bana {
        vItemSpace = 25;
        conditions = "";
        price = 90000;
        fuel = "fuel_1";
        textures[] = {};
    };

    class chgolf7_gn_bana {
        vItemSpace = 25;
        conditions = "";
        price = 37000;
        fuel = "fuel_1";
        textures[] = {};
    };

    class V12_H1ASSAULT {
        vItemSpace = 25;
        conditions = "";
        price = 140000;
        fuel = "fuel_1";
        textures[] = {};
    };

    class EC135GNlu {
        vItemSpace = 25;
        conditions = "";
        price = 3500000;
        fuel = "fuel_6";
        textures[] = {};
    };

    class C_Test_Boat_01_F {
        vItemSpace = 25;
        conditions = "";
        price = 680000;
        fuel = "fuel_1";
        textures[] = {};
    };

    class SH_BLS_GD {
        vItemSpace = 25;
        conditions = "";
        price = 550000;
        fuel = "fuel_1";
        textures[] = {};
    };

   // class rksla3_lcvpmk5_viv_generic_grey {
   //     vItemSpace = 25;
   //     conditions = "";
   //     price = 0;
   //     fuel = "fuel_6";
   //     textures[] = {};
   // };
	
	/* ///////////// Pompier ///////////// */
	
    class brancardch {
        vItemSpace = 25;
        conditions = "";
        price = 800;
        fuel = "fuel_1";
        textures[] = { };
    };
	
    class devidoirch {
        vItemSpace = 25;
        conditions = "";
        price = 800;
        fuel = "fuel_1";
        textures[] = { };
    };
	
    class devidoirchvsr {
        vItemSpace = 25;
        conditions = "";
        price = 800;
        fuel = "fuel_1";
        textures[] = { };
    };
	
    class berlingo2_vlcg {
        vItemSpace = 25;
        conditions = "";
        price = 15000;
        fuel = "fuel_1";
        textures[] = { };
    };
	
    class chduster14_vlhr {
        vItemSpace = 25;
        conditions = "";
        price = 10000;
        fuel = "fuel_1";
        textures[] = { };
    };
	
    class EPA {
        vItemSpace = 25;
        conditions = "";
        price = 100000;
        fuel = "fuel_1";
        textures[] = { };
    };
	
    class chepa_Mercedes_Atego_1530 {
        vItemSpace = 25;
        conditions = "";
        price = 100000;
        fuel = "fuel_1";
        textures[] = { };
    };
	
    class fcch {
        vItemSpace = 25;
        conditions = "";
        price = 100000;
        fuel = "fuel_1";
        textures[] = { };
    };
	
    class chfmogp {
        vItemSpace = 25;
        conditions = "";
        price = 100000;
        fuel = "fuel_1";
        textures[] = { };
    };
	
    class VSR {
        vItemSpace = 25;
        conditions = "";
        price = 90000;
        fuel = "fuel_1";
        textures[] = { };
    };
	
    class chVSAV_Sprinter {
        vItemSpace = 25;
        conditions = "";
        price = 20000;
        fuel = "fuel_1";
        textures[] = { };
    };
	
    class chvsavar_sprinter {
        vItemSpace = 25;
        conditions = "";
        price = 30000;
        fuel = "fuel_1";
        textures[] = { };
    };
	
    class PMA {
        vItemSpace = 25;
        conditions = "";
        price = 90000;
        fuel = "fuel_1";
        textures[] = { };
    };
	
    class chps5g {
        vItemSpace = 25;
        conditions = "";
        price = 90000;
        fuel = "fuel_1";
        textures[] = { };
    };
	
    class VPC {
        vItemSpace = 25;
        conditions = "";
        price = 50000;
        fuel = "fuel_1";
        textures[] = { };
    };

    class EC135SClu {
        vItemSpace = 25;
        conditions = "";
        price = 3500000;
        fuel = "fuel_6";
        textures[] = { };
    };

    class C_rescue_01_F {
        vItemSpace = 2500000;
        conditions = "";
        price = 0;
        fuel = "fuel_1";
        textures[] = { };
    };

	/* ///////////// SAMU ///////////// */
	
    class EC135SAlu {
        vItemSpace = 25;
        conditions = "";
        price = 3500000;
        fuel = "fuel_6";
        textures[] = { };
    };
	
	class mondeoswch_samu {
        vItemSpace = 25;
        conditions = "";
        price = 35000;
        fuel = "fuel_1";
        textures[] = { };
    };
	
	class ranger17ch_samu {
        vItemSpace = 25;
        conditions = "";
        price = 40000;
        fuel = "fuel_1";
        textures[] = { };
    };
	
	class ch_umh_iveco {
        vItemSpace = 25;
        conditions = "";
        price = 30000;
        fuel = "fuel_1";
        textures[] = { };
    };

	/* ///////////// DIR ///////////// */
	
    class chbalayeuse {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 50000;
        fuel = "fuel_1";
        textures[] = {};
    };

    class chchariot {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 35000;
        fuel = "fuel_1";
        textures[] = {};
    };

    class KangooII1_DIR {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 10000;
        fuel = "fuel_1";
        textures[] = {};
    };

    class Master3_DIR {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 45000;
        fuel = "fuel_1";
        textures[] = {};
    };

    class d3s_baumaschinen {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 36000;
        fuel = "fuel_1";
        textures[] = {};
    };

    class d3s_W2100 {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 100000;
        fuel = "fuel_1";
        textures[] = {};
    };

    class ClioIV_DIR {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 100000;
        fuel = "fuel_1";
        textures[] = {};
    };

    class DIR_peugeot_expert {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 25000;
        fuel = "fuel_1";
        textures[] = {};
    };

    class Trafic3_DIR {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 15000;
        fuel = "fuel_1";
        textures[] = {};
    };

    class DIR_benne_orange {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 80000;
        fuel = "fuel_1";
        textures[] = {};
    };

    class DIR_gors_benne {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 100000;
        fuel = "fuel_1";
        textures[] = {};
    };

    class DIR_renault_saleuse {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 100000;
        fuel = "fuel_1";
        textures[] = {};
    };

    /* ///////////// DEPANNEUR ///////////// */

    
    class depanneuse_pl  {
        vItemSpace = 100;
        conditions = "";
        price = 145000;
        fuel = "fuel_1";
        textures[] = { };
    };

    class depanneuse {
        vItemSpace = 100;
        conditions = "";
        price = 200000;
        fuel = "fuel_1";
        textures[] = { };
    };
	
    /* ///////////// GOUVERNEMENT ///////////// */	

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
      
    class d3s_tahoe_EX {
        vItemSpace = 90;
        conditions = "license_civ_driver";
        price = 210000;
        fuel = "fuel_2";
        textures[] = { };
    };


    class d3s_w212s_13_EX {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 240000;
        fuel = "fuel_2";
        textures[] = { };
    };

    class AlessioBarrack {
        vItemSpace = 260;
        conditions = "license_civ_driver";
        price = 300000;
        fuel = "fuel_2";
        textures[] = { };
    };

    class I_Heli_light_03_unarmed_F {
        vItemSpace = 0;
        conditions = "license_civ_pilot";
        price = 5000000;
        fuel = "fuel_6";
        textures[] = { };
    };

    class O_Heli_Light_02_unarmed_F {
        vItemSpace = 0;
        conditions = "license_civ_pilot || {license_med_mAir} || {(playerSide isEqualTo west)}";
        price = 3500000;
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
        price = 1250000;
        fuel = "fuel_6";
        textures[] = { };
    };

    /* ///////////// CIVIL AERIEN ///////////// */ 

    class C_Plane_Civil_01_F {
        vItemSpace = 0;
        conditions = "license_civ_pilot";
        price = 548270;
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
        price = 2000000;
        fuel = "fuel_6";
        textures[] = { };
    };

    class C_Heli_Light_01_civil_F {
        vItemSpace = 0;
        conditions = "license_civ_pilot";
        price = 1600000;
        fuel = "fuel_6";
        textures[] = { };
    };

    class B_Heli_Light_01_civil_F {
        vItemSpace = 0;
        conditions = "license_civ_pilot";
        price = 10053270;
        fuel = "fuel_6";
        textures[] = { };
    };

    class d3s_AS_365 {
        vItemSpace = 0;
        conditions = "license_civ_pilot";
        price = 25000000;
        fuel = "fuel_6";
        textures[] = { };
    };

    /* ///////////// CRAFT ///////////// */ 
   

    class chBeetle_53 {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_2";
        textures[] = { };
    };
	
    class Alessio190Scarface {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_2";
        textures[] = { };
    };
   class fgtz3 {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_2";
        textures[] = { };
    };
   class V12_S15_FNF {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_2";
        textures[] = { };
    };
   class V12_S2001_SUKI {
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

    class ixmrdrift {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_2";
        textures[] = { };
    };

    class V12_EVO7 {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_2";
        textures[] = { };
    };

    class d3s_wrx_17_FnF8 {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        fuel = "fuel_2";
        textures[] = { };
    };

    class d3s_svr_17_007 {
        vItemSpace = 150;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        fuel = "fuel_2";
        textures[] = { };
    };
	
	class d3s_kuruma_gtaV {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 350000;
        fuel = "fuel_2";
        textures[] = {
            { "Black", "civ", {
                "#(argb,8,8,3)color(0,0,0.0,1)",
                "d3s_kuruma_gtaV\data\vehicle_generic_tyrewallblack.paa",
                "d3s_cars_core\data\glass.paa",
                "#(argb,8,8,3)color(0,0,0.0,1)"
            }, "" }};
    };

    class AlessioRS4Gofast {
        vItemSpace = 150;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        fuel = "fuel_2";
        textures[] = { };
    };

    class AlessioRS5Gofast {
        vItemSpace = 150;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        fuel = "fuel_2";
        textures[] = { };
    };

    class AlessioM5Gofast {
        vItemSpace = 150;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        fuel = "fuel_2";
        textures[] = { };
    };
	/* ///////////// UPS ///////////// */
	
	class Hugpo_UPS_Sprinter {
        vItemSpace = 0;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 5000;
        fuel = "fuel_1";
        textures[] = { };
    };
		
	/* ///////////// A GAGNER ///////////// */

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
	
	class V12_RX7VIELSIDE {
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
	
	class V12_SLAPJACK {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_2";
        textures[] = { };
    };
	class V12_RT {
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

    class d3s_survolt_10 {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_2";
        textures[] = { };
    };

    class V12_RS7BW {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_2";
        textures[] = { };
    };

    class GallardoStreet {
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

    class V12_2CV_NOIR {
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

    class chaustin_mb {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_1";
        price = 25000;
        textures[] = { };
    };

    class V12_CIVIC_TODO {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_1";
        price = 26500;
        textures[] = { };
    };

    class chaustin_uk {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_1";
        price = 27000;
        textures[] = { };
    };

    class V12_CORRADO_ROUGE {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_1";
        price = 29300;
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
        price = 29900;
        textures[] = { };
    };

    class d3s_javelin_72 {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_2";
        price = 32800;
        textures[] = { };
    };

    class chdauphine_yellow {
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
        price = 35000;
        textures[] = { };
    };
	
    class d3s_skylark_54 {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_2";
        price = 37900;
        textures[] = { };
    };
	
    class V12_MK21 {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_2";
        price = 39900;
        textures[] = { };
    };
	
    class V12_S2000_NOIR {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_2";
        price = 43900;
        textures[] = { };
    };

    class chKarmannGhia {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_2";
        price = 44800;
        textures[] = { };
    };

    class mgrace1 {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_2";
        price = 46000;
        textures[] = { };
    };

    class V12_ELCAMINO {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_2";
        price = 47100;
        textures[] = { };
    };

    class chT1 {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_2";
        price = 49500;
        textures[] = { };
    };

    class V12_VENDURAM {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_2";
        price = 50300;
        textures[] = { };
    };

    class d3s_hornet_54 {
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
        price = 56000;
        textures[] = { };
    };

    class V12_AE86_INITIAL_D {
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
        price = 58500;
        textures[] = { };
    };

    class V12_CHEVELLESSBJ_NOIR {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_2";
        price = 61600;
        textures[] = { };
    };

    class d3s_roadrunner_71_GTX {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_2";
        price = 63500;
        textures[] = { };
    };

    class d3s_eldorado_68 {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_2";
        price = 69900;
        textures[] = { };
    };

    class V12_Z4 {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_2";
        price = 77100;
        textures[] = { };
    };

    class chR5Turbo {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_2";
        price = 79600;
        textures[] = { };
    };

    class d3s_challenger_70 {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_2";
        price = 799000;
        textures[] = { };
    };

    class V12_BELAIR_BLEU {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_2";
        price = 89700;
        textures[] = { };
    };

    class V12_COBRA_KAKI {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_2";
        price = 100000;
        textures[] = { };
    };

    class cha110 {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_2";
        price = 130000;
        textures[] = { };
    };

    class Alessio190 {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_2";
        price = 179000;
        textures[] = { };
    };

    class d3s_300SL_55 {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_2";
        price = 1300000;
        textures[] = { };
    };

    class ch250_GTO_rouge {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        fuel = "fuel_2";
        price = 2500000;
        textures[] = { };
    };
};
