#include <iostream>
#include <string>

std::string decipherMessage(const std::string& cipher1, const std::string& cipher2, const std::string& message) {
    std::string decipheredMessage = "";
    for (char ch : message) {
        size_t index = cipher2.find(ch);
        if (index != std::string::npos) {
            decipheredMessage += cipher1[index];
        } else {
            decipheredMessage += ch;
        }
    }
    return decipheredMessage;
}

int main() {
    std::string cipher1, cipher2, message;
    std::cin >> cipher1 >> cipher2 >> message;
    std::cout << decipherMessage(cipher1, cipher2, message) << std::endl;
    return 0;
}