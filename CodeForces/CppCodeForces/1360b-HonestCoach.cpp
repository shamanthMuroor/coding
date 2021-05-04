// 115138541	May/04/2021 22:53UTC+5.5	shamanthmuroor	1360B - Honest Coach	GNU C++17	Accepted	77 ms	200 KB

// 1360 B - Honest Coach

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t; 
    cin >> t;
    while(t--) {
        int n,val, split ;
        vector<int> v;
        cin >> n;
        for(int i=0; i<n; i++) {
            cin >> val;
            v.push_back(val);
        }
        sort(v.begin(), v.end());
        split = abs(v[0]-v[1]);
        for(int i=2; i<n; i++) {
            split = min(split, abs(v[i]-v[i-1]));
        }
        cout << split << endl;
    }
    return 0;
}


// 3 1 2 6 4
// sort - 1 2 3 4 6
// least = 1-2= 1


// 2 1 3 2 4 3
// sort - 1 2 2 3 3 4
// min = 2-2 = 0

// 7 9 3 1
// sort - 1 3 7 9
// min = 1-3 = 2

// 1 1000
// 999