```
#include <iostream>
#include <string>
#include <vector>

std::string find_max(const std::string& words) {
    auto it = words.begin();
    char max_char = *it;
    for (++it; it != words.end(); ++it) {
        if (*it > max_char) {
            max_char = *it;
        }
    }
    return std::string(max_char);
}

int main() {
    assert(find_max("play") == "p");
    return 0;
}
```