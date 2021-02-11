#106482904	Feb/04/2021 23:45UTC+5.5	shamanthmuroor	1A - Theatre Square	Python 3	Accepted	61 ms	0 KB

""" Question 1a: Theatre Square
Theatre Square in the capital city of Berland has a rectangular 
shape with the size n × m meters. On the occasion of the city's 
anniversary, a decision was taken to pave the Square with square 
granite flagstones. Each flagstone is of the size a × a.

What is the least number of flagstones needed to pave the Square? 
It's allowed to cover the surface larger than the Theatre Square,
but the Square has to be covered. It's not allowed to break the 
flagstones. The sides of flagstones should be parallel to the 
sides of the Square. """

import math

n, m, a = input().split()
n, m, a = [int(n), int(m), int(a)]

print(math.ceil(n/a) * math.ceil(m/a))