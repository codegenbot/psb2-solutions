cipher = input()
mapping = input()
message = input()

deciphered_message = ""

for char in message:
    index = cipher.find(char)
    if index != -1:
        deciphered_message += mapping[index]
    else:
        deciphered_message += char

print(deciphered_message)