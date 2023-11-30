from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    return sorted(list(set(numbers)))

if __name__ == "__main__":
    numbers = [int(num) for num in input("Enter numbers separated by space: ").strip().split()]

    result = remove_duplicates(numbers)

    print(result)