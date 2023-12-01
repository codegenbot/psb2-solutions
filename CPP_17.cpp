#include <vector>

vector<int> parse_music(string music_string);

bool issame(vector<int> a, vector<int> b);

int main() {
    assert(parse_music("o| .| o| .| o o| o o|") == vector<int>{2, 1, 2, 1, 4, 2, 4, 2});
}

vector<int> parse_music(string music_string){
    vector<int> beats;
    string note = "";
    for(int i=0; i<music_string.length(); i++){
        if(music_string[i] == 'o'){
            if(note.length() > 0){
                if(note == "o|"){
                    beats.push_back(2);
                }
                else if(note == ".|"){
                    beats.push_back(1);
                }
                note = "";
            }
            note += 'o';
        }
        else if(music_string[i] == '|'){
            note += '|';
        }
        else if(music_string[i] == ' '){
            if(note.length() > 0){
                if(note == "o"){
                    beats.push_back(4);
                }
                else if(note == "o|"){
                    beats.push_back(2);
                }
                else if(note == ".|"){
                    beats.push_back(1);
                }
                note = "";
            }
        }
    }
    if(note.length() > 0){
        if(note == "o"){
            beats.push_back(4);
        }
        else if(note == "o|"){
            beats.push_back(2);
        }
        else if(note == ".|"){
            beats.push_back(1);
        }
    }
    return beats;
}

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}