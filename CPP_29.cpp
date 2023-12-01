vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(const auto& str : strings){
        if(str.compare(0, prefix.length(), prefix) == 0){
            result.push_back(str);
        }
    }
    return result;
}