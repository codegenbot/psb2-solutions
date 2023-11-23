from typing import List, Any

def filter_integers(values: List[Any]) -> List[int]:
    return [x for x in values if isinstance(x, int)]

values = eval(input())
values = [int(x) for x in values]
result = filter_integers(values)
print(result)