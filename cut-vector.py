def cut_vector(vector):
    n = len(vector)
    total_sum = sum(vector)
    left_sum = 0
    right_sum = total_sum
    
    min_diff = float('inf')
    cut_index = -1
    
    for i in range(n):
        left_sum += vector[i]
        right_sum -= vector[i]
        
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            cut_index = i
    
    subvector1 = vector[:cut_index+1]
    subvector2 = vector[cut_index+1:]
    
    return subvector1, subvector2