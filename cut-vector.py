```python
def cut_vector(vector):
    n = len(vector)
    total_sum = sum(vector)
    left_sum = 0
    right_sum = total_sum
    
    for i in range(n):
        right_sum -= vector[i]
        
        if left_sum == right_sum or abs(left_sum - right_sum) == 1:
            return vector[:i+1], vector[i+1:]
        
        left_sum += vector[i]
    
    return vector, [0]

# Read input from user
vector = []
while True:
    try:
        num = int(input())
        vector.append(num)
    except EOFError:
        break

# Call the function and print the output
left_subvector, right_subvector = cut_vector(vector)
for num in left_subvector:
    print(num)
for num in right_subvector:
    print(num)
```