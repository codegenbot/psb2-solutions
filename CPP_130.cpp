#include <vector>
#include <cassert>

using std::vector;

bool issame(vector<int> a, const vector<int>& b) {
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

vector<int> tri(int n) {
    vector<int> sequence;
    if (n >= 0) {
        sequence.push_back(3);
        if (n >= 1) {
            sequence.push_back(1 + n / 2);
            for (int i = 2; i <= n; i++) {
                if (i % 2 == 0) {
                    sequence.push_back(1 + i / 2);
                } else {
                    sequence.push_back(sequence[i - 1] + sequence[i - 2] + sequence[i + 1]);
                }
            }
        }
    }
    return sequence;
}

int main() {
    assert(issame(tri(1), {1, 3}));
    
    return 0;
}