vector<string> by_length(vector<int> arr){
    vector<string> result;
    vector<int> sorted_arr;
    map<int, string> digit_map = {{1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"}, {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};

    // Sort the integers between 1 and 9 inclusive
    for(int num : arr){
        if(num >= 1 && num <= 9){
            sorted_arr.push_back(num);
        }
    }
    sort(sorted_arr.begin(), sorted_arr.end());

    // Reverse the resulting vector
    reverse(sorted_arr.begin(), sorted_arr.end());

    // Replace each digit by its corresponding name
    for(int num : sorted_arr){
        result.push_back(digit_map[num]);
    }

    return result;
}