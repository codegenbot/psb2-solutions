```cpp
#include <iostream>
#include <cmath>
#include <vector>
#include <cstdlib>

double euclideanDistance(const std::vector<double>& v1, const std::vector<double>& v2) {
    double sum = 0.0;
    for (size_t i = 0; i < v1.size(); i++) {
        sum += pow(v1[i] - v2[i], 2);
    }
    return sqrt(sum);
}

int main() {
    size_t n;
    std::cin >> n;

    std::vector<double> v1;
    v1.resize(n);
    for (size_t i = 0; i < n; i++) {
        std::cin >> v1[i];
    }

    std::cin >> n;

    std::vector<double> v2;
    v2.resize(n);
    for (size_t i = 0; i < n; i++) {
        std::cin >> v2[i];
    }

    double distance = euclideanDistance(v1, v2);
    std::cout << distance << std::endl;

    return 0;
}
```