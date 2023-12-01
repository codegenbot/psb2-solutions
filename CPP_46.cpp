#include <iostream>

int fib4(int n) {
    if (n == 0 || n == 1) {
        return 0;
    } else if (n == 2) {
        return 2;
    } else if (n == 3) {
        return 0;
    }

    int fib[n + 1];
    fib[0] = 0;
    fib[1] = 0;
    fib[2] = 2;
    fib[3] = 0;

    for (int i = 4; i <= n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2] + fib[i - 3] + fib[i - 4];
    }

    return fib[n];
}

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;
    std::cout << "fib4(" << n << ") = " << fib4(n) << std::endl;

    return 0;
}