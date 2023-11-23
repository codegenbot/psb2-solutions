def cut_vector(vector):
    total_sum = sum(vector)
    current_sum = 0
    subvector1 = []
    subvector2 = []
    for i, num in enumerate(vector):
        current_sum += num
        if abs(current_sum - total_sum / 2) <= abs((total_sum - current_sum) - current_sum):
            subvector1 = vector[:i+1]
            subvector2 = vector[i+1:]
    
    return subvector1, subvector2