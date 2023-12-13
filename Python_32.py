import math


def poly(xs: list, x: float) -> float:
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero():
    xs = list(map(float, input().split()))
    zeros = []
    for i in range(len(xs) - 1):
        zeros.append(-xs[i] / xs[i+1])
    return zeros


# Read input from user
task_type = input()

if task_type == "poly":
    num_coefficients = int(input())
    xs = list(map(float, input().split()))
    x = float(input())
    result = poly(xs, x)
elif task_type == "find_zero":
    xs = list(map(float, input().split()))
    result = find_zero()

# Print the result
print(result)