"""def checkDangerous(players):
    count = i = 0
    test_char = int(players[0])
    while i < len(players):
        if int(players[i]) == test_char:
            i += 1
            count += 1
            if count == 7:
                return "YES"
        else:
            test_char = int(players[i])
            count = 1
            i += 1        
    return "NO"
"""

""" Second Method - Better than first """
def checkDangerous(players):
    zero = one = 0
    for i in range(len(players)):
        if int(players[i]) == 0:
            one = 0
            zero += 1
        else:
            zero = 0
            one += 1
        if one == 7 or zero == 7:
            return "YES"
    return "NO"

#players = "1000000001" #YES
#players = "001001" #NO
players = input()
ans = checkDangerous(players)
print(ans) 

