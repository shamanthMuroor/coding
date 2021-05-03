// 114992664	May/03/2021 10:53UTC+5.5	shamanthmuroor	151A - Soft Drinking	GNU C++17	Accepted	62 ms	0 KB

// 151 A - Soft Drinking

#include <iostream>

using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np; 
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int drink_req_toast = (k*l)/nl;
    int limes_req_toast = c*d;
    int salt_req_toast = p/np;
    cout << min(min(drink_req_toast, limes_req_toast), salt_req_toast) / n << endl;
    return 0;
}


// #include <iostream>

// using namespace std;

// int main() {
//     int n, k, l, c, d, p, nl, np; 
//     cin >> n >> k >> l >> c >> d >> p >> nl >> np;
//     cout << min(min((k*l)/nl, c*d), (p/np)) / n << endl;
//     return 0;
// }