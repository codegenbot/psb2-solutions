#include <iostream>
#include <cmath>

int multiply(int a, int b) {
    return abs(a % 10) * abs(b % 10);
}

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << "The result is: " << multiply(a, b) << std::endl;
    return 0;
}