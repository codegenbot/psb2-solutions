vector<string> odd_count(vector<string> lst){
    vector<string> result;
    for(auto str : lst){
        int count = 0;
        for(auto ch : str){
            if(ch % 2 != 0){
                count++;
            }
        }
        string res = "the number of odd elements " + to_string(count) + "n the str" + to_string(count) + "ng " + str + " of the " + to_string(count) + "nput.";
        result.push_back(res);
    }
    return result;
}