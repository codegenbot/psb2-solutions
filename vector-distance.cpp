#include <vector>
#include <iostream>
#include <cmath>

double calculateEuclideanDistance(const std::vector<double>& vector1, const std::vector<double>& vector2) {
    double distanceSquared = 0.0;

    for (int i = 0; i < vector1.size(); i++) {
        distanceSquared += pow((vector1[i] - vector2[i]), 2);
    }

    return sqrt(distanceSquared);
}

int main() {
    int n;
    std::cin >> n;
    std::vector<double> vector1(n);

    for (int i = 0; i < n; i++) {
        std::cin >> vector1[i];
    }

    std::cin >> n;
    std::vector<double> vector2(n);

    for (int i = 0; i < n; i++) {
        std::cin >> vector2[i];
    }

    double distance = calculateEuclideanDistance(vector1, vector2);
    std::cout << distance << std::endl;

    return 0;
}