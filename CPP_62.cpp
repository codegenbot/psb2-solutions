```
#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

// Declare derivative function
std::vector<float> derivative(const std::vector<float>& xs);

int main() {
    vector<float> xs = {3, 1, 2, 4, 5};
    vector<float> ys = derivative(xs);
    for (auto x : ys) {
        cout << x << " ";
    }
    return 0;
}
```