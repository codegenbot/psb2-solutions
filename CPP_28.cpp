#include <string>
#include <vector>

std::string concatenate(std::vector<std::string> strings){
    std::string result = "";
    for (std::string str : strings) {
        result += str;
    }
    return result;
}