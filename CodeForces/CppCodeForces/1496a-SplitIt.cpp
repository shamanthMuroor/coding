// 109727459	Mar/11/2021 22:55UTC+5.5	shamanthmuroor	A - Split it!	GNU C++17	Accepted	46 ms	0 KB

// 1496a - Split It

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, k;
    char s[101];
    cin >> t;
    for(int i=0; i<t; ++i) {
        cin >> n >> k;
        cin >> s;
        int ok=1;
        for(int i=0; i<k; i++) 
            ok = ok && s[i] == s[n-i-1];
        ok && k*2 < n ? cout << "YES" : cout << "NO";
    }
    return 0;
}