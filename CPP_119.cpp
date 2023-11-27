string match_parens(vector<string> lst){
    int open = 0;
    int close = 0;
    for(string str : lst){
        for(char c : str){
            if(c == '('){
                open++;
            } else {
                if(open > 0){
                    open--;
                } else {
                    close++;
                }
            }
        }
    }
    if(open == 0 && close == 0){
        return "Yes";
    } else {
        return "No";
    }
}