```python
def basement(nums):
    total_sum = 0
    for i in range(len(nums)):
        total_sum += nums[i]
        if total_sum < 0:
            return i
    return -1

# Read input from user
n = int(input())
nums = []
for _ in range(n):
    num = int(input())
    nums.append(num)

# Call the basement function and print the result
print(basement(nums))
```