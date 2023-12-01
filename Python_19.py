from typing import List

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


def sort_numbers(numbers: List[str]) -> str:
    sorted_numbers = sorted(numbers, key=lambda x: num_mapping[x])
    return " ".join(sorted_numbers)


input_numbers = input().lower().split()
input_numbers = [word for word in input_numbers if word in num_mapping.keys()]
print(sort_numbers(input_numbers))