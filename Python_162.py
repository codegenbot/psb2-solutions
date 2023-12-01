import hashlib

def string_to_md5(text):
    if text == "":
        return None
    else:
        return hashlib.md5(text.encode()).hexdigest()

text = input("Enter the input text: ")  # Added prompt message
result = string_to_md5(text)
print(result)