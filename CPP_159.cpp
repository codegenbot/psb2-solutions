#include <vector>

vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    int eaten = min(total, remaining);
    int left = remaining - eaten;
    return {eaten, left};
}

bool issame(vector<int> a, vector<int> b) {
    // Code to compare vectors a and b and return true if they are the same, false otherwise
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
    assert(issame(eat(4, 5, 1), {5, 0}));
    // more test cases...
    return 0;
}