vector<string> filtered_strings;
for(auto str: strings){
    if(str.find(prefix) == 0){
        filtered_strings.push_back(str);
    }
}
return filtered_strings;