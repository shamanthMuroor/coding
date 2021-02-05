str = input().lower()
vowel = ['a', 'e', 'i', 'o', 'u', 'y'] #y is also included in the question for some reason
res = ""

for letter in str:
    if letter not in vowel:
        res = res + "." + letter

print(res)