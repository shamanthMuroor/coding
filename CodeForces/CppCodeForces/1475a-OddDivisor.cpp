// 114663788	Apr/30/2021 13:01UTC+5.5	shamanthmuroor	1475A - Odd Divisor	GNU C++17	Accepted	77 ms	0 KB

// 1475 A - Odd Divisor

#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        if(n & (n-1)) {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}