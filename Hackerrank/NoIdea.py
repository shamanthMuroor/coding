# No Idea!
# Difficulty: Medium

n, m = map(int, input().split())
hp = 0
arr = list(map(int, input().split()))
A = set(map(int, input().split()))
B = set(map(int, input().split()))

for i in arr:
    if i in A:
        hp += 1
    if i in B:
        hp -= 1

print(hp)
