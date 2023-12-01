#include <string>

bool prime_length(std::string str){
    int len = str.length();
    if(len < 2){
        return false;
    }
    for(int i=2; i*i <= len; i++){
        if(len % i == 0){
            return false;
        }
    }
    return true;
}