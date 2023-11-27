#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool issame(vector<int> a, vector<int> b);

vector<int> sort_array(vector<int> array){
    if(array.empty()){
        return array;
    }
    
    int sum = array[0] + array[array.size() - 1];
    if(sum % 2 == 0){
        sort(array.rbegin(), array.rend());
    } else {
        sort(array.begin(), array.end());
    }
    
    return array;
}

bool issame(vector<int> a, vector<int> b){
    return a == b;
}