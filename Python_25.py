from typing import List


def factorize(n: int) -> List[int]:
    if n <= 1:
        return []

    factors = []
    i = 2
    while i * i <= n:
        if n % i == 0:
            n //= i
            factors.append(i)
        else:
            i += 1
    if n > 1:
        factors.append(n)
    return factors


user_input = input()
try:
    n = int(user_input)
    if n <= 0:
        print("Input must be a positive integer")
    else:
        result = factorize(n)
        print(result)
except ValueError:
    print("Input must be an integer")