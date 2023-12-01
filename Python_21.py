from typing import List

def rescale_to_unit(numbers: List[float]) -> List[float]:
    min_num = min(numbers)
    max_num = max(numbers)
    return [(num - min_num) / (max_num - min_num) for num in numbers]

# Read input from user
numbers = [float(num) for num in input().split()]

# Call the function with input and print the result
print(rescale_to_unit(numbers))