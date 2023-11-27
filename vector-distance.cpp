#include <iostream>
#include <vector>
#include <sstream>
#include <cmath>
#include <algorithm>

double calculateEuclideanDistance(const std::vector<double>& vector1, const std::vector<double>& vector2) {
    double sum = 0.0;
    for (int i = 0; i < vector1.size(); i++) {
        double diff = vector1[i] - vector2[i];
        sum += diff * diff;
    }
    return std::sqrt(sum);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<double> vector1(n);
    std::vector<double> vector2(n);

    std::string input;
    std::getline(std::cin.ignore(), input);
    std::stringstream ss(input);
    for (int i = 0; i < n; i++) {
        ss >> vector1[i];
    }

    std::getline(std::cin, input);
    std::replace(input.begin(), input.end(), ',', ' ');
    std::stringstream ss2(input);
    for (int i = 0; i < n; i++) {
        ss2 >> vector2[i];
    }

    double distance = calculateEuclideanDistance(vector1, vector2);
    std::cout << distance << std::endl;

    return 0;
}