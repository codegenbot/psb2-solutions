```
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> total_match(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    std::vector<std::string> result;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == "this") {
            result.push_back(b[i]);
        }
    }
    return result;
}
```