from typing import List, Tuple


def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    numbers.sort()
    min_diff = float("inf")
    closest_nums = ()
    for i in range(len(numbers) - 1):
        diff = numbers[i + 1] - numbers[i]
        if diff < min_diff:
            min_diff = diff
            closest_nums = (numbers[i], numbers[i + 1])
    return closest_nums


numbers = [float(x) for x in input("Enter the numbers (separated by spaces): ").split()]
result = find_closest_elements(numbers)
print("Closest numbers:", result)