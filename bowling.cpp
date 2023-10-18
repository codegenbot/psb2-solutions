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
#include <algorithm>
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
int score(string input) {
    int sum = 0;
    for (int i = 0; i < input.size(); i++) {
        if (input[i] == 'X') {
            sum += 10;
            if (input[i + 1] == 'X') {
                sum += 10;
            }
            if (input[i + 2] == 'X') {
                sum += 10;
            }
            if (input[i + 1] == '/') {
                sum += 10;
            }
        }
    }
    return sum;
}
int main() {
    string input;
    cin >> input;
    cout << score(input) << endl;
    return 0;
}
