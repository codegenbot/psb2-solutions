vector<string> filtered_strings(vector<string> strings, string prefix) {
    vector<string> filtered_strings;
    for (string str : strings) {
        if (str.substr(0, prefix.size()) == prefix) {
            filtered_strings.push_back(str);
        }
    }
    return filtered_strings;
}