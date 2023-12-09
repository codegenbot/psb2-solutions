```python
def cut_vector(vector):
    n = len(vector)
    total_sum = sum(vector)
    left_sum = 0
    right_sum = total_sum
    cut_index = -1
    
    for i in range(n):
        left_sum += vector[i]
        right_sum -= vector[i]
        
        if abs(left_sum - right_sum) <= abs(total_sum):
            cut_index = i+1
    
    return vector[:cut_index], vector[cut_index:] if vector[cut_index:] else [0]
```