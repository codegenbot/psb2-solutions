
def digitSum(s):
    """Task
    Write a function that takes a string as input and returns the sum of the upper characters only'
    ASCII codes.

    Examples:
        digitSum("") => 0
        digitSum("abAB") => 131
        digitSum("abcCd") => 67
        digitSum("helloE") => 69
        digitSum("woArBld") => 131

    return sum(c for c in s if c.isupper()) + sum(ord(c) for c in s if c.islower())
        digitSum("aAaaaXa") => 153
    """
