def make_palindrome(string: str) -> str:
    i = len(string) - 1
    while i >= 0:
        if string[:i+1] == string[:i+1][::-1]:
            return string + string[:i][::-1]
        i -= 1
    return string