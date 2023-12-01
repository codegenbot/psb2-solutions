bool check_dict_case(map<string,string> dict){
    if(dict.empty()) {
        return false;
    }
    
    bool all_lower = true;
    bool all_upper = true;
    
    for(auto const& entry : dict) {
        string key = entry.first;
        
        if(!islower(key[0])) {
            all_lower = false;
        }
        
        if(!isupper(key[0])) {
            all_upper = false;
        }
        
        if(!all_lower && !all_upper) {
            return false;
        }
    }
    
    return true;
}