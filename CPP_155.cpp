```
#include <iostream>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
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

std::vector<int> even_odd_count(int num) {
    std::vector<int> count_even(2);
    while (num > 0) {
        if (num % 2 == 0) {
            count_even[0]++;
        } else {
            count_even[1]++;
        }
        num /= 10;
    }
    return count_even;
}

int main() {
    if (issame(even_odd_count(0), {1, 0}) && issame(even_odd_count(123456789), {9, 0})) {
        return 0;
    } else {
        return 1;
    }
}
```