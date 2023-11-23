from typing import List
import sys

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

n = int(sys.stdin.readline())
result = factorize(n)
print(result)