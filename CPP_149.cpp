bool issame(vector<string> a, vector<string> b){
    return a == b;
}

vector<string> sorted_list_sum(vector<string> lst){
    vector<string> result;
    
    for(auto word : lst){
        if(word.length() % 2 == 0){
            result.push_back(word);
        }
    }
    
    sort(result.begin(), result.end(), [](const string& a, const string& b){
        if(a.length() == b.length()){
            return a < b;
        }
        return a.length() < b.length();
    });
    
    return result;
}