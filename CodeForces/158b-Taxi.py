#107148560	Feb/12/2021 00:34UTC+5.5	shamanthmuroor	158B - Taxi	PyPy 3	Accepted	310 ms	7200 KB

""" Problem 158b: Taxi
After the lessons n groups of schoolchildren went outside 
and decided to visit Polycarpus to celebrate his birthday. 
We know that the i-th group consists of si friends (1 ≤ si ≤ 4), 
and they want to go to Polycarpus together. They decided to 
get there by taxi. Each car can carry at most four passengers. 
What minimum number of cars will the children need if all 
members of each group should ride in the same taxi (but 
one taxi can take more than one group)?
"""


import math
n = int(input())
groups = list(map(int, input().split()))

extrappl = taxi = 0
taxi += groups.count(4)
#print("4s: ", taxi)
if 2 in groups:
    if (2*groups.count(2))%4 == 0:
        taxi += int(groups.count(2)/2)
    else:
        taxi += int(groups.count(2)/2)
        extrappl = 2
#print("2s: ", taxi, extrappl)

if groups.count(1) < groups.count(3):
    taxi += groups.count(3)
else:
    taxi += groups.count(3)
    extrappl += abs(groups.count(3) - groups.count(1))
    
#print("1/3: ", taxi, extrappl)
if extrappl > 0:
    extrappl = math.ceil(extrappl/4)
print(taxi + extrappl)

