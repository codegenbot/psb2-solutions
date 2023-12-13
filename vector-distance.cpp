```cpp
#include <vector>
#include <iostream>
#include <cmath>
#include <iomanip>

double euclideanDistance(const std::vector<double>& vec1, const std::vector<double>& vec2) {
    double sum = 0.0;
    for (size_t i = 0; i < vec1.size(); i++) {
        double diff = vec1[i] - vec2[i];
        sum += diff * diff;
    }
    return std::sqrt(sum);
}

int main() {
    int n;
    std::cin >> n;
    std::vector<double> vec1(n);
    for (int i = 0; i < n; i++) {
        std::cin >> vec1[i];
    }

    std::cin >> n;
    std::vector<double> vec2(n);
    for (int i = 0; i < n; i++) {
        std::cin >> vec2[i];
    }

    double distance = euclideanDistance(vec1, vec2);
    std::cout << std::fixed << std::setprecision(15) << distance << std::endl;

    return 0;
}
```