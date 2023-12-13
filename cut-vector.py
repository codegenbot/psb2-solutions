def cut_vector(vector):
    total_sum = sum(vector)
    current_sum = 0
    min_difference = abs(total_sum)
    split_index = -1
    for i in range(1, len(vector)):
        current_sum += vector[i - 1]
        difference = abs(current_sum - (total_sum - current_sum))
        if difference < min_difference:
            min_difference = difference
            split_index = i
    if split_index == 0:
        return [], vector
    elif split_index == len(vector):
        return vector, []
    else:
        return vector[:split_index], vector[split_index:]