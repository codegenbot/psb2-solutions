def calculate_score(bowls):
    score = 0
    frame = 1
    frame_score = 0
    is_strike = False
    is_spare = False
    prev_bowl = ''

    for bowl in bowls:
        if bowl == 'X':
            score += 10
            if frame < 10:
                frame_score = 10
                is_strike = True
            else:
                frame_score += 10
        elif bowl == '-':
            if frame < 10:
                frame_score = 0
            else:
                frame_score += 0
        elif bowl == '/' and prev_bowl != '':
            score += 10 - int(prev_bowl)
            if frame == 10:
                frame_score += 10 - int(prev_bowl)
            else:
                frame_score = 10
            is_spare = True
        else:
            score += int(bowl)
            if frame < 10:
                frame_score += int(bowl)
            else:
                frame_score += int(bowl)

        if is_strike:
            frame_score += int(bowl)
            is_strike = False
        if is_spare:
            is_spare = False

        if frame < 10 and (bowl == 'X' or bowl == '/'):
            frame += 1
        elif frame == 10 and (bowl == 'X' or bowl == '-'):
            frame_score = 0

        prev_bowl = bowl

    return score


bowls = input().strip().replace(' ', '')
print(calculate_score(bowls))