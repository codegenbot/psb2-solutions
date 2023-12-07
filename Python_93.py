```
def encode(message):
    vowels = ['a', 'e', 'i', 'o', 'u']
    encoded_message = ''
    for char in message:
        if char.isalpha():
            # Handle alphabetic characters
            if char.islower():
                encoded_char = chr((ord(char) - ord('a') + 2) % 26 + ord('A'))
            elif char.isupper():
                encoded_char = chr((ord(char) - ord('A') + 2) % 26 + ord('a'))
        elif char.isspace() or char in string.punctuation:
            # Handle non-alphanumeric characters
            encoded_message += char
        else:
            raise ValueError(f"Invalid character '{char}'")
    return encoded_message
```