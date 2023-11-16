
def is_nested(string):
    '''
    Create a function that takes a string as input which contains only square brackets.
    The function should return True if and only if there is a valid subsequence of brackets 
    where at least one bracket in the subsequence is nested.

    is_nested('[[]]') ➞ True
    is_nested('[]]]]]]][[[[[]') ➞ False
    is_nested('[][]') ➞ False
    is_nested('[]') ➞ False
    is_nested('[[][]]') ➞ True

    # count = 0
    # for char in string:
    #     if char == '[':
    #         count += 1
    #     else:
    #         count -= 1
    #     if count == -1:
    #         return False
    # return count > 0

    if string.count('[') == string.count(']'):
        return False
    else:
        return True


print(is_nested('[[]]'))
print(is_nested('[]]]]]]][[[[[]'))
print(is_nested('[][]'))
print(is_nested('[]'))
print(is_nested('[[][]]'))
print(is_nested('[[]][['))
print(is_nested('[[]][['))
print(is_nested(']]]]]]]]'))
    '''
