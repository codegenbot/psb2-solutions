bool issame(string note1, string note2) {
    if (note1 == "o" && note2 == "o") {
        return true;
    } else if (note1 == "o|" && note2 == "o|") {
        return true;
    } else if (note1 == ".|" && note2 == ".|") {
        return true;
    }
    return false;
}

vector<int> parse_music(string music_string){
    vector<int> beats;
    string note = "";
    for (int i = 0; i < music_string.length(); i++) {
        if (music_string[i] == ' ') {
            if (note == "o") {
                beats.push_back(4);
            } else if (note == "o|") {
                beats.push_back(2);
            } else if (note == ".|") {
                beats.push_back(1);
            }
            note = "";
        } else {
            note += music_string[i];
        }
    }
    return beats;
}