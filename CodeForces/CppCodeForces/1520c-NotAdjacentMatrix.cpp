// 115339230	May/05/2021 23:06UTC+5.5	shamanthmuroor	C - Not Adjacent Matrix	GNU C++17	Accepted	140 ms	3600 KB

// 1520 c - Not Adjacent Matrix

#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int k = (n*n);
        if(n==2) {
            cout << "-1" << endl;
            continue;
        }
        int count = 0;
        for(int i=1; i<=k; i++) {
            if(i%2 != 0) {
                cout << i << " ";
                count++;
                if(count == n) {
                    count = 0;
                    cout << endl;
                }
            }
        }

        for(int i=1; i<=k; i++) {
            if(i%2 == 0) {
                cout << i << " ";
                count++;
                if(count == n) {
                    count = 0;
                    cout << endl;
                }
            }
        }   
    }
    return 0;
}