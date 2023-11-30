string longest(vector<string> strings){
    if(strings.empty()){
        return "None";
    }
    
    string longestString = strings[0];
    for(int i = 1; i < strings.size(); i++){
        if(strings[i].length() > longestString.length()){
            longestString = strings[i];
        }
    }
    
    return longestString;
}