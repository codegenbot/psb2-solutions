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
Based on the board game Mastermind. Given a Mastermind code and a guess, each of which are 4-character strings consisting of 6 possible characters, return the number of white pegs (correct color, wrong place) and black pegs (correct color, correct place) the codemaster should give as a clue.
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
*/

int white(string code, string guess) {
    int cnt = 0;
    int code_cnt[6] = {0};
    int guess_cnt[6] = {0};
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            cnt++;
        } else {
            code_cnt[code[i] - 'A']++;
            guess_cnt[guess[i] - 'A']++;
        }
    }
    for (int i = 0; i < 6; i++) {
        cnt += min(code_cnt[i], guess_cnt[i]);
    }
    return cnt;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << white(code, guess) << endl;
    return 0;
}
