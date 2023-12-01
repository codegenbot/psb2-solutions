vector<int> strange_sort_list(vector<int> lst){
    vector<int> result;
    
    while (!lst.empty()) {
        int min_val = *min_element(lst.begin(), lst.end());
        int max_val = *max_element(lst.begin(), lst.end());
        
        result.push_back(min_val);
        result.push_back(max_val);
        
        lst.erase(find(lst.begin(), lst.end(), min_val));
        lst.erase(find(lst.begin(), lst.end(), max_val));
    }
    
    return result;
}