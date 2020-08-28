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
class Max_Driving_Questions {
   idd = 9850;
   name = "Max_Driving_Questions";
   movingenable = false;
   enablesimulation = true;
   class controlsBackground
   {
       class Fond : Life_RscPicture
       {
           idc = 9851;
           text = "";
           x = 0.2453125 * safezoneW + safezoneX;
           y = safezoneY;
           w = 0.5 * safezoneW;
           h = 0.9 * safezoneH;
       };
   };
   class controls
   {
       class question_number : Life_RscStructuredTextDrivingQ
       {
           idc = 9852;
           text = "";
           x = 0.277083333333334 * safezoneW + safezoneX;
           y = 0.346116027531957 * safezoneH + safezoneY;
           w = 0.15 * safezoneW;
           h = 0.0225958702064897 * safezoneH;
       };
       class answers_to_find_number : Life_RscStructuredTextDrivingQ
       {
           idc = 9853;
           text = "";
           x = 0.56 * safezoneW + safezoneX;
           y = 0.346116027531957 * safezoneH + safezoneY;
           w = 0.15 * safezoneW;
           h = 0.0225958702064897 * safezoneH;
       };
       class timer_background : Life_RscTextDrivingQ
       {
           idc = 9854;
           colorbackground[] = {0,0,0,0.7};
           x = 0.552083333333333 * safezoneW + safezoneX;
           y = 0.319567354965585 * safezoneH + safezoneY;
           w = 0.1640625 * safezoneW;
           h = 0.0225958702064897 * safezoneH;
       };
       class timer_bar : Life_RscProgress
       {
           idc = 9855;
           x = 0.552083333333333 * safezoneW + safezoneX;
           y = 0.319567354965585 * safezoneH + safezoneY;
           w = 0.1640625 * safezoneW;
           h = 0.0225958702064897 * safezoneH;
       };
       class timer_text : Life_RscTextDrivingQ
       {
           idc = 9856;
           text = "";
           x = 0.552083333333333 * safezoneW + safezoneX;
           y = 0.319567354965585 * safezoneH + safezoneY;
           w = 0.1640625 * safezoneW;
           h = 0.0225958702064897 * safezoneH;
       };
       class text_question : Life_RscStructuredTextDrivingQ
       {
           text = "";
           x = 0.277083333333334 * safezoneW + safezoneX;
           y = 0.369311701081613 * safezoneH + safezoneY;
           h = 0.125 * safezoneH;
           w = 0.440104166666666 * safezoneW;
           idc = 9857;
       };
       class image_question : Life_RscPicture
       {
           idc = 9858;
           text = "";
           x = 0.396875 * safezoneW + safezoneX;
           y = 0.346116027531957 * safezoneH + safezoneY;
           w = 0.2 * safezoneW;
           h = 0.375 * safezoneH;
       };
       class picture_answer1 : Life_RscPicture
       {
           idc = 9861;
           text = "";
           x = 0.277083333333334 * safezoneW + safezoneX;
           y = 0.673682399213373 * safezoneH + safezoneY;
           w = 0.1 * safezoneW;
           h = 0.16 * safezoneH;
       };
       class picture_answer2 : Life_RscPicture
       {
           idc = 9862;
           text = "";
           x = 0.390104166666667 * safezoneW + safezoneX;
           y = 0.673682399213373 * safezoneH + safezoneY;
           w = 0.1 * safezoneW;
           h = 0.16 * safezoneH;
       };
       class picture_answer3 : Life_RscPicture
       {
           idc = 9863;
           text = "";
           x = 0.500520833333333 * safezoneW + safezoneX;
           y = 0.673682399213373 * safezoneH + safezoneY;
           w = 0.1 * safezoneW;
           h = 0.16 * safezoneH;
       };
       class picture_answer4 : Life_RscPicture
       {
           idc = 9864;
           text = "";
           x = 0.613541666666667 * safezoneW + safezoneX;
           y = 0.673682399213373 * safezoneH + safezoneY;
           w = 0.1 * safezoneW;
           h = 0.16 * safezoneH;
       };
       class picture_status_answer1 : Life_RscPicture
       {
           idc = 9865;
           text = "";
           x = 0.358854166666667 * safezoneW + safezoneX;
           y = 0.673682399213373 * safezoneH + safezoneY;
           w = 0.018 * safezoneW;
           h = 0.03 * safezoneH;
       };
       class picture_status_answer2 : Life_RscPicture
       {
           idc = 9866;
           text = "";
           x = 0.47225 * safezoneW + safezoneX;
           y = 0.673682399213373 * safezoneH + safezoneY;
           w = 0.018 * safezoneW;
           h = 0.03 * safezoneH;
       };
       class picture_status_answer3 : Life_RscPicture
       {
           idc = 9867;
           text = "";
           x = 0.582145833333333 * safezoneW + safezoneX;
           y = 0.673682399213373 * safezoneH + safezoneY;
           w = 0.018 * safezoneW;
           h = 0.03 * safezoneH;
       };
       class picture_status_answer4 : Life_RscPicture
       {
           idc = 9868;
           text = "";
           x = 0.6956875 * safezoneW + safezoneX;
           y = 0.673682399213373 * safezoneH + safezoneY;
           w = 0.018 * safezoneW;
           h = 0.03 * safezoneH;
       };
       class title_answer1 : Life_RscTextDrivingQ
       {
           idc = 9869;
           text = "";
           x = 0.277604166666667 * safezoneW + safezoneX;
           y = 0.674665683382498 * safezoneH + safezoneY;
           w = 0.099479166666666 * safezoneW;
           h = 0.0273795476892823 * safezoneH;
       };
       class title_answer2 : Life_RscTextDrivingQ
       {
           idc = 9870;
           text = "";
           x = 0.390364583333334 * safezoneW + safezoneX;
           y = 0.674665683382498 * safezoneH + safezoneY;
           w = 0.099479166666666 * safezoneW;
           h = 0.0273795476892823 * safezoneH;
       };
       class title_answer3 : Life_RscTextDrivingQ
       {
           idc = 9871;
           text = "";
           x = 0.50078125 * safezoneW + safezoneX;
           y = 0.674665683382498 * safezoneH + safezoneY;
           w = 0.099479166666666 * safezoneW;
           h = 0.0273795476892823 * safezoneH;
       };
       class title_answer4 : Life_RscTextDrivingQ
       {
           idc = 9872;
           text = "";
           x = 0.614322916666667 * safezoneW + safezoneX;
           y = 0.674665683382498 * safezoneH + safezoneY;
           w = 0.099479166666666 * safezoneW;
           h = 0.0273795476892823 * safezoneH;
       };
       class text_answer1 : Life_RscStructuredTextDrivingQ
       {
           idc = 9873;
           text = "";
           x = 0.276822916666667 * safezoneW + safezoneX;
           y = 0.704088003933137 * safezoneH + safezoneY;
           w = 0.099479166666666 * safezoneW;
           h = 0.095302359882006 * safezoneH;
       };
       class text_answer2 : Life_RscStructuredTextDrivingQ
       {
           idc = 9874;
           text = "";
           x = 0.38984375 * safezoneW + safezoneX;
           y = 0.704088003933137 * safezoneH + safezoneY;
           w = 0.099479166666666 * safezoneW;
           h = 0.095302359882006 * safezoneH;
       };
       class text_answer3 : Life_RscStructuredTextDrivingQ
       {
           idc = 9875;
           text = "";
           x = 0.50078125 * safezoneW + safezoneX;
           y = 0.704088003933137 * safezoneH + safezoneY;
           w = 0.099479166666666 * safezoneW;
           h = 0.095302359882006 * safezoneH;
       };
       class text_answer4 : Life_RscStructuredTextDrivingQ
       {
           idc = 9876;
           text = "";
           x = 0.613802083333334 * safezoneW + safezoneX;
           y = 0.704088003933137 * safezoneH + safezoneY;
           w = 0.099479166666666 * safezoneW;
           h = 0.095302359882006 * safezoneH;
       };
       class button_answer1 : Life_RscButtonInvisibleDrivingQ
       {
           onbuttonclick = "";
           x = 0.276041666666668 * safezoneW + safezoneX;
           y = 0.675648967551622 * safezoneH + safezoneY;
           w = 0.1015 * safezoneW;
           h = 0.125 * safezoneH;
           idc = 9877;
       };
       class button_answer2 : Life_RscButtonInvisibleDrivingQ
       {
           onbuttonclick = "";
           x = 0.389062500000001 * safezoneW + safezoneX;
           y = 0.675648967551622 * safezoneH + safezoneY;
           w = 0.1015 * safezoneW;
           h = 0.125 * safezoneH;
           idc = 9878;
       };
       class button_answer3 : Life_RscButtonInvisibleDrivingQ
       {
           onbuttonclick = "";
           x = 0.499479166666668 * safezoneW + safezoneX;
           y = 0.675648967551622 * safezoneH + safezoneY;
           w = 0.1015 * safezoneW;
           h = 0.125 * safezoneH;
           idc = 9879;
       };
       class button_answer4 : Life_RscButtonInvisibleDrivingQ
       {
           onbuttonclick = "";
           x = 0.612500000000001 * safezoneW + safezoneX;
           y = 0.675648967551622 * safezoneH + safezoneY;
           w = 0.1015 * safezoneW;
           h = 0.125 * safezoneH;
           idc = 9880;
       };
       class picuture_validate : Life_RscPicture
       {
           idc = 9881;
           text = "";
           x = 0.434895833333333 * safezoneW + safezoneX;
           y = 0.551755162241888 * safezoneH + safezoneY;
           w = 0.125520833333333 * safezoneW;
           h = 0.189621435594887 * safezoneH;
       };
       class picture_close : Life_RscPicture
       {
           idc = 9882;
           text = "";
           x = 0.658854166666668 * safezoneW + safezoneX;
           y = 0.214655850540807 * safezoneH + safezoneY;
           w = 0.0687499999999989 * safezoneW;
           h = 0.147492625368732 * safezoneH;
       };
       class text_validate : Life_RscStructuredTextDrivingQ
       {
           idc = 9883;
           text = "";
           x = 0.433854166666666 * safezoneW + safezoneX;
           y = 0.625 * safezoneH + safezoneY;
           w = 0.1265625 * safezoneW;
           h = 0.0352458210422818 * safezoneH;
           colortext[] = {0,0,0,1};
       };
       class text_close : Life_RscStructuredTextDrivingQ
       {
           idc = 9884;
           text = "";
           x = 0.658854166666668 * safezoneW + safezoneX;
           y = 0.2675 * safezoneH + safezoneY;
           w = 0.0687499999999989 * safezoneW;
           h = 0.0313126843657813 * safezoneH;
           colortext[] = {0,0,0,1};
       };
       class button_validate : Life_RscButtonInvisibleDrivingQ
       {
           text = "";
           onbuttonclick = "";
           x = 0.433854166666666 * safezoneW + safezoneX;
           y = 0.621568338249755 * safezoneH + safezoneY;
           w = 0.1265625 * safezoneW;
           h = 0.0352458210422818 * safezoneH;
           idc = 9859;
       };
       class button_close : Life_RscButtonInvisibleDrivingQ
       {
           text = "";
           onbuttonclick = "[] spawn max_driving_questions_fnc_drivingClose;";
           x = 0.658854166666668 * safezoneW + safezoneX;
           y = 0.258736479842675 * safezoneH + safezoneY;
           w = 0.0687499999999989 * safezoneW;
           h = 0.0313126843657813 * safezoneH;
           idc = -1;
       };
   };
};