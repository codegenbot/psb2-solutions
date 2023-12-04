```
#include <iostream>
#include <cmath>

using namespace std;

bool is_prime(long long n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}
```