
def special_factorial(n):
    """The Brazilian factorial is defined as:
    brazilian_factorial(n) = n! * (n-1)! * (n-2)! * ... * 1!
    where n > 0

    For example:
    >>> special_factorial(4)
        return n * special_factorial(n-1)
    else:
    288

    if n <= 0:
        return 1
    The function will receive an integer as input and should return the special
    factorial of this integer.
    """
