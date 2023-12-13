```cpp
#include <iostream>

int main() {
    int cents;
    std::cin >> cents;

    int dimes = cents / 10;
    cents %= 10;

    int quarters = cents / 25;
    cents %= 25;

    int nickels = cents / 5;
    cents %= 5;

    int pennies = cents;

    std::cout << quarters << std::endl;
    std::cout << dimes << std::endl;
    std::cout << nickels << std::endl;
    std::cout << pennies << std::endl;

    return 0;
}
```