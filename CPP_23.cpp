#include <string>
#include <cassert>
#include <iostream>
#include <cstring>

int calculateLength(std::string str){
    return str.length();
}

int main() {
    assert(calculateLength("asdasnakj") == 9);
    // your code here
    return 0;
}