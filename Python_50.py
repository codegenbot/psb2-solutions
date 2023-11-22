def decode_shift(s: str) -> str:
    return "".join(
        [
            chr(((ord(ch.lower()) - 5 - ord("a")) % 26) + ord("a")) if ch.isalpha() else ch
            for ch in s
        ]
    )

s = input()
decoded_string = decode_shift(s)
decoded_string