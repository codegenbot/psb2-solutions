

def is_palindrome(string: str) -> bool:
    """ Test if given string is a palindrome """
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    """ Find the shortest palindrome that begins with a supplied string.
    Algorithm idea is simple:
    - Find the longest postfix of supplied string that is a palindrome.
    - Append to the end of the string reverse of a string prefix that comes before the palindromic suffix.
    >>> make_palindrome('')
    ''
    >>> make_palindrome('cat')
    'catac'
    for i in range(len(string), -1, -1):
        if is_palindrome(string[i:]):
            return string + string[:i][::-1]


def main():
    """ Main function """
    print(make_palindrome(input()))


if __name__ == '__main__':
    main()
    >>> make_palindrome('cata')
    'catac'
    """
