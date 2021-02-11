#106694298	Feb/06/2021 23:18UTC+5.5	shamanthmuroor	96A - Football	Python 3	Accepted	124 ms	0 KB

""" Question 96a: Football
Petya loves football very much. One day, as he was 
watching a football match, he was writing the players' 
current positions on a piece of paper. To simplify the 
situation he depicted it as a string consisting of zeroes 
and ones. A zero corresponds to players of one team; a 
one corresponds to players of another team. If there are 
at least 7 players of some team standing one after another, 
then the situation is considered dangerous. For example, 
the situation 00100110111111101 is dangerous and 
11110111011101 is not. You are given the current situation. 
Determine whether it is dangerous or not. """


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

