#include <cassert>
#include <cstring>
#include <string>
using namespace std;

int calculateLength(string str){
    return str.length();
}

int main() {
    // Write your code here

    assert (calculateLength("asdasnakj") == 9);
    return 0;
}