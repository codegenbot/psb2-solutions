def encode(message):
    encoded_message = ""
    vowels = ['a', 'e', 'i', 'o', 'u']
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                encoded_char = chr(ord(char) + 2)
                if char.lower() in vowels:
                    encoded_char = chr(ord(encoded_char) - 26)
                encoded_message += encoded_char
            else:
                encoded_message += char.swapcase()
        else:
            encoded_message += char
    return encoded_message