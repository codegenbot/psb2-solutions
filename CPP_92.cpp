bool any_int(float a, float b, float c) {
    if (a == (b + c) || b == (a + c) || c == (a + b)) {
        if (a == int(a) && b == int(b) && c == int(c)) {
            return true;
        }
    }
    return false;
}