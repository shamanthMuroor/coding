""" 102951: USACO Gym Problem: A. Maximum Distance
You are given N (3≤N≤5000) integer points on the coordinate plane. 
Find the square of the maximum Euclidean distance 
(aka length of the straight line) between any two of the points.

Input
The first line contains an integer N. The second line contains 
N integers, the x-coordinates of the points: x1,x2,…,xN (−1000≤xi≤1000). 
The third line contains N integers, the y-coordinates of the 
points: y1,y2,…,yN (−1000≤yi≤1000). """

n = int(input())
x = list(map(int, input().split()))
y = list(map(int, input().split()))
maxdist = 0
for i in range(n-1):
    for j in range(i+1, n):
        dist = (x[j]-x[i])**2 + (y[j]-y[i])**2
        if dist > maxdist:
            maxdist = dist
print(maxdist)