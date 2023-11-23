def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            char_lower = char.lower()
            if char_lower in ['a', 'e', 'i', 'o']:
                encoded_message += chr(ord(char_lower) + 2)
            elif char_lower == 'u':
                encoded_message += 'a'
            else:
                encoded_message += chr(ord(char.upper()) - 2)
        else:
            encoded_message += char
    return encoded_message