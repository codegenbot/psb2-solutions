#include <cassert>
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
    // Test the implementation with desired inputs
    assert(how_many_times("hellohellohello", "hello") == 3);
    assert(how_many_times("abababababab", "aba") == 5);

    return 0;
}