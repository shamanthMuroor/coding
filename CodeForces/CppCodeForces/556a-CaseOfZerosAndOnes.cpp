// 120059982	Jun/20/2021 15:34UTC+5.5	shamanthmuroor	556A - Case of the Zeros and Ones	GNU C++17	Accepted	46 ms	500 KB

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int l;
    cin >> l;
    string s;
    cin >> s;
    int ones = count(s.begin(), s.end(), '1');
    int zeros = l - ones;
    cout << l-(2*min(ones, zeros)) << "\n";   // |ones - zeros|
    return 0;
}