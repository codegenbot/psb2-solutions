#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>
using namespace std;

vector<int> f(int n) {
    vector<int> result;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            int factorial = 1;
            for (int j = 1; j <= i; j++) {
                factorial *= j;
            }
            result.push_back(factorial);
        } else {
            int sum = 0;
            for (int j = 1; j <= i; j++) {
                sum += j;
            }
            result.push_back(sum);
        }
    }
    return result;
}

int main() {
    assert(equal(f(3).begin(), f(3).end(), vector<int>{1, 2, 6}.begin(), vector<int>{1, 2, 6}.end()));

    return 0;
}