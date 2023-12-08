#include <iostream>

int main() {
    std::string cents_str;
    std::cin >> cents_str;

    int cents = std::stoi(cents_str);

    int quarters = cents / 25;
    cents %= 25;

    int dimes = cents / 10;
    cents %= 10;

    int nickels = cents / 5;
    cents %= 5;

    int pennies = cents;

    std::cout << pennies << std::endl;
    std::cout << dimes << std::endl;
    std::cout << nickels << std::endl;
    std::cout << quarters << std::endl;

    return 0;
}