#include <string>
#include <cassert>

string string_xor(string a, string b) {
    string result;
    for(int i=0; i<a.length(); i++){
        if(a[i] == b[i]){
            result += '0';
        }
        else{
            result += '1';
        }
    }
    return result;
}

int main() {
    assert (string_xor("0101", "0000") == "0101");
    assert (string_xor("1010", "1111") == "0101");
    assert (string_xor("1100", "0011") == "1111");
    // more test cases
    return 0;
}