// 120049738	Jun/20/2021 13:11UTC+5.5	shamanthmuroor	1370A - Maximum GCD	GNU C++17	Accepted	30 ms	0 KB

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t, m, n;
    cin >> t;
    while(t--) {
        int p, gcd;
        cin >> p;
        gcd = floor(p/2);
        cout << gcd << "\n";
    }
    return 0;
}


// #include <iostream>
// #include <cmath>

// using namespace std;

// int findGCD(int m, int n) {
//     if( m%n == 0 ) {
//         return n;
//     }
//     return findGCD(n, m%n);
// }

// int main() {
//     int t, m, n;
//     cin >> t;
//     while(t--) {
//         int p, gcd = INT_MIN;
//         cin >> p;
//         // for(int i=1; i<p; i++) {
//         //     for(int j=i+1; j<=p; j++) {
//         //         gcd = max(findGCD(i,j), gcd);
//         //     }
//         // }
//         gcd = floor(p/2);
//         cout << gcd << "\n";
//     }
//     return 0;
// }