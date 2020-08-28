////////////////////////////////////////////////////////
// Authors: Kureo & Zalac                             //
// Credit: Danny									  //
////////////////////////////////////////////////////////

class new_HUD {
	idd = 20099;
	duration = 1e+1000;
	movingEnable = 0;
	fadein = 0;
	fadeout = 0;
	name = "playerHUD";
	onLoad = "uiNamespace setVariable ['playerHUD',_this select 0]";
	objects[] = {};
	class controlsBackground {

		// HUD Dx
		
		/*class SurvivalBackground_color: Life_RscPicture {
			colorBackground[] = {0.02,0.06,0.06,1};
			idc = -1;
			text = "textures\hud_2.paa";
		    x = 0.86 * safezoneW + safezoneX;
		    y = 0.835 * safezoneH + safezoneY;
		    //y = 0.97 * safezoneH + safezoneY;
			w = 0.136 * safezoneW;
			h = 0.060 * safezoneH;
		};*/
		class SurvivalBackground_water: Life_RscPicture {
			colorBackground[] = {0.02,0.06,0.06,1};
			colorFrame[] = {0,0,0,1};
			idc = -1;
			text = "textures\hud\water.paa";
		    x = 0.86 * safezoneW + safezoneX;
		    y = 0.835 * safezoneH + safezoneY;
		    //y = 0.97 * safezoneH + safezoneY;
			w = 0.1067 * safezoneW;
			h = 0.060 * safezoneH;
		};
		class SurvivalBackground_food: Life_RscPicture {
			colorBackground[] = {0.02,0.06,0.06,1};
			colorFrame[] = {0,0,0,1};
			idc = -1;
			text = "textures\hud\food.paa";
		    x = 0.86 * safezoneW + safezoneX;
		    y = 0.997 * safezoneH + safezoneY;
		    //y = 0.97 * safezoneH + safezoneY;
			w = 0.1067 * safezoneW;
			h = 0.060 * safezoneH;
		};
		class SurvivalBackground: Life_RscPicture {
			colorBackground[] = {0.02,0.06,0.06,1};
			colorFrame[] = {0,0,0,1};
			idc = -1;
			text = "textures\hud\hud.paa";
		    x = 0.86 * safezoneW + safezoneX;
		    y = 0.935 * safezoneH + safezoneY;
		    //y = 0.97 * safezoneH + safezoneY;
			w = 0.136 * safezoneW;
			h = 0.060 * safezoneH;
		};
		/*class SurvivalBackground: Life_RscPicture {
			colorBackground[] = {0.02,0.06,0.06,0.7};
			idc = -1;
			text = "textures\hud64.paa";
		    x = 0.858 * safezoneW + safezoneX;
		    y = 0.832 * safezoneH + safezoneY;
		    //y = 0.97 * safezoneH + safezoneY;
			w = 0.124 * safezoneW;
			h = 0.055 * safezoneH;
		};*/
		/*class BarraSfondoVita: Life_RscText {
			colorBackground[] = {0.06,0.06,0.06,0.6};
			idc = -1;
			text = "";
			x = 0.912312 * safezoneW + safezoneX;
			y = 0.749 * safezoneH + safezoneY;
			w = 0.0864 * safezoneW;
			h = 0.0275 * safezoneH;
		};*/
		/*class BarraSfondoFame: Life_RscText {
			colorBackground[] = {0.06,0.06,0.06,0.8};
			idc = -1;
			text = "";
			x = 0.912312 * safezoneW + safezoneX;
			y = 0.813624 * safezoneH + safezoneY;
			w = 0.0864 * safezoneW;
			h = 0.0275 * safezoneH;
		};
		class BarraSfondoSete: Life_RscText {
			colorBackground[] = {0.06,0.06,0.06,0.8};
			idc = -1;
			text = "";
			x = 0.912312 * safezoneW + safezoneX;
			y = 0.88081 * safezoneH + safezoneY;
			w = 0.0864 * safezoneW;
			h = 0.0275 * safezoneH;
		};*/
		/*class Vita_HUD: Life_RscPicture {
			colorBackground[] = {0.02,0.06,0.06,1};
			idc = -1;
			text = "icons\vita.paa";
			x = 0.883312 * safezoneW + safezoneX;
			y = 0.737 * safezoneH + safezoneY;
			w = 0.02751 * safezoneW;
			h = 0.049 * safezoneH;
		};*/
		/*class Fame_HUD: Life_RscPicture {
			idc = -1;
			text = "icons\fame2.paa";
			x = 0.883312 * safezoneW + safezoneX;
			y = 0.803 * safezoneH + safezoneY;
			w = 0.02751 * safezoneW;
			h = 0.049 * safezoneH;
		};
		class Sete_HUD: Life_RscPicture {
			colorBackground[] = {0.02,0.06,0.06,1};
			idc = -1;
			text = "icons\sete.paa";
			x = 0.883312 * safezoneW + safezoneX;
			y = 0.869 * safezoneH + safezoneY;
			w = 0.02751 * safezoneW;
			h = 0.049 * safezoneH;
		};*/
		/*class Info_Progress_Salute: Life_RscProgress {
			idc = 1;
			onLoad = "(_this select 0) progressSetPosition 1";
			colorBar[] = {1,0,0,1};
			colorFrame[] = {0,0,0,1};
			x = 0.912312 * safezoneW + safezoneX;
			y = 0.749 * safezoneH + safezoneY;
			w = 0.0864 * safezoneW;
			h = 0.0275 * safezoneH;
		};*/
		//https://i.imgur.com/pYKUDmd.png
		class Info_Progress_Sete: Life_RscProgress {
			idc = 3;
			onLoad = "(_this select 0) progressSetPosition -1";
			colorBar[] = {0.6,0.8,0.9,1};
			colorFrame[] = {0,0,0,1};
			x = 0.89 * safezoneW + safezoneX;
		    y = 0.937 * safezoneH + safezoneY;
			//x = 0.89 * safezoneW + safezoneX;
		    //y = 0.9323 * safezoneH + safezoneY;
			//y = 0.9345 * safezoneH + safezoneY;
			w = 0.075 * safezoneW;
			h = 0.025 * safezoneH;
			//w = 0.07 * safezoneW;
			//h = 0.025 * safezoneH;
		};
		class Info_Progress_Fame: Life_RscProgress {
			idc = 2;
			onLoad = "(_this select 0) progressSetPosition 1";
			colorBar[] = {1,0.4,0,1};
			colorFrame[] = {0,0,0,1};
			x = 0.8915 * safezoneW + safezoneX;
		    y = 0.968 * safezoneH + safezoneY;
			//x = 0.8915 * safezoneW + safezoneX;
		    //y = 0.97 * safezoneH + safezoneY;
		    //y = 0.969 * safezoneH + safezoneY;
			w = 0.075 * safezoneW;
			h = 0.025 * safezoneH;
			//w = 0.07 * safezoneW;
			//h = 0.025 * safezoneH;
		};
	};
	class controls {
		/*class Info_Salute: Life_RscText {
			colorBackground[] = {0.06,0.06,0.06,0};
			idc = 4;
			text = "100%";
			x = 0.912312 * safezoneW + safezoneX;
			y = 0.749 * safezoneH + safezoneY;
			w = 0.0864 * safezoneW;
			h = 0.0275 * safezoneH;
		};*/
		/*class Info_Fame: Life_RscText {
			colorBackground[] = {0.06,0.06,0.06,0};
			idc = 5;
			text = "100%";
			x = 0.912312 * safezoneW + safezoneX;
			y = 0.813624 * safezoneH + safezoneY;
			//w = 0.0864 * safezoneW;
			w = 0.0834 * safezoneW;
			h = 0.0275 * safezoneH;
		};
		class Info_Sete: Life_RscText {
			colorBackground[] = {0.06,0.06,0.06,0};
			idc = 6;
			text = "100%";
			x = 0.912312 * safezoneW + safezoneX;
			y = 0.88081 * safezoneH + safezoneY;
			//w = 0.0864 * safezoneW;
			w = 0.082 * safezoneW;
			h = 0.0275 * safezoneH;
		};*/

		// HUD Sx

		/*class Banca_Icon: Life_RscPicture {
			colorBackground[] = {0.02,0.06,0.06,1};
			idc = -1;
			text = "icons\banca3.paa";
		    x = 0.85699097 * safezoneW + safezoneX;
		    //y = 0.932 * safezoneH + safezoneY;
		    y = 0.97 * safezoneH + safezoneY;
			w = 0.01796 * safezoneW;
			h = 0.032 * safezoneH;
		};
		class Banca_Hud: Life_RscText {
			idc = 7;
			text = ""; 
			colorText[] = {1,1,1,1};
			colorBackground[] = {0.06,0.06,0.06,0.8};
			x = 0.87607012 * safezoneW + safezoneX;
			//y = 0.938 * safezoneH + safezoneY;
			y = 0.973 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class Cash_Icon: Life_RscPicture {
			colorBackground[] = {0.02,0.06,0.06,1};
			idc = -1;
			text = "icons\soldi2.paa";
			x = 0.928813 * safezoneW + safezoneX;
			//y = 0.932 * safezoneH + safezoneY;
			y = 0.97 * safezoneH + safezoneY;
			w = 0.01796 * safezoneW;
			h = 0.032 * safezoneH;
		};
		class Cash_Hud: Life_RscText {
			idc = 8;
			text = ""; 
			colorText[] = {1,1,1,1};
			colorBackground[] = {0.06,0.06,0.06,0.8};
			x = 0.947281 * safezoneW + safezoneX;
			//y = 0.938 * safezoneH + safezoneY;
			y = 0.973 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.022 * safezoneH;
		};
		/*class Polizia_Icon: Life_RscPicture {
			colorBackground[] = {0.02,0.06,0.06,1};
			idc = -1;
			text = "icons\polis.paa";
			x = 0.84499997 * safezoneW + safezoneX;
			y = 0.97 * safezoneH + safezoneY;
			w = 0.01459 * safezoneW;
			h = 0.026 * safezoneH;
		};
		class Polizia_Hud: Life_RscText {
			idc = 9;
			text = "7";
			colorText[] = {1,1,1,1};
			colorBackground[] = {0.06,0.06,0.06,0.8};
			x = 0.8593125 * safezoneW + safezoneX;
			y = 0.973 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.02 * safezoneH;
		};
		class Medici_Icon: Life_RscPicture {
			colorBackground[] = {0.02,0.06,0.06,1};
			idc = -1;
			text = "icons\medici.paa";
			x = 0.8965625 * safezoneW + safezoneX;
			y = 0.97 * safezoneH + safezoneY;
			w = 0.01459 * safezoneW;
			h = 0.026 * safezoneH;
		};
		class Medici_Hud: Life_RscText {
			idc = 10;
			text = "5";
			colorText[] = {1,1,1,1};
			colorBackground[] = {0.06,0.06,0.06,0.8}; 
			x = 0.911875 * safezoneW + safezoneX;
			y = 0.973 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.02 * safezoneH;
		};
		class Civili_Icon: Life_RscPicture {
			colorBackground[] = {0.02,0.06,0.06,1};
			idc = -1;
			text = "icons\civili.paa";
			x = 0.948125 * safezoneW + safezoneX;
			y = 0.97 * safezoneH + safezoneY;
			w = 0.01459 * safezoneW;
			h = 0.026 * safezoneH;
		};
		class Civili_Hud: Life_RscText {
			idc = 11;
			text = "24";
			colorText[] = {1,1,1,1};
			colorBackground[] = {0.06,0.06,0.06,0.8}; 
			x = 0.96337 * safezoneW + safezoneX;
			y = 0.973 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.02 * safezoneH;
		};*/
	};
};

// Format accanto ai civili_info
//class civili_icon: Life_RscPicture {
//			colorBackground[] = {0.02,0.06,0.06,1};
//			idc = -1;
//			text = "icons\civili.paa";
//			x = 0.159687 * safezoneW + safezoneX;
//			y = 0.973 * safezoneH + safezoneY;
//			w = 0.01235 * safezoneW;
//			h = 0.022 * safezoneH;
//		};
//		class civili_info: Life_RscText {
//			idc = 12;
//			text = "4"; 
//			x = 0.172 * safezoneW + safezoneX;
//			y = 0.973 * safezoneH + safezoneY;
//			w = 0.0360937 * safezoneW;
//			h = 0.02 * safezoneH;
//			colorText[] = {1,1,1,1};
//			colorBackground[] = {0.06,0.06,0.06,0.8};
//		};	
