def decode_cyclic():
    s = input().strip()
    if len(s) % 3 != 0:
        s += '0' * (3 - len(s) % 3)
    groups = [s[i:i + 3] for i in range(0, len(s), 3)]
    groups = [(group[-1] + group[:-1]) for group in groups]
    return ''.join(groups)