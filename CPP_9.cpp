vector<int> rolling_max(vector<int> numbers){
    vector<int> result;
    int max_num = numbers[0];
    result.push_back(max_num);
    
    for(int i=1; i<numbers.size(); i++){
        if(numbers[i] > max_num){
            max_num = numbers[i];
        }
        result.push_back(max_num);
    }
    
    return result;
}