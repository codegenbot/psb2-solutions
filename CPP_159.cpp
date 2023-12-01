#include <vector>

std::vector<int> eat(int number, int need, int remaining) {
    int totalCarrots = number + need;
    int eatenCarrots = std::min(totalCarrots, remaining);
    int leftCarrots = std::max(totalCarrots - remaining, 0);
    
    return {eatenCarrots, leftCarrots};
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(eat(4, 5, 1), {5, 0}));
    
    return 0;
}