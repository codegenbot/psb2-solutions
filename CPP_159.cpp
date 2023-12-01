#include <vector>
#include <cassert>

vector<int> eat(int number, int need, int remaining) {
    int totalEaten = number + need;
    int carrotsLeft = remaining - need;
    if(carrotsLeft < 0) {
        carrotsLeft = 0;
    }
    vector<int> result = {totalEaten, carrotsLeft};
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    // code implementation
}

int main() {
    assert(issame(eat(4, 5, 1), {5, 0}));
    // more test cases if needed
    return 0;
}