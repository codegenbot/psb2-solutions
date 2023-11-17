#include<stdio.h>
#include<string>
using namespace std;
bool is_palindrome(string str){
    //Test if given string is a palindrome 
    string s(str.rbegin(),str.rend());
    return s==str;
}
string make_palindrome(string str){
    /*
    Find the shortest palindrome that begins with a supplied string. 
    Algorithm idea is simple: - Find the longest postfix of supplied string that is a palindrome. 
    - Append to the end of the string reverse of a string prefix that comes before the palindromic suffix.
    >>> make_palindrome("") 
    "" 
    >>> make_palindrome("cat") 
    "catac" 
    >>> make_palindrome("cata") 
    "catac" 
    */
    string s;
    for(int i=str.length()-1;i>=0;i--){
        s+=str[i];
        if(is_palindrome(str.substr(0,i))){
            return str+s;
        }
    }
    return str+s;
}
int main(){
    string str;
    printf("Enter string: ");
    cin>>str;
    printf("%s",make_palindrome(str).c_str());
    return 0;
}
