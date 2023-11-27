#include <string>
#include <cassert>
#include <iostream>

int how_many_times(std::string str, std::string substring) {
    int count = 0;
    int subLen = substring.length();
    int strLen = str.length();

    for (int i = 0; i <= strLen - subLen; i++) {
        bool match = true;
        for (int j = 0; j < subLen; j++) {
            if (str[i + j] != substring[j]) {
                match = false;
                break;
            }
        }
        if (match) {
            count++;
        }
    }

    return count;
}

int main() {
    assert(how_many_times("john doe", "john") == 1);
    
    std::cout << "Test cases passed successfully!" << std::endl;
    
    return 0;
}