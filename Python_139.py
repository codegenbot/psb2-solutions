
def special_factorial(n):
    """The Brazilian factorial is defined as:
    brazilian_factorial(n) = n! * (n-1)! * (n-2)! * ... * 1!
    where n > 0

    For example:
    >>> special_factorial(4)
    288

    result = 1
    if n > 1:
        while n > 1:
            result *= n * special_factorial(n-1)
            n -= 1
        return result
    else:
        return 1
    The function will receive an integer as input and should return the special
    factorial of this integer.
    """
