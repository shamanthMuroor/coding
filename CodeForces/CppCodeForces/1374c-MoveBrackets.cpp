// 115141635	May/04/2021 23:35UTC+5.5	shamanthmuroor	1374C - Move Brackets	GNU C++17	Accepted	46 ms	0 KB

// 1374 C - Move Brackets

#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, moves=0, open=0;
        cin >> n;
        string s;
        cin >> s;
        for(int i=0; i<n; i++) {
            if(s[i] == ')') {
                if(open > 0) {
                    open--;
                }
                else {
                    moves++;
                }
            }
            else{
                open++;
            }
        }
        cout << moves << endl; 
    }
    return 0;
}


// )))((((())
// )))((((())
// open=3
// moves=3

// ()()
// open=0
// moves=0