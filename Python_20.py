
Here is the corrected code:
```
def find_closest_elements(numbers: list[float]) -> Tuple[float, float]:
    numbers.sort()
    closest_pair = (numbers[0], numbers[1])
    for i in range(len(numbers)-1):
        if abs(numbers[i] - numbers[i+1]) < abs(closest_pair[0] - closest_pair[1]):
            closest_pair = (numbers[i], numbers[i+1])
    return closest_pair
```