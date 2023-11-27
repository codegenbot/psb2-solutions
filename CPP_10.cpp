#include<stdio.h>
#include<string>
using namespace std;
bool is_palindrome(string str){
    string s(str.rbegin(),str.rend());
    return s==str;
}
string make_palindrome(string str){
    int n = str.length();
    int i;
    string rev = "";
    for(i=n-1; i>=0; i--){
        rev += str[i];
        if(is_palindrome(rev)){
            break;
        }
    }
    return str + rev;
}