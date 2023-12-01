int fibfib(int n){
    if(n == 0 || n == 1){
        return 0;
    }
    else if(n == 2){
        return 1;
    }
    else{
        int a = 0;
        int b = 0;
        int c = 1;
        int result = 0;
        for(int i = 3; i <= n; i++){
            result = a + b + c;
            a = b;
            b = c;
            c = result;
        }
        return result;
    }
}