#include <vector>
#include <cassert>

std::vector<float> derivative(std::vector<float> xs){
    std::vector<float> result;
    for(int i=1; i<xs.size(); i++){
        result.push_back(xs[i] * i);
    }
    return result;
}

bool issame(const std::vector<float>& a, const std::vector<float>& b){
    return a == b;
}

int main() {
    assert(issame(derivative({1}), {}));
    assert(issame(derivative({1, 2, 3}), {2, 6}));
    assert(issame(derivative({0, -1, 2, -3}), {-1, 4, -9}));
}