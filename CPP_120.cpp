#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b);

vector<int> maximum(vector<int> arr, int k) {
    sort(arr.begin(), arr.end(), greater<int>());
    vector<int> result(arr.begin(), arr.begin() + k);
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    // function implementation
}

int main() {
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 0), {}));
    return 0;
}