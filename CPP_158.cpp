```cpp
#include <iostream>
#include <vector>
#include <string>
#include <cassert>
using namespace std;

string find_max(const vector<string>& words){
    string maxWord = "";
    int maxUniqueChars = 0;

    for (const string& word : words) {
        int uniqueChars = 0;
        bool visited[26] = {false};

        for (char c : word) {
            if (!visited[c - 'a']) {
                visited[c - 'a'] = true;
                uniqueChars++;
            }
        }

        if (uniqueChars > maxUniqueChars || (uniqueChars == maxUniqueChars && word < maxWord)) {
            maxWord = word;
            maxUniqueChars = uniqueChars;
        }
    }

    return maxWord;
}

int main() {
    assert((find_max({"play", "play", "play"}) == "play"));
    // Add more test cases if needed
    
    return 0;
}
```