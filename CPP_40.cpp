#include <vector>
#include <cassert>

bool triples_sum_to_zero(std::vector<int> l) {
    int n = l.size();
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (l[i] + l[j] + l[k] == 0) {
                    return true;
                }
            }
        }
    }
    return false;
}

int main() {
    std::vector<int> numbers{100, 3, 5, -100};
    bool result = triples_sum_to_zero(numbers);
    assert(result == false);
    return 0;
}