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
This problem gives 3 strings. The first two represent a cipher, mapping each character in one string to the one at the same index in the other string. 
The program must apply this cipher to the third string and return the deciphered message.

For example,
input:

e
l
eeeeeeeeee
output:
llllllllll
input:
a
a
a
output:
a
input:
j
h
j
output:
h
input:
a
z
a
output:
z
*/
int main() {
    string a, b, c;
    cin >> a >> b >> c;
    for(int i=0; i<c.length(); i++) {
        //cout << c[i] << endl;
        int pos = a.find(c[i]);
        if(pos != string::npos) {
            c[i] = b[pos];
        }
    }
    cout << c << endl;
    return 0;
}
