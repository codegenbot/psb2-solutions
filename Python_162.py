import hashlib

def string_to_md5(text):
    """
    Given a string 'text', return its md5 hash equivalent string.
    If 'text' is an empty string, return None.

    if text == '':
        return None
    else:
        return hashlib.md5(text.encode('utf-8')).hexdigest()


if __name__ == '__main__':
    import doctest
    doctest.testmod()
    >>> string_to_md5('Hello world') == '3e25960a79dbc69b674cd4ec67a72c62'
    """
