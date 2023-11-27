#include <iostream>
#include <vector>

using namespace std;

bool issame(vector<int> a, vector<int> b);

vector<int> eat(int number, int need, int remaining) {
    int totalEaten = number + need;
    int carrotsLeft = remaining - need;
    if (carrotsLeft < 0) {
        carrotsLeft = 0;
    }
    return {totalEaten, carrotsLeft};
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    cout << (issame(eat(4, 5, 1), {5, 0}) ? "true" : "false") << endl;
    return 0;
}