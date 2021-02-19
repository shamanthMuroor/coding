# Given an array of elements of length N, ranging from 0 to N – 1. 
# Rearrange the array such that A[i] = i and if i is not present, 
# display -1 at that place.

import random

def RearrangeArray(ar):
    new_ar = []
    for i in range(len(ar)):
        if i in ar:
            new_ar.append(i)
        else:
            new_ar.append(-1)
    print(new_ar)

n = int(input())
arr = []
for i in range(n):
    arr.append(random.randrange(0,10))
#arr = [ -1, -1, 6, 1, 9, 3, 2, -1, 4, -1 ]
#arr = [ 19, 7, 0, 3, 18, 15, 12, 6, 1, 8, 11, 10, 9, 5, 13, 16, 2, 14, 17, 4 ]
RearrangeArray(arr)