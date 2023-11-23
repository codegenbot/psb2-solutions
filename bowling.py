def calculate_spare_bonus(bowls, bowl_index):
    bonus = 0
    if bowl_index + 2 < len(bowls):
        next_bowl = bowls[bowl_index + 2]
        if next_bowl == "/":
            bonus += 10
            if bowl_index + 3 < len(bowls):
                bonus += int(bowls[bowl_index + 3])
        else:
            bonus += int(next_bowl)
        bonus += int(bowls[bowl_index + 1])
    return bonus


def calculate_score(bowls):
    score = 0
    for i, bowl in enumerate(bowls):
        if bowl == "/":
            score += 10 + calculate_spare_bonus(bowls, i)
        elif bowl == "X":
            score += 10
            if i + 2 < len(bowls):
                score += int(bowls[i + 1]) + int(bowls[i + 2])
        else:
            score += int(bowl)
    return score