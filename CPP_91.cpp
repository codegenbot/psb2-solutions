#include <string>

int is_bored(std::string S){
    int count = 0;
    int i = 0;
    int n = S.length();
    
    while(i < n){
        if(S[i] == 'I'){
            while(i < n && S[i] != '.' && S[i] != '?' && S[i] != '!'){
                i++;
            }
            count++;
        }
        i++;
    }
    
    return count;
}

int main() {
    assert(is_bored("You and I are going for a walk") == 0);

    return 0;
}