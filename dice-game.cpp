#include <iostream>
#include <iomanip>

double probabilityOfPeterWinning(int n, int m) {
    return static_cast<double>(n - 1) / (m * n);
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << std::fixed << std::setprecision(8) << probabilityOfPeterWinning(n, m) << std::endl;
    return 0;
}