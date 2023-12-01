#include <iostream>
#include <string> // Include the string library
#include <cassert> // Include the assert library

std::string decimal_to_binary(int decimal) {
    std::string binary = "db";
    while (decimal > 0) {
        binary = std::to_string(decimal % 2) + binary;
        decimal /= 2;
    }
    return binary + "db";
}

int main() {
    assert(decimal_to_binary(15) == "db1111db"); // Add missing assert header and fix function name
    return 0;
}