def sort_third(l: list):
    return [sorted(l[i:i+3]) if (i+1) % 3 == 0 and i+3 <= len(l) else sorted(l[i:]) for i in range(len(l))]