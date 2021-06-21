// 120125123	Jun/20/2021 18:16UTC+5.5	shamanthmuroor	B - Kana and Dragon Quest game	GNU C++17	Accepted	31 ms	0 KB

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int x, n, m;
        cin >> x >> n >> m;
        bool flag = false;
        if(x < 20) {
            goto cont;
        }
        while(n>0) {
            x = floor(x/2) + 10;
            n--;
        }
        cont:while( m>0 ) {
            x -= 10;
            m--;
            if(x <= 0) {
                flag = true;
                break;
            }
        }
        if(flag) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}


// 21
// 21/2 + 10 = 20
// 20/2 + 10 = 20
// 20-10 = 10


// 19
// 19/2 + 10 = 19

// 19-10 = 9