string find_max(vector<string> words){
    string maxWord = "";
    int maxUniqueChars = 0;
    
    for(const string& word : words){
        int uniqueChars = 0;
        vector<bool> visited(26, false); // Assuming only lowercase alphabets
        
        for(char c : word){
            if(!visited[c - 'a']){
                visited[c - 'a'] = true;
                uniqueChars++;
            }
        }
        
        if(uniqueChars > maxUniqueChars || (uniqueChars == maxUniqueChars && word < maxWord)){
            maxUniqueChars = uniqueChars;
            maxWord = word;
        }
    }
    
    return maxWord;
}