
def x_or_y(n, x, y):
    """A simple program which should return the value of x if n is a prime number and should return the value of y otherwise.

    Examples:
    for x_or_y(7, 34, 12) == 34
    for x_or_y(15, 8, 5) == 5
    """
    def is_prime(n): 
        """Check if the given number is a prime number.""" 
        if n <= 1: 
            return False 
        for i in range(2, n): 
            if n % i == 0: 
                return False 
        return True 

    if is_prime(n): 
        return x 
    else: 
        return y 


if __name__ == "__main__":
    print(x_or_y(7, 34, 12))
    print(x_or_y(15, 8, 5))
    
    
