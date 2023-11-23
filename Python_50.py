import sys

def encode_shift(s: str):
    return "".join([chr(((ord(ch) + 5 - ord("a")) % 26) + ord("a")) for ch in s])

def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])

input_string = sys.argv[1]

encoded_string = encode_shift(input_string)
print("Encoded string:", encoded_string)

decoded_string = decode_shift(encoded_string)
print("Decoded string:", decoded_string)