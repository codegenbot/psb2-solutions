import hashlib

def string_to_md5(text):
    if text == "":
        return None
    else:
        return hashlib.md5(text.encode()).hexdigest()

try:
    text = input()
except EOFError:
    text = ""

result = string_to_md5(text)

print(result)