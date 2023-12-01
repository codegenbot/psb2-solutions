import hashlib

def string_to_md5(text):
    if text == "":
        return None
    else:
        return hashlib.md5(text.encode()).hexdigest()

def main():
    text = input()
    return string_to_md5(text)

result = main()
print(result)