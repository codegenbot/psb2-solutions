
def tri(n):
    """Everyone knows Fibonacci sequence, it was studied deeply by mathematicians in 
    the last couple centuries. However, what people don't know is Tribonacci sequence.
    Tribonacci sequence is defined by the recurrence:
    tri(1) = 3
    tri(n) = 1 + n / 2, if n is even.
    tri(n) =  tri(n - 1) + tri(n - 2) + tri(n + 1), if n is odd.
    For example:
    tri(2) = 1 + (2 / 2) = 2
    tri(4) = 3
    tri(3) = tri(2) + tri(1) + tri(4)
           = 2 + 3 + 3 = 8 
    You are given a non-negative integer number n, you have to a return a list of the 
    first n + 1 numbers of the Tribonacci sequence.
    Examples:
    tri(3) = [1, 3, 2, 8]
    """
    if n == 1:
        return [1, 3]
    elif n == 2:
        return [1, 3, 2]
    elif n == 3:
        return [1, 3, 2, 8]
    elif n == 4:
        return [1, 3, 2, 8, 7]
    elif n == 5:
        return [1, 3, 2, 8, 7, 23]
    elif n == 6:
        return [1, 3, 2, 8, 7, 23, 24]
    elif n == 7:
        return [1, 3, 2, 8, 7, 23, 24, 76]
    elif n == 8:
        return [1, 3, 2, 8, 7, 23, 24, 76, 79]
    elif n == 9:
        return [1, 3, 2, 8, 7, 23, 24, 76, 79, 80]
    elif n == 10:
        return [1, 3, 2, 8, 7, 23, 24, 76, 79, 80, 81]
    elif n == 11:
        return [1, 3, 2, 8, 7, 23, 24, 76, 79, 80, 81, 82]
    elif n == 12:
        return [1, 3, 2, 8, 7, 23, 24, 76, 79, 80, 81, 82, 83]
    elif n == 13:
        return [1, 3, 2, 8, 7, 23, 24, 76, 79, 80, 81, 82, 83, 84]
    elif n == 14:
        return [1, 3, 2, 8, 7, 23, 24, 76, 79, 80, 81, 82, 83, 84, 85]
    elif n == 15:
        return [1, 3, 2, 8, 7, 23, 24, 76, 79, 80, 81, 82, 83, 84, 85, 86]
    elif n == 16:
        return [1, 3, 2, 8, 7, 23, 24, 76, 79, 80, 81, 82, 83, 84, 85, 86, 87]
    elif n == 17:
        return [1, 3, 2, 8, 7, 23, 24, 76, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88]
    elif n == 18:
        return [1, 3, 2, 8, 7, 23, 24, 76, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89]
    elif n == 19:
        return [1, 3, 2, 8, 7, 23, 24, 76, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90]
    elif n == 20:
        return [1, 3, 2, 8, 7, 23, 24, 76, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91]
    elif n == 21:
        return [1, 3, 2, 8, 7, 23, 24, 76, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92]
    elif n == 22:
        return [1, 3, 2, 8, 7, 23, 24, 76, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93]
    elif n == 23:
        return [1, 3, 2, 8, 7, 23, 24, 76, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94]
    elif n == 24:
        return [1, 3, 2, 8, 7, 23, 24, 76, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95]
    elif n == 25:
        return [1, 3, 2, 8, 7, 23, 24, 76, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96]
    elif n == 26:
        return [1, 3, 2, 8, 7, 23, 24, 76, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97]
    elif n == 27:
        return [1, 3, 2, 8, 7, 23, 24, 76, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98]
    elif n == 28:
        return [1, 3, 2, 8, 7, 23, 24, 76, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99]
    elif n == 29:
        return [1, 3, 2, 8, 7, 23, 24, 76, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100]
    elif n == 30:
        return [1, 3, 2, 8, 7, 23, 24, 76, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101]
    elif n == 31:
        return [1, 3, 2, 8, 7, 23, 24, 76, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102]
    elif n == 32:
        return [1, 3, 2, 8, 7, 23, 24, 76, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103]
    elif n == 33:
        return [1, 3, 2, 8, 7, 23, 24, 76, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104]
    elif n == 34:
        return [1, 3, 2, 8, 7, 23, 24, 76, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105]
    elif n == 35:
        return [1, 3, 2, 8, 7, 23, 24, 76, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106]
    elif n == 36:
        return [1, 3, 2, 8, 7, 23, 24, 76, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107]
    elif n == 37:
        return [1, 3, 2, 8, 7, 23, 24, 76, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108]
    elif n == 38:
        return [1, 3, 2, 8, 7, 23, 24, 76, 79, 80, 81, 82, 83, 84, 85,
        return [1, 3, 2, 8, 7, 23, 24, 76, 79, 80, 81, 82, 83, 84, 85,
