```
#include<stdio.h>
#include<string>
using namespace std;
string encode_shift(string s){
    // takes as input string encoded with encode_shift function. Returns decoded string.
    int i;
    for (i=0;i<s.length();i++)
    {
        int w=((int)s[i]-5-(int)'a')%26+(int)'a';   
        s[i]=w;
    }
    return s;
}
string decode_shift(string s){
    // takes as input string encoded with encode_shift function. Returns decoded string.
    int i;
    for (i=0;i<s.length();i++)
    {
        int w=((int)s[i]-5-(int)'a')%26+(int)'a';   
        s[i]=w;
    }
    return s;
}
```