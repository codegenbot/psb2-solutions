def cycpattern_check(a, b):
    """You are given 2 words. You need to return True if the second word or any of its rotations is a substring in the first word
    cycpattern_check("abcd","abd") => False
    cycpattern_check("hello","ell") => True
    cycpattern_check("whassup","psus") => False
    cycpattern_check("abab","baa") => True
    cycpattern_check("efef","eeff") => False
    cycpattern_check("himenss","simen") => True

    :param a: String
    :param b: String
    :return: Boolean
    if len(a) < len(b):
        return False
    for i in range(len(a)):
        if a[i] == b[0]:
            if a[i:i + len(b)] == b:
                return True
    return False
    """
