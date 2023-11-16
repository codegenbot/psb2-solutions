
def is_multiply_prime(a):
    """Write a function that returns true if the given number is the multiplication of 3 prime numbers
    and false otherwise.
    Knowing that (a) is less then 100. 
    Example:
    is_multiply_prime(30) == True
    30 = 2 * 3 * 5
    """
    list_of_prime = []
    for i in range(1, a):
        if a % i == 0:
            list_of_prime.append(i)
    if len(list_of_prime) == 3:
        return True
    else:
        return False

print(is_multiply_prime(30))
