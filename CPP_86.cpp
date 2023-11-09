/*
Write a function that takes a string and returns an ordered version of it.
Ordered version of string, is a string where all words (separated by space)
are replaced by a new word where all the characters arranged in
ascending order based on ascii value.
Note: You should keep the order of words and blank spaces in the sentence.

For example:
anti_shuffle("Hi") returns "Hi"
anti_shuffle("hello") returns "ehllo"
anti_shuffle("Hello World!!!") returns "Hello !!!Wdlor"
*/
#include<stdio.h>
#include<string>
#include<algorithm>
using namespace std;
string anti_shuffle(string s){
	string res;
	string temp;
	for(int i=0;i<s.size();i++){
		if(s[i]==' '){
			sort(temp.begin(),temp.end());
			res+=temp;
			temp.clear();
			res+=' ';
		}else{
			temp+=s[i];
		}
	}
	sort(temp.begin(),temp.end());
	res+=temp;
	return res;
}
