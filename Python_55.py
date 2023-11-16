

def fib(n: int):
    """Return n-th Fibonacci number.
    >>> fib(10)
    55
    >>> fib(1)
    1
    >>> fib(8)
    21
    >>> fib(12)
    144
    if n <= 1:
        return n
    return fib(n - 1) + fib(n - 2)
    """
