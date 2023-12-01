#include<iostream>
#include<string>
#include<openssl/md5.h>

std::string string_to_md5(const std::string& text){
    if(text.empty()){
        return "None";
    }
    
    unsigned char digest[MD5_DIGEST_LENGTH];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    MD5_Update(&ctx, text.c_str(), text.length());
    MD5_Final(digest, &ctx);
    
    char md5hash[33];
    for(int i=0; i<MD5_DIGEST_LENGTH; i++){
        sprintf(&md5hash[i*2], "%02x", digest[i]);
    }
    
    return std::string(md5hash);
}