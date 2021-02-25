# Piling Up!

# First line- number of test cases.
# The first line of each test case contains n, the number of cubes.
# The second line contains n space separated integers, denoting the sideLengths of each cube in that order.

from collections import deque

testcases = int(input())
for i in range(testcases):
    n = int(input())
    queue = deque(map(int, input().split()))
    
    for cube in reversed(sorted(queue)):
        if queue[-1] == cube: queue.pop()
        elif queue[0] == cube: queue.popleft()
        else:
            print("No")
            break
    else:
        print("Yes")