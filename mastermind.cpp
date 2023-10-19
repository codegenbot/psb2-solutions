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
RRYW
output:
0
3
input:
WWYY
RBYG
output:
1
2
input:
WWRR
WWYY
output:
1
2
input:
GGGB
BBOG
output:
0
0
input:
RBYG
YBGR
output: 3 2
input: BYOG YBOG GGYY YOBB output: 0 4
input: RARY YBRY output: 4 0
*/
int main() {
    string code, guess;
    cin >> code >> guess;
    int black = 0, white = 0;
    map<char, int> codeMap;
    map<char, int> guessMap;
    for(int i = 0; i < 4; i++){
        codeMap[code[i]]++;
        guessMap[guess[i]]++;
        if(code[i] == guess[i]) black++;
    }
    for(char c = 'A'; c <= 'F'; c++){
        white += min(codeMap[c], guessMap[c]);
    }
    white -= black;
    cout << black << endl;
    cout << white << endl;
    return 0;
}
