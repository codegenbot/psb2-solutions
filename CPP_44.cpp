#include <string>
#include <cassert>
#include <iostream>

std::string change_base(int x, int base) {
    std::string result = "";
    while (x > 0) {
        result = std::to_string(x % base) + result;
        x /= base;
    }
    return result;
}

int main() {
    int x;
    std::cout << "Enter the value of x: ";
    std::cin >> x;

    // Check the functionality of change_base function
    assert(change_base(x, x + 1) == std::to_string(x));

    return 0;
}