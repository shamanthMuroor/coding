// NOT SOLVED

#include <bits/stdc++.h>

using namespace std;

#define mx 10e9

void solve() {
    int n, k, x;
    set<int> s;
    cin >> n >> k;
    for(int i=0; i<n; ++i) {
        cin >> x;
        s.insert(x);
    }
    for(int i=0; i<k; ++i) {
        int mn = 0;
        for(int element : s) {
            if(element - mn == 0)
                ++mn;
            else   
                break;
        }
        s.insert((mn + *(s.end()))/2);
    }
    cout << s.size() << endl;
}

int main() {
    int t;
    cin >> t;
    for(int i=0; i<t; i++) {
        solve();
    }
    return 0;
}