def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            if char.lower() not in ["a", "e", "i", "o", "u"]:
                encoded_message += char.upper()
            else:
                encoded_message += char
        else:
            encoded_message += char
    return encoded_message