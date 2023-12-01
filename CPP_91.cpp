int is_bored(string S) {
    int boredomCount = 0;
    bool isSentenceStart = true;
    
    for (int i = 0; i < S.length(); i++) {
        if (S[i] == 'I' && (i == 0 || S[i-1] == '.' || S[i-1] == '?' || S[i-1] == '!')) {
            isSentenceStart = true;
        }
        else if (isSentenceStart && (S[i] == '.' || S[i] == '?' || S[i] == '!')) {
            boredomCount++;
            isSentenceStart = false;
        }
    }
    
    return boredomCount;
}