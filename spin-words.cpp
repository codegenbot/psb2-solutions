#include <iostream>
#include <sstream>
#include <algorithm>

std::string reverseWords(const std::string& sentence) {
    std::stringstream ss(sentence);
    std::string word;
    std::string result;

    while (ss >> word) {
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        result += word + " ";
    }

    // Remove trailing space
    if (!result.empty()) {
        result.pop_back();
    }

    return result;
}

int main() {
    std::string sentence;
    std::getline(std::cin, sentence);

    std::cout << reverseWords(sentence) << std::endl;

    return 0;
}