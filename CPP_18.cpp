int how_many_times(string str, string substring) {
    int count = 0;
    size_t pos = str.find(substring);
    while (pos != string::npos) {
        count++;
        pos = str.find(substring, pos + 1);
    }
    return count;
}