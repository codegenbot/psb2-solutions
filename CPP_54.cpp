#include <algorithm>
#include <cassert>
#include <string>

bool same_chars(std::string s0, std::string s1){
    std::sort(s0.begin(), s0.end());
    std::sort(s1.begin(), s1.end());
    return s0 == s1;
}