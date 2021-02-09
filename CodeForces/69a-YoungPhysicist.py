n = int(input())
xvect = yvect = zvect = 0
for i in range(n):
    x, y, z = map(int, input().split())
    xvect += x
    yvect += y
    zvect += z
if xvect == 0 and yvect == 0 and zvect == 0:
    print("YES")
else:
    print("NO")