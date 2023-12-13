```cpp
#include <iostream>
#include <vector>

using namespace std;

vector<int> eat(int number, int need, int remaining) {
    vector<int> result;
    int totalEaten = number + need;
    int left = remaining - need;
    if (left < 0) {
        left = 0;
    }
    result.push_back(totalEaten);
    result.push_back(left);
    return result;
}

// int main() {
//     vector<int> output = eat(4, 5, 1);
//     cout << output[0] << " " << output[1] << endl;
//     return 0;
// }

int main() {
    vector<int> output = eat(10, 6, 8);
    cout << output[0] << " " << output[1] << endl;
    return 0;
}
```