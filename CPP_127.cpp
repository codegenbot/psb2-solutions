string intersection(vector<int> interval1, vector<int> interval2) {
    int start1 = interval1[0];
    int end1 = interval1[1];
    int start2 = interval2[0];
    int end2 = interval2[1];
    
    int intersectionStart = max(start1, start2);
    int intersectionEnd = min(end1, end2);
    
    if (intersectionStart > intersectionEnd) {
        return "NO";
    }
    
    int length = intersectionEnd - intersectionStart + 1;
    
    if (isPrime(length)) {
        return "YES";
    } else {
        return "NO";
    }
}

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    
    return true;
}