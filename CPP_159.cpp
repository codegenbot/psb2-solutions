#include <vector>
#include <cassert>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> eat(int number, int need, int remaining) {
    int totalEaten = number + remaining;
    int left = 0;
    if (totalEaten >= need) {
        left = totalEaten - need;
        totalEaten = need;
    }
    return {totalEaten, left};
}

int main() {
    assert(issame(eat(4, 5, 1), {5, 0}));
    // Add more test cases here

    return 0;
}