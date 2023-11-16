def histogram(test):
    """Given a string representing a space separated lowercase letters, return a
    dictionary of the letter with the most repetition and containing the
    corresponding count.
    If several letters have the same occurrence, return all of them.

    Example:
    histogram('a b c') == {'a': 1, 'b': 1, 'c': 1}
    histogram('a b b a') == {'a': 2, 'b': 2}
    histogram('a b c a b') == {'a': 2, 'b': 2}
    histogram('b b b b a') == {'b': 4}
    d = {}
    for i in test.split():
        if i in d:
            d[i] += 1
        else:
            d[i] = 1
    return d


def check(func):
    assert func("a") == {"a": 1}
    assert func("a b c") == {"a": 1, "b": 1, "c": 1}
    assert func("a b b a") == {"a": 2, "b": 2}
    assert func("a b c a b") == {"a": 2, "b": 2}
    assert func("b b b b a") == {"b": 4}
    assert func("") == {}
    print("All tests passed!")


check(histogram)
    histogram('') == {}
    """
