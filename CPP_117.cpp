vector<string> select_words(string s, int n) {
    vector<string> result;
    if (s.empty()) {
        return result;
    }
    
    string word;
    for (char c : s) {
        if (c != ' ') {
            word += c;
        } else {
            int consonantCount = 0;
            for (char ch : word) {
                if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
                    ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
                    consonantCount++;
                }
            }
            if (consonantCount == n) {
                result.push_back(word);
            }
            word = "";
        }
    }
    
    int consonantCount = 0;
    for (char ch : word) {
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
            ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
            consonantCount++;
        }
    }
    if (consonantCount == n) {
        result.push_back(word);
    }
    
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    vector<string> words = {"hello", "world", "cpp", "programming"};
    vector<string> selectedWords = select_words("hello world cpp programming", 3);

    // Replace "issame" with "areSame"
    assert(areSame(words, selectedWords));
    
    return 0;
}