#include <string>
#include <iostream>
#include <cassert>
#include <cstring>
using namespace std;

int calculateLength(string str){
    return str.length();
}

int main() {
    assert(calculateLength("asdasnakj") == 9);
    // your code here
    return 0;
}