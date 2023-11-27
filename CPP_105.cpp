#include <vector>   // for vector
#include <string>   // for string
#include <algorithm>    // for sort, reverse
#include <map>  // for map
#include <cassert>  // for assert
#include <iostream> // for cout

vector<string> by_length(vector<int> arr){
    vector<string> result;
    vector<int> sortedArr;
    for(int i=0; i<arr.size(); i++){
        if(arr[i]>=1 && arr[i]<=9){
            sortedArr.push_back(arr[i]);
        }
    }
    sort(sortedArr.begin(), sortedArr.end());
    reverse(sortedArr.begin(), sortedArr.end());
    map<int, string> numToName;
    numToName[1] = "One";
    numToName[2] = "Two";
    numToName[3] = "Three";
    numToName[4] = "Four";
    numToName[5] = "Five";
    numToName[6] = "Six";
    numToName[7] = "Seven";
    numToName[8] = "Eight";
    numToName[9] = "Nine";
    for(int i=0; i<sortedArr.size(); i++){
        result.push_back(numToName[sortedArr[i]]);
    }
    return result;
}

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

int main() {
    assert(issame(by_length({9, 4, 8}), {"Nine", "Eight", "Four"}));

    std::cout << "Test Passed";
    return 0;
}