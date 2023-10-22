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
Given a string of one or more words (separated by spaces), reverse all of the words that are ﬁve or more letters long and return the resulting string.
For example,
input:

output:

input:
a
output:
a
input:
this is a test
output:
this is a test
input:
this is another test
output:
this is rehtona test
input:
hi
output:
hi
*/
int main() {
    string s;
    while(getline(cin,s)){
        int n = s.size();
        int i = 0;
        while(i<n){
            int j = i;
            while(j<n && s[j]!=' ') j++;
            if(j-i>=5){
                string now = s.substr(i,j-i);
                reverse(now.begin(),now.end());
                s.replace(i,j-i,now);
            }
            i = j+1;
        }
        cout<<s<<endl;
    }
    return 0;
}
