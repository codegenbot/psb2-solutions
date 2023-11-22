def cut_vector(vector):
    total_sum = sum(vector)
    target_sum = total_sum // 2
    current_sum = 0
    for i, num in enumerate(vector):
        current_sum += num
        if current_sum == target_sum or current_sum == target_sum + 1:
            return vector[: i + 1], vector[i + 1 :]
    return vector, [0]


vector = list(map(int, input().split()))

result1, result2 = cut_vector(vector)
for num in result1:
    print(num)
for num in result2:
    print(num)