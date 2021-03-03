// Apartments 
// Sorting and Searching

#include <bits/stdc++.h>

using namespace std;

const int maxn=2e5+10;

int main() {
    int n, m, k, count = 0, a[maxn], b[maxn];
    cin >> n >> m >> k;
    for(int i=0; i<n; ++i) cin >> a[i];
    for(int i=0; i<m; ++i) cin >> b[i];
    sort(a, a+n); sort(b, b+m);
    int i=0, j=0;
    while(i<n && j<m) {
        if(abs(a[i]-b[j]) <= k) {
            ++i; ++j;
            ++count;
        }
        else{
            if(a[i]-b[j]>k)
                ++j;
            else
                ++i;    
        }
    }
    cout << count << endl;
    return 0;
}