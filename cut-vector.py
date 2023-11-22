def cut_vector(vector):
    total_sum = sum(vector)
    current_sum = 0
    for i, num in enumerate(vector):
        current_sum += num
        if current_sum * 2 == total_sum:
            return vector[: i + 1], vector[i + 1 :] + [0]
    return vector, [0]