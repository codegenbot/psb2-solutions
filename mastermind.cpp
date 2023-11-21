#include <iostream>
#include <string>
using namespace std;

pair<int, int> mastermind(string code, string guess) {
    int blackPegs = 0;
    int whitePegs = 0;
    int codeCount[26] = {0};
    int guessCount[26] = {0};

    for (int i = 0; i < code.length(); i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            if ((code[i] >= 'A' && code[i] <= 'F') || (code[i] >= '0' && code[i] <= '9')) {
                codeCount[code[i] - 'A']++;
            }
        }
    }

    for (int i = 0; i < guess.length(); i++) {
        int index = guess[i] - 'A';
        if (codeCount[index] > 0 && guessCount[index] > 0 && guess[i] != code[i]) {
            whitePegs++;
            codeCount[index]--;
            guessCount[index]--;
        }
    }

    return make_pair(blackPegs, whitePegs);
}

int main() {
    string code, guess;
    cin >> code >> guess;

    pair<int, int> result = mastermind(code, guess);
    cout << result.first << endl;
    cout << result.second << endl;

    return 0;
}