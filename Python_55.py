def fib(n: int):
    if n <= 0:
        return None
    elif n == 1:
        return 1
    elif n == 2:
        return 1
    else:
        return fib(n-1) + fib(n-2)