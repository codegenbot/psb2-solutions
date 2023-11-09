

def is_palindrome(string: str) -> bool:
    """ Test if given string is a palindrome """
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    """ Find the shortest palindrome that begins with a supplied string.
    prefix = string
    Algorithm idea is simple:
    - Find the longest postfix of supplied string that is a palindrome.
    - Append to the end of the string reverse of a string prefix that comes before the palindromic suffix.
    prefix = string
    >>> make_palindrome("jerry")
    'jerryrrej'
    """
    prefix = string
    while not is_palindrome(prefix):
        prefix = prefix[:-1]
    return string + prefix[::-1]
