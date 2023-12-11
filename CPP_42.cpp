```
#include <iostream>
#include <algorithm>
#include <vector>

bool issame(int a, int b) {
    return a == b;
}

void incr_list(std::vector<int>& v) {
    for (auto& x : v) {
        x++;
    }
}

int main() {
    std::vector<int> temp {5, 2, 5, 2, 3, 3, 9, 0, 123};
    incr_list(temp);
    for (auto it = temp.begin(); it != temp.end(); ++it) {
        if (*it % 2 == 0) {
            std::cout << *it << " ";
        }
    }
    return 0;
}
```