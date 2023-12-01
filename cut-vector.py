def cut_vector(vector):
    n = len(vector)
    prefix_sum = [0] * (n + 1)
    for i in range(1, n + 1):
        prefix_sum[i] = prefix_sum[i - 1] + vector[i - 1]

    total_sum = prefix_sum[-1]
    min_diff = float("inf")
    cut_position = 0

    for i in range(1, n):
        left_sum = prefix_sum[i]
        right_sum = total_sum - left_sum
        diff = abs(left_sum - right_sum)

        if diff < min_diff:
            min_diff = diff
            cut_position = i

    return vector[:cut_position], vector[cut_position:]

vector = list(map(int, input().split()))
left_subvector, right_subvector = cut_vector(vector)
print(*left_subvector)
print(*right_subvector)