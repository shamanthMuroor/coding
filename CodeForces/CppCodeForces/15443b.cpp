// 121681358	Jul/08/2021 10:12UTC+5.5	shamanthmuroor	1543B - Customising the Track	GNU C++17	Accepted	373 ms	1600 KB

#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long int n;
        cin >> n;
        long long int a[n], sum=0;
        for(int i=0; i<n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        long long int rc = sum%n;
        cout << rc*(n-rc) << endl;
    }
    return 0;
}


// 3
// 3
// 1 2 3
// 6
// Remaining cars: 6%3=0
// Remaining tracks empty: 3-0=3
// Answer: 0*3

// 4
// 0 1 1 0
// 2
// Remaining cars: 2%4=2
// Remaining tracks empty: 4-2=2
// Answer: 2*2


// 10
// 8 3 6 11 5 2 1 7 10 4 = 10tracks
// 57
// Remaining cars: 57%10=7
// Add these to 7 tracks
// Remaining tracks empty: 10-7=3
// Answer: 7*3
