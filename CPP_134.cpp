/*
Create a function that returns true if the last character
of a given string is an alphabetical character and is not
a part of a word, and false otherwise.
Note: "word" is a group of characters separated by space.

Examples:
check_if_last_char_is_a_letter("apple pie") ➞ false
check_if_last_char_is_a_letter("apple pi e") ➞ true
check_if_last_char_is_a_letter("apple pi e ") ➞ false
check_if_last_char_is_a_letter("") ➞ false 
*/
#include<stdio.h>
#include<string>
using namespace std;
bool check_if_last_char_is_a_letter(string txt){
	int i,len=txt.length();
	if(len==0)
		return false;
	for(i=len-1;i>=0;i--){
		if(txt[i]==' ')
			return false;
		if(txt[i]>='a' && txt[i]<='z')
			return true;
		if(txt[i]>='A' && txt[i]<='Z')
			return true;
	}
	return false;
}
int main(){
	string str;
	getline(cin,str);
	if(check_if_last_char_is_a_letter(str))
		printf("true");
	else
		printf("false");
	return 0;
}
