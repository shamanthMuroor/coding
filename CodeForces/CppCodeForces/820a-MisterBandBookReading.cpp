// 120818932	Jun/28/2021 21:53UTC+5.5	shamanthmuroor	820A - Mister B and Book Reading	GNU C++17	Accepted	31 ms	0 KB

#include <iostream>

using namespace std;

int main() {
    int c, v0, v1, a, l, cnt=1;
    cin >> c >> v0 >> v1 >> a >> l;
    int rd= v0, ad= v0;
    while (rd < c) {
        ad = min(v1, ad + a);
        rd += ad - l;
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}