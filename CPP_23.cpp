#include <iostream>
#include <string>
#include <cassert>
#include <cstring>

int myStrlen(const std::string& str){
    return str.size();
}

int main(){
    assert (myStrlen("asdasnakj") == 9);
    return 0;
}