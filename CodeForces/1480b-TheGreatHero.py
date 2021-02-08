""" NOT COMPLETE !!! 
Question 1480b: The Great Hero
The great hero guards the country where Homer lives. The hero has 
attack power A and initial health value B. There are n monsters in 
front of the hero. The i-th monster has attack power ai and initial 
health value bi.

The hero or a monster is said to be living, if his or its health 
value is positive; and he or it is said to be dead, if his or its 
health value is non-positive. In order to protect people in the country, 
the hero will fight with monsters until either the hero is dead or 
all the monsters are dead.

Hero can fight the same monster more than once.
For the safety of the people in the country, please tell them whether 
the great hero can kill all the monsters (even if the great hero 
himself is dead after killing the last monster). """

import math

testcase = int(input())
for _ in range(testcase):
    heroPower, heroHealth, noMonsters = map(int, input().split())
    monsPower = list(map(int, input().split()))
    monsHealth = list(map(int, input().split()))
    
    monster = []
    for i in range(noMonsters):
        monster.append((monsPower[i], monsHealth[i]))
    monster.sort()

    won = "YES"
    for i in range(len(monster)):
        attack, life = monster[i]
        noOfFights = math.ceil(life/heroPower)
        heroHealth -= noOfFights*attack
        if heroHealth <= 0:
            if i != len(monster) - 1:
                won = "NO"
                break
            else: 
                if heroHealth + attack <= 0:
                    won = "NO"
                    break 
    print(won)