#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <climits>
using namespace std;
/*
Based on the board game Mastermind. Given a Mastermind code and a guess, each of which are 4-character strings consisting of 6 possible colors, return the number of white pegs (correct color, wrong place) and black pegs (correct color, correct place) the codemaster should give as a clue.
For example,
input:
RRRR
RRRR
output:
0
4
input:
BOYG
GYOB
output:
4
0
input:
WYYW
BBOG
output:
0
0
input:
GGGB
BGGG
output:
2
2
input:
BBBB
OOOO
output:
0
0
input:
BWYG
YWGB
output:
4
0
*/
int main() {
    string code, guess;
    cin >> code >> guess;
    int code_count[6] = {0}, guess_count[6] = {0};
    int black = 0, white = 0;
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
            guess_count[guess[i] - 'A']--;
        } else {
            code[i] - 'A';
            guess[i] - 'A';
        }
    }
    for (int i = 0; i < 6; ++i) {
        if (code_count[i] > 0) code_count[i]++;
        if (guess_count[i] < 0) guess_count[i]--;
        white += min(code_count[i], guess_count[i]);
    }
    cout << white << endl << black << endl;
}
