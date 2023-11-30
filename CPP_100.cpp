#include <vector>

std::vector<int> make_a_pile(int n) {
    std::vector<int> stones;
    int level = n;
    for(int i=0; i<n; i++){
        stones.push_back(level);
        level += (n % 2 == 0) ? 2 : 1;
    }
    return stones;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22}));
    
    return 0;
}