
def is_sorted(lst):
    '''
    Given a list of numbers, return whether or not they are sorted
    in ascending order. If list has more than 1 duplicate of the same
    number, return False. Assume no negative numbers and only integers.

    Examples
    is_sorted([5]) ➞ True
    is_sorted([1, 2, 3, 4, 5]) ➞ True
    is_sorted([1, 3, 2, 4, 5]) ➞ False
    is_sorted([1, 2, 3, 4, 5, 6]) ➞ True
    is_sorted([1, 2, 3, 4, 5, 6, 7]) ➞ True
    is_sorted([1, 3, 2, 4, 5, 6, 7]) ➞ False
    is_sorted([1, 2, 2, 3, 3, 4]) ➞ True
    is_sorted([1, 2, 2, 2, 3, 4]) ➞ False
    #return false if there is a duplicate
    if len(lst) != len(set(lst)):
        print("False")
        return False
    #return false if there is an out of order number 
    for i in range(len(lst)-1):
        if lst[i] > lst[i+1]:
            print("False")
            return False
    print("True")
    return True

is_sorted([5])
is_sorted([1, 2, 3, 4, 5])
is_sorted([1, 3, 2, 4, 5])
is_sorted([1, 2, 3, 4, 5, 6])
is_sorted([1, 2, 3, 4, 5, 6, 7])
is_sorted([1, 3, 2, 4, 5, 6, 7])
is_sorted([1, 2, 2, 3, 3, 4])
is_sorted([1, 2, 2, 2, 3, 4])
    '''
