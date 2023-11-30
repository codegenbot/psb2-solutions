vector<int> largest_smallest_integers(vector<int> lst){
    int largestNegative = 0;
    int smallestPositive = 0;
    
    for(int i=0; i<lst.size(); i++){
        if(lst[i] < 0 && lst[i] < largestNegative){
            largestNegative = lst[i];
        }
        if(lst[i] > 0 && lst[i] > smallestPositive){
            smallestPositive = lst[i];
        }
    }
    
    vector<int> result;
    result.push_back(largestNegative);
    result.push_back(smallestPositive);
    
    return result;
}