vector<string> by_length(vector<int> arr){
    vector<string> result;
    map<int, string> digitMap;
    digitMap[1] = "One";
    digitMap[2] = "Two";
    digitMap[3] = "Three";
    digitMap[4] = "Four";
    digitMap[5] = "Five";
    digitMap[6] = "Six";
    digitMap[7] = "Seven";
    digitMap[8] = "Eight";
    digitMap[9] = "Nine";

    sort(arr.begin(), arr.end());

    vector<int> sortedArr;

    for(int i=0; i<arr.size(); i++){
        if(arr[i] >= 1 && arr[i] <= 9){
            sortedArr.push_back(arr[i]);
        }
    }

    reverse(sortedArr.begin(), sortedArr.end());

    for(int i=0; i<sortedArr.size(); i++){
        result.push_back(digitMap[sortedArr[i]]);
    }

    return result;
}