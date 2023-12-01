#include <string>

string encode_cyclic(string s) {
    string output;
    int l = s.length();
    int num = (l + 2) / 3;

    for (int i = 0; i < num; i++) {
        string x = s.substr(i * 3, 3);
        if (x.length() == 3) {
            x = x.substr(1, 2) + x[0];
        } else if (x.length() == 2) {
            x = x[1] + x[0];
        }
        output += x;
    }

    return output;
}

string decode_cyclic(string s){ 
    string output;
    int l = s.length();
    int num = (l + 2) / 3;

    for (int i = 0; i < num; i++) {
        string x = s.substr(i * 3, 3);
        if (x.length() == 3) {
            x = x[2] + x.substr(0, 2);
        }
        output += x;
    }

    return output;
}

int main() {
    string str;
    std::cin >> str;

    string encoded_str = encode_cyclic(str);
    assert(decode_cyclic(encoded_str) == str);

    return 0;
}