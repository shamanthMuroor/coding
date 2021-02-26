# Merge the Tools!
# Difficulty: Medium

s = input()
k = int(input())

substring = ""
len_s = 0
for i in s:
    len_s += 1
    if i not in substring:
        substring += i
    if len_s == k:
        print(substring)
        substring = ""
        len_s = 0