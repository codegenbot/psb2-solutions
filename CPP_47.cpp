#include <vector>
#include <cmath>
#include <cassert>

float median(vector<float> l){
    sort(l.begin(), l.end());
    int n = l.size();
    if (n % 2 == 0) {
        return (l[n/2 - 1] + l[n/2]) / 2.0;
    } else {
        return l[n/2];
    }
}

int main() {
    float result = median({8, 1, 3, 9, 9, 2, 7});
    assert(abs(result - 7) < 1e-4);
    return 0;
}