def encode_shift(s: str) -> str:
    return "".join(
        [chr(((ord(ch.lower()) + 5 - ord("a")) % 26) + ord("a")) for ch in s]
    )


def decode_shift(s: str) -> str:
    return "".join(
        [chr(((ord(ch.lower()) - 5 - ord("a")) % 26) + ord("a")) for ch in s]
    )


def main():
    s = input()
    encoded = encode_shift(s)
    print(encoded)
    decoded = decode_shift(encoded)
    print(decoded)


if __name__ == "__main__":
    main()