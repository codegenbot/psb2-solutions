#include <vector>
#include <cassert>

int add_elements(vector<int> arr, int k) {
    int sum = 0;
    for (int i = 0; i < k; i++) {
        if (arr[i] >= 10 && arr[i] < 100) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    // Test cases
    // assert (add_elements({1}, 1) == 1);

    return 0;
}