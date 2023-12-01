#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<int> factorize(int n) {
    vector<int> factors;
    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    return factors;
}

bool issame(vector<int> a, vector<int> b) {
    // Function logic here
}

int main() {
    assert(issame(factorize(3 * 2 * 3), {2, 3, 3}));

    return 0;
}