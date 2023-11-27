#include <vector>

vector<int> pluck(vector<int> arr){
    vector<int> result;
    int smallest_value = -1;
    int smallest_index = -1;
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && (smallest_value == -1 || arr[i] < smallest_value)) {
            smallest_value = arr[i];
            smallest_index = i;
        }
    }
    
    if (smallest_value != -1) {
        result.push_back(smallest_value);
        result.push_back(smallest_index);
    }
    
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b){
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