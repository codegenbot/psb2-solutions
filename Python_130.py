def tri(n):
    seq = [1, 3]
    for i in range(2, n + 1):
        if i % 2 == 0:
            seq.append(1 + i / 2)
        else:
            seq.append(seq[i - 1] + seq[i - 2] + seq[i + 1])
    return seq