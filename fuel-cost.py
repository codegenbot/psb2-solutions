
def get_fuel_cost(input_vector):
    return sum([int((x / 3) - 2) for x in input_vector])
```
This modified code solves the problem by using list comprehension to perform the calculations.