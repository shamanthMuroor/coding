ar = [ -1, -1, 6, 1, 9, 3, 2, -1, 4, -1 ]

ar = list(filter(lambda n: n!=-1, ar))
ar = ar.sort()
print(type(ar))
for i in range(len(ar)):
    if ar[i] != i:
        new_ar = -1
    else:
        new_ar = i

print(new_ar)