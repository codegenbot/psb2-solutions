def cut_vector(vector):
    vector_sum = sum(vector)
    current_sum = 0
    best_cut = float('inf')
    best_cut_index = -1
    for i, num in enumerate(vector):
        current_sum += num
        if abs(current_sum - vector_sum/2) < best_cut:
            best_cut = abs(current_sum - vector_sum/2)
            best_cut_index = i
    return vector[:best_cut_index+1], vector[best_cut_index+1:]