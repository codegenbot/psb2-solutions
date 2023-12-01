values = input().strip().split()
values = [int(x) for x in values]

from typing import List


def filter_integers(values: List[int]) -> List[int]:
    return [x for x in values if isinstance(x, int)]

result = filter_integers(values) 
print(result)