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
#define false 0
#define true 1

class Max_Settings_Driving_Questions {
    default_lang = "fr"; // fr / en / de / es

    textures_base_path = "\Assets\Data\The-Programmer\DrivingQuestions\textures";
    tonic_version = 5; //5 if you are on version 5.0 or 4 if you are on version 4.X

    points_driving_license_script_enable = true;
    driving_practical_test_script_enable = true; // If this setting is on true, no license will be gived and no points if Points Driving License is installed. But the player will be able to take the practical test of the license if he passes the test.

    display_intro = true; // The introduction is the text that indicates how the exam will be
    time_between_tries = false; // Set true so that the player cannot retake the exam if he misses it before his next reconnection

    class permis_types {
        class driver { // Name of the class of the license type class, may be any word, it can be found in the object init: this addAction ["Pass the theoretical exam of the license",{["driver"] spawn max_driving_questions_fnc_drivingStartQuestions}];
            price = 150;

            license_gived = ""; // Class name of the license obtained after the exam, put "" to give no license (OPTIONAL)
            permis_class_in_points_driving_config = "driver"; // Only if points_driving_license_script_enable = true;

            display_number_of_answers_to_find = true;
            number_of_questions = 20; // If you put more than number_of_questions questions in the class below, they will be randomed (RECOMMANDED)
            limited_time_to_answer = 10; // In seconds, -1 = unlimited

            percentage_of_good_answers_required = 0.75;

            class questions {
                class question_1 {
                    question = "STR_QUESTION_1"; // Can be a STR in the localization of this script or text
                    picture_file = ""; // Put "" to hide picture, keep the same size as default picture textures (question_14.paa for example)
                    reponse_A = "STR_YES"; // Can be a STR in the localization of this script or text
                    reponse_B = "STR_NO";
                    reponse_C = ""; // Put "" if this reply is not possible
                    reponse_D = "";
                    good_answers[] = {"B"}; // A, B, C or/and D, if you want to put more than one good reply, here is an example : good_answers[] = {"A","B","C"};
                };

                class question_2 {
                    question = "STR_QUESTION_2";
                    picture_file = "";
                    reponse_A = "STR_YES";
                    reponse_B = "STR_NO";
                    reponse_C = "";
                    reponse_D = "";
                    good_answers[] = {"B"};
                };

                class question_3 {
                    question = "STR_QUESTION_3";
                    picture_file = "";
                    reponse_A = "STR_ACCELERATE";
                    reponse_B = "STR_SLOW";
                    reponse_C = "";
                    reponse_D = "";
                    good_answers[] = {"B"};
                };

                class question_4 {
                    question = "STR_QUESTION_4";
                    picture_file = "";
                    reponse_A = "STR_BEFORE";
                    reponse_B = "STR_AFTER";
                    reponse_C = "STR_BEFORE_AND_AFTER";
                    reponse_D = "";
                    good_answers[] = {"B"};
                };

                class question_5 {
                    question = "STR_QUESTION_5";
                    picture_file = "";
                    reponse_A = "STR_ALLOWED";
                    reponse_B = "STR_TOLERATED";
                    reponse_C = "STR_PROHIBITED";
                    reponse_D = "STR_DANGEROUS";
                    good_answers[] = {"C","D"};
                };

                class question_6 {
                    question = "STR_QUESTION_6";
                    picture_file = "";
                    reponse_A = "STR_YES";
                    reponse_B = "STR_NO";
                    reponse_C = "";
                    reponse_D = "";
                    good_answers[] = {"A"};
                };

                class question_7 {
                    question = "STR_QUESTION_7";
                    picture_file = "";
                    reponse_A = "STR_SPEED";
                    reponse_B = "STR_REFLEX_AND_DISTANCE";
                    reponse_C = "";
                    reponse_D = "";
                    good_answers[] = {"B"};
                };

                class question_8 {
                    question = "STR_QUESTION_8";
                    picture_file = "";
                    reponse_A = "STR_DONT_CHANGE";
                    reponse_B = "STR_INCREASES";
                    reponse_C = "STR_DECREASES";
                    reponse_D = "";
                    good_answers[] = {"B"};
                };

                class question_9 {
                    question = "STR_QUESTION_9";
                    picture_file = "";
                    reponse_A = "STR_YES";
                    reponse_B = "STR_NO";
                    reponse_C = "";
                    reponse_D = "";
                    good_answers[] = {"B"};
                };

                class question_10 {
                    question = "STR_QUESTION_10";
                    picture_file = "";
                    reponse_A = "STR_YES";
                    reponse_B = "STR_NO";
                    reponse_C = "";
                    reponse_D = "";
                    good_answers[] = {"A"};
                };

                class question_11 {
                    question = "STR_QUESTION_11";
                    picture_file = "";
                    reponse_A = "STR_YES";
                    reponse_B = "STR_NO";
                    reponse_C = "";
                    reponse_D = "";
                    good_answers[] = {"A"};
                };

                class question_12 {
                    question = "STR_QUESTION_12";
                    picture_file = "";
                    reponse_A = "STR_EVERY_YEAR";
                    reponse_B = "STR_EVERY_2YEARS";
                    reponse_C = "STR_EVERY_4YEARS";
                    reponse_D = "";
                    good_answers[] = {"B"};
                };

                class question_13 {
                    question = "STR_QUESTION_13";
                    picture_file = "";
                    reponse_A = "STR_130";
                    reponse_B = "STR_110";
                    reponse_C = "STR_100";
                    reponse_D = "STR_90";
                    good_answers[] = {"B"};
                };

                class question_14 {
                    question = "STR_QUESTION_14";
                    picture_file = "question_14.paa";
                    reponse_A = "STR_HELP";
                    reponse_B = "STR_CONTINUE";
                    reponse_C = "";
                    reponse_D = "";
                    good_answers[] = {"A"};
                };

                class question_15 {
                    question = "STR_QUESTION_15";
                    picture_file = "";
                    reponse_A = "STR_YES";
                    reponse_B = "STR_NO";
                    reponse_C = "";
                    reponse_D = "";
                    good_answers[] = {"A"};
                };

                class question_16 {
                    question = "STR_QUESTION_16";
                    picture_file = "";
                    reponse_A = "STR_YES";
                    reponse_B = "STR_NO";
                    reponse_C = "";
                    reponse_D = "";
                    good_answers[] = {"A"};
                };

                class question_17 {
                    question = "STR_QUESTION_17";
                    picture_file = "question_17.paa";
                    reponse_A = "STR_YES";
                    reponse_B = "STR_NO";
                    reponse_C = "";
                    reponse_D = "";
                    good_answers[] = {"A"};
                };

                class question_18 {
                    question = "STR_QUESTION_18";
                    picture_file = "question_18.paa";
                    reponse_A = "STR_FORBIDDEN";
                    reponse_B = "STR_ALLOWED_Q18";
                    reponse_C = "STR_TWO_SIDES";
                    reponse_D = "STR_RIGHT_ONLY";
                    good_answers[] = {"A","C"};
                };

                class question_19 {
                    question = "STR_QUESTION_19";
                    picture_file = "question_19.paa";
                    reponse_A = "STR_YES";
                    reponse_B = "STR_NO";
                    reponse_C = "";
                    reponse_D = "";
                    good_answers[] = {"B"};
                };

                class question_20 {
                    question = "STR_QUESTION_20";
                    picture_file = "question_20.paa";
                    reponse_A = "STR_YES";
                    reponse_B = "STR_YES_WITH_FLASHING";
                    reponse_C = "STR_NO";
                    reponse_D = "";
                    good_answers[] = {"C"};
                };
            };
        };
    };
};
