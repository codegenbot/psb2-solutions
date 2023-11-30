#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> sort_array(vector<int> array) {
    vector<int> sorted_array = array;
    int sum = sorted_array[0] + sorted_array[sorted_array.size() - 1];
    if(sum % 2 == 0) {
        sort(sorted_array.begin(), sorted_array.end(), greater<int>());
    }
    else{
        sort(sorted_array.begin(), sorted_array.end());
    }
    return sorted_array;
}

int main() {
    assert(issame(sort_array({21, 14, 23, 11}), {23, 21, 14, 11}));
    
    return 0;
}