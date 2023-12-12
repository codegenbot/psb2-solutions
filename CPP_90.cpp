```
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int next_smallest(vector<int> lst) {
    if (lst.size() < 2) {
        return None;
    }
    sort(lst.begin(), lst.end());
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] != lst[0]) {
            return lst[i];
        }
    }
    return None;
}
```