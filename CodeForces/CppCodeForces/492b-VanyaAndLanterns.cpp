// 108431078	Feb/25/2021 01:11UTC+5.5	shamanthmuroor	492B - Vanya and Lanterns	GNU C++17	Accepted	31 ms	0 KB

// Problem 492B - Vanya and Lanterns

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, l; 
    double max_dist=0;
    int lt[1000];
    cin >> n >> l;
    for(int i=0; i<n; i++)
        cin >> lt[i];
    sort(lt, lt+n);
    for(int i=0; i<n-1; i++) 
        if((lt[i+1] - lt[i]) > max_dist) 
            max_dist = lt[i+1] - lt[i];
    
    max_dist = max(max_dist/2, double(max(lt[0]-0, l-lt[n-1])));
    cout << setprecision(10) << max_dist;

    return 0;
}