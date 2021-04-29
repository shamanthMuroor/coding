// 114609174	Apr/29/2021 21:55UTC+5.5	shamanthmuroor	1385B - Restore the Permutation by Merger	GNU C++17	Accepted	46 ms	100 KB

// 1385 B - Restore the Permutation By Merger

#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, x;
        set<int> p;
        vector<int> arr;
        cin >> n;
        for(int i=0; i<2*n; ++i) {
            cin >> x; 
            if(p.find(x) == p.end()) {
                arr.push_back(x);
                p.insert(x);
            }
        }
        for(int i=0; i<arr.size(); ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}