import hashlib

def string_to_md5(text):
    if text == "":
        return None
    else:
        return hashlib.md5(text.encode()).hexdigest()

# Read input from user
text = input("Enter a string: ")

# Call the function with user input
result = string_to_md5(text)

# Print the result
print(result)