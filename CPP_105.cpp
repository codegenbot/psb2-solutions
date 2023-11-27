#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <cassert>

using namespace std;

vector<string> by_length(vector<int> arr){
    vector<string> result;
    map<int, string> digitMap = {{1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"}, 
                                {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};
    
    // Sort the integers between 1 and 9 inclusive
    vector<int> sortedArr;
    for(int i=0; i<arr.size(); i++){
        if(arr[i] >= 1 && arr[i] <= 9){
            sortedArr.push_back(arr[i]);
        }
    }
    sort(sortedArr.begin(), sortedArr.end());
    
    // Reverse the resulting vector and replace each digit by its corresponding name
    for(int i=sortedArr.size()-1; i>=0; i--){
        result.push_back(digitMap[sortedArr[i]]);
    }
    
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame(by_length({9, 4, 8}), {"Nine", "Eight", "Four"}));
    return 0;
}