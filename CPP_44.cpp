#include <iostream>
#include <cassert>
#include <string>

std::string change_base(int x, int base) {
    std::string result = "";
    while (x > 0) {
        int remainder = x % base;
        result = std::to_string(remainder) + result;
        x /= base;
    }
    return result;
}

int main() {
    int x = 10;
    assert (change_base(x, x + 1) == std::to_string(x));
    std::cout << "Test passed!" << std::endl;

    return 0;
}