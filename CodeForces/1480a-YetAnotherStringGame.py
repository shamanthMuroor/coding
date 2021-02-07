ch = int(input())
for i in range(ch):
    s = input()
    newStr = ""
    for i, letter in enumerate(s):
        if i%2 == 0:
            #Alice chance
            if ord(letter) == 97:
                newStr += chr(ord(letter)+1)
            else:
                maxdiff = abs(ord(letter) - ord('a'))
                newStr += chr( ord(letter) - maxdiff)
        else:
            #Bob chance
            if ord(letter) == 122:
                newStr += chr(ord(letter) - 1)
            else:
                maxdiff = abs(ord(letter) - ord('z'))
                newStr += chr( ord(letter) + maxdiff)
    print(newStr)