
def find_max(words):
    """Write a function that accepts a list of strings.
    The list contains different words. Return the word with maximum number
    of unique characters. If multiple strings have maximum number of unique
    characters, return the one which comes first in lexicographical order.

    find_max(["name", "of", "string"]) == "string"
    find_max(["name", "enam", "game"]) == "enam"
    max_len = 0
    max_word = ""
    for word in words:
        word_set = set(word)
        if len(word_set) > max_len:
            max_len = len(word_set)
            max_word = word

    return max_word


print(find_max(["name", "of", "string"]))
print(find_max(["name", "enam", "game"]))
print(find_max(["aaaaaaa", "bb" ,"cc"]))
print(find_max(["play", "play", "play"]))
    find_max(["aaaaaaa", "bb" ,"cc"]) == "aaaaaaa"
    """
