```
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int Strongest_Extension(vector<string> extensions) {
    int strength = 0;
    for (int i = 0; i < extensions.size(); i++) {
        if (extensions[i].length() > strength) {
            strength = extensions[i].length();
        }
    }
    return strength;
}

int main(){
    vector<string> extensions = {"671235", "Bb"};
    int strength = Strongest_Extension(extensions);
    cout << strength << endl;
    return 0;
}
```