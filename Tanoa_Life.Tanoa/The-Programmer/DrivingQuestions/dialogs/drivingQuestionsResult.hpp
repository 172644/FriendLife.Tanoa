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
class Max_Driving_Questions_Result {
   idd = 9900;
   name = "Max_Driving_Questions_Result";
   movingenable = false;
   enablesimulation = true;
   class controlsBackground
   {
       class Fond : Life_RscPicture
       {
           idc = 9901;
           text = "";
           x = 0.2453125 * safezoneW + safezoneX;
           y = safezoneY;
           w = 0.5 * safezoneW;
           h = 0.9 * safezoneH;
       };
   };
   class controls
   {
       class current_date : Life_RscTextDrivingQ
       {
           idc = 9902;
           text = "";
           x = 0.275000000000001 * safezoneW + safezoneX;
           y = 0.360363815142576 * safezoneH + safezoneY;
           w = 0.113541666666667 * safezoneW;
           h = 0.0225958702064897 * safezoneH;
       };
       class title : Life_RscTextDrivingQ
       {
           idc = 9903;
           text = "";
           x = 0.275000000000001 * safezoneW + safezoneX;
           y = 0.387895771878073 * safezoneH + safezoneY;
           w = 0.261458333333332 * safezoneW;
           h = 0.0565290068829894 * safezoneH;
       };
       class subtitle : Life_RscTextDrivingQ
       {
           idc = 9904;
           text = "";
           x = 0.275000000000001 * safezoneW + safezoneX;
           y = 0.45180924287119 * safezoneH + safezoneY;
           w = 0.354687499999999 * safezoneW;
           h = 0.0289970501474926 * safezoneH;
       };
       class numbers_correct_answers : Life_RscStructuredTextDrivingQ
       {
           idc = 9905;
           text = "";
           x = 0.280729166666667 * safezoneW + safezoneX;
           y = 0.524 * safezoneH + safezoneY;
           w = 0.025520833333333 * safezoneW;
           h = 0.0402949852507373 * safezoneH;
       };
       class numbers_total_answer : Life_RscStructuredTextDrivingQ
       {
           idc = 9906;
           text = "";
           x = 0.311458333333334 * safezoneW + safezoneX;
           y = 0.524 * safezoneH + safezoneY;
           w = 0.024999999999999 * safezoneW;
           h = 0.0402949852507373 * safezoneH;
       };
       class current_city : Life_RscStructuredTextDrivingQ
       {
           idc = 9908;
           text = "";
           x = 0.280729166666667 * safezoneW + safezoneX;
           y = 0.638 * safezoneH + safezoneY;
           w = 0.078645833333333 * safezoneW;
           h = 0.0280137659783678 * safezoneH;
       };
       class separator : Life_RscStructuredTextDrivingQ
       {
           idc = -1;
           text = "-";
           x = 0.359114583333334 * safezoneW + safezoneX;
           y = 0.64 * safezoneH + safezoneY;
           w = 0.0132812499999998 * safezoneW;
           h = 0.0280137659783678 * safezoneH;
       };
       class player_name : Life_RscStructuredTextDrivingQ
       {
           idc = 9909;
           text = "";
           x = 0.372005208333333 * safezoneW + safezoneX;
           y = 0.638 * safezoneH + safezoneY;
           w = 0.0884114583333332 * safezoneW;
           h = 0.0280137659783678 * safezoneH;
       };
       class text_close : Life_RscStructuredTextDrivingQ
       {
           idc = 9910;
           text = "";
           x = 0.652604166666668 * safezoneW + safezoneX;
           y = 0.7 * safezoneH + safezoneY;
           w = 0.0541666666666652 * safezoneW;
           h = 0.034395280235988 * safezoneH;
       };
       class button_close : Life_RscButtonInvisibleDrivingQ
       {
           text = "";
           onbuttonclick = "closeDialog 0;";
           x = 0.652604166666668 * safezoneW + safezoneX;
           y = 0.702064896755162 * safezoneH + safezoneY;
           w = 0.0541666666666652 * safezoneW;
           h = 0.034395280235988 * safezoneH;
           idc = -1;
       };
   };
};