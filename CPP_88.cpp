#include <vector>

bool issame(vector<int> a, vector<int> b){
    // Function implementation
}

vector<int> sort_array(vector<int> array){
    vector<int> sorted_array = array;
    int sum = sorted_array[0] + sorted_array[sorted_array.size()-1];
    if(sum % 2 == 0){
        sort(sorted_array.rbegin(), sorted_array.rend());
    } else {
        sort(sorted_array.begin(), sorted_array.end());
    }
    return sorted_array;
}

int main(){
    // Test cases
    assert (issame(sort_array({21, 14, 23, 11}), {23, 21, 14, 11}));
    // Add more test cases if needed

    return 0;
}