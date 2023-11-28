#include <iostream>
#include <string>

std::string decipherMessage(std::string cipher1, std::string cipher2, std::string message) {
    std::string decipheredMessage;
    for (char c : message) {
        size_t index = cipher1.find(c);
        decipheredMessage += cipher2[index];
    }
    return decipheredMessage;
}

int main() {
    std::string cipher1, cipher2, message;
    std::cin >> cipher1 >> cipher2 >> message;
    std::cout << decipherMessage(cipher1, cipher2, message) << std::endl;
    return 0;
}