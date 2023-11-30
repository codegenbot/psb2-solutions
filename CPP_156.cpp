string int_to_mini_roman(int number){
    vector<int> values = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    vector<string> symbols = {"m", "cm", "d", "cd", "c", "xc", "l", "xl", "x", "ix", "v", "iv", "i"};

    string result = "";
    int i = 0;
    while (number > 0) {
        if (number >= values[i]) {
            result += symbols[i];
            number -= values[i];
        } else {
            i++;
        }
    }
    return result;
}