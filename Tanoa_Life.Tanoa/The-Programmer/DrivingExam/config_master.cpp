/*
    Author: Maxence
    Web site: www.the-programmer.com
    Discord: https://discord.the-programmer.com

    Terms of use:
        - This file is forbidden unless you have permission from the author. If you have this file without permission to use it please do not use it and do not share it.
        - If you have permission to use this file, you can use it on your server however it is strictly forbidden to share it.
        - Out of respect for the author please do not delete this information.
*/
#define false 0
#define true 1

class Max_Settings_Driving_Exam {
    default_lang = "fr"; // fr / en / de / es

    //allRoads_path = "The-Programmer\DrivingExam\data\%1\AllRoads.sqf"; // The file is same as the GPS one, you can put the same path as GPS to save space ; %1 = worldname DO NOT REPLACE
    allRoads_path = "\Assets\Data\The-Programmer\GPS\data\%1\AllRoads.sqf"; // The file is same as the GPS one, you can put the same path as GPS to save space ; %1 = worldname DO NOT REPLACE
    textures_base_path = "\Assets\Data\The-Programmer\DrivingExam\textures";

    meters = "m";
    kilometers = "km";
    kilometers_per_hour = "km/h";

    points_driving_license_script_enable = true;
    driving_questions_script_enable = true;

    class permis_types {
        class driver {
            vehicle_classname = "Renault_ClioIV_civ_ae";
            price = 1100;

            speed_tolerance = 15; // km/h
            minimum_points = 8; // The maximum of points is 12

            check_speed = true;
            check_damages = true;

            license_to_give = "license_civ_driver";
            permis_class_in_points_driving_config = "driver"; // Only if points_driving_license_script_enable = true;
            permis_class_in_driving_question_config = "driver"; // Only if driving_questions_script_enable = true;

            park_speed_limit = 30;
            have_to_park = true;

            transit_points_type = "random"; // If "random" the path will be random for each player. If "markers" you have to place markers on your mapping to choose the path to follow and every player will have the same path

            /* IF transit_points_type = "markers"; */
            transit_points_markers[] = {"marker_1","marker_2"};

            /* IF transit_points_type = "random"; */
            number_of_transit_points = 2; // The path will be calculated to pass through X crossing points during the exam, must be 1 or more. DEFAULT : 3
            transit_points_radius = 1000; // The larger the radius, the further away the crossing points can be. Setting a radius too small can make the crossing points redundant or even non-existent and prevent the script from working
            transit_points_minimum_distance = 200; // The shorter the minimum distance, the closer the crossing points will be to the player and therefore the course will be short

            class speed_limits { // Default recommanded
                class in_city {
                    condition = "[player] call max_driving_exam_fnc_isInCity"; // Must return true/false
                    speedLimit = 60;
                };
                class normal_road {
                    condition = "!([roadAt player] call max_driving_exam_fnc_isHighWay)";
                    speedLimit = 110;
                };
                class on_highway {
                    condition = "[roadAt player] call max_driving_exam_fnc_isHighWay";
                    speedLimit = 130;
                };
            };
        };

        class trucking {
            vehicle_classname = "RangeT_autoecole";
            price = 2500;

            speed_tolerance = 10; // km/h
            minimum_points = 6; // The maximum of points is 12

            check_speed = true;
            check_damages = true;

            license_to_give = "license_civ_trucking";
            permis_class_in_points_driving_config = "driver"; // Only if points_driving_license_script_enable = true;
            permis_class_in_driving_question_config = "driver"; // Only if driving_questions_script_enable = true;

            park_speed_limit = 30;
            have_to_park = true;

            number_of_transit_points = 2; // The path will be calculated to pass through X crossing points during the exam, must be 1 or more. DEFAULT : 3
            transit_points_radius = 3000; // The larger the radius, the further away the crossing points can be. Setting a radius too small can make the crossing points redundant or even non-existent and prevent the script from working
            transit_points_minimum_distance = 500; // The shorter the minimum distance, the closer the crossing points will be to the player and therefore the course will be short

            class speed_limits { // Default recommanded
                class in_city {
                    condition = "[player] call max_driving_exam_fnc_isInCity"; // Must return true/false
                    speedLimit = 50;
                };
                class normal_road {
                    condition = "!([roadAt player] call max_driving_exam_fnc_isHighWay)";
                    speedLimit = 90;
                };
                class on_highway {
                    condition = "[roadAt player] call max_driving_exam_fnc_isHighWay";
                    speedLimit = 110;
                };
            };
        };

        class moto {
            vehicle_classname = "xj6_ch_b";
            price = 700;

            speed_tolerance = 10; // km/h
            minimum_points = 6; // The maximum of points is 12

            check_speed = true;
            check_damages = true;

            license_to_give = "license_civ_moto";
            permis_class_in_points_driving_config = "driver"; // Only if points_driving_license_script_enable = true;
            permis_class_in_driving_question_config = "driver"; // Only if driving_questions_script_enable = true;

            park_speed_limit = 30;
            have_to_park = true;

            number_of_transit_points = 2; // The path will be calculated to pass through X crossing points during the exam, must be 1 or more. DEFAULT : 3
            transit_points_radius = 3000; // The larger the radius, the further away the crossing points can be. Setting a radius too small can make the crossing points redundant or even non-existent and prevent the script from working
            transit_points_minimum_distance = 500; // The shorter the minimum distance, the closer the crossing points will be to the player and therefore the course will be short

            class speed_limits { // Default recommanded
                class in_city {
                    condition = "[player] call max_driving_exam_fnc_isInCity"; // Must return true/false
                    speedLimit = 50;
                };
                class normal_road {
                    condition = "!([roadAt player] call max_driving_exam_fnc_isHighWay)";
                    speedLimit = 110;
                };
                class on_highway {
                    condition = "[roadAt player] call max_driving_exam_fnc_isHighWay";
                    speedLimit = 130;
                };
            };
        };
    };
};
