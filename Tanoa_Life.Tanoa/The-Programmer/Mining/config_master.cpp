/*
    Author: Jean_Park
    Teamspeak 3: ts.the-programmer.com
    Web site: www.the-programmer.com
    Discord : https://discord.gg/DhFUFsq

    Terms of use:
        - This file is forbidden unless you have permission from the author. If you have this file without permission to use it please do not use it and do not share it.
        - If you have permission to use this file, you can use it on your server however it is strictly forbidden to share it.
        - Out of respect for the author please do not delete this information.

*/
#define true 1
#define false 0

class The_programmer_Mining {
    check_all_rocks_every_x_seconds = 300; //Loop for respawn rocks

    text_stone_empty = "No luck, this rock was empty...";
    text_stone_broken = "This stone already looks broken....";

    automaticAdd = true; //Put true if you want the physical objects come directly into your bag (Only if virtual_object = false)

    class trees {
        virtual_object = false; //false allows to have a physical object || true allows you to receive virtual objects
        allow_to_cut_everywhere = true;
        zones[] = {""};
        zoneSize = 40;

        number_of_hits_tree = 10;
        classname_object_given = "TheProgrammer_Buche";
        amount_min = 1;
        amount_max = 3;
    };

    class Mining {
        destructible = true; //true : stones are deleted | false : stones are not deleted
        cooldown = 90;//Time before we can break the stone again (only if destructible = false; or if the stone is placed manually)
        
        class Rock_1 { 
            classname_object = "TheProgrammer_Rock_iron"; //object class name
            marker_name[] = {"marker_iron"}; //marker variable
            virtual_object = false; //false allows to have a physical object || true allows you to receive virtual objects
            zoneSize = 40; //area size

            number_of_ores = 8; //number of stones in the area 
            Number_of_hits = 4; //number of shots to break the stone
            
            /* {object, chance, number min, number max} 
                chance = 1 = 100% 
                        0.7 = 70%
                        0.2 = 20*
            */
            object_given[] = {
                {"TheProgrammer_iron",0.7,1,3}
            };
        };

        class Rock_2 {
            classname_object = "TheProgrammer_Rock_Or";
            marker_name[] = {"marker_or"};
            virtual_object = false;
            zoneSize = 40;

            Number_of_hits = 4;
            number_of_ores = 8;

            object_given[] = {
                {"TheProgrammer_or",0.7,1,3}
            };
        };

        class Rock_3 {
            classname_object = "TheProgrammer_Rock_sapphire";
            marker_name[] = {"marker_sapphire"};
            virtual_object = false;
            zoneSize = 40;

            Number_of_hits = 4;
            number_of_ores = 8;

            object_given[] = {
                {"TheProgrammer_sapphire",0.7,1,3}
            };
        };

        class Rock_4 {
            classname_object = "TheProgrammer_Rock_charbon";
            marker_name[] = {"marker_charbon"};
            virtual_object = false;
            zoneSize = 40;

            Number_of_hits = 4;
            number_of_ores = 8;

            object_given[] = {
                {"TheProgrammer_charbon",0.7,1,3}
            };
        };

        class Rock_5 {
            classname_object = "TheProgrammer_Rock_cuivre";
            marker_name[] = {"marker_cuivre"};
            virtual_object = false;
            zoneSize = 40;

            Number_of_hits = 4;
            number_of_ores = 8;

            object_given[] = {
                {"TheProgrammer_cuivre",0.7,1,3}
            };
        };
        class Rock_6 {
            classname_object = "TheProgrammer_Rock_diamant";
            marker_name[] = {"marker_diamant"};
            virtual_object = false;
            zoneSize = 40;

            Number_of_hits = 4;
            number_of_ores = 8;

            object_given[] = {
                {"TheProgrammer_diamant",0.7,1,3}
            };
        };
        class Rock_7 {
            classname_object = "TheProgrammer_Rock_obsidienne";
            marker_name[] = {"marker_obsidienne"};
            virtual_object = false;
            zoneSize = 40;

            Number_of_hits = 4;
            number_of_ores = 8;

            object_given[] = {
                {"TheProgrammer_obsidienne",0.7,1,3}
            };
        };
        class Rock_8 {
            classname_object = "TheProgrammer_Rock_ruby";
            marker_name[] = {"marker_ruby"};
            virtual_object = false;
            zoneSize = 40;

            Number_of_hits = 4;
            number_of_ores = 8;

            object_given[] = {
                {"TheProgrammer_ruby",0.7,1,3}
            };
        };
        class Rock_9 {
            classname_object = "TheProgrammer_Rock";
            marker_name[] = {"marker_rock"};
            virtual_object = false;
            zoneSize = 40;

            Number_of_hits = 4;
            number_of_ores = 8;

            object_given[] = {
                {"TheProgrammer_cailloux",0.7,1,3}
            };
        };
    };
};
