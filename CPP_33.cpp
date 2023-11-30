vector<int> sort_third(vector<int> l){
    vector<int> l_prime = l;
    vector<int> sorted_values;
    
    for(int i=0; i<l.size(); i++){
        if(i % 3 == 0){
            sorted_values.push_back(l[i]);
        }
    }
    
    sort(sorted_values.begin(), sorted_values.end());
    
    int sorted_index = 0;
    for(int i=0; i<l.size(); i++){
        if(i % 3 == 0){
            l_prime[i] = sorted_values[sorted_index];
            sorted_index++;
        }
    }
    
    return l_prime;
}