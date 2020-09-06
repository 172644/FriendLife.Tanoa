/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        3: STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*
*/
class Clothing {
	
    class exemple {
        title = "STR_Shops_C_Exemple";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "", "", 0, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
			{ "", "", 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "", "", 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "", "", 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
			{ "", "", 0, "" }
        };
    };
	
	class zara {
        title = "STR_Shops_C_Zara";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "EF_FEM_4_76", "", 400, "" },
			{ "EF_FEM_4_7R", "", 430, "" },
			{ "EF_FEM_4_77R", "", 450, "" },
			{ "EF_FEM_4_72ADR", "", 460, "" },
			{ "EF_FEM_4_2LPB2", "", 480, "" },
			{ "EF_FEM_4_2LPBP2", "", 490, "" },
			{ "EF_FEM_4A2_2", "", 490, "" },
			{ "EF_FEM_4_2PP2", "", 490, "" },
			{ "EF_FEM_4_2BL2", "", 500, "" },
			{ "EF_FEM_4_2B2", "", 500, "" },
			{ "EF_FEM_4_2PP", "", 500, "" },
			{ "EF_FEM_4_2SG2", "", 510, "" },
			{ "EF_FEM_3_9_2W2", "", 510, "" },
			{ "EF_FEM_3_9_2V2", "", 530, "" },
			{ "EF_FEM_3_9_2K2", "", 550, "" },
			{ "EF_FEM_3_9_2BL", "", 560, "" },
			{ "EF_FEM_3_9_2B2", "", 590, "" },
			{ "EF_FEM_3", "", 600, "" },
			{ "EF_FEM_3_3LPBP3", "", 620, "" },
			{ "EF_FEM_3_3LPBL3", "", 630, "" },
			{ "EF_FEM_3_77R2", "", 650, "" },
			{ "EF_FEM_62", "", 660, "" },
			{ "EF_FEM_3_3LPBPS3", "", 680, "" },
			{ "EF_FEM_3_3LPB2", "", 700, "" },
			{ "EF_FEM_3_3_PUNK", "", 710, "" },
			{ "EF_FEM_3_8_2BKBKW", "", 730, "" },
			{ "EF_FEM_3_8_BKBK", "", 750, "" },
			{ "EF_FEM_3A2_2", "", 780, "" },
			{ "EF_FEM_3_9BL3", "", 800, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
			{ "EF_FBNE_BK", "", 150, "" },
			{ "EF_FBNE_BL", "", 150, "" },
			{ "EF_FBNE_BR", "", 150, "" },
			{ "EF_FBNE_R", "", 150, "" },
			{ "EF_FBNE_V", "", 150, "" },
			{ "EF_FBNE_W", "", 150, "" },
			{ "EF_FHAT_BK", "", 200, "" },
			{ "EF_FHAT_BW", "", 200, "" },
			{ "EF_FHAT_CL", "", 200, "" },
			{ "EF_FHAT_PI", "", 200, "" },
			{ "EF_FHAT_SG", "", 200, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "EF_FSG_T", "", 200, "" },
			{ "EF_FSG_BL", "", 200, "" },
			{ "EF_FSG_P", "", 200, "" },
			{ "EF_FSG_R", "", 200, "" },
			{ "EF_FSG_W", "", 200, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "", "", 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_OutdoorPack_blk", "", 500, "" },
            { "B_AssaultPack_khk", "", 2000, "" },
            { "B_AssaultPack_dgtl", "", 2000, "" },
            { "B_AssaultPack_rgr", "", 2000, "" },
            { "B_AssaultPack_sgg", "", 2000, "" },
            { "B_AssaultPack_blk", "", 2000, "" },
            { "B_AssaultPack_cbr", "", 2000, "" },
            { "B_AssaultPack_mcamo", "", 2000, "" },
            { "B_AssaultPack_tna_f", "", 2000, "" }, //Apex DLC
            { "B_TacticalPack_oli", "", 2500, "" },
            { "B_Kitbag_mcamo", "", 3500, "" },
            { "B_Kitbag_sgg", "", 3500, "" },
            { "B_Kitbag_cbr", "", 3500, "" },
            { "B_FieldPack_blk", "", 5000, "" },
            { "B_FieldPack_ocamo", "", 5000, "" },
            { "B_FieldPack_oucamo", "", 5000, "" },
            { "B_FieldPack_ghex_f", "", 5000, "" }, //Apex DLC
            { "B_Bergen_sgg", "", 6500, "" },
            { "B_Bergen_mcamo", "", 6500, "" },
            { "B_Bergen_rgr", "", 6500, "" },
            { "B_Bergen_blk", "", 6500, "" },
            { "B_Carryall_ocamo", "", 7500, "" },
            { "B_Carryall_oucamo", "", 7500, "" },
            { "B_Carryall_mcamo", "", 7500, "" },
            { "B_Carryall_oli", "", 7500, "" },
            { "B_Carryall_khk", "", 7500, "" },
            { "B_Carryall_cbr", "", 7500, "" },
            { "B_Carryall_ghex_f", "", 7500, "" }, //Apex DLC
            { "B_Bergen_dgtl_f", "", 9500, "" }, //Apex DLC
            { "B_Bergen_tna_f", "", 9500, "" } //Apex DLC
        };
    };

    class bruce {
        title = "STR_Shops_C_Bruce";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_OrestesBody", "", 300, "" },
            { "U_BG_Guerilla2_1", "", 300, "" },
            { "U_I_G_Story_Protagonist_F", "", 325, "" },
            { "U_Marshal", "", 325, "" },
            { "U_C_Man_casual_2_F", "", 325, "" },
            { "TRYK_U_B_BLK_T_WH", "", 350, "" },
            { "TRYK_U_B_RED_T_BG_BR", "", 350, "" },
            { "TRYK_U_denim_jersey_blk", "", 350, "" },
            { "TRYK_shirts_DENIM_WH", "", 350, "" },
            { "TRYK_shirts_DENIM_R", "", 360, "" },
            { "EF_MX1", "", 370, "" },
            { "TRYK_shirts_DENIM_BL", "", 370, "" },
            { "TRYK_shirts_DENIM_BK", "", 380, "" },
            { "U_NikosBody", "", 390, "" },
            { "U_NikosAgedBody", $STR_C_Civ_Niko, 400, "" },
            { "TRYK_U_B_wh_blk_Rollup_CombatUniform", "", 400, "" },
            { "TRYK_U_B_BLKTANR_CombatUniformTshirt", "", 410, "" },
            { "TRYK_U_B_BLKBLK_R_CombatUniform", "", 430, "" }, 
            { "EF_HM_B2", "", 450, "" },
			{ "EF_HM_B1", "", 450, "" },
			{ "EF_HMARMY_2", "", 460, "" },
			{ "EF_MKJKT2", "", 480, "" },
            { "EF_HM_LPBPS2", "", 500, "" },
            { "EF_HM_LPBW2", "", 500, "" },
            { "EF_HM_LPB2", "", 500, "" },
            { "TRYK_U_B_PCUHsW8", "", 500, "" },
            { "TRYK_U_B_ARO1_CBR_R_CombatUniform", "", 500, "" } 
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Bandanna_camo", "", 120, "" },
            { "H_Bandanna_surfer", "", 130, "" },
            { "H_Bandanna_khk", "", 145, "" },
            { "H_Cap_blu", "", 150, "" },
            { "H_Cap_grn", "", 150, "" },
            { "TRYK_R_CAP_BLK", "", 150, "" },
            { "H_Cap_oli", "", 150, "" },
            { "H_Cap_red", "", 150, "" },
            { "H_Cap_tan", "", 150, "" },
            { "H_Helmet_Skate", "", 150, "" }, //Apex DLC
            { "H_Bandanna_gry", "", 150, "" },
            { "H_Bandanna_sgg", "", 160, "" },
            { "H_Bandanna_cbr", "", 165, "" },
            { "H_StrawHat", "", 225, "" },
            { "H_Hat_brown", "", 276, "" },
            { "H_Hat_grey", "", 280, "" },
            { "H_BandMask_blk", $STR_C_Civ_BandMask, 300, "" },
            { "H_Booniehat_tan", "", 350, "" },
            { "H_Booniehat_grn", "", 350, "" },
			{ "EF_wig_DHBR", "", 350, "" }
			
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Black", "", 20, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Shades_Green", "", 20, "" },
            { "G_Shades_Red", "", 20, "" },
            { "G_Sport_Blackred", "", 25, "" },
            { "G_Sport_BlackWhite", "", 25, "" },
            { "G_Sport_Blackyellow", "", 25, "" },
            { "G_Sport_Checkered", "", 25, "" },
            { "G_Sport_Greenblack", "", 25, "" },
            { "G_Sport_Red", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Squares", "", 50, "" },
            { "G_Aviator", "", 100, "" },
            { "G_Combat", "", 125, "" },
            { "G_Lady_Mirror", "", 150, "" },
            { "G_Lady_Dark", "", 150, "" },
            { "G_Lady_Blue", "", 150, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_OutdoorPack_blk", "", 500, "" },
            { "B_AssaultPack_khk", "", 2000, "" },
            { "B_AssaultPack_dgtl", "", 2000, "" },
            { "B_AssaultPack_rgr", "", 2000, "" },
            { "B_AssaultPack_sgg", "", 2000, "" },
            { "B_AssaultPack_blk", "", 2000, "" },
            { "B_AssaultPack_cbr", "", 2000, "" },
            { "B_AssaultPack_mcamo", "", 2000, "" },
            { "B_AssaultPack_tna_f", "", 2000, "" }, //Apex DLC
            { "B_TacticalPack_oli", "", 2500, "" },
            { "B_Kitbag_mcamo", "", 3500, "" },
            { "B_Kitbag_sgg", "", 3500, "" },
            { "B_Kitbag_cbr", "", 3500, "" },
            { "B_FieldPack_blk", "", 5000, "" },
            { "B_FieldPack_ocamo", "", 5000, "" },
            { "B_FieldPack_oucamo", "", 5000, "" },
            { "B_FieldPack_ghex_f", "", 5000, "" }, //Apex DLC
            { "B_Bergen_sgg", "", 6500, "" },
            { "B_Bergen_mcamo", "", 6500, "" },
            { "B_Bergen_rgr", "", 6500, "" },
            { "B_Bergen_blk", "", 6500, "" },
            { "B_Carryall_ocamo", "", 7500, "" },
            { "B_Carryall_oucamo", "", 7500, "" },
            { "B_Carryall_mcamo", "", 7500, "" },
            { "B_Carryall_oli", "", 7500, "" },
            { "B_Carryall_khk", "", 7500, "" },
            { "B_Carryall_cbr", "", 7500, "" },
            { "B_Carryall_ghex_f", "", 7500, "" }, //Apex DLC
            { "B_Bergen_dgtl_f", "", 9500, "" }, //Apex DLC
            { "B_Bergen_tna_f", "", 9500, "" } //Apex DLC
        };
    };
	
    class manLuxe {
        title = "STR_Shops_C_ManLuxe";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "EF_suit_Y1", "", 1800, "" },
			{ "EF_suit_Y2", "", 1800, "" },
			{ "EF_suit_Y3", "", 1800, "" },
			{ "EF_suit_Y4", "", 1800, "" },
			{ "EF_suit_Y5", "", 1800, "" },
			{ "EF_suit_Y6", "", 1800, "" },
			{ "EF_suit_1", "", 1900, "" },
			{ "EF_suit_2", "", 1900, "" },
			{ "EF_suit_3", "", 1900, "" },
			{ "EF_suit_4", "", 1900, "" },
			{ "EF_suit_5", "", 1900, "" },
			{ "EF_suit_6", "", 1900, "" },
			{ "EF_suit_7", "", 1900, "" },
			{ "EF_suit_8", "", 1900, "" },
			{ "TRYK_SUITS_BLK_F", "", 2000, "" },
			{ "TRYK_SUITS_BR_F", "", 2000, "" },
			{ "EF_M_jkt42", "", 2000, "" },
			{ "EF_M_jkt4", "", 2000, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
			{ "H_Hat_checker", "", 400, "" },
			{ "H_Hat_tan", "", 400, "" },
			{ "H_Hat_blue", "", 400, "" },
			{ "EF_HAT_BK", "", 500, "" },
			{ "EF_HAT_BW", "", 500, "" },
			{ "EF_HAT_CL", "", 500, "" },
			{ "EF_HAT_PI", "", 500, "" },
			{ "EF_HAT_SG", "", 500, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "", "", 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "", "", 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
			{ "", "", 0, "" }
        };
    };
	
    class womenLuxe {
        title = "STR_Shops_C_WomenLuxe";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "EF_FEM_3_9_GR", "", 2000, "" },
			{ "EF_FEM_3_9_BL", "", 2000, "" },
			{ "EF_FEM_3_9_BW", "", 2000, "" },
			{ "EF_FEM_3_9_BK", "", 2000, "" },
			{ "EF_FEM_3_9_2BKBK", "", 2000, "" },
			{ "EF_FEM_3_9_2BWBK", "", 2000, "" },
			{ "EF_FEM_3_9_2GRBK", "", 2000, "" },
			{ "EF_FEM_3_9_2BLRD", "", 2000, "" },
			{ "EF_FEM_3_7", "", 2000, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
			{ "EF_FHcap_BK", "", 300, "" },
			{ "EF_FHcap_BL", "", 300, "" },
			{ "EF_FHcap_C", "", 300, "" },
			{ "EF_FHcap_CY", "", 300, "" },
			{ "EF_FHcap_MG", "", 300, "" },
			{ "EF_FHcap_P", "", 300, "" },
			{ "EF_FHcap_R", "", 300, "" },
			{ "EF_FHcap_SG", "", 300, "" },
			{ "EF_FHcap_PP", "", 300, "" },
			{ "EF_FHcap_W", "", 300, "" },
			{ "EF_FPKL_BK", "", 350, "" },
			{ "EF_FPKL_BL", "", 350, "" },
			{ "EF_FPKL_CY", "", 350, "" },
			{ "EF_FPKL_RD", "", 350, "" },
			{ "EF_FPKL_W", "", 350, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "EF_SC_CF1", "", 300, "" },
			{ "EF_SC_MGF1", "", 300, "" },
			{ "EF_SC_WF1", "", 300, "" },
			{ "EF_SC_TTBRF2", "", 300, "" },
			{ "EF_SC_TTBRK3", "", 300, "" },
			{ "EF_AC1", "", 300, "" },
			{ "EF_AC3", "", 300, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "", "", 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
			{ "EF_FBAG_BK", "", 2500, "" },
			{ "EF_FBAG_BW", "", 2500, "" },
			{ "EF_FBAG_S_BK", "", 3000, "" },
			{ "EF_FBAG_S_BL", "", 3000, "" },
			{ "EF_FBAG_SL_BW", "", 4000, "" },
			{ "EF_FBAG_SL_RD", "", 4000, "" }
        };
    };

    class cop {
        title = "STR_Shops_C_Police";
        conditions = "";
        side = "cop";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
			{ "61", "", 0, "call life_coplevel == 1" },
            { "81", "", 0, "call life_coplevel == 1" },
			{ "31", "", 0, "call life_coplevel == 1" },
			{ "edsr2", "", 0, "call life_coplevel == 1" },
            { "62", "", 0, "call life_coplevel == 2" },
			{ "82", "", 0, "call life_coplevel == 2" },
			{ "32", "", 0, "call life_coplevel == 2" },
			{ "edsr3", "", 0, "call life_coplevel == 2" },
			{ "63", "", 0, "call life_coplevel == 3" },
			{ "83", "", 0, "call life_coplevel == 3" },
			{ "33", "", 0, "call life_coplevel == 3" },
			{ "edsr4", "", 0, "call life_coplevel == 3" },
			{ "64", "", 0, "call life_coplevel == 4" },
			{ "84", "", 0, "call life_coplevel == 4" },
			{ "34", "", 0, "call life_coplevel == 4" },
			{ "edsr5", "", 0, "call life_coplevel == 4" },
			{ "65", "", 0, "call life_coplevel = 5" },
			{ "85", "", 0, "call life_coplevel == 5" },
			{ "35", "", 0, "call life_coplevel == 5" },
			{ "edsr6", "", 0, "call life_coplevel == 5" },
			{ "66", "", 0, "call life_coplevel == 6" },
			{ "86", "", 0, "call life_coplevel == 6" },
			{ "36", "", 0, "call life_coplevel == 6" },
			{ "edsr7", "", 0, "call life_coplevel == 6" },
			{ "67", "", 0, "call life_coplevel == 7" },
			{ "87", "", 0, "call life_coplevel == 7" },
			{ "37", "", 0, "call life_coplevel == 7" },
			{ "edsr8", "", 0, "call life_coplevel == 7" },
			{ "68", "", 0, "call life_coplevel == 8" },
			{ "88", "", 0, "call life_coplevel == 8" },
			{ "38", "", 0, "call life_coplevel == 8" },
			{ "edsr9", "", 0, "call life_coplevel == 8" },
			{ "69", "", 0, "call life_coplevel == 9" },
			{ "89", "", 0, "call life_coplevel == 9" },
			{ "39", "", 0, "call life_coplevel == 9" },
			{ "edsr10", "", 0, "call life_coplevel == 9" },
			{ "70", "", 0, "call life_coplevel == 10" },
			{ "90", "", 0, "call life_coplevel == 10" },
			{ "40", "", 0, "call life_coplevel == 10" },
			{ "edsr11", "", 0, "call life_coplevel == 10" },
			{ "71", "", 0, "call life_coplevel == 11" },
			{ "91", "", 0, "call life_coplevel == 11" },
			{ "41", "", 0, "call life_coplevel == 11" },
			{ "edsr12", "", 0, "call life_coplevel == 11" },
			{ "72", "", 0, "call life_coplevel == 12" },
            { "92", "", 0, "call life_coplevel == 12" },
			{ "42", "", 0, "call life_coplevel == 12" },
			{ "edsr13", "", 0, "call life_coplevel == 12" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
			{ "Casque: V12_CASQUE_GENDARME", "", 0, "call life_coplevel >= 1" },
			{ "501", "", 0, "call life_coplevel == 1" },
			{ "502", "", 0, "call life_coplevel == 2" },
			{ "503", "", 0, "call life_coplevel == 3" },
            { "504", "", 0, "call life_coplevel == 4" },
            { "505", "", 0, "call life_coplevel == 5" },
            { "506", "", 0, "call life_coplevel == 6" },
            { "507", "", 0, "call life_coplevel == 7" },
            { "508", "", 0, "call life_coplevel == 8" },
            { "509", "", 0, "call life_coplevel == 9" },
            { "510", "", 0, "call life_coplevel == 10" },
            { "511", "", 0, "call life_coplevel == 11" },
            { "512", "", 0, "call life_coplevel == 12" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Squares", "", 0, "" },
            { "G_Shades_Blue", "", 0, "" },
            { "G_Sport_Blackred", "", 0, "" },
            { "G_Sport_Checkered", "", 0, "" },
            { "G_Sport_Blackyellow", "", 0, "" },
            { "G_Sport_BlackWhite", "", 0, "" },
            { "G_Shades_Black", "", 0, "" },
            { "G_Lowprofile", "", 0, "" },
            { "G_Combat", "", 0, "" },
            { "G_Aviator", "", 0, "" },
            { "G_Lady_Mirror", "", 0, "" },
            { "G_Lady_Dark", "", 0, "" },
            { "G_Lady_Blue", "", 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "081", "", 0, "call life_coplevel == 1" },
            { "082", "", 0, "call life_coplevel == 2" },
            { "083", "", 0, "call life_coplevel == 3" },
			{ "084", "", 0, "call life_coplevel == 4" },
			{ "085", "", 0, "call life_coplevel == 5" },
			{ "086", "", 0, "call life_coplevel == 6" },
			{ "087", "", 0, "call life_coplevel == 7" },
            { "088", "", 0, "call life_coplevel == 8" },
			{ "089", "", 0, "call life_coplevel == 9" },
			{ "090", "", 0, "call life_coplevel == 10" },
			{ "091", "", 0, "call life_coplevel == 11" },
			{ "092", "", 0, "call life_coplevel == 12" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "jack_sac_invi", "", 0, "call life_coplevel >= 1" },
            { "B_Carryall_cbr", "", 0, "call life_coplevel >= 1" }
        };
    };
	
    class unite {
        title = "STR_Shops_C_Unite";
        conditions = "";
        side = "cop";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "jack_32n_uniform_2", "", 0, "call life_coplevel >= 1" },
			{ "jack_4s_uniform_1", "", 0, "call life_coplevel >= 1" },
            { "jack_tshirt_uniform_1", "", 0, "call life_coplevel >= 1" },
			{ "jack_tshirt_uniform_3", "", 0, "call life_coplevel >= 4" },
			{ "jack_pilote_hel_uniform_1", "", 0, "call life_coplevel >= 4" },
			{ "jack_plongeur_uniform_1", "", 0, "call life_coplevel >= 1" },
			{ "201", "", 0, "call life_coplevel >= 2" },
			{ "jack_4s_uniform_2", "", 0, "call life_coplevel >= 3" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
			{ "901", "", 0, "call life_coplevel >= 1" },
			{ "V12_GIGN_CASQUE1", "", 0, "call life_coplevel >= 2" },
			{ "V12_GIGN_CASQUE_TANK", "", 0, "call life_coplevel >= 3" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "", "", 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "1000", "", 0, "" },
			{ "jack_gilet_lourd_gend_2", "", 0, "call life_coplevel >= 3" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "call life_coplevel >= 1" },
			{ "jack_sac_invi", "", 0, "" }
        };
    };

    class dive {
        title = "STR_Shops_C_Diving";
        conditions = "license_civ_dive";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_B_Wetsuit", "", 2000, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Diving", "", 500, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_RebreatherB", "", 5000, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        conditions = "license_civ_gun";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Rangemaster_belt", "", 4900, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class gang_clothing {
        title = "STR_Shops_C_Gang";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Rangemaster_belt", "", 1900, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        conditions = "";
        side = "med";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "PomMmE_SAPEUR_SP", "", 0, "" },
			{ "PomMmE_FROIDSAPEUR_SP", "", 0, "" },
			{ "PomMmE_CAPORAL_SP", "", 0, "" },
			{ "PomMmE_FROIDCAPORAL_SP", "", 0, "" },
			{ "PomMmE_CAPORALC_SP", "", 0, "" },
			{ "PomMmE_FROIDCAPORALCHEF_SP", "", 0, "" },
			{ "PomMmE_SERGENT_SP", "", 0, "" },
			{ "PomMmE_FROIDSERGENT_SP", "", 0, "" },
			{ "PomMmE_SERGENTC_SP", "", 0, "" },
			{ "PomMmE_FROIDSERGENTC_SP", "", 0, "" },
			{ "PomMmE_ADJUDANT_SP", "", 0, "" },
			{ "PomMmE_FROIDADJUDANT_SP", "", 0, "" },
			{ "PomMmE_ADJUDANTC_SP", "", 0, "" },
			{ "PomMmE_FROIDADJUDANTC_SP", "", 0, "" },
			{ "PomMmE_LIEUTENANT_SP", "", 0, "" },
			{ "PomMmE_FROIDLIEUTENANT_SP", "", 0, "" },
			{ "PomMmE_CAPITAINE_SP", "", 0, "" },
			{ "PomMmE_FROIDCAPITAINE_SP", "", 0, "" },
			{ "PomMmE_COMMANDANT_SP", "", 0, "" },
			{ "PomMmE_FROIDCOMMANDANT_SP", "", 0, "" },
			{ "PomMmE_LTNCOLONEL_SP", "", 0, "" },
			{ "PomMmE_FROIDLTNCOLONEL_SP", "", 0, "" },
			{ "PomMmE_COLONEL_SP", "", 0, "" },
			{ "PomMmE_FROIDCOLONEL_SP", "", 0, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "PomMmE_SAPEUR_BERETSP", "", 0, "" },
			{ "PomMmE_CAPORAL_BERETSP", "", 0, "" },
			{ "PomMmE_CAPORALC_BERETSP", "", 0, "" },
			{ "PomMmE_SERGENT_BERETSP", "", 0, "" },
			{ "PomMmE_SERGENTC_BERETSP", "", 0, "" },
			{ "PomMmE_ADJUDANT_BERETSP", "", 0, "" },
			{ "PomMmE_ADJUDANTC_BERETSP", "", 0, "" },
			{ "PomMmE_LIEUTENANT_BERETSP", "", 0, "" },
			{ "PomMmE_CAPITAINE_BERETSP", "", 0, "" },
			{ "PomMmE_COMMANDANT_BERETSP", "", 0, "" },
			{ "PomMmE_LTNCOLONEL_BERETSP", "", 0, "" },
			{ "PomMmE_COLONEL_BERETSP", "", 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
			{ "G_Aviator", "", 0, "" },
			{ "G_Squares", "", 0, "" },
			{ "G_Squares_Tinted", "", 0, "" },
			{ "G_Spectacles_Tinted", "", 0, "" },
			{ "G_Shades_Black", "", 0, "" },
			{ "G_Shades_Blue", "", 0, "" },
			{ "G_Shades_Red", "", 0, "" },
            { "G_Shades_Green", "", 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "PomMmE_SAC_SP", "", 0, "" },
			{ "SAC_SP", "", 0, "" }
        };
    };

    class reb {
        title = "STR_Shops_C_Rebel";
        conditions = "license_civ_rebel";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_IG_Guerilla1_1", "", 5000, "" },
            { "U_I_G_Story_Protagonist_F", "", 7500, "" },
            { "U_I_G_resistanceLeader_F", "", 11500, "" },
            { "U_IG_leader", "", 15340, "" },
            { "U_O_PilotCoveralls", "", 15610, "" },
            { "U_O_SpecopsUniform_ocamo", "", 17500, "" },
            { "U_O_GhillieSuit", "", 50000, "" },
            { "U_B_T_Soldier_F", "", 50000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_1_F", "", 50000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_2_F", "", 51000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_3_F", "", 50032, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_4_F", "", 50020, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_5_F", "", 50020, "" }, //Apex DLC
            { "U_I_C_Soldier_Camo_F", "", 52000, "" } //Apex DLC
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Bandanna_camo", "", 650, "" },
            { "H_ShemagOpen_khk", "", 800, "" },
            { "H_ShemagOpen_tan", "", 850, "" },
            { "H_Shemag_olive", "", 850, "" },
            { "H_HelmetO_ocamo", "", 2500, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Black", "", 20, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Sport_Blackred", "", 25, "" },
            { "G_Sport_Checkered", "", 25, "" },
            { "G_Sport_Blackyellow", "", 25, "" },
            { "G_Sport_BlackWhite", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Squares", "", 50, "" },
            { "G_Combat", "", 125, "" },
            { "G_Balaclava_blk", "", 150, "" },
            { "G_Balaclava_combat", "", 150, "" },
            { "G_Balaclava_lowprofile", "", 150, "" },
            { "G_Balaclava_oli", "", 150, "" },
            { "G_Bandanna_aviator", "", 150, "" },
            { "G_Bandanna_beast", "", 150, "" },
            { "G_Bandanna_blk", "", 150, "" },
            { "G_Bandanna_khk", "", 150, "" },
            { "G_Bandanna_oli", "", 150, "" },
            { "G_Bandanna_shades", "", 150, "" },
            { "G_Bandanna_sport", "", 150, "" },
            { "G_Bandanna_tan", "", 150, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_BandollierB_cbr", "", 4500, "" },
            { "V_HarnessO_brn", "", 7500, "" },
            { "V_TacVest_khk", "", 12500, "" },
            { "V_TacChestrig_grn_F", "", 17500, "" } //Apex DLC
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_OutdoorPack_blk", "", 500, "" },
            { "B_AssaultPack_khk", "", 2000, "" },
            { "B_AssaultPack_dgtl", "", 2000, "" },
            { "B_AssaultPack_rgr", "", 2000, "" },
            { "B_AssaultPack_sgg", "", 2000, "" },
            { "B_AssaultPack_blk", "", 2000, "" },
            { "B_AssaultPack_cbr", "", 2000, "" },
            { "B_AssaultPack_mcamo", "", 2000, "" },
            { "B_TacticalPack_oli", "", 2500, "" },
            { "B_Kitbag_mcamo", "", 3500, "" },
            { "B_Kitbag_sgg", "", 3500, "" },
            { "B_Kitbag_cbr", "", 3500, "" },
            { "B_FieldPack_blk", "", 5000, "" },
            { "B_FieldPack_ocamo", "", 5000, "" },
            { "B_FieldPack_oucamo", "", 5000, "" },
            { "B_Bergen_sgg", "", 6500, "" },
            { "B_Bergen_mcamo", "", 6500, "" },
            { "B_Bergen_rgr", "", 6500, "" },
            { "B_Bergen_blk", "", 6500, "" },
            { "B_Carryall_ocamo", "", 7500, "" },
            { "B_Carryall_oucamo", "", 7500, "" },
            { "B_Carryall_mcamo", "", 7500, "" },
            { "B_Carryall_oli", "", 7500, "" },
            { "B_Carryall_khk", "", 7500, "" },
            { "B_Carryall_cbr", "", 7500, "" }
        };
    };

    class kart {
        title = "STR_Shops_C_Kart";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_C_Driver_1_black", "", 1500, "" },
            { "U_C_Driver_1_blue", "", 1500, "" },
            { "U_C_Driver_1_red", "", 1500, "" },
            { "U_C_Driver_1_orange", "", 1500, "" },
            { "U_C_Driver_1_green", "", 1500, "" },
            { "U_C_Driver_1_white", "", 1500, "" },
            { "U_C_Driver_1_yellow", "", 1500, "" },
            { "U_C_Driver_2", "", 3500, "" },
            { "U_C_Driver_1", "", 3600, "" },
            { "U_C_Driver_3", "", 3700, "" },
            { "U_C_Driver_4", "", 3700, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_RacingHelmet_1_black_F", "", 1000, "" },
            { "H_RacingHelmet_1_red_F", "", 1000, "" },
            { "H_RacingHelmet_1_white_F", "", 1000, "" },
            { "H_RacingHelmet_1_blue_F", "", 1000, "" },
            { "H_RacingHelmet_1_yellow_F", "", 1000, "" },
            { "H_RacingHelmet_1_green_F", "", 1000, "" },
            { "H_RacingHelmet_1_F", "", 2500, "" },
            { "H_RacingHelmet_2_F", "", 2500, "" },
            { "H_RacingHelmet_3_F", "", 2500, "" },
            { "H_RacingHelmet_4_F", "", 2500, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };
};
