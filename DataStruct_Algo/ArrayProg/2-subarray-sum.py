def subArraySum(arr, n, s):
    for i in range(n):
        sum = 0
        for j in range(i, n):
            sum += arr[j]
            if sum >= s:
                if sum == s:
                    return [i+1, j+1]
                break      
    return [-1]   

arr = [1,2,3,4,5,6,7,8,9,10]
n = 10
s = 15
ans = subArraySum(arr, n, s)
for i in ans:
    print(i, end=" ")