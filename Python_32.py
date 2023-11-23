import math

def poly(xs: list, x: float) -> float:
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])

n = int(input())
coeffs = []
for i in range(n):
    coeff = float(input())
    coeffs.append(coeff)

x = float(input())
result = poly(coeffs, x)

print(f"{result:.2f}")