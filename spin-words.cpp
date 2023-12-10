#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string input;
    getline(cin, input);
    vector<string> words = split(input, ' ');
    for (int i = 0; i < words.size(); i++) {
        if (words[i].length() >= 5) {
            reverse(words[i]);
        }
    }
    string output = join(words, ' ');
    cout << output << endl;
    return 0;
}