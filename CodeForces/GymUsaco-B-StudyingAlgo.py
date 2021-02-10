""" 102951: USACO Gym Problem: B. Studying Algorithms
Steph wants to improve her knowledge of algorithms over 
winter break. She has a total of X (1≤X≤104) minutes to 
dedicate to learning algorithms. There are N (1≤N≤100) 
algorithms, and each one of them requires ai (1≤ai≤100) 
minutes to learn. Find the maximum number of algorithms 
she can learn. """

n, x = map(int, input().split())
mins = list(map(int, input().split()))
mins.sort()
for i in range(n):
    x -= mins[i]
    if x < 0:
        break
    i+=1
print(i)