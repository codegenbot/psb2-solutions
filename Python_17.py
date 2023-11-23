def parse_music(music_string: str) -> List[int]:
    durations = []
    for note in music_string.split():
        if note == 'o':
            durations.append(4)
        elif note == 'o|':
            durations.append(2)
        elif note == '.|':
            durations.append(1)
    return durations