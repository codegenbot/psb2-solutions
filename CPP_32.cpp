#include <iostream>
#include <vector>
#include <cmath>

double poly(const std::pmr::vector<double>& coeffs, double solution) {
    // TODO: implement this function
}

int main() {
    int ncoeff = 0;
    std::pmr::vector<double> coeffs = {};
    double solution = 0;
    while (ncoeff < 10) {
        std::cout << "Enter coefficient: ";
        std::cin >> ncoeff;
        coeffs.emplace_back(ncoeff);
    }
    solution = find_zero(coeffs);
    if (abs(poly(coeffs, solution)) < 1e-3) {
        std::cout << "The polynomial has no real roots.";
    }
}