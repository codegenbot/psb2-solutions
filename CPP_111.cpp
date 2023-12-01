#include <iostream>
#include <map>
#include <cassert>
using namespace std;

map<char, int> histogram(string test);
bool issame(map<char, int> a, map<char, int> b);

map<char, int> histogram(string test) {
    map<char, int> counts;
    for (char c : test) {
        if (c != ' ') {
            counts[c]++;
        }
    }
    map<char, int> result;
    int maxCount = 0;
    for (auto it = counts.begin(); it != counts.end(); ++it) {
        if (it->second > maxCount) {
            result.clear();
            result[it->first] = it->second;
            maxCount = it->second;
        } else if (it->second == maxCount) {
            result[it->first] = it->second;
        }
    }
    return result;
}

bool issame(map<char, int> a, map<char, int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (auto it = a.begin(); it != a.end(); ++it) {
        if (b.find(it->first) == b.end() || b[it->first] != it->second) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    
    return 0;
}