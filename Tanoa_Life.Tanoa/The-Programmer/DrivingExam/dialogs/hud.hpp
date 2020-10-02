/*
    Author: Maxence
    Web site: www.the-programmer.com
    Discord: https://discord.the-programmer.com

    Terms of use:
        - This file is forbidden unless you have permission from the author. If you have this file without permission to use it please do not use it and do not share it.
        - If you have permission to use this file, you can use it on your server however it is strictly forbidden to share it.
        - Out of respect for the author please do not delete this information.
*/
class driving_exam_hud {
   idd = 6460;
   name = "driving_exam_hud";
   onload = "uiNamespace setVariable ['driving_exam_hud',(_this select 0)];";
   duration = 9999999;
   class controlsBackground
   {
       class Fond : Life_RscPicture
       {
           idc = 6461;
           text = "";
           x = 0.2453125 * safezoneW + safezoneX;
           y = 0.0691347099311705 * safezoneH + safezoneY;
           w = 0.5 * safezoneW;
           h = 0.9 * safezoneH;
       };
       class map : Life_RscMapControl
       {
           idc = 6462;
           maporientation = 1;
           moveonedges = 1;
           showcountourinterval = 1;
           x = 0.782786143333333 * safezoneW + safezoneX;
           y = 0.0367091484759096 * safezoneH + safezoneY;
           w = 0.21519 * safezoneW;
           h = 0.30598 * safezoneH;
           alphafadestartscale = 0;
           alphafadeendscale = 0;
           colorbackground[] = {0,0,0,0.7};
           colorforest[] = {0,0,0,0};
           colorrocks[] = {0,0,0,0};
           colorforestborder[] = {0,0,0,0};
           colorrocksborder[] = {0,0,0,0};
           colorlevels[] = {0,0,0,0};
           colorpowerlines[] = {0,0,0,0};
           colorrailway[] = {0,0,0,0};
           colormaincountlines[] = {0,0,0,0};
           colorcountlineswater[] = {0,0,0,0};
           colorcountlines[] = {0,0,0,0};
           scalemin = 0.1;
           scalemax = 0.1;
           class Tree
           {
               color[] = {0,0,0,0};
               icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
               size = 12;
               importance = "0.9 * 16 * 0.05";
               coefmin = 0.25;
               coefmax = 4;
               idc = 1000;
           };
           class SmallTree
           {
               color[] = {0,0,0,0};
               icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
               size = 12;
               importance = "0.6 * 12 * 0.05";
               coefmin = 0.25;
               coefmax = 4;
               idc = 1000;
           };
           class Bush
           {
               color[] = {0,0,0,0};
               icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
               size = "14/2";
               importance = "0.2 * 14 * 0.05 * 0.05";
               coefmin = 0.25;
               coefmax = 4;
               idc = 1000;
           };
           class Rock
           {
               color[] = {0,0,0,0};
               icon = "\A3\ui_f\data\map\mapcontrol\rock_ca.paa";
               size = 12;
               importance = "0.5 * 12 * 0.05";
               coefmin = 0.25;
               coefmax = 4;
               idc = 1000;
           };
       };
   };
   class controls
   {
       class text : Life_RscStructuredTextDrivingE
       {
           idc = 6463;
           x = 0.261431976666667 * safezoneW + safezoneX;
           y = 0.804836707964602 * safezoneH + safezoneY;
           w = 0.241693023333333 * safezoneW;
           h = 0.0879853176007867 * safezoneH;
       };
       class time_spend : Life_RscTextDrivingE
       {
           idc = 6464;
           x = 0.666145833333333 * safezoneW + safezoneX;
           y = 0.822025565388397 * safezoneH + safezoneY;
           w = 0.0692708333333337 * safezoneW;
           h = 0.0216322517207471 * safezoneH;
       };
       class distance_travelled : Life_RscTextDrivingE
       {
           idc = 6465;
           x = 0.666145833333333 * safezoneW + safezoneX;
           y = 0.871189773844641 * safezoneH + safezoneY;
           w = 0.0692708333333337 * safezoneW;
           h = 0.0216322517207471 * safezoneH;
       };
       class goal_distance : Life_RscTextDrivingE
       {
           idc = 6466;
           x = 0.549843333333333 * safezoneW + safezoneX;
           y = 0.906915638151426 * safezoneH + safezoneY;
           w = 0.0543233333333337 * safezoneW;
           h = 0.0339977 * safezoneH;
       };
       class left_arrow : Life_RscPicture
       {
           idc = 6467;
           text = "";
           x = 0.194 * safezoneW + safezoneX;
           y = 0.79646017699115 * safezoneH + safezoneY;
           w = 0.0572916666666667 * safezoneW;
           h = 0.103244837758112 * safezoneH;
       };
       class right_arrow : Life_RscPicture
       {
           idc = 6468;
           text = "";
           x = 0.742 * safezoneW + safezoneX;
           y = 0.795968534906588 * safezoneH + safezoneY;
           w = 0.0572916666666667 * safezoneW;
           h = 0.103244837758112 * safezoneH;
       };
       class speed_limit : Life_RscTextDrivingE
       {
           idc = 6469;
           x = 0.519010416666666 * safezoneW + safezoneX;
           y = 0.846607669616519 * safezoneH + safezoneY;
           w = 0.11015625 * safezoneW;
           h = 0.0452310717797442 * safezoneH;
           sizeEx = 0.05;
       };
   };
};