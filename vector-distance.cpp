#include <vector>
#include <iostream>
#include <cmath>

double calculateDistance(const std::vector<double>& vector1, const std::vector<double>& vector2) {
    long double sum = 0.0;
    for (size_t i = 0; i < vector1.size(); i++) {
        sum += pow(vector1[i] - vector2[i], 2);
    }
    return sqrtl(sum);
}

int main() {
    size_t n;
    std::cin >> n;

    std::vector<double> vector1(n);
    for (size_t i = 0; i < n; i++) {
        std::cin >> vector1[i];
    }

    std::vector<double> vector2(n);
    for (size_t i = 0; i < n; i++) {
        std::cin >> vector2[i];
    }

    double distance = calculateDistance(vector1, vector2);
    std::cout << distance << std::endl;

    return 0;
}