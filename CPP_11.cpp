#include <iostream>
#include <cassert>
#include <string>

std::string string_xor(const std::string& a, const std::string& b) {
    std::string result;
    for(size_t i=0; i<a.length(); i++){
        if(a[i] != b[i]){
            result += "1";
        }
        else{
            result += "0";
        }
    }
    return result;
}

int main() {
    assert (string_xor("0101", "0000") == "0101");

    // Add more test cases here

    std::cout << "All test cases passed." << std::endl;
    return 0;
}