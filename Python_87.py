def get_row(lst, x):
    coordinates = []
    for i in range(len(lst)):
        for j in range(len(lst[i])):
            if lst[i][j] == x:
                coordinates.append((i, j))
    coordinates.sort(key=lambda c: c[0])
    coordinates.sort(key=lambda c: c[1], reverse=True)
    return coordinates