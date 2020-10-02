/*
    Author: Maxence
    Web site: www.the-programmer.com
    Discord: https://discord.the-programmer.com

    Terms of use:
        - This file is forbidden unless you have permission from the author. If you have this file without permission to use it please do not use it and do not share it.
        - If you have permission to use this file, you can use it on your server however it is strictly forbidden to share it.
        - Out of respect for the author please do not delete this information.
*/
class Max_Driving_Exam_Intro {
   idd = 5410;
   name = "Max_Driving_Exam_Intro";
   movingenable = false;
   enablesimulation = true;
   class controlsBackground
   {
       class Fond : Life_RscPicture
       {
           idc = 5411;
           text = "";
           x = 0.2453125 * safezoneW + safezoneX;
           y = safezoneY;
           w = 0.5 * safezoneW;
           h = 0.9 * safezoneH;
       };
   };
   class controls
   {
       class text_question : Life_RscStructuredTextDrivingE
       {
           text = "";
           x = 0.277083333333334 * safezoneW + safezoneX;
           y = 0.369311701081613 * safezoneH + safezoneY;
           h = 0.5 * safezoneH;
           w = 0.43 * safezoneW;
           idc = 5412;
       };
   };
};
