""" Count the frequency of all the characters in given string """

def hashFunc(c):
    return (ord(c) - ord('a')) #ord: gets ascii value of integer

def countFreq(S):
    for i in range(len(S)):
        index = hashFunc(S[i])
        Frequency[index] += 1

print("Enter String to count character frequency: ")        
S = input().lower()
Frequency = { i: 0 for i in range(26) }
countFreq(S)
for i in range(26):
    print(chr(ord('a')+i), ": ", Frequency[i]) #chr: used to convert from ascii to alphabets