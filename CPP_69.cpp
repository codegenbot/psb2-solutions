int search(vector<int> lst) {
    int maxFreq = -1;
    int result = -1;
    for (int num : lst) {
        int freq = 0;
        for (int i = 0; i < lst.size(); i++) {
            if (lst[i] == num) {
                freq++;
            }
        }
        if (freq >= num && num > result) {
            result = num;
        }
    }
    return result;
}