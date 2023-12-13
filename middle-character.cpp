```cpp
#include <iostream>
#include <string>

using namespace std;

string middleCharacter(string str) {
    int len = str.size();

    if (len % 2 == 1) {
        return string(1, str[len/2]);
    } else {
        return str.substr(len/2 - 1, 2);
    }
}

int main() {
    string input;
    getline(cin, input);
    cout << middleCharacter(input) << endl;
    return 0;
}
```