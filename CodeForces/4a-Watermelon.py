#106477955	Feb/04/2021 22:42UTC+5.5	shamanthmuroor	4A - Watermelon	Python 3	Accepted	122 ms	0 KB

""" Question 4a Watermelon
Pete and Billy are great fans of even numbers, that's why 
they want to divide the watermelon in such a way that each of the two parts weighs 
even number of kilos, at the same time it is not obligatory that the parts are equal. 
The boys are extremely tired and want to start their meal as soon as possible, 
that's why you should help them and find out, if they can divide the watermelon 
in the way they want. For sure, each of them should get a part of positive weight. """


n = int(input())
if n == 2: 
    print("NO")
elif n % 2 == 0:
    print("YES")
else:
    print("NO")