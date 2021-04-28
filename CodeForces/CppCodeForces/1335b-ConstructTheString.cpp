// 114456118	Apr/28/2021 19:36UTC+5.5	shamanthmuroor	1335B - Construct the String	GNU C++17	Accepted	30 ms	0 KB

// 1335 b - Construct the string

#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, n;
        cin >> n >> a >> b;
        for(int i=0; i<n; ++i) {
            cout << char('a' + i%b);
        }
        cout << endl;
    }
    return 0;
}
