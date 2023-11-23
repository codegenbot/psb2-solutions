def cut_vector(vector):
    total_sum = sum(vector)
    min_diff = float("inf")
    left_index = right_index = 0

    current_sum = 0
    for i, num in enumerate(vector):
        current_sum += num
        diff = abs((total_sum - current_sum) - current_sum)

        if diff < min_diff:
            min_diff = diff
            left_index = i
            right_index = i + 1
        elif diff == min_diff:
            right_index = i + 1
        else:
            right_index = i + 1

        if current_sum == total_sum or diff == min_diff:
            right_index = i + 1

    return vector[: left_index + 1], vector[right_index:]