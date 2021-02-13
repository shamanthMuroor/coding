# NOT COMPLETE

n = int(input())

while(n):
    count = 0
    a, b = map(int, input().split())
    while(a != 0):
        #print("a: ", a)
        if b == 1 or a == b:
            b += 1
        else:
            a = a//b
        count += 1
        #print(count)
    print(count)
    n -=1
