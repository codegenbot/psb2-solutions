```cpp
#include <iostream>
#include <string>
#include <cassert>
#include <algorithm>

using namespace std;

string fix_spaces(string text) {
    string result = "";
    int consecutiveSpaces = 0;
    for (int i = 0; i < text.length(); i++) {
        if (isspace(text[i])) {
            consecutiveSpaces++;
            if (consecutiveSpaces > 1) {
                result.push_back('-');
            } else {
                result.push_back('_');
            }
        } else {
            result.push_back(text[i]);
            consecutiveSpaces = 0;
        }
    }
    return result;
}

int main() {
    assert(fix_spaces("   Exa 1 2 2 mple") == "-Exa_1-2-2-mple");
    assert(fix_spaces("Hello World") == "Hello_World");
    assert(fix_spaces("A___B___C") == "A-B-C");
    assert(fix_spaces("   ") == "---");
    assert(fix_spaces("") == "");

    cout << "All test cases passed" << endl;

    return 0;
}
```