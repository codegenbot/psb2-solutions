from typing import List

def factorize(n: int) -> List[int]:
    factors = []
    i = 2
    while i * i <= n:
        if n % i == 0:
            n = n // i
            factors.append(i)
        else:
            i += 1
    if n > 1:
        factors.append(n)
    return factors

n = int(input("Enter a number: "))
result = factorize(n)
print(result)