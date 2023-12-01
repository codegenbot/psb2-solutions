from typing import List

def parse_music(music_list: List[str]) -> List[int]:
    result = []
    for note in music_list:
        if note.strip() == "o":
            result.append(4)
        elif note.strip() == "o\\":
            result.append(2)
        else:
            result.append(1)
    return result

music_string = input().split(",")
print(parse_music(music_string))