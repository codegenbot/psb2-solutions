int search(vector<int> lst){
    int maxFreq = 0;
    int result = -1;
    for(int i = 0; i < lst.size(); i++){
        int freq = 0;
        for(int j = 0; j < lst.size(); j++){
            if(lst[i] == lst[j]){
                freq++;
            }
        }
        if(freq >= lst[i] && lst[i] > maxFreq){
            maxFreq = lst[i];
            result = lst[i];
        }
    }
    return result;
}