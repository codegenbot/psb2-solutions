#include <vector>

using namespace std;

vector<int> parse_music(string music_string) {
    vector<int> beats;
    for(int i = 0; i < music_string.length(); i++) {
        if (music_string[i] == 'o' && music_string[i+1] == '|') {
            beats.push_back(2);
            i++;
        }
        else if (music_string[i] == '.' && music_string[i+1] == '|') {
            beats.push_back(1);
            i++;
        }
        else if (music_string[i] == 'o') {
            beats.push_back(4);
        }
    }
    return beats;
}