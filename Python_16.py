

def count_distinct_characters(string: str) -> int:
    """ Given a string, find out how many distinct characters (regardless of case) does it consist of
    >>> count_distinct_characters('xyzXYZ')
    3
    >>> count_distinct_characters('Jerry')
    4
    string = string.lower()
    count = 0
    for i in string:
        if string.count(i) == 1:
            count += 1
    return count


if __name__ == '__main__':
    print(count_distinct_characters('Jerry'))
    """
