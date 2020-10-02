/*
    Author: Maxence
    Web site: www.the-programmer.com
    Discord: https://discord.the-programmer.com

    Terms of use:
        - This file is forbidden unless you have permission from the author. If you have this file without permission to use it please do not use it and do not share it.
        - If you have permission to use this file, you can use it on your server however it is strictly forbidden to share it.
        - Out of respect for the author please do not delete this information.
*/
class Max_Settings_EntreprisesMarkers {
    open_color = "ColorGreen"; // List of colors is available here : https://community.bistudio.com/wiki/CfgMarkerColors_Arma_3
    close_color = "ColorRed"; 

    open_text = "Ouvert";
    close_text = "Fermé";

    text_not_allowed = "You are not allowed to interact with this company !";

    class marker_company {
        class DIR {
            marker_var = "ENT_marker_DIR";
            name_company = "DIR";
            condition = "";

            class objects_changing {
                class object_1 {
                    position[] = {};
                    classname = "";
                    open_image_path = "";
                    close_image_path = "";
                };

                class object_2 {
                    position[] = {};
                    classname = "";
                    open_image_path = "";
                    close_image_path = "";
                };
            };
        };
		
        class ServiceSecours {
            marker_var = "ADM_hospital_SP";
            name_company = "ServiceSecours";
            condition = "";

            class objects_changing {
                class object_1 {
                    position[] = {};
                    classname = "";
                    open_image_path = "";
                    close_image_path = "";
                };

                class object_2 {
                    position[] = {};
                    classname = "";
                    open_image_path = "";
                    close_image_path = "";
                };
            };
        };
		
        class Gendarmerie {
            marker_var = "ADM_marker_GN";
            name_company = "Gendarmerie";
            condition = "";

            class objects_changing {
                class object_1 {
                    position[] = {};
                    classname = "";
                    open_image_path = "";
                    close_image_path = "";
                };

                class object_2 {
                    position[] = {};
                    classname = "";
                    open_image_path = "";
                    close_image_path = "";
                };
            };
        };
    };
};
