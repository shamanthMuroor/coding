#106639522	Feb/06/2021 09:28UTC+5.5	shamanthmuroor	339A - Helpful Maths	Python 3	Accepted	124 ms	0 KB

""" Question 339a: Helpful Maths
The teacher has written down the sum of multiple numbers. 
Pupils should calculate the sum. To make the calculation easier, 
the sum only contains numbers 1, 2 and 3. Still, that isn't 
enough for Xenia. She is only beginning to count, so she can 
calculate a sum only if the summands follow in non-decreasing order. 
For example, she can't calculate sum 1+3+2+1 but she can calculate sums 1+1+2 and 3+3.

You've got the sum that was written on the board. Rearrange the 
summans and print the sum in such a way that Xenia can calculate the sum. """

s = input().split('+')
s.sort()
new_s = '+'.join(s)
print(new_s)