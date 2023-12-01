#include <vector>
#include <algorithm>

bool issame(std::vector<std::vector<int>> a, std::vector<std::vector<int>> b) {
    // Function definition goes here
    // ...
    return false;
}

std::vector<std::vector<int>> get_row(std::vector<std::vector<int>> lst, int x) {
    std::vector<std::vector<int>> result;
    for (int i = 0; i < lst.size(); i++) {
        for (int j = 0; j < lst[i].size(); j++) {
            if (lst[i][j] == x) {
                result.push_back({i, j});
            }
        }
    }
    std::sort(result.begin(), result.end(), [](std::vector<int> a, std::vector<int> b) {
        if (a[0] == b[0]) {
            return a[1] > b[1];
        } else {
            return a[0] < b[0];
        }
    });
    return result;
}

int main() {
    // Function calls and assertions go here
    
    return 0;
}