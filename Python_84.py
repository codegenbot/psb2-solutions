
def solve(N):
    """Given a positive integer N, return the total sum of its digits in binary.
    
    Example
        For N = 1000, the output should be "1111101000".
        For N = 150, the output should be "100101110".
        For N = 147, the output should be "100100011".
    
    Variables:
        @N integer
             Constraints: 0 ≤ N ≤ 10000.
    Output:
         a string of binary number
    """
    return ''.join(str(1) if digit=='1' else str(0) for digit in bin(N)[2:])
