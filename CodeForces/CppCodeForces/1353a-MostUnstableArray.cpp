// 114469157	Apr/28/2021 22:08UTC+5.5	shamanthmuroor	1353A - Most Unstable Array	GNU C++17	Accepted	77 ms	0 KB

// 1353 A - Most Unstable Array

#include <iostream>

using namespace std;

int main() {
    int t; 
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        cout << min(2, n-1) * m << endl;
    }
    return 0;
}





// n=5, m=5

// 1 1 1 1 1=0

// 0 0 0 0 5=5

// 4 1 0 0 0=3
// 4 0 1 0 0=6

// 3 1 1 0 0=3
// 3 2 0 0 0=3
// 0 3 0 2 0=10  **  Max = 2*m
// 2 0 3 0 0=8
// 1 0 3 0 1=8

// 2 1 1 1 0=3
// 2 2 1 0 0=2
// 2 1 0 0 2=4
// 1 0 2 0 2=7