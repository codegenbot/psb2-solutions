vector<string> select_words(string s, int n) {
    vector<string> words;
    string word = "";
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            if (count_consonants(word) == n) {
                words.push_back(word);
            }
            word = "";
        } else {
            word += s[i];
        }
    }
    
    if (count_consonants(word) == n) {
        words.push_back(word);
    }
    
    return words;
}

int count_consonants(string word) {
    int count = 0;
    string vowels = "aeiouAEIOU";
    
    for (int i = 0; i < word.length(); i++) {
        if (vowels.find(word[i]) == string::npos) {
            count++;
        }
    }
    
    return count;
}