vector<int> sort_array(vector<int> array){
    vector<int> sorted_array = array;
    if(array.size() > 0){
        int sum = array[0] + array[array.size()-1];
        if(sum % 2 == 0){
            sort(sorted_array.begin(), sorted_array.end(), greater<int>());
        } else {
            sort(sorted_array.begin(), sorted_array.end());
        }
    }
    return sorted_array;
}