def find_zero(xs):
    num = int(input("Enter a number: "))
    for i in range(len(xs)):
        if xs[i] == 0:
            return i
    return -1