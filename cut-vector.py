def cut_vector(vector):
    n = len(vector)
    total_sum = sum(vector)
    left_sum = 0
    right_sum = total_sum

    for i in range(n - 1):
        left_sum += vector[i]
        right_sum -= vector[i]

        if left_sum == right_sum or abs(left_sum - right_sum) < abs(
            left_sum - right_sum - vector[i + 1]
        ):
            return vector[: i + 1], vector[i + 1 :]

    return vector, [0]

line = input()
vector = [int(num) for num in line.split()]

result1, result2 = cut_vector(vector)

for num in result1:
    print(num)
for num in result2:
    print(num)