vector<string> split_words(string txt){
    vector<string> result;
    string word;
    bool hasWhitespace = false;
    bool hasComma = false;
    
    for(char c : txt){
        if(c == ' '){
            hasWhitespace = true;
            if(!word.empty()){
                result.push_back(word);
                word.clear();
            }
        }
        else if(c == ','){
            hasComma = true;
            if(!word.empty()){
                result.push_back(word);
                word.clear();
            }
        }
        else{
            word.push_back(c);
        }
    }
    
    if(!word.empty()){
        result.push_back(word);
    }
    
    if(!hasWhitespace && !hasComma){
        result.clear();
        result.push_back(to_string(count_odd_letters(txt)));
    }
    
    return result;
}