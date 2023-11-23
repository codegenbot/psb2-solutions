def all_prefixes(string: str) -> List[str]:
    return [string[:i] for i in range(1, len(string) + 1)]


input_string = sys.stdin.readline().strip()
result = all_prefixes(input_string)
print(result)