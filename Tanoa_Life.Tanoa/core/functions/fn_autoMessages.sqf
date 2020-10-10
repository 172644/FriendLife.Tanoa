/*  
    File: fn_autoMessages.sqf  
    Author: BenjaminSansNom  

    Description:  
    Auto messages in game every X seconds  
*/  

[] spawn {  
    // Add a line in this array to add a message  
    _messages = [  
        "Les Redémarrages ont lieu à 1H-7H-12H-18H !<br/> <t color='#e32828' size='1.5'></t>",  
        "Notre TeamSpeak :<br/><t color='#e32828' size='1.5'>78.143.39.176:11650</t>"  
    ];  

    _refreshTime = 7200; // Time between each message (in seconds)  

    _i = 0;  
    while {true} do {  
        _count = count _messages;  
        _message = _messages select _i;  
        hint parseText format["<t color='#ffffff' size='2'>Friends</t><t color='#c45454' size='2'>Life</t><br/><br/><img shadown='false' size='6' image='\Assets\Data\textures\logo.paa'/><br/><br/>%1", _message];  
        sleep _refreshTime;  
        if (_i == (_count - 1)) then {  
            _i = 0;  
        } else {  
            _i = _i + 1;  
        };  
    };  
};