```cpp
#include <cassert>
#include <vector>

int add_elements(const std::vector<int>& arr, int k) {
    int sum = 0;
    for (int i = 0; i < k; i++) {
        if (arr[i] >= 10 && arr[i] <= 99) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    assert(add_elements(std::vector<int>{1}, 1) == 0);
    return 0;
}
```