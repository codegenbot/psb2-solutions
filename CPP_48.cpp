#include <string>

bool is_palindrome(string text){
    int length = text.length();
    for(int i=0; i<length/2; i++){
        if(text[i] != text[length-i-1]){
            return false;
        }
    }
    return true;
}