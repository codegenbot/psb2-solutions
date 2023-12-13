```python
def basement(nums):
    sum_so_far = 0
    for i in range(len(nums)):
        sum_so_far += nums[i]
        if sum_so_far < 0:
            return i
    return -1

# Read input from user
n = int(input())
nums = []
for _ in range(n):
    nums.append(int(input()))

# Call the basement function
result = basement(nums)

# Print the result
print(result)
```