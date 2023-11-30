#include <vector>
#include <cassert>

std::vector<int> compare(std::vector<int> game, std::vector<int> guess) {
    std::vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        int diff = std::abs(game[i] - guess[i]);
        result.push_back(diff);
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(compare({1,2,3,5},{-1,2,3,4}),{2,0,0,1}));
    assert(issame(compare({1,3,2,4,5},{1,2,3,4,5}),{0,1,1,0,0}));
    return 0;
}