int digits(int n){
    int product = 1;
    while (n > 0) {
        int digit = n % 10;
        if (digit % 2 != 0) {
            product *= digit;
        }
        n /= 10;
    }
    if (product == 1) {
        return 0;
    }
    return product;
}