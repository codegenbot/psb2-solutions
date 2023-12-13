
#include <iostream>
#include <cmath>

bool is_prime(int n);
bool is_multiply_prime(int a);

bool is_prime(int n) {
    if (n <= 1 || n % 2 == 0) return false;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

bool is_multiply_prime(int a) {
    if (a <= 1 || a % 2 == 0) return false;
    for (int i = 3; i * i <= a; i += 2) {
        if (is_prime(i) && a % i == 0) return true;
    }
    return false;
}