```
#include <openssl/evp.h>
#include <string>

// ...

std::string string_to_md5(const std::string& text) {
    if (text.empty()) {
        return "";
    }
    EVP_MD_CTX *ctx = EVP_MD_CTX_new();
    EVP_DigestInit_ex(ctx, EVP_md5(), NULL);
    EVP_DigestUpdate(ctx, text.c_str(), text.size());
    unsigned char md[EVP_MAX_MD_SIZE];
    EVP_DigestFinal_ex(ctx, md, NULL);
    std::string result;
    for (int i = 0; i < EVP_MD_CTX_size(ctx); i++) {
        result += std::to_string(md[i]);
    }
    return result;
}
```