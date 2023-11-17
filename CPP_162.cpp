/*
Given a string 'text", return its md5 hash equivalent string.
If 'text" is an empty string, return None.

>>> string_to_md5("Hello world") == "3e25960a79dbc69b674cd4ec67a72c62"
*/
#include<stdio.h>
#include<string>
#include<openssl/md5.h>
using namespace std;
string string_to_md5(string text){
	if(text.empty()) return "None";
	unsigned char res[MD5_DIGEST_LENGTH];
	MD5((unsigned char*)text.c_str(), text.length(), res);
	char buf[33]={'\0'};
	for(int i=0; i<16; i++){
		sprintf(buf, "%s%02x", buf, res[i]);
	}
	return string(buf);
}
