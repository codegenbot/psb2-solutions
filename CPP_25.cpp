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
    return a == b;
}

bool issame2(vector<int> a, vector<int> b) {
    return a == b;
}

#include <cassert>