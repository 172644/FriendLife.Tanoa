/*
    Author: Maxence
    Web site: www.the-programmer.com
    Discord: https://discord.the-programmer.com

    Terms of use:
        - This file is forbidden unless you have permission from the author. If you have this file without permission to use it please do not use it and do not share it.
        - If you have permission to use this file, you can use it on your server however it is strictly forbidden to share it.
        - Out of respect for the author please do not delete this information.
*/
class Max_Driving_Exam_Result {
   idd = 5910;
   name = "Max_Driving_Exam_Result";
   movingenable = false;
   enablesimulation = true;
   class controlsBackground
   {
       class background : Life_RscPicture
       {
           idc = 5911;
           text = "";
           x = 0.2453125 * safezoneW + safezoneX;
           y = 0.0691347099311705 * safezoneH + safezoneY;
           w = 0.5 * safezoneW;
           h = 0.9 * safezoneH;
       };
   };
   class controls
   {
       class title : Life_RscTextDrivingE
       {
           text = "";
           x = 0.368229166666667 * safezoneW + safezoneX;
           y = 0.298517944936087 * safezoneH + safezoneY;
           h = 0.0544810717797443 * safezoneH;
           w = 0.257291666666666 * safezoneW;
           idc = 5912;
           colorText[] = {0,0,0,1};
           shadow = 0;
       };
       class subtitle : Life_RscStructuredTextDrivingE
       {
           text = "";
           x = 0.368229166666667 * safezoneW + safezoneX;
           y = 0.34 * safezoneH + safezoneY;
           h = 0.08 * safezoneH;
           w = 0.26 * safezoneW;
           idc = 5913;
       };
       class title_grid : Life_RscTextDrivingE
       {
           text = "";
           x = 0.4 * safezoneW + safezoneX;
           y = 0.4325 * safezoneH + safezoneY;
           h = 0.0243997050147492 * safezoneH;
           w = 0.174479166666666 * safezoneW;
           idc = 5914;
           colorText[] = {0,0,0,1};
           shadow = 0;
       };
       class title_columns : Life_RscTextDrivingE
       {
           text = "";
           x = 0.5421875 * safezoneW + safezoneX;
           y = 0.42 * safezoneH + safezoneY;
           h = 0.0243997050147492 * safezoneH;
           w = 0.0864583333333333 * safezoneW;
           idc = 5915;
           colorText[] = {0,0,0,1};
           shadow = 0;
       };
       class criteria_1 : Life_RscTextDrivingE
       {
           text = "";
           x = 0.368229166666667 * safezoneW + safezoneX;
           y = 0.468225663716814 * safezoneH + safezoneY;
           h = 0.0243997050147492 * safezoneH;
           w = 0.174479166666666 * safezoneW;
           idc = 5916;
           colorText[] = {0,0,0,1};
           shadow = 0;
       };
       class criteria_2 : Life_RscTextDrivingE
       {
           text = "";
           x = 0.368229166666667 * safezoneW + safezoneX;
           y = 0.49271656833825 * safezoneH + safezoneY;
           h = 0.0214498525073746 * safezoneH;
           w = 0.174479166666666 * safezoneW;
           idc = 5917;
           colorText[] = {0,0,0,1};
           shadow = 0;
       };
       class criteria_3 : Life_RscTextDrivingE
       {
           text = "";
           x = 0.368229166666667 * safezoneW + safezoneX;
           y = 0.516315388397247 * safezoneH + safezoneY;
           h = 0.0214498525073746 * safezoneH;
           w = 0.174479166666666 * safezoneW;
           idc = 5918;
           colorText[] = {0,0,0,1};
           shadow = 0;
       };
       class criteria_4 : Life_RscTextDrivingE
       {
           text = "";
           x = 0.368229166666667 * safezoneW + safezoneX;
           y = 0.539914208456244 * safezoneH + safezoneY;
           h = 0.0214498525073746 * safezoneH;
           w = 0.174479166666666 * safezoneW;
           idc = 5919;
           colorText[] = {0,0,0,1};
           shadow = 0;
       };
       class subtotal_text : Life_RscTextDrivingE
       {
           text = "";
           x = 0.368229166666667 * safezoneW + safezoneX;
           y = 0.562529744346116 * safezoneH + safezoneY;
           h = 0.0214498525073746 * safezoneH;
           w = 0.208333333333333 * safezoneW;
           idc = 5920;
           colorText[] = {0,0,0,1};
           shadow = 0;
       };
       class total_text : Life_RscTextDrivingE
       {
           text = "";
           x = 0.5421875 * safezoneW + safezoneX;
           y = 0.586466322517208 * safezoneH + safezoneY;
           h = 0.022186578171091 * safezoneH;
           w = 0.0515624999999999 * safezoneW;
           idc = 5921;
           colorText[] = {0,0,0,1};
           shadow = 0;
       };
       class date_and_place : Life_RscTextDrivingE
       {
           text = "";
           x = 0.371875000000001 * safezoneW + safezoneX;
           y = 0.73067133726647 * safezoneH + safezoneY;
           h = 0.0214498525073746 * safezoneH;
           w = 0.181770833333333 * safezoneW;
           idc = 5922;
           colorText[] = {0,0,0,1};
           shadow = 0;
       };
       class grid_E_1 : Life_RscPicture
       {
           idc = 5923;
           text = "";
           x = 0.5421875 * safezoneW + safezoneX;
           y = 0.468225663716814 * safezoneH + safezoneY;
           w = 0.0177083333333333 * safezoneW;
           h = 0.0243997050147492 * safezoneH;
       };
       class grid_0_1 : Life_RscPicture
       {
           idc = 5924;
           text = "";
           x = 0.559895833333333 * safezoneW + safezoneX;
           y = 0.468225663716814 * safezoneH + safezoneY;
           w = 0.0177083333333333 * safezoneW;
           h = 0.0243997050147492 * safezoneH;
       };
       class grid_1_1 : Life_RscPicture
       {
           idc = 5925;
           text = "";
           x = 0.577994791666667 * safezoneW + safezoneX;
           y = 0.468225663716814 * safezoneH + safezoneY;
           w = 0.0177083333333333 * safezoneW;
           h = 0.0243997050147492 * safezoneH;
       };
       class grid_2_1 : Life_RscPicture
       {
           idc = 5926;
           text = "";
           x = 0.5931640625 * safezoneW + safezoneX;
           y = 0.468225663716814 * safezoneH + safezoneY;
           w = 0.0177083333333333 * safezoneW;
           h = 0.0243997050147492 * safezoneH;
       };
       class grid_3_1 : Life_RscPicture
       {
           idc = 5927;
           text = "";
           x = 0.6103515625 * safezoneW + safezoneX;
           y = 0.468225663716814 * safezoneH + safezoneY;
           w = 0.0177083333333333 * safezoneW;
           h = 0.0243997050147492 * safezoneH;
       };
       class grid_E_2 : Life_RscPicture
       {
           idc = 5928;
           text = "";
           x = 0.5421875 * safezoneW + safezoneX;
           y = 0.49271656833825 * safezoneH + safezoneY;
           w = 0.0177083333333333 * safezoneW;
           h = 0.0243997050147492 * safezoneH;
       };
       class grid_0_2 : Life_RscPicture
       {
           idc = 5929;
           text = "";
           x = 0.560416666666667 * safezoneW + safezoneX;
           y = 0.49271656833825 * safezoneH + safezoneY;
           w = 0.0177083333333333 * safezoneW;
           h = 0.0243997050147492 * safezoneH;
       };
       class grid_1_2 : Life_RscPicture
       {
           idc = 5930;
           text = "";
           x = 0.577994791666667 * safezoneW + safezoneX;
           y = 0.49271656833825 * safezoneH + safezoneY;
           w = 0.0177083333333333 * safezoneW;
           h = 0.0243997050147492 * safezoneH;
       };
       class grid_2_2 : Life_RscPicture
       {
           idc = 5931;
           text = "";
           x = 0.5931640625 * safezoneW + safezoneX;
           y = 0.49271656833825 * safezoneH + safezoneY;
           w = 0.0177083333333333 * safezoneW;
           h = 0.0243997050147492 * safezoneH;
       };
       class grid_3_2 : Life_RscPicture
       {
           idc = 5932;
           text = "";
           x = 0.6103515625 * safezoneW + safezoneX;
           y = 0.49271656833825 * safezoneH + safezoneY;
           w = 0.0177083333333333 * safezoneW;
           h = 0.0243997050147492 * safezoneH;
       };
       class grid_E_3 : Life_RscPicture
       {
           idc = 5933;
           text = "";
           x = 0.5421875 * safezoneW + safezoneX;
           y = 0.516315388397247 * safezoneH + safezoneY;
           w = 0.0177083333333333 * safezoneW;
           h = 0.0243997050147492 * safezoneH;
       };
       class grid_0_3 : Life_RscPicture
       {
           idc = 5934;
           text = "";
           x = 0.559375 * safezoneW + safezoneX;
           y = 0.516315388397247 * safezoneH + safezoneY;
           w = 0.0177083333333333 * safezoneW;
           h = 0.0243997050147492 * safezoneH;
       };
       class grid_1_3 : Life_RscPicture
       {
           idc = 5935;
           text = "";
           x = 0.577994791666667 * safezoneW + safezoneX;
           y = 0.516315388397247 * safezoneH + safezoneY;
           w = 0.0177083333333333 * safezoneW;
           h = 0.0243997050147492 * safezoneH;
       };
       class grid_2_3 : Life_RscPicture
       {
           idc = 5936;
           text = "";
           x = 0.5931640625 * safezoneW + safezoneX;
           y = 0.516315388397247 * safezoneH + safezoneY;
           w = 0.0177083333333333 * safezoneW;
           h = 0.0243997050147492 * safezoneH;
       };
       class grid_3_3 : Life_RscPicture
       {
           idc = 5937;
           text = "";
           x = 0.6103515625 * safezoneW + safezoneX;
           y = 0.516315388397247 * safezoneH + safezoneY;
           w = 0.0177083333333333 * safezoneW;
           h = 0.0243997050147492 * safezoneH;
       };
       class grid_E_4 : Life_RscPicture
       {
           idc = 5938;
           text = "";
           x = 0.5421875 * safezoneW + safezoneX;
           y = 0.539914208456244 * safezoneH + safezoneY;
           w = 0.0177083333333333 * safezoneW;
           h = 0.0243997050147492 * safezoneH;
       };
       class grid_0_4 : Life_RscPicture
       {
           idc = 5939;
           text = "";
           x = 0.559375 * safezoneW + safezoneX;
           y = 0.539914208456244 * safezoneH + safezoneY;
           w = 0.0177083333333333 * safezoneW;
           h = 0.0243997050147492 * safezoneH;
       };
       class grid_1_4 : Life_RscPicture
       {
           idc = 5940;
           text = "";
           x = 0.577994791666667 * safezoneW + safezoneX;
           y = 0.539914208456244 * safezoneH + safezoneY;
           w = 0.0177083333333333 * safezoneW;
           h = 0.0243997050147492 * safezoneH;
       };
       class grid_2_4 : Life_RscPicture
       {
           idc = 5941;
           text = "";
           x = 0.5931640625 * safezoneW + safezoneX;
           y = 0.539914208456244 * safezoneH + safezoneY;
           w = 0.0177083333333333 * safezoneW;
           h = 0.0243997050147492 * safezoneH;
       };
       class grid_3_4 : Life_RscPicture
       {
           idc = 5942;
           text = "";
           x = 0.6103515625 * safezoneW + safezoneX;
           y = 0.539914208456244 * safezoneH + safezoneY;
           w = 0.0177083333333333 * safezoneW;
           h = 0.0243997050147492 * safezoneH;
       };
       class signature : Life_RscPicture
       {
           idc = 5943;
           text = "";
           x = 0.43 * safezoneW + safezoneX;
           y = 0.62 * safezoneH + safezoneY;
           w = 0.0791666666666667 * safezoneW;
           h = 0.0770966076696165 * safezoneH;
       };
       class subtotal_1 : Life_RscTextDrivingE
       {
           text = "";
           x = 0.577994791666667 * safezoneW + safezoneX;
           y = 0.562529744346116 * safezoneH + safezoneY;
           h = 0.0214498525073746 * safezoneH;
           w = 0.015234375 * safezoneW;
           idc = 5944;
           colorText[] = {0,0,0,1};
           shadow = 0;
       };
       class subtotal_2 : Life_RscTextDrivingE
       {
           text = "";
           x = 0.5931640625 * safezoneW + safezoneX;
           y = 0.562529744346116 * safezoneH + safezoneY;
           h = 0.0214498525073746 * safezoneH;
           w = 0.0172526041666669 * safezoneW;
           idc = 5945;
           colorText[] = {0,0,0,1};
           shadow = 0;
       };
       class subtotal_3 : Life_RscTextDrivingE
       {
           text = "";
           x = 0.6103515625 * safezoneW + safezoneX;
           y = 0.562529744346116 * safezoneH + safezoneY;
           h = 0.0214498525073746 * safezoneH;
           w = 0.0172526041666664 * safezoneW;
           idc = 5946;
           colorText[] = {0,0,0,1};
           shadow = 0;
       };
       class total : Life_RscTextDrivingE
       {
           text = "";
           x = 0.5931640625 * safezoneW + safezoneX;
           y = 0.586466322517208 * safezoneH + safezoneY;
           h = 0.022186578171091 * safezoneH;
           w = 0.0339192708333336 * safezoneW;
           idc = 5947;
           colorText[] = {0,0,0,1};
           shadow = 0;
       };
   };
};