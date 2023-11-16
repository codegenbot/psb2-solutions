
def special_factorial(n):
    """The Brazilian factorial is defined as:
    special_factorial(n) = n! * (n-1)! * (n-2)! * ... * 1!
    where n > 0

    For example:
    >>> special_factorial(4)
    288

    special_factorial = 1
    for i in range(n, 0, -1):
        special_factorial *= i
    
    return special_factorial
    The function will receive an integer as input and should return the special
    factorial of this integer.
    """
