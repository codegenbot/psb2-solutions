def spin_words(string):
    words = string.split(' ')
    return ' '.join([word[::-1] if len(word) > 4 else word for word in words])