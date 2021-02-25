#The Minion Game

# Input Format: A single line of input containing the string
# Output Format: Print name of the winner and their score
# If the game is a draw, print Draw.

s = input()

vowels = "AEIOU"
kevinsc = stusc = 0
for i in range(len(s)):
    if s[i] in vowels:
        kevinsc += len(s) - i
    else:
        stusc += len(s) - i

if kevinsc > stusc:
    print("Kevin", kevinsc)
elif kevinsc < stusc:
    print("Stuart", stusc)
else:
    print("Draw")
