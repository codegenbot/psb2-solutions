#include <cmath>
#include <string>

std::string rounded_avg(int n, int m) {
    if (n > m) {
        return "-1";
    }

    int sum = 0;
    int count = 0;

    for (int i = n; i <= m; i++) {
        sum += i;
        count++;
    }

    int avg = std::round(sum / count);

    std::string binary = "";

    while (avg > 0) {
        binary = std::to_string(avg % 2) + binary;
        avg /= 2;
    }

    return binary;
}