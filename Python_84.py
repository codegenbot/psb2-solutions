
def binary(N):
    """Given a positive integer N, return the binary representation of N.
    
    Example
        For N = 1000, the output should be "1111101000".
        For N = 150, the output should be "10010110".
        For N = 147, the output should be "10010011".
    
    Variables:
        @N integer
             Constraints: 0 ≤ N ≤ 10000.
    Output:
         a string of binary number
    """
    return bin(N)[2:]

def sum_binary_digits(N):
    """Given a positive integer N, return the sum of its binary digits.
    
    Example
        For N = 1000, the output should be 7.
        For N = 150, the output should be 6.
        For N = 147, the output should be 12.
    
    Variables:
        @N integer
             Constraints: 0 ≤ N ≤ 10000.
    Output:
         a string of binary number
    """
    return sum(map(int, binary(N)))


def solve(N):
    """Given a positive integer N, return the total sum of its digits in binary.
    
    Example
        For N = 1000, the sum of digits will be 1 the output should be "1".
        For N = 150, the sum of digits will be 6 the output should be "110".
        For N = 147, the sum of digits will be 12 the output should be "1100".
    
    Variables:
        @N integer
             Constraints: 0 ≤ N ≤ 10000.
    Output:
         a string of binary number
    """
    return binary(sum_binary_digits(N))
