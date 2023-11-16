
def words_in_sentence(sentence):
    """
    You are given a string representing a sentence,
    the sentence contains some words separated by a space,
    and you have to return a string that contains the words from the original sentence,
    whose lengths are prime numbers,
    the order of the words in the new string should be the same as the original one.

    Example 1:
        Input: sentence = "This is a test"
        Output: "is"

    Example 2:
        Input: sentence = "lets go for swimming"
        Output: "go for"

    Constraints:
        * 1 <= len(sentence) <= 100
        * sentence contains only letters
    """

    words = sentence.split(" ")
    primes = []

    for word in words:
        length = len(word)
        if is_prime(length):
            primes.append(word)

    return " ".join(primes)


def is_prime(num):
    """
    This function checks if the given number is a prime number.
    """

    if num == 1:
        return True
    elif num == 2:
        return True
    else:
        for i in range(2, num):
            if num % i == 0:
                return False
    return True


print(words_in_sentence("This is a test"))
print(words_in_sentence("lets go for swimming"))
