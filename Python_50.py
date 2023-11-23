def encode_shift(s: str):
    return "".join([chr(((ord(ch) + 5 - ord("a")) % 26) + ord("a")) for ch in s])


def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])


# Prompt user for input
input_str = input("Enter a string: ")

# Encode and decode the input
encoded_str = encode_shift(input_str)
decoded_str = decode_shift(input_str)

# Print the results
print("Encoded string:", encoded_str)
print("Decoded string:", decoded_str)