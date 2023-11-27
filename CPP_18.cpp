#include <iostream>
#include <string>

int how_many_times(std::string str, std::string substring) {
    int count = 0;
    int subLen = substring.length();
    int strLen = str.length();

    for (int i = 0; i <= strLen - subLen; i++) {
        bool found = true;
        for (int j = 0; j < subLen; j++) {
            if (str[i + j] != substring[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            count++;
        }
    }
    return count;
}

int main() {
    std::string str, substring;
    std::cin >> str >> substring;
    std::cout << how_many_times(str, substring) << std::endl;
    return 0;
}