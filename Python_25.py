from typing import List


def factorize(n: int) -> List[int]:
    factors = []
    divisor = 2
    
    while divisor <= n:
        if n % divisor == 0:
            factors.append(divisor)
            n = n // divisor
        else:
            divisor += 1
    
    return factors