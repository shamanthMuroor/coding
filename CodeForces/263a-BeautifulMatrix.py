matrix = []
for i in range(1, 6):
    c1, c2, c3, c4, c5 = input().split()
    row = [ int(c1), int(c2), int(c3), int(c4), int(c5) ]
    for index, j in enumerate(row):
        if j == 1:
            moves = abs(i - 3) + abs(index + 1 - 3)
    matrix += [row]
print(moves)


