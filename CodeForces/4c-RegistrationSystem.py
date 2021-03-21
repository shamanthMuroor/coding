# 110580676	Mar/21/2021 08:47UTC+5.5	shamanthmuroor	4C - Registration System	PyPy 3	Accepted	3056 ms	9500 KB

# 4c - Registration System

n = int(input())
db = {}
for _ in range(n):
    inp = input()
    if inp not in db.keys():
        db.update({inp: 1})
        print('OK')
    else:
        print(inp+str(db[inp]))
        db.update({inp: db[inp]+1})