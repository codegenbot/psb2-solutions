

def fib(n: int):
    """Return n-th Fibonacci number.
    >>> fib(10)
    55
    >>> fib(1)
    1
    >>> fib(8)
    21
    if n == 1:
        return 1
    if n == 2:
        return 1
    result = fib(n - 1) + fib(n - 2)
    return result
    """
