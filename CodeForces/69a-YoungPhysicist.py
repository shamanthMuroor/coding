#106992848	Feb/09/2021 20:07UTC+5.5	shamanthmuroor	69A - Young Physicist	Python 3	Accepted	154 ms	0 KB

""" Question 69a: Young Physicist """

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