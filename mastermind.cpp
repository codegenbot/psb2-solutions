```cpp
#include <iostream>
#include <string>
using namespace std;

pair<int, int> getClues(string code, string guess) {
    int blackPegs = 0, whitePegs = 0;
    int codeCount[6] = {0};
    int guessCount[6] = {0};
    
    for (int i = 0; i < code.length(); i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            codeCount[(code[i] - 'A') - 'A']++;
            guessCount[(guess[i] - 'A') - 'A']++;
        }
    }
    
    for (int i = 0; i < 6; i++) {
        whitePegs += min(codeCount[i], guessCount[i]);
    }
    
    return make_pair(whitePegs, blackPegs);
}

int main() {
    string code, guess;
    cin >> code >> guess;
    pair<int, int> clues = getClues(code, guess);
    cout << clues.first << endl;
    cout << clues.second << endl;
    return 0;
}
```