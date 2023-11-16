

def largest_divisor(n: int) -> int:
    """ For a given number n, find the largest number that divides n evenly, smaller than n
    >>> largest_divisor(15)
    5

    # Complete the following code given the task description and function signature.
    largest_divisor = 0
    for i in range(1, n):
        if n % i == 0:
            largest_divisor = i
    return largest_divisor
    """
