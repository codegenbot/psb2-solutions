```
#include <iostream>
#include <vector>
#include <string>
#include <list>
using namespace std;

vector<int> filter_integers(std::list<std::any> values) {
    vector<int> result;
    for (auto& value : values) {
        if (value.type() == typeid(int)) {
            result.push_back(std::any_cast<int>(value));
        }
    }
    return result;
}
```