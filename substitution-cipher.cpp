#include <iostream>
#include <string>
using namespace std;

string decipher(string cipher1, string cipher2, string message) {
    string decipheredMessage = "";
    for (int i = 0; i < message.length(); i++) {
        char currentChar = message[i];
        int index = cipher1.find(currentChar);
        decipheredMessage += cipher2[index];
    }
    return decipheredMessage;
}

int main() {
    string cipher1, cipher2, message;
    cin >> cipher1 >> cipher2 >> message;
    cout << decipher(cipher1, cipher2, message) << endl;
    return 0;
}