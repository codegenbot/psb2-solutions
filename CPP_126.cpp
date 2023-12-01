bool is_sorted(vector<int> lst){
    // Sort the vector in ascending order
    sort(lst.begin(), lst.end());
    
    // Check if there are any duplicates
    for(int i = 0; i < lst.size() - 1; i++){
        if(lst[i] == lst[i+1]){
            return false;
        }
    }
    
    return true;
}