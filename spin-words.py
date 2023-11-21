def spin_words(string):
    if not string:
        return ""
    words = string.split()
    for i in range(len(words)):
        if len(words[i]) >= 5:
            words[i] = words[i][::-1]
    return ' '.join(words)