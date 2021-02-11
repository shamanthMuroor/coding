#106615912	Feb/05/2021 23:30UTC+5.5	shamanthmuroor	263A - Beautiful Matrix	Python 3	Accepted	124 ms	0 KB

""" Question 263a: Beautiful Matrix 
You've got a 5 × 5 matrix, consisting of 24 zeroes and a single number one. 
Let's index the matrix rows by numbers from 1 to 5 from top to bottom, 
let's index the matrix columns by numbers from 1 to 5 from left to right. 
In one move, you are allowed to apply one of the two following 
transformations to the matrix:

Swap two neighboring matrix rows, that is, rows with indexes i and i + 1 
for some integer i (1 ≤ i < 5).
Swap two neighboring matrix columns, that is, columns with indexes j and j + 1 
for some integer j (1 ≤ j < 5).
You think that a matrix looks beautiful, if the single number one of the matrix 
is located in its middle (in the cell that is on the intersection of the third 
row and the third column). Count the minimum number of moves needed to make 
the matrix beautiful. """


matrix = []
for i in range(1, 6):
    c1, c2, c3, c4, c5 = input().split()
    row = [ int(c1), int(c2), int(c3), int(c4), int(c5) ]
    for index, j in enumerate(row):
        if j == 1:
            moves = abs(i - 3) + abs(index + 1 - 3)
    matrix += [row]
print(moves)


