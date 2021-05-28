# You are given an array A consisting of N integers. The task is to move all 1s 
# to the end of it while maintaining the relative order of other elements.
# Update the array A and print it. You must do this in-place without making a copy
# of array A. And minimize the total no. of operations.

n = int(input())
for _ in range(n):
    len = int(input())
    arr = list(map(int, input().split()))
    count = 0
    for i in range(len):
        if arr[i] != 1:
            arr[count] = arr[i]
            count = count + 1
        
        while count < len:
            arr[count] = 1
            count = count + 1
    print(arr)



# n = int(input())
# for _ in range(n):
#     len = int(input())
#     l = list(map(int, input().split()))
#     cnt = l.count(1)
#     for i in range(cnt):
#         l.remove(1)
#         l.append(1)
#     print(l)
