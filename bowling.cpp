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
Given a string representing the individual bowls in a 10-frame round of 10 pin bowling, return the score of that round.
For example,
input:
--------------------
output:
0
input:
XXXXXXXXXXXX
output:
300
input:
5/5/5/5/5/5/5/5/5/5/5
output:
150
input:
7115XXX548/279-X53
output:
145
input:
532/4362X179-41447/5
output:
100
*/

int bowling(string frames) {
    int score = 0;
    int frame = 0;
    int frame_score = 0;
    int bonus = 0;
    for(int i = 0; i < frames.size(); i++) {
        if(frames[i] == 'X') {
            frame_score = 10;
            bonus = 2;
        } else if(frames[i] == '/') {
            frame_score = 10 - frame_score;
            bonus = 1;
        } else if(frames[i] == '-') {
            frame_score = 0;
            bonus = 0;
        } else {
            frame_score = frames[i] - '0';
            bonus = 0;
        }
        score += frame_score;
        if(bonus == 2) {
            if(frames[i+1] == 'X') {
                score += 10;
            } else if(frames[i+1] == '/') {
                score += 10 - (frames[i+2] - '0');
            } else {
                score += frames[i+1] - '0';
            }
            if(frames[i+2] == 'X') {
                score += 10;
            } else if(frames[i+2] == '/') {
                score += 10 - (frames[i+2] - '0');
            } else if(frames[i+2] == '-') {
                score += 0;
            } else {
                score += frames[i+2] - '0';
            }
        } else if(bonus == 1) {
            if(frames[i+1] == 'X') {
                score += 10;
            } else if(frames[i+1] == '/') {
                score += 10 - (frames[i+1] - '0');
            } else if(frames[i+1] == '-') {
                score += 0;
            } else {
                score += frames[i+1] - '0';
            }
        }
        frame++;
        if(frame == 10) {
            break;
        }
    }
    return score;
}


int main() {
    cout << bowling("XXXXXXXXXXXX") << endl;
    cout << bowling("5/5/5/5/5/5/5/5/5/5/5") << endl;
    cout << bowling("7115XXX548/279-X53") << endl;
    cout << bowling("532/4362X179-41447/5") << endl;
    return 0;
}
