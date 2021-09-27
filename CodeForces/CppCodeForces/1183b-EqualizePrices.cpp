// 130026419	Sep/27/2021 22:42UTC+5.5	shamanthmuroor	1183B - Equalize Prices	GNU C++17	Accepted	46 ms	3800 KB

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int q;
    cin >> q;
    while(q--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i=0; i<n; i++) {
            cin >> a[i];
        }
        int min = *min_element(a.begin(), a.end());
        int max = *max_element(a.begin(), a.end());

        if(max - min > 2*k) {
            cout << -1 << endl;
        }
        else {
            cout << min + k << endl;
        }
    }

    return 0;
}