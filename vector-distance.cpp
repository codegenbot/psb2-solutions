#include <vector>
#include <iostream>
#include <cmath>

double calculateSquaredEuclideanDistance(const std::vector<double>& vector1, const std::vector<double>& vector2) {
    double sum = 0.0;

    for (size_t i = 0; i < vector1.size(); i++) {
        double diff = vector1[i] - vector2[i];
        sum += diff * diff;
    }

    return sum;
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

    double squaredDistance = calculateSquaredEuclideanDistance(vector1, vector2);

    std::cout.precision(15);
    std::cout << squaredDistance << std::endl;

    return 0;
}