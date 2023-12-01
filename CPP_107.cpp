#include <vector>
#include <string>
#include <cassert>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

std::vector<int> even_odd_palindrome(int n){
    std::vector<int> result(2, 0);
    for(int i = 1; i <= n; i++){
        std::string s = std::to_string(i);
        int left = 0, right = s.length() - 1;
        bool isPalindrome = true;
        while(left < right){
            if(s[left] != s[right]){
                isPalindrome = false;
                break;
            }
            left++;
            right--;
        }
        if(isPalindrome){
            if(i % 2 == 0){
                result[0]++;
            }else{
                result[1]++;
            }
        }
    }
    return result;
}

int main(){
    std::vector<int> expected = {0, 1};
    std::vector<int> actual = even_odd_palindrome(1);
    assert(std::equal(actual.begin(), actual.end(), expected.begin()));
}