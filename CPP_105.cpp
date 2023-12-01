#include <vector>
#include <string>
#include <map>
#include <algorithm>

vector<string> by_length(vector<int> arr);
bool issame(vector<string> a, vector<string> b);

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

vector<string> by_length(vector<int> arr){
    vector<string> result;
    map<int, string> digit_map = {{1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"}, {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};

    vector<int> sorted_arr;
    for(int num : arr){
        if(num >= 1 && num <= 9){
            sorted_arr.push_back(num);
        }
    }
    sort(sorted_arr.begin(), sorted_arr.end());

    for(int num : sorted_arr){
        result.push_back(digit_map[num]);
    }

    return result;
}