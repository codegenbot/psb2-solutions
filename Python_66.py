
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

    res = 0
    for i in s:
        if i.isupper():
            res += ord(i)
    return res
        digitSum("aAaaaXa") => 153
    """
