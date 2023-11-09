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
    if len(a) != len(b):  # if words have different length return False
        return False
    else:  # if words have same length for every letter in word change word if word is a substring return True if not return False 
        for i in range(len(b)):
            b = b[1:] + b[0]
            if b in a:
                check(cycpattern_check) # check the function 
                return True
        return False
