```python
def find_leaders(arr):
    leaders = []
    max_right = float('-inf')
    for i in range(len(arr)-1, -1, -1):
        if arr[i] >= max_right:
            leaders.append(arr[i])
            max_right = arr[i]
    return leaders

# Read input from user
n = int(input())
arr = []
for _ in range(n):
    arr.append(int(input()))

# Call the function and print the result
result = find_leaders(arr)
for num in result:
    print(num)
```