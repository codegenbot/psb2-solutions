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
    MD5_CTX ctx;
    unsigned char md[16];
    char tmp[3]={'\0'},buf[33]={'\0'};
    MD5_Init(&ctx);
    MD5_Update(&ctx,text.c_str(),text.size());
    MD5_Final(md,&ctx);
    for(int i=0;i<16;i++){
        sprintf(tmp,"%02X",md[i]);
        strcat(buf,tmp);
    }
    return buf;
}
