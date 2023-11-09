
def is_nested(string):
    '''
    Create a function that takes a string as input which contains only square brackets.
    The function should return True if and only if there is a valid subsequence of brackets 
    where at least one bracket in the subsequence is nested.

    is_nested('[[]]') ➞ True

    '''
    count = 0
    for i in range(len(string)):
        if string[i] == '[':
            count += 1
        elif string[i] == ']':
            count -= 1
        if count < 0:
            return False
    return count == 0

print(is_nested('][]'))


'''






'''
    is_nested('[[]][[') ➞ True
    '''
