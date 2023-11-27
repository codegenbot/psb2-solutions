#include <iostream>
#include <string>
#include <openssl/evp.h>
#include <openssl/md5.h>

std::string string_to_md5(const std::string& text) {
    if (text.empty()) {
        return "None";
    }

    const EVP_MD* md;
    EVP_MD_CTX* mdctx;
    unsigned char digest[MD5_DIGEST_LENGTH];

    md = EVP_md5();
    mdctx = EVP_MD_CTX_new();
    EVP_DigestInit_ex(mdctx, md, nullptr);
    EVP_DigestUpdate(mdctx, text.c_str(), text.length());
    EVP_DigestFinal_ex(mdctx, digest, nullptr);
    EVP_MD_CTX_free(mdctx);

    char md5String[33];
    for (unsigned int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        snprintf(&md5String[i * 2], 3, "%02x", digest[i]);
    }

    return std::string(md5String);
}

int main() {
    std::string text;
    std::cout << "Enter text: ";
    std::getline(std::cin, text); // Read the entire line

    std::string md5 = string_to_md5(text);
    std::cout << "MD5: " << md5 << std::endl;

    return 0;
}