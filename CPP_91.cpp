#include <string>

int is_bored(string S){
    int count = 0;
    string sentence;
    for(int i = 0; i < S.length(); i++){
        if(S[i] == '.' || S[i] == '?' || S[i] == '!'){
            if(sentence.length() > 0 && sentence[0] == 'I'){
                count++;
            }
            sentence.clear();
        }
        else{
            sentence += S[i];
        }
    }
    return count;
}