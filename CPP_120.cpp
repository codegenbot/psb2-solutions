#include <vector>

bool issame(vector<int> a, vector<int> b) {
    // Implementation not provided
}

vector<int> maximum(vector<int> arr, int k) {
    sort(arr.begin(), arr.end(), greater<int>());
    vector<int> result(arr.begin(), arr.begin() + k);
    return result;
}