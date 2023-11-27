#include <vector>

vector<float> derivative(vector<float> xs) {
    vector<float> result;
    for (int i = 1; i < xs.size(); i++) {
        result.push_back(xs[i] * i);
    }
    return result;
}

bool issame(vector<float> a, vector<float> b) {
    // ... function body ...
}

int main() {
    assert (issame(derivative({1}), {}));
    return 0;
}