```cpp
#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main() {
    vector<float, pmr::polymorphic_allocator<float>> xs = {3, 1, 2, 4, 5};
    vector<float, pmr::polymorphic_allocator<float>> ys = derivative(xs);
    for (auto x : ys) {
        cout << x << " ";
    }
    return 0;
}
```