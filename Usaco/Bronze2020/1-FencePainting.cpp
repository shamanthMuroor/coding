// USACO 2015 December Contest, Bronze
// Problem 1. Fence Painting

#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("paint.in", "r", stdin);
    freopen("paint.out", "w", stdout);
    vector<bool> cover(100);
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    for(int i=a; i<b; i++) cover[i] = 1;
    for(int i=c; i<d; i++) cover[i] = 1;
    int ans = 0;
    for(int i=0; i<100; ++i) ans += cover[i];
    cout << ans;
    
    
    // int a, b, c, d, e, f;
    // cin >> a >> b >> c >> d;
    // e = (a>c)?c:a;
    // f = (b>d)?b:d;
    // cout << abs(f-e) << endl; 
    return 0;
}