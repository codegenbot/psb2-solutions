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
int main() {
    string s;
    cin>>s;
    int cnt=0;
    int ans=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='/'){
            ans+=10-cnt;
            ans+=s[i+1]-'0';
            cnt=0;
        }
        else if(s[i]=='-'){
            cnt=0;
        }
        else if(s[i]=='X'){
            ans+=10;
            ans+=s[i+1]-'0';
            if(s[i+2]=='/'){
                ans+=10-s[i+1]-'0';
            }
            else{
                ans+=s[i+2]-'0';
            }
            cnt=0;
        }
        else{
            ans+=s[i]-'0';
            cnt+=s[i]-'0';
        }
    }
    cout<<ans<<endl;
    return 0;
}
