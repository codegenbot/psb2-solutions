vector<std::string> odd_count(vector<std::string> lst) {
    vector<std::string> result;
    for (std::string s : lst) {
        int count = 0;
        for (char c : s) {
            if ((c - '0') % 2 != 0) {
                count++;
            }
        }
        result.push_back("the number of odd elements " + std::to_string(count) + "n the string " + s + " of the input.");
    }
    return result;
}

bool are_equal(vector<std::string> a, vector<std::string> b){
    return a == b;
}

int main() {
    assert(are_equal(odd_count({"271", "137", "314"}), {
        "the number of odd elements 2 in the string 271 of the input.",
        "the number of odd elements 3 in the string 137 of the input.",
        "the number of odd elements 2 in the string 314 of the input."
    }));

    cout << "Test cases pass" << endl;

    return 0;
}