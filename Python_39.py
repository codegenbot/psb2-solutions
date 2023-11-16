

def prime_fib(n):
    """
    prime_fib returns n-th number that is a Fibonacci number and it's also prime.
    >>> prime_fib(1)
    2
    >>> prime_fib(2)
    3
    >>> prime_fib(3)
    5
    >>> prime_fib(4)
    13
    >>> prime_fib(5)
    89
    >>> prime_fib(6)
    1597
    >>> prime_fib(7)
    28657
    >>> prime_fib(8)
    514229
    >>> prime_fib(9)
    433494437
    >>> prime_fib(10)
    2971215073
    """
    if n == 1:
    return 2
    elif n == 2:
    return 3
    else:
    a = 1
    b = 1
    c = 0
    for i in range(n-2):
    c = a + b
    a = b
    b = c
    return c
