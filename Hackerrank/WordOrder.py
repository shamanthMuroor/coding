# Word Order
# Difficulty: Medium

n = int(input())
words = {}
for i in range(n):
    w = input().strip()
    if w in words:
        words[w] += 1
    else:
        words[w] = 1
print(len(words))
for i in words:
    print(words[i], end=" ")
