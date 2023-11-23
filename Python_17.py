def parse_music(music_string: str) -> List[int]:
    music_notes = music_string.split()
    beats = []
    for note in music_notes:
        if note == 'o':
            beats.append(4)
        elif note == 'o|':
            beats.append(2)
        elif note == '.|':
            beats.append(1)
    return beats