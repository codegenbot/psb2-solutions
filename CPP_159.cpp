#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    int eaten = min(total, remaining);
    int left = remaining - eaten;
    return {total, left};
}

bool is_same(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(is_same(eat(4, 5, 1), {5, 0}));
    return 0;
}