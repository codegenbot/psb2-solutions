#include <vector>
#include <cassert>

bool triples_sum_to_zero(std::vector<int> l) {
    int n = l.size();
    for (int i = 0; i < n-2; i++) {
        for (int j = i+1; j < n-1; j++) {
            for (int k = j+1; k < n; k++) {
                if (l[i] + l[j] + l[k] == 0) {
                    return true;
                }
            }
        }
    }
    return false;
}

int main() {
    assert(triples_sum_to_zero({100, 3, 5, -100}) == false);
    assert(triples_sum_to_zero({-1, 0, 1}) == true);
    assert(triples_sum_to_zero({1, 2, 3}) == false);
    assert(triples_sum_to_zero({-10, 10, 10, -10}) == true);
    assert(triples_sum_to_zero({1, -2, 3, -4, 5}) == true);
    
    return 0;
}