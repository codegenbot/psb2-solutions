def cut_vector(vector):
    n = len(vector)
    total_sum = sum(vector)
    left_sum = 0
    right_sum = total_sum
    min_diff = float("inf")
    cut_index = None

    for i in range(n):
        left_sum += vector[i]
        right_sum -= vector[i]
        diff = abs(left_sum - right_sum)

        if diff <= min_diff:
            min_diff = diff
            cut_index = i

            if diff == 0:
                break

    return cut_index, cut_index + 1