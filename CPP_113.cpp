vector<string> odd_count(vector<string> lst){
    vector<string> result;
    for(string s : lst){
        int count = 0;
        for(char c : s){
            if(c % 2 != 0){
                count++;
            }
        }
        result.push_back("the number of odd elements " + to_string(count) + "n the str" + to_string(count) + "ng " + s + " of the " + to_string(count) + "nput.");
    }
    return result;
}