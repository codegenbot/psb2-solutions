a = input()
b = input()
c = input()
d = ''.join(b[a.find(i)] for i in c).replace('\n\n', '\n')
print(d, end='')
