def encode_shift():
    s = input().lower()
    return "".join(
        [chr(((ord(ch) + 5 - ord("a")) % 26) + ord("a")) for ch in s if ch.isalpha()]
    )


def decode_shift():
    s = input().lower()
    return "".join(
        [chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s if ch.isalpha()]
    )