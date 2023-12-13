from typing import List

def factorize(n: int) -> List[int]:
    factors = []
    d = 2
    while d * d <= n:
        if n % d == 0:
            factors.append(d)
            n //= d
        else:
            d += 1
    if n > 1:
        factors.append(n)
    return factors

try:
    n = int(input())
    result = factorize(n)
    print(result)
except ValueError:
    print("Invalid input. Please enter a valid integer.")