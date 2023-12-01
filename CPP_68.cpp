#include <vector>
#include <cassert>

bool issame(vector<int> a, vector<int> b);

vector<int> pluck(vector<int> arr){
    vector<int> result;
    int smallest_value = INT_MAX;
    int smallest_index = -1;
    
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] % 2 == 0 && arr[i] < smallest_value){
            smallest_value = arr[i];
            smallest_index = i;
        }
    }
    
    if(smallest_index != -1){
        result.push_back(smallest_value);
        result.push_back(smallest_index);
    }
    
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b; 
}