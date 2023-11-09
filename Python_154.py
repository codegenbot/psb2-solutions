def cycpattern_check(a , b):
    """
    You are given 2 words. You need to return True if the second word or any of its rotations is a substring in the first word
    cycpattern_check("abcd","abd") => False
    cycpattern_check("hello","ell") => True
    cycpattern_check("whassup","psus") => False
    cycpattern_check("abab","baa") => True
    cycpattern_check("efef","eeff") => False
    cycpattern_check("winemtt","tinem") => True


    """
    if len(a) != len(b):  # if word has different length return false
        return False
    else:  # if word has same length for every letter in word change word if word is a substring return True
        for i in range(len(b)):
            b = b[1:] + b[0]
            if b in a:
                return True
            else:
                return False

cycpattern_check("abcd","abd")
cycpattern_check("hello","ell")
cycpattern_check("whassup","psus")
cycpattern_check("abab","baa")
cycpattern_check("efef","eeff")
cycpattern_check("winemtt","tinem")
