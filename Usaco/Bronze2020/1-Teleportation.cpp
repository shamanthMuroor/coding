// USACO 2018 February Contest, Bronze
// Problem 1. Teleportation


#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("teleport.in", "r", stdin);
    freopen("teleport.out", "w", stdout);
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    int x1 = min(x,y);
    int y2 = max(x,y);
    if(abs(a-b) < (abs(a-x1)+abs(b-y2))) {
        cout << abs(a-b);
    }
    else {
        cout << abs(a-x1)+abs(b-y2);
    }
    return 0;
}