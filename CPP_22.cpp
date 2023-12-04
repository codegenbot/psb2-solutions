```
#include <iostream>
#include <vector>
#include <string>
#include <variant>
#include <cassert>
using namespace std;

// Declare the list_any type
using list_any = variant<int, char>;

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (auto& value : values) {
        if (value.type() == typeid(int)) {
            result.push_back(std::get<int>(value));
        }
    }
    return result;
}

int main() {
    // Test the function with a list of integers and characters
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    return 0;
}
```