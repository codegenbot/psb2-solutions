string circular_shift(int x, int shift){
    string num = to_string(x);
    int len = num.length();
    
    if(shift > len){
        reverse(num.begin(), num.end());
        return num;
    }
    
    shift %= len;
    rotate(num.rbegin(), num.rbegin() + shift, num.rend());
    
    return num;
}