import math

def poly(xs: list, x: float) -> float:
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])

coeff_str = input("Enter the coefficients (space-separated): ").strip()
coeffs = [] if not coeff_str.strip() else list(map(float, coeff_str.split()))

x = float(input("Enter the value of x: "))

result = poly(coeffs, x)
print(f"{result:.2f}")