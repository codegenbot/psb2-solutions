```
#include <iostream>
#include <string>
#include <vector>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i].compare(b[i]) != 0) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> totalMatch(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    std::vector<std::string> result;
    for (int i = 0; i < a.size(); i++) {
        if (a[i].compare("this") == 0) {
            result.push_back(b[i]);
        }
    }
    return result;
}

int main() {
    assert(issame(totalMatch({"this"}, {}), {}));
}
```