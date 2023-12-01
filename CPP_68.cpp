vector<int> pluck(vector<int> arr){
    vector<int> result;
    int smallestIndex = -1;
    int smallestEvenValue = INT_MAX;
    
    for(int i=0; i<arr.size(); i++){
        if(arr[i] % 2 == 0 && arr[i] < smallestEvenValue){
            smallestEvenValue = arr[i];
            smallestIndex = i;
        }
    }
    
    if(smallestIndex != -1){
        result.push_back(smallestEvenValue);
        result.push_back(smallestIndex);
    }
    
    return result;
}