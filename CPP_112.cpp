```
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    for (int i = 0; i < s.size(); i++) {
        if (c.find(s[i]) == string::npos) {
            result.push_back(s[i]);
        }
    }
    return result;
}
```