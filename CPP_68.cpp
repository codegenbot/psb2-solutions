```
#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

void pluck(const vector<int>& arr, int index) {
    if (index >= 0 && index < arr.size()) {
        auto it = arr.begin() + index;
        arr.erase(it);
    }
}

bool issame(const vector<int>& v1, const vector<int>& v2) {
    if (v1.size() != v2.size()) return false;
    for (int i = 0; i < v1.size(); i++) {
        if (v1[i] != v2[i]) return false;
    }
    return true;
}

int main() {
    vector<int> arr{7, 9, 7, 1};
    pluck(arr, 0);
    assert(issame(arr, vector<int>{9, 7, 1}));
    return 0;
}
```