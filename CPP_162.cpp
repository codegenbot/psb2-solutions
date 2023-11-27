#include <iostream>
#include <string>
#include <array>
#include <openssl/md5.h> // Add this line for the OpenSSL library

std::string string_to_md5(std::string text) {
    if (text.empty()) {
        return "None";
    }

    unsigned char digest[MD5_DIGEST_LENGTH];
    MD5_CTX md5Context;
    MD5_Init(&md5Context);
    MD5_Update(&md5Context, text.data(), text.size());
    MD5_Final(digest, &md5Context);

    std::array<char, 33> md5Hash;
    for (int i = 0; i < MD5_DIGEST_LENGTH; ++i) {
        sprintf(&md5Hash[i * 2], "%02x", (unsigned int)digest[i]);
    }

    return std::string(md5Hash.data(), md5Hash.size());
}

int main() {
    std::string input;
    std::cout << "Enter the text: ";
    std::cin >> input;
    std::cout << "MD5 hash: " << string_to_md5(input) << std::endl;
    return 0;
}