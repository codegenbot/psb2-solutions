int x_or_y(int n, int x, int y) {
    if (is_prime(n)) {
        return x;
    } else {
        return y;
    }
}

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}