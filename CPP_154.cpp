bool cycpattern_check(string a, string b) {
    if (a.length() < b.length()) {
        return false;
    }

    string concatenated = a + a;

    return concatenated.find(b) != string::npos;
}