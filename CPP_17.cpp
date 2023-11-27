#include <vector>
#include <cassert>

vector<int> parse_music(string music_string);

bool is_same(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

vector<int> parse_music(string music_string) {
    vector<int> beats;
    int length = music_string.length();
    for (int i = 0; i < length; i += 3) {
        if (music_string[i] == 'o') {
            beats.push_back(4);
        } else if (music_string[i + 1] == '|') {
            beats.push_back(2);
        } else {
            beats.push_back(1);
        }
    }
    return beats;
}

int main() {
    assert(is_same(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));
    return 0;
}