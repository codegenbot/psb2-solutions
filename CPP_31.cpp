#include <iostream>
using namespace std;

bool is_prime(long long n) {
    if (n <= 1) {
        return false;
    }
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    long long num;
    cin >> num;
    cout << boolalpha << is_prime(num) << endl;
    return 0;
}