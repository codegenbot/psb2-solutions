#include <vector>
#include <iostream>
#include <cmath>

double calculateEuclideanDistance(const std::vector<double>& vector1, const std::vector<double>& vector2) {
    float sum = 0.0f;

    for (size_t i = 0; i < vector1.size(); i++) {
        float diff = vector1[i] - vector2[i];
        sum += diff * diff;
    }

    return std::sqrt(sum);
}

int main() {
    size_t n;
    std::cin >> n;

    std::vector<double> vector1(n);
    for (size_t i = 0; i < n; i++) {
        std::cin >> vector1[i];
    }

    std::cin >> n;

    std::vector<double> vector2(n);
    for (size_t i = 0; i < n; i++) {
        std::cin >> vector2[i];
    }

    double distance = calculateEuclideanDistance(vector1, vector2);

    std::cout.precision(15);
    std::cout << std::fixed << distance << std::endl;

    return 0;
}