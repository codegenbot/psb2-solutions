\```cpp
#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<int> makeAPile(int n) {
    vector<int> piles;
    int stones = n;
    for (int i = 0; i < n; i++) {
        piles.push_back(stones);
        if (n % 2 == 0) {
            stones += 2;
        } else {
            stones += 1;
        }
    }
    return piles;
}

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(makeAPile(8), {8, 10, 12, 14, 16, 18, 20, 22}));
    cout << "Test passed!" << endl;
    return 0;
}
\```