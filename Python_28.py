from typing import List

def concatenate(strings: List[str]) -> str:
    return " ".join(strings)

if __name__ == "__main__":
    num_strings = int(input().strip())
    input_strings = input().strip().split()[:num_strings]

    output = concatenate(input_strings)
    print(output.strip())