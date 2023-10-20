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
int blackPegs(string code, string guess) {
    int count = 0;
    for(int i = 0; i < 4; i++) {
        if(code[i] == guess[i]) {
            count++;
        }
    }
    return count;
}
int whitePegs(string code, string guess) {
    int count = 0;
    int codeArr[6] = {0};
    int guessArr[6] = {0};
    for(int i = 0; i < 4; i++) {
        switch(code[i]) {
            case 'B':
                codeArr[0]++;
                break;
            case 'G':
                codeArr[1]++;
                break;
            case 'O':
                codeArr[2]++;
                break;
            case 'P':
                codeArr[3]++;
                break;
            case 'R':
                codeArr[4]++;
                break;
            case 'Y':
                codeArr[5]++;
                break;
        }
        switch(guess[i]) {
            case 'B':
                guessArr[0]++;
                break;
            case 'G':
                guessArr[1]++;
                break;
            case 'O':
                guessArr[2]++;
                break;
            case 'P':
                guessArr[3]++;
                break;
            case 'R':
                guessArr[4]++;
                break;
            case 'Y':
                guessArr[5]++;
                break;
        }
    }
    for(int i = 0; i < 6; i++) {
        count += min(codeArr[i], guessArr[i]);
    }
    return count;
}
int main() {
    string code, guess;
    cin >> code >> guess;
    cout << blackPegs(code, guess) << endl;
    cout << whitePegs(code, guess) << endl;
    return 0;
}
