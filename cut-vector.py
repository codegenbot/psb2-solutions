def cut_vector(vector):
    n = len(vector)
    total_sum = sum(vector)
    left_sum = 0
    right_sum = total_sum
    min_diff = abs(left_sum - right_sum)
    cut_index = 0

    for i in range(n):
        left_sum += vector[i]
        right_sum -= vector[i]
        diff = abs(left_sum - right_sum)

        if diff < min_diff:
            min_diff = diff
            cut_index = i

    if cut_index == 0:
        return vector[:cut_index+1], vector[cut_index+1:]

    if cut_index == n-1:
        return vector[:cut_index+1], []

    return vector[:cut_index+1], vector[cut_index+1:]