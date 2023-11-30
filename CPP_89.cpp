string encrypt(string s){
    string result = "";
    for(int i=0; i<s.length(); i++){
        char c = s[i];
        if(isalpha(c)){
            if(isupper(c)){
                c = (c - 'A' + 2*2) % 26 + 'A';
            }
            else{
                c = (c - 'a' + 2*2) % 26 + 'a';
            }
        }
        result += c;
    }
    return result;
}