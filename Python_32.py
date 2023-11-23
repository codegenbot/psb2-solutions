import math


def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    return -xs[0] / xs[1]


# Read input from user
xs = list(map(float, input().split()))

# Call the respective functions with the user input
result1 = poly(xs, 2.5)
result2 = find_zero(xs)

# Print the results
print(result1)
print(result2)