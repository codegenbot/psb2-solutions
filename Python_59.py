```
def largest_prime_factor(n):
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0 and is_prime(i):
            return i
    return n

def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(n**0.5) + 1):
        if math.gcd(n, i) == 1:
            return True
    return False
```