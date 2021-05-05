// 115182080	May/05/2021 13:25UTC+5.5	shamanthmuroor	1472B - Fair Division	GNU C++17	Accepted	78 ms	0 KB

// 1472 B - Fair Division


#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, a, ones=0, twos=0;
        cin >> n;
        for(int i=0; i<n; i++) {
            cin >> a;
            if(a == 1) ones++;
            else twos++;
        }
        if((ones + 2*twos)%2 != 0) {
            cout << "NO" << endl;
        }
        else {
            int sum = (ones + 2*twos) / 2;
            if(sum%2 == 0 || (sum%2==1 && ones !=0 )) {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}