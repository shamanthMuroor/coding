// 114030208	Apr/23/2021 21:57UTC+5.5	shamanthmuroor	200B - Drinks	GNU C++17	Accepted	62 ms	200 KB

// 200 B - Drinks

#include <iostream>

using namespace std;

int main() {
    int n;
    float p, frac=0.0, drinks;
    cin >> n;
    drinks = n;
    while(n--) {
        cin >> p;
        frac += p/100;
    }
    float ans = (frac/drinks) * 100;
    cout << ans << endl;
    return 0;
}