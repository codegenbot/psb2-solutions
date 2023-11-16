
def solution(lst):
    """Given a non-empty list of integers, return the sum of all of the odd elements that are in even positions.
    

    Examples
    solution([5, 8, 7, 1]) ==> 12
    solution([3, 3, 3, 3, 3]) ==> 9
    pass
    result = 0
    for i in range(len(lst)):
        if i % 2 == 0 and lst[i] % 2 == 1:
            result += lst[i]
    return result
    solution([30, 13, 24, 321]) ==>0
    """
