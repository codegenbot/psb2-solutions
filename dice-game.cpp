#include <iostream>
#include <iomanip>

int main() {
    int n, m;
    std::cin >> n >> m;

    double probability = 0.0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i > j) {
                probability += 1.0;
            }
        }
    }

    probability /= n * m; // divide by (n * m) here

    std::cout << std::fixed << std::setprecision(7) << probability << std::endl;

    return 0;
}