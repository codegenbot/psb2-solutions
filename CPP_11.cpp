#include <iostream>
#include <string>

std::string string_xor(const std::string& a, const std::string& b) {
    std::string result;
    for(int i=0; i<a.length(); i++){
        if(a[i] == b[i]){
            result += "0";
        }
        else{
            result += "1";
        }
    }
    return result;
}

int main() {
    assert (string_xor("0101", "0000") == "0101");
    // Add more test cases here...

    return 0;
}