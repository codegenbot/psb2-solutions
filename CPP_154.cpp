/*
You are given 2 words. You need to return true if the second word or any of its rotations is a substring in the first word
cycpattern_check("abcd","abd") => false
cycpattern_check("hello","ell") => true
cycpattern_check("whassup","psus") => false
cycpattern_check("abab","baa") => true
cycpattern_check("efef","eeff") => false
cycpattern_check("himenss",'simen") => true

*/
#include<stdio.h>
#include<string>
using namespace std;
bool cycpattern_check(string a,string b){
	int n = a.length();
	int m = b.length();
	if(n<m)
		return false;
	for(int i=0;i<n;i++){
		int j=0;
		while(j<m && a[(i+j)%n]==b[j]){
			j++;
		}
		if(j==m)
			return true;
	}
	return false;
}
