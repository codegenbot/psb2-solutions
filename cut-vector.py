```python
def cut_vector(vector):
    n = len(vector)
    prefix_sum = [0] * (n + 1)
    suffix_sum = [0] * (n + 1)
    for i in range(1, n + 1):
        prefix_sum[i] = prefix_sum[i - 1] + vector[i - 1]
        suffix_sum[n - i] = suffix_sum[n - i + 1] + vector[n - i]
    
    min_diff = float('inf')
    cut_index = 0
    for i in range(1, n):
        diff = abs(prefix_sum[i] - suffix_sum[i])
        if diff < min_diff:
            min_diff = diff
            cut_index = i
    
    subvector1 = vector[:cut_index]
    subvector2 = vector[cut_index:]
    
    return subvector1, subvector2
```