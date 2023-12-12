#include <vector>
#include <iostream>
#include <cmath>
#include <iomanip>

long double euclideanDistance(const std::vector<double>& vector1, const std::vector<double>& vector2) {
    long double sum = 0.0;
    for (int i = 0; i < vector1.size(); i++) {
        sum += pow(vector1[i] - vector2[i], 2);
    }
    return sqrt(sum);
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

    long double distance = euclideanDistance(vector1, vector2);
    std::cout << std::fixed << std::setprecision(14) << distance << std::endl;

    return 0;
}