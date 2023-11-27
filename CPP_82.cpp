#include <iostream>
#include <string>

bool is_prime_length(std::string str) {
    int len = str.length();
    if (len <= 1) {
        return false;
    }
    for (int i = 2; i * i <= len; i++) {
        if (len % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    std::string input;
    std::cin >> input;
    bool result = is_prime_length(input);
    std::cout << std::boolalpha << result << std::endl;
    return 0;
}