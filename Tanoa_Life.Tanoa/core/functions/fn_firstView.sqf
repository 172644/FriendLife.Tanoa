/* 
    Code written by Lyeed 
*/ 

life_combatTime = time;   
if (!life_firstCombatActive) then { 
    [] spawn  { 
        life_firstCombatActive = true;
        titleText ["Un combat à lieu a proximité, vous avez été mis en vue immersif !", "PLAIN"]; 
        while {(life_combatTime > (time - 120))} do 
        { 
            if ((cameraView == "External") && ((vehicle player) == player)) then { 
                player switchCamera "Internal"; 
            }; 
            sleep 0.2; 
        }; 
        life_firstCombatActive = false;
        titleText ["Le combat est terminé, vous pouvez remettre la 3ème personne !", "PLAIN"];
    }; 
};