// 114220522	Apr/25/2021 22:03UTC+5.5	shamanthmuroor	1353B - Two Arrays And Swaps	GNU C++17	Accepted	15 ms	100 K

// 1353b- Two Arrays and Swaps

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t, n, k;
    cin >> t;
    while(t--) {
        int x;
        vector<int> a;
        vector<int> b;
        int ans = 0;
        cin >> n >> k;
        for(int i=0; i<n; i++) {
            cin >> x;
            a.push_back(x);
        }
        for(int i=0; i<n; i++) {
            cin >> x;
            b.push_back(x);
        }
        sort(a.begin(), a.end());
        sort(b.rbegin(), b.rend());
        for(int i=0; i<n; i++) {
            if(i<k) {
                ans += max(a[i], b[i]);
            }
            else
                ans += a[i];
        }
        cout << ans << endl;
    }
    return 0;
}