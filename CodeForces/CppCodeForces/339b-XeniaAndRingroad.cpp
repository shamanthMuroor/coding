// 112982890	Apr/14/2021 12:29UTC+5.5	shamanthmuroor	339B - Xenia and Ringroad	GNU C++17	Accepted	278 ms	0 KB

// 339 B- Xenia And Ringroad

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int loc = 1;
    long long int ans=0;

    for(int i=0; i<m; i++) {
        int hno;
        cin >> hno;
        
        if(hno >= loc)
            ans += hno - loc;
        else
            ans += n - (loc - hno);
        loc = hno;
    }
    cout << ans << endl;
    return 0;
}