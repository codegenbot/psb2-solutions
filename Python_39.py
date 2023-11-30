def prime_fib(n: int):
    def is_prime(num):
        if num < 2:
            return False
        for i in range(2, int(num ** 0.5) + 1):
            if num % i == 0:
                return False
        return True

    def fibonacci(n):
        if n <= 0:
            return []
        elif n == 1:
            return [0]
        elif n == 2:
            return [0, 1]
        else:
            fib_sequence = [0, 1]
            while len(fib_sequence) <= n:
                next_num = fib_sequence[-1] + fib_sequence[-2]
                fib_sequence.append(next_num)
            return fib_sequence

    fib_sequence = fibonacci(n)
    prime_fib_numbers = []
    count = 0
    for num in fib_sequence:
        if is_prime(num):
            count += 1
            if count == n:
                return num
    return None