vector<string> odd_count(vector<string> lst){
    vector<string> result;
    for(auto str : lst){
        int count = 0;
        for(auto c : str){
            if((c - '0') % 2 != 0){
                count++;
            }
        }
        result.push_back("the number of odd elements " + to_string(count) + "n the str" + to_string(result.size()) + "ng " + to_string(result.size()+1) + " of the " + to_string(result.size()+1) + "nput.");
    }
    return result;
}