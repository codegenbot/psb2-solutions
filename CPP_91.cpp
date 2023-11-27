int is_bored(string S) {
    int count = 0;
    bool isSentenceStart = true;
    
    for (int i = 0; i < S.length(); i++) {
        if (isSentenceStart && S[i] == 'I') {
            count++;
            isSentenceStart = false;
        }
        
        if (S[i] == '.' || S[i] == '?' || S[i] == '!') {
            isSentenceStart = true;
        }
    }
    
    return count;
}