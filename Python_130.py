def tri(n):
    sequence = [3]

    if n == 0:
        return sequence
    elif n == 1:
        sequence.insert(0, 1)
        return sequence
    else:
        for i in range(1, n):
            sequence.append(sequence[i-1] + sequence[i-2])

    return sequence[:n+1]