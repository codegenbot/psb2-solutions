string fix_spaces(string text) {
    string result = "";
    int count = 0;
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == ' ') {
            count++;
            if (count > 2) {
                result += "-";
                count = 0;
            } else {
                result += "_";
            }
        } else {
            result += text[i];
            count = 0;
        }
    }
    return result;
}