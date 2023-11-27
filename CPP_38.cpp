#include <iostream>
#include <string>
using namespace std;

string encode_cyclic(string s) {
    int l = s.length();
    int num = (l + 2) / 3;
    string x, output;
    int i;
    for (i = 0; i * 3 < l; i++) {
        x = s.substr(i * 3, 3);
        if (x.length() == 3) x = x.substr(1) + x[0];
        output += x;
    }
    return output;
}

string decode_cyclic(string s) {
    string output;
    int l = s.length();
    int num = (l + 2) / 3;
    int i;
    for (i = 0; i * 3 < l; i++) {
        output += s.substr(i * 3, 3);
    }
    return output;
}