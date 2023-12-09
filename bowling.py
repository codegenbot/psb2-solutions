```python
def calculate_score(bowls):
    score = 0
    frame = 1
    i = 0
    
    while frame <= 10:
        if bowls[i] == 'X':
            score += 10
            if i + 2 < len(bowls):
                score += calculate_strike_bonus(bowls, i)
            i += 1
        elif bowls[i+1] == '/':
            score += 10
            if i + 2 < len(bowls):
                score += calculate_spare_bonus(bowls, i)
            i += 2
        else:
            if i + 1 < len(bowls):
                score += calculate_frame_score(bowls, i)
            i += 2
            
        frame += 1
        
    return score


def calculate_strike_bonus(bowls, index):
    bonus = 0
    if index + 2 < len(bowls):
        if bowls[index+2] == 'X':
            bonus += 10
            if index + 4 < len(bowls):
                bonus += 10 if bowls[index+4] == 'X' else int(bowls[index+4]) if bowls[index+4] != '-' else 0
        else:
            bonus += int(bowls[index+2]) if bowls[index+2] != '-' else 0
            if index + 3 < len(bowls):
                bonus += int(bowls[index+3]) if bowls[index+3] != '-' else 0
        
    return bonus


def calculate_spare_bonus(bowls, index):
    bonus = 0
    if index + 2 < len(bowls):
        bonus += 10 if bowls[index+2] == 'X' else int(bowls[index+2]) if bowls[index+2] != '-' else 0
        
    return bonus


def calculate_frame_score(bowls, index):
    return int(bowls[index]) if bowls[index] != '-' else 0 + (int(bowls[index+1]) if index + 1 < len(bowls) and bowls[index+1] != '-' else 0)


bowls = input().strip()
print(calculate_score(bowls))
```