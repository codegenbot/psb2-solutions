[PYTHON]
def remove_vowels(text):
    vowels = "aeiou"
    return "".join([c for c in text if c.lower() not in vowels])
[/PYTHON]
[TESTS]
# Test case 1:
assert remove_vowels("") == ""
# Test case 2:
assert remove_vowels("abcdef\nghijklm") == "bcdf\nghjklm"
# Test case 3:
assert remove_vowels("abcdef") == "bcdf"
# Test case 4:
assert remove_vowels("aaaaa") == ""
# Test case 5:
assert remove_vowels("aaBAA") == "B"
# Test case 6:
assert remove_vowels("zbcd") == "zbcd"
[/TESTS]
```