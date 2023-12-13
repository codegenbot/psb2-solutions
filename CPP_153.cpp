```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string input_string = "Sp";
    vector<string> extensions = {"671235", "Bb"};
    vector<string>::iterator strength = 0;
    for (int i = 0; i < input_string.length(); i++) {
        if (input_string[i] == '.') {
            string current_extension = input_string.substr(i + 1);
            strength = current_extension.begin();
            if (strength > extensions.size()) {
                return current_extension;
            }
        }
    }
    return "";
}
```