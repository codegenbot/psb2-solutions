```python
def cut_vector(vector):
    total_sum = sum(vector)
    min_diff = abs(total_sum)
    left_index = right_index = None

    current_sum = 0
    for i, num in enumerate(vector):
        current_sum += num
        diff = abs((total_sum - current_sum) - current_sum)

        if diff < min_diff:
            min_diff = diff
            left_index = i
            right_index = i + 1
        elif (total_sum - current_sum) == current_sum or diff <= min_diff:
            right_index = i + 1
    
    if left_index is None or right_index is None:
        left_index = len(vector) - 1
        right_index = 0

    return vector[:left_index+1], vector[right_index:]