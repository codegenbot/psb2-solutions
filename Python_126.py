
# Given a list of numbers, return whether or not they are sorted
# in ascending order. If list has more than 1 duplicate of the same
# number, return False. Assume no negative numbers and only integers.

def is_sorted(lst):
    if lst == sorted(lst) and len(lst) == len(set(lst)):
        return True
    else:
        return False
