
def will_it_fly(q, w):
    '''
    Write a function that returns True if the object q will fly, and False otherwise.
    The object q will fly if it's balanced (it is a palindromic list) and the sum of its elements is less than or equal the maximum possible weight w.

    Example:
    will_it_fly([1, 2], 5) ➞ False 
    # 1+2 is less than the maximum possible weight, but it's unbalanced.

    will_it_fly([3, 2, 3], 1) ➞ False
    # it's balanced, but 3+2+3 is more than the maximum possible weight.

    will_it_fly([3, 2, 3], 9) ➞ True
    # 3+2+3 is less than the maximum possible weight, and it's balanced.

    will_it_fly([3], 5) ➞ True
    # 3 is less than the maximum possible weight, and it's balanced.
    if is_palindrome(q) == True:
        if sum(q) <= w:
            return True
        else:
            return False
    else:
        return False


def is_palindrome(q):
    '''returns true if list q is a palindrome, otherwise returns false'''
    for i in range(len(q) // 2):
        if q[i] != q[len(q) - i - 1]:
            return False
    return True


print(will_it_fly([1, 2], 5))  # ➞ False 
# 1+2 is less than the maximum possible weight, but it's unbalanced.

print(will_it_fly([3, 2, 3], 1))  # ➞ False
# it's balanced, but 3+2+3 is more than the maximum possible weight.

print(will_it_fly([3, 2, 3], 9))  # ➞ True
# 3+2+3 is less than the maximum possible weight, and it's balanced.

print(will_it_fly([3], 5))  # ➞ True
# 3 is less than the maximum possible weight, and it's balanced.
