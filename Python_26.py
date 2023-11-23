from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    nums = []
    for num in numbers:
        if num not in nums:
            nums.append(num)
    return nums

line = input().strip().split(",")
input_list = [int(num) for num in line]

result = remove_duplicates(input_list)
print(*result)