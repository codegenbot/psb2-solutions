from typing import List


def sort_numbers(numbers: List[str]) -> str:
    num_mapping = {
        "zero": 0,
        "one": 1,
        "two": 2,
        "three": 3,
        "four": 4,
        "five": 5,
        "six": 6,
        "seven": 7,
        "eight": 8,
        "nine": 9,
    }
    
    sorted_numbers = sorted(numbers, key=lambda x: num_mapping[x])
    sorted_numbers = [str(num_mapping[x]) for x in sorted_numbers]
    
    return " ".join(sorted_numbers)