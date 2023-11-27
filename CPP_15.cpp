#include <string>
#include <cassert>

std::string string_sequence(int n){
    std::string result = "";
    for(int i=0; i<=n; i++){
        result += std::to_string(i) + " ";
    }
    result.pop_back();
    return result;
}