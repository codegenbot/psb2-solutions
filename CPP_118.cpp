string get_closest_vowel(string word){
    string vowels = "aeiouAEIOU";
    int n = word.length();
    int i = n - 2;
    while (i > 0) {
        if (vowels.find(word[i]) != string::npos && !isVowel(word[i-1]) && !isVowel(word[i+1])) {
            return string(1, word[i]);
        }
        i--;
    }
    return "";
}