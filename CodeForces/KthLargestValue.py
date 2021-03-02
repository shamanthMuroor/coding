# 108915364	Mar/02/2021 21:09UTC+5.5	shamanthmuroor	A - K-th Largest Value	Python 3	Accepted	904 ms	2000 KB

# 1491 A. K-th Largest Value

n, q = map(int,input().split())
a = list(map(int,input().split()))
zero = a.count(0)
one = n - zero
for _ in range(q):
    t, x = map(int,input().split())
    if t == 1:
        if a[x-1] == 1:
            zero += 1
            one -= 1
            a[x-1] = 0
        else:
            zero -= 1
            one += 1
            a[x-1] = 1
    else:
        if x<=one:
            print(1)
        else:
            print(0)
