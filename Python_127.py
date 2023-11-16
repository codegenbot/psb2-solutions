
def intersection(interval1: tuple, interval2: tuple) -> str:
    """You are given two intervals,
    where each interval is a pair of integers. For example, interval = (start, end) = (1, 2).
    The given intervals are closed which means that the interval (start, end)
    includes both start and end.
    For each given interval, it is assumed that its start is less or equal its end.
    Your task is to determine whether the length of intersection of these two 
    intervals is a prime number.
    Example, the intersection of the intervals (1, 3), (2, 4) is (2, 3)
    which its length is 1, which not a prime number.
    If the length of the intersection is a prime number, return "YES",
    otherwise, return "NO".
    If the two intervals don't intersect, return "NO".


    [input/output] samples:
    intersection((1, 2), (2, 3)) ==> "NO"
    intersection((-1, 1), (0, 4)) ==> "NO"
    intersection((-3, -1), (-5, 5)) ==> "YES"
    """
    # create the range of the two intervals
    start1, end1 = interval1
    start2, end2 = interval2

    # find the start and end of the intersection
    start = max(start1, start2)
    end = min(end1, end2)

    # if the end is less than the start, there is no intersection
    if end < start:
        return "NO"

    # check if the length of the intersection is a prime number
    interval_length = end - start
    if interval_length < 2:
        return "NO"
    for i in range(2, interval_length):
        if interval_length % i == 0:
            return "NO"
    return "YES"


if __name__ == "__main__":
    print(intersection((1, 2), (2, 3)))
    print(intersection((-1, 1), (0, 4)))
    print(intersection((-3, -1), (-5, 5)))
