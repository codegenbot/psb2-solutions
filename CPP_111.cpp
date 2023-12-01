#include<iostream>
#include<map>
#include<assert.h>

using namespace std;

map<char, int> histogram(string test) {
    map<char, int> counts;
    char letter;
    for (int i = 0; i < test.length(); i++) {
        if (test[i] != ' ') {
            letter = test[i];
        } else {
            counts[letter] += 1;
            letter = ' ';
        }
    }
    if (letter != ' ') counts[letter] += 1;
    return counts;
}

bool issame(map<char, int> a, map<char, int> b) {
    return a.size() == b.size() && a == b;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));

    return 0;
}