
def special_factorial(n):
    """The Brazilian factorial is defined as:
    brazilian_factorial(n) = n! * (n-1)! * (n-2)! * ... * 1!
    where n > 0

    For example:
    >>> special_factorial(4)
    288

    pass
    if n == 1:
        return 1
    elif n > 1:
        return special_factorial(n-1) * n
    else:
        return "Error. n should be an integer greater than 0"
    The function will receive an integer as input and should return the special
    factorial of this integer.
    """
