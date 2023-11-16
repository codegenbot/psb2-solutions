
def cycpattern_check(a , b):
    """You are given 2 words. You need to return True if the second word or any of its rotations is a substring in the first word
    cycpattern_check("abcd","abd") => False
    cycpattern_check("hello","ell") => True
    cycpattern_check("whassup","psus") => False
    cycpattern_check("abab","baa") => True
    cycpattern_check("efef","eeff") => False
    cycpattern_check("himenss","simen") => True

    if len(a) < len(b):
        return False
    if len(a) == len(b):
        return a == b
    if len(a) > len(b):
        for i in range(len(a) - len(b) + 1):
            if a[i:i + len(b)] == b:
                return True
        return False


def cycpattern_check(a, b):
    """You are given 2 words. You need to return True if the second word or any of its rotations is a substring in the first word
    cycpattern_check("abcd","abd") => False
    cycpattern_check("hello","ell") => True
    cycpattern_check("whassup","psus") => False
    cycpattern_check("abab","baa") => True
    cycpattern_check("efef","eeff") => False
    cycpattern_check("himenss","simen") => True

    """
    if len(a) < len(b):
        return False
    if len(a) == len(b):
        return a == b
    if len(a) > len(b):
        for i in range(len(a) - len(b) + 1):
            if a[i:i + len(b)] == b:
                return True
        return False
    """
