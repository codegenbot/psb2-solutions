#include <iostream>

int main() {
    int cents = 0;
    std::cin >> cents;

    int quarters = cents / 25;
    cents %= 25;

    int dimes = cents / 10;
    cents %= 10;

    int nickels = cents / 5;
    cents %= 5;

    int pennies = cents;

    int totalCoins = quarters + dimes + nickels + pennies;

    std::cout << quarters << std::endl;
    std::cout << dimes << std::endl;
    std::cout << nickels << std::endl;
    std::cout << pennies << std::endl;
    std::cout << totalCoins << std::endl;

    return 0;
}