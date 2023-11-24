def cut_vector(vector):
    n = len(vector)
    total_sum = sum(vector)
    left_sum = 0
    right_sum = total_sum - vector[0]
    min_diff = float("inf")
    cut_index = n

    for i in range(1, n):
        left_sum += vector[i - 1]
        right_sum -= vector[i - 1]
        diff = abs(left_sum - right_sum)

        if diff < min_diff:
            min_diff = diff
            cut_index = i + 1

    if cut_index == n or cut_index == 0:
        return vector[:], []
    else:
        return vector[:cut_index], vector[cut_index:]