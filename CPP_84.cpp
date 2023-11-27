string solve(int N){
    int sum = 0;
    while(N > 0){
        sum += N % 2;
        N /= 2;
    }
    string binary = "";
    while(sum > 0){
        binary = to_string(sum % 2) + binary;
        sum /= 2;
    }
    return binary;
}