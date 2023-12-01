#include <vector>

using namespace std;

vector<int> maximum(vector<int> arr, int k) {
    sort(arr.begin(), arr.end(), greater<int>());
    vector<int> result(arr.begin(), arr.begin() + k);
    return result;
}

int main() {
    // Call the maximum function and assert the result
    assert(maximum({1, 2, 3, -23, 243, -400, 0}, 0) == vector<int>{});

    return 0;
}