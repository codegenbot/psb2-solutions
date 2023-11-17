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
	MD5_CTX md5_ctx;
	if(text.length() == 0)
		return NULL;
	MD5_Init(&md5_ctx);
	MD5_Update(&md5_ctx,text.c_str(),text.length());
	unsigned char result[MD5_DIGEST_LENGTH];
        MD5_Final(result,&md5_ctx);
	char buf[33];
	for(int i = 0; i < 16; i++){
		sprintf(buf + i*2,"%02x",result[i]);
	}
	return string(buf);
}
