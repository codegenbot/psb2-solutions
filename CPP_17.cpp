vector<int> parse_music(string music_string){
    vector<int> beats;
    int length = music_string.length();
    int i=0;
    while(i < length){
        if(music_string[i] == 'o'){
            if(music_string[i+1] == ' '){
                beats.push_back(4);
                i++;
            }else if(music_string[i+1] == '|'){
                beats.push_back(2);
                i += 2;
            }
        }else if(music_string[i] == '.'){
            if(music_string[i+1] == '|'){
                beats.push_back(1);
                i += 2;
            }
        }
        i++;
    }
    return beats;
}