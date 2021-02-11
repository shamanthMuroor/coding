#106799833	Feb/07/2021 21:09UTC+5.5	shamanthmuroor	1480A - Yet Another String Game	Python 3	Accepted	93 ms	300 KB

"""Question 1480a: Yet Another String Game 
Homer has two friends Alice and Bob. Both of them are string fans.
One day, Alice and Bob decide to play a game on a string s=s1s2…sn 
of length n consisting of lowercase English letters. They move in 
turns alternatively and Alice makes the first move.
In a move, a player must choose an index i (1≤i≤n) that has not been 
chosen before, and change si to any other lowercase English letter c that c≠si.
When all indices have been chosen, the game ends.
The goal of Alice is to make the final string lexicographically 
as small as possible, while the goal of Bob is to make the final 
string lexicographically as large as possible. Both of them are 
game experts, so they always play games optimally. Homer is not 
a game expert, so he wonders what the final string will be.

A string a is lexicographically smaller than a string b if and 
only if one of the following holds:
a is a prefix of b, but a≠b;
in the first position where a and b differ, the string a has 
a letter that appears earlier in the alphabet than the 
corresponding letter in b.
"""

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