// 114507150	Apr/29/2021 12:25UTC+5.5	shamanthmuroor	706B - Interesting drink	GNU C++17	Accepted	592 ms	1300 KB

// 706 B - Interesting Drink

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, x, q;
    vector<int> arr;
    cin >> n;
    while(n--) {
        cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());

    cin >> q;
    long long int m[q];
    for(int i=0; i<q; i++) {
        cin >> m[i];
    }

    for(int i=0; i<q; i++) {
        vector<int>::iterator upper;
        upper = upper_bound(arr.begin(), arr.end(), m[i]);
        cout << upper-arr.begin() << endl;
    }
    return 0;
}

