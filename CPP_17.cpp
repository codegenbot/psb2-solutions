vector<int> parse_music(string music_string){
    vector<int> beats;
    string note = "";
    for (int i = 0; i < music_string.length(); i++) {
        if (music_string[i] == 'o') {
            if (note.length() > 0) {
                if (note == "o") {
                    beats.push_back(4);
                } else if (note == "o|") {
                    beats.push_back(2);
                } else if (note == ".|") {
                    beats.push_back(1);
                }
                note = "";
            }
            note += 'o';
        } else if (music_string[i] == '|') {
            note += '|';
        } else if (music_string[i] == '.') {
            note += '.';
        }
    }
    if (note.length() > 0) {
        if (note == "o") {
            beats.push_back(4);
        } else if (note == "o|") {
            beats.push_back(2);
        } else if (note == ".|") {
            beats.push_back(1);
        }
    }
    return beats;
}