
def encrypt(s):
    alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
    rotated_alphabet = alphabet[2:] + alphabet[:2]
    table = str.maketrans(alphabet, rotated_alphabet)
    return s.translate(table)