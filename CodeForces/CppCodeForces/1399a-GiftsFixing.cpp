// 120208242	Jun/21/2021 18:10UTC+5.5	shamanthmuroor	1399B - Gifts Fixing	GNU C++17	Accepted	62 ms	100 KB

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<long long int> a(n), b(n); 
        for(auto &it: a) {
            cin >> it;
        }
        for(auto &it: b) {
            cin >> it;
        }
        int mna = *min_element(a.begin(), a.end());
        int mnb = *min_element(b.begin(), b.end());
        long long int cnt = 0;
        for(int i=0; i<n; i++) {
            cnt += max(a[i]-mna, b[i]-mnb);    
        }
        cout << cnt << endl;
    }
    return 0;
}


/** -----------------------------------------------------------------------------------------------------------------**/


// 120207395	Jun/21/2021 17:59UTC+5.5	shamanthmuroor	1399B - Gifts Fixing	GNU C++17	Accepted	61 ms	0 KB

// #include <iostream>

// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while(t--) {
//         int n;
//         cin >> n;
//         long long int a[n], b[n], min_candies=INT_MAX, min_orange=INT_MAX, cnt=0;
//         for(int i=0; i<n ;i++) {
//             cin >> a[i];
//             min_candies = min(a[i], min_candies);
//         }
//         for(int i=0; i<n; i++) {
//             cin >> b[i];
//             min_orange = min(b[i], min_orange);
//         }
//         for(int i=0; i<n; i++) {
//             cnt += max(a[i] - min_candies, b[i] - min_orange);    
//         }
//         cout << cnt << endl;
//     }
//     return 0;
// }