def tri(n):
    sequence = [3]
    if n == 0:
        return sequence
    elif n == 1:
        sequence.append(1 + 1 / 3)
    else:
        sequence.append(1 + n / 2)
        for i in range(2, n + 1):
            if i % 2 == 0:
                sequence.append(sequence[i - 1])
            else:
                sequence.append(sequence[i - 1] + sequence[i - 2] + sequence[i + 1])
    return sequence