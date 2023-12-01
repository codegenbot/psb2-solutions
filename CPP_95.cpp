bool check_map_case(map<string,string> dict){
    if(dict.empty()){
        return false;
    }
    
    bool allLowerCase = true;
    bool allUpperCase = true;
    
    for(auto it = dict.begin(); it != dict.end(); ++it){
        string key = it->first;
        
        if(key.empty()){
            return false;
        }
        
        for(char c : key){
            if(isupper(c)){
                allLowerCase = false;
            }else if(islower(c)){
                allUpperCase = false;
            }
        }
    }
    
    return allLowerCase || allUpperCase;
}