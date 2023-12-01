#include <string>
#include <cassert>

std::string generateNumbers(int n) {
    std::string result;
    for (int i = 0; i <= n; i++) {
        result += std::to_string(i) + " ";
    }
    return result;
}