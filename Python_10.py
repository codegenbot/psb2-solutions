

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
    # TODO: Complete the following code given the task description and function signature.
    # Hint: You may find the following functions useful:
    # - str.find(sub[, start[, end]])
    # - str.rfind(sub[, start[, end]])
    # - str.startswith(prefix[, start[, end]])
    # - str.endswith(suffix[, start[, end]])
    # - str.rjust(width[, fillchar])
    # - str.ljust(width[, fillchar])
    # - str.center(width[, fillchar])
    # - str.zfill(width)
    # - str.rstrip([chars])
    # - str.lstrip([chars])
    # - str.strip([chars])
    # - str.replace(old, new[, count])
    # - str.split(sep=None, maxsplit=-1)
    # - str.rsplit(sep=None, maxsplit=-1)
    # - str.partition(sep)
    # - str.rpartition(sep)
    # - str.maketrans(x[, y[, z]])
    # - str.translate(table)
    # - str.join(iterable)
    # - str.capitalize()
    # - str.title()
    # - str.casefold()
    # - str.lower()
    # - str.upper()
    # - str.swapcase()
    # - str.count(sub[, start[, end]])
    # - str.find(sub[, start[, end]])
    # - str.index(sub[, start[, end]])
    # - str.rfind(sub[, start[, end]])
    # - str.rindex(sub[, start[, end]])
    # - str.startswith(prefix[, start[, end]])
    # - str.endswith(suffix[, start[, end]])
    # - str.expandtabs(tabsize=8)
    # - str.format(*args, **kwargs)
    # - str.format_map(mapping)
    # - str.isalnum()
    # - str.isalpha()
    # - str.isdecimal()
    # - str.isdigit()
    # - str.isidentifier()
    # - str.islower()
    # - str.isnumeric()
    # - str.isprintable()
    # - str.isspace()
    # - str.istitle()
    # - str.isupper()
    # - str.isascii()
    # - str.encode(encoding="utf-8", errors="strict")
    # - str.decode(encoding="utf-8", errors="strict")
    # - str.maketrans(x[, y[, z]])
    # - str.translate(table)
    # - str.replace(old, new[, count])
    # - str.rjust(width[, fillchar])
    # - str.ljust(width[, fillchar])
    # - str.center(width[, fillchar])
    # - str.zfill(width)
    # - str.rstrip([chars])
    # - str.lstrip([chars])
    # - str.strip([chars])
    # - str.partition(sep)
    # - str.rpartition(sep)
    # - str.split(sep=None, maxsplit=-1)
    # - str.rsplit(sep=None, maxsplit=-1)
    # - str.splitlines([keepends])
    # - str.join(iterable)
    # - str.capitalize()
    # - str.title()
    # - str.casefold()
    # - str.lower()
    # - str.upper()
    # - str.swapcase()
    # - str.center(width[, fillchar])
    # - str.zfill(width)
    # - str.count(sub[, start[, end]])
    # - str.endswith(suffix[, start[, end]])
    # - str.startswith(prefix[, start[, end]])
    # - str.find(sub[, start[, end]])
    # - str.rfind(sub[, start[, end]])
    # - str.index(sub[, start[, end]])
    # - str.rindex(sub[, start[, end]])
    # - str.isalnum()
    # - str.isalpha()
    # - str.isdecimal()
    # - str.isdigit()
    # - str.isidentifier()
    # - str.islower()
    # - str.isnumeric()
    # - str.isprintable()
    # - str.isspace()
    # - str.istitle()
    # - str.isupper()
    # - str.isascii()
    # - str.encode(encoding="utf-8", errors="strict")
    # - str.decode(encoding="utf-8", errors="strict")
    # - str.maketrans(x[, y[, z]])
    # - str.translate(table)
    # - str.replace(old, new[, count])
    # - str.rjust(width[, fillchar])
    # - str.ljust(width[, fillchar])
    # - str.center(width[, fillchar])
    # - str.zfill(width)
    # - str.rstrip([chars])
    # - str.lstrip([chars])
    # - str.strip([chars])
    # - str.partition(sep)
    # - str.rpartition(sep)
    # - str.split(sep=None, maxsplit=-1)
    # - str.rsplit(sep=None, maxsplit=-1)
    # - str.splitlines([keepends])
    # - str.join(iterable)
    # - str.capitalize()
    # - str.title()
    # - str.casefold()
    # - str.lower()
    # - str.upper()
    # - str.swapcase()
    # - str.center(width[, fillchar])
    # - str.zfill(width)
    # - str.count(sub[, start[, end]])
    # - str.endswith(suffix[, start[, end]])
    # - str.startswith(prefix[, start[, end]])
    # - str.find(sub[, start[, end]])
    # - str.rfind(sub[, start[, end]])
    # - str.index(sub[, start[, end]])
    # - str.rindex(sub[, start[, end]])
    # - str.isalnum()
    # - str.isalpha()
    # - str.isdecimal()
    # - str.isdigit()
    # - str.isidentifier()
    # - str.islower()
    # - str.isnumeric()
    # - str.isprintable()
    # - str.isspace()
    # - str.istitle()
    # - str.isupper()
    # - str.isascii()
    # - str.encode(encoding="utf-8", errors="strict")
    # - str.decode(encoding="utf-8", errors="strict")
    # - str.maketrans(x[, y[, z]])
    # - str.translate(table)
    # - str.replace(
    >>> make_palindrome('cata')
    'catac'
    """
