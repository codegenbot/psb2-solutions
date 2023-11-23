def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            if char.islower():
                encoded_char = chr((ord(char) - 97 + 20) % 26 + 97)
            else:
                encoded_char = chr((ord(char) - 65 + 20) % 26 + 65)
            encoded_message += encoded_char
        else:
            encoded_message += char
    return encoded_message