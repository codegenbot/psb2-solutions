def calculate_score(bowls):
    score = 0
    frame = 1
    i = 0
    
    def get_frame_score(bowls, i):
        score1 = 0 if bowls[i] == '-' else int(bowls[i])
        score2 = 0 if bowls[i+1] == '-' else int(bowls[i+1])
        return score1 + score2
    
    def get_strike_bonus(bowls, i):
        bonus = 0
        if bowls[i+2] == 'X':
            bonus += 10
        elif bowls[i+2] == '/':
            bonus += 10 - int(bowls[i+1])
        else:
            bonus += int(bowls[i+1]) + int(bowls[i+2])

        return bonus

    def get_spare_bonus(bowls, i):
        bonus = 0
        if bowls[i+2] == 'X':
            bonus += 10
        else:
            bonus += int(bowls[i+2])

        return bonus
    
    while frame <= 10:
        if bowls[i] == 'X':
            score += 10
            score += get_strike_bonus(bowls, i)
            i += 1
        elif bowls[i+1] == '/':
            score += 10
            score += get_spare_bonus(bowls, i)
            i += 2
        else:
            score += get_frame_score(bowls, i)
            i += 2
        
        frame += 1
    
    return score

bowls = input()
print(calculate_score(bowls))