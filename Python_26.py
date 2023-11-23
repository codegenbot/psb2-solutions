from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    if not numbers or any(num < 0 for num in numbers):
        return []
    return list(set(numbers))

try:
    input_list = list(map(int, input("Enter the numbers separated by space: ").split()))
    result = remove_duplicates(input_list)
    print(*result)
except ValueError:
    print("Invalid input format. Please enter numbers separated by space.")