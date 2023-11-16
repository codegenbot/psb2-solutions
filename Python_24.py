

def largest_divisor(n: int) -> int:
    """ For a given number n, find the largest number that divides n evenly, smaller than n
    >>> largest_divisor(15)
    5
    i = n - 1
    while True:
        if n % i == 0:
            return i
        i -= 1
    """
