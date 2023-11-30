from typing import List, Any

def filter_integers(values: List[Any]) -> List[int]:
    return [value for value in values if isinstance(value, int)]

input_values = input().split()
values = [int(value) for value in input_values]
result = filter_integers(values)

print(result)