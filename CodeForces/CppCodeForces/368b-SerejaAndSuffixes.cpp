// 120808142	Jun/28/2021 19:40UTC+5.5	shamanthmuroor	368B - Sereja and Suffixes	GNU C++17	Accepted	561 ms	9400 KB

#include <iostream>
#include <vector>

using namespace std;

using ll = long long;

int main() {
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n);
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }

    vector<ll> suf(n+1);
    vector<ll> uni(1e6);
    for(int i=n-1; i>=0; i--) {
        if(uni[a[i]] > 0) {
            suf[i] = suf[i+1];
        }
        else {
            suf[i] = suf[i+1] + 1;
            uni[a[i]] = 1;
        }
    }

    while(m--) {
        long long int l;
        cin >> l;
        cout << suf[l-1] << endl;
    }

    return 0;
}


// Time limit exceeded
// #include <iostream>
// #include <set>
 
// using namespace std;
 
// int main() {
//     int n, m;
//     cin >> n >> m;
//     int a[n];
//     for(int i=1; i<=n; i++) {
//         cin >> a[i];
//     }
//     while(m--) {
//         int l;
//         cin >> l;
//         set<int> st;
//         for(int i=l; i<=n; i++) {
//             st.insert(a[i]);
//         }
//         cout << st.size() << endl;
//     }
//     return 0;
// }