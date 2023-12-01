int fib4(int n){
    if (n == 0 || n == 1)
        return 0;
    else if (n == 2)
        return 2;
    else if (n == 3)
        return 0;
    
    int a = 0, b = 0, c = 2, d = 0, result = 0;
    
    for (int i = 4; i <= n; i++) {
        result = a + b + c + d;
        a = b;
        b = c;
        c = d;
        d = result;
    }
    
    return result;
}