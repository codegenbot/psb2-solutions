
def solution(lst):
    """Given a non-empty list of integers, return the sum of all of the odd elements that are in even positions.
    

    Examples
    solution([5, 8, 7, 1]) ==> 12
    solution([3, 3, 3, 3, 3]) ==> 9
    return sum([lst[i] for i in range(1, len(lst), 2) if i % 2 == 1])
    return sum(lst[1::3])
    return sum([lst[i] for i in range(1, len(lst), 2) if i % 2 == 1])
    solution([30, 13, 24, 321]) ==>0
    """
