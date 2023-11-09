def get_odd_collatz(n, odd_numbers = []):
    """
    Given a positive integer n, return a sorted list that has the odd numbers in collatz sequence.

    The Collatz conjecture is a conjecture in mathematics that concerns a sequence defined
    as follows: start with any positive integer n. Then each term is obtained from the 
    previous term as follows: if the previous term is even, the next term is one half of 
    the previous term. If the previous term is odd, the next term is 3 times the previous
    term plus 1. The conjecture is that no matter what value of n, the sequence will always reach 1.

    Note: 
    # assert isinstance(n, int), "n must be an integer."
    # assert n > 0, "n must be a positive integer."

    odd_numbers = odd_numbers

    if n > 1:
        odd_numbers.append(n)
        if n % 2 == 0:
            n = n // 2
        else:
            n = 3 * n + 1

        odd_numbers.append(n)

        get_odd_collatz(n, odd_numbers)

    return odd_numbers.sort()

    For example:
    get_odd_collatz(5) returns [1, 5] # The collatz sequence for 5 is [5, 16, 8, 4, 2, 1], so the odd numbers are only 1, and 5.
    """
