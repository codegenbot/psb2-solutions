#include <iostream>

int main() {
    int cents;
    std::cin >> cents;
    
    int quarters = cents / 25;
    cents = cents % 25;
    int dimes = cents / 10;
    cents = cents % 10;
    int nickels = cents / 5;
    cents = cents % 5;
    int pennies = cents;
    
    std::cout << pennies << std::endl;
    std::cout << nickels << std::endl;
    std::cout << dimes << std::endl;
    std::cout << quarters << std::endl;
    
    return 0;
}