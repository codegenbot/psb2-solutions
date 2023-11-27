#include <vector>

std::vector<int> eat(int number, int need, int remaining) {
    int totalEaten = number + need;
    int carrotsLeft = remaining - need;
    if (carrotsLeft < 0) {
        carrotsLeft = 0;
    }
    std::vector<int> result = {totalEaten, carrotsLeft};
    return result;
}

bool issame(std::vector<int> vector1, std::vector<int> vector2) {
    return (vector1 == vector2);
}

int main() {
    assert(issame(eat(4, 5, 1), {5, 0}));

    return 0;
}