def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                encoded_char = chr((ord(char.lower()) - ord('a') + 20) % 26 + ord('A'))
            else:
                encoded_char = chr((ord(char.lower()) - ord('a') + 20) % 26 + ord('a'))
        else:
            encoded_char = char
        encoded_message += encoded_char
    return encoded_message