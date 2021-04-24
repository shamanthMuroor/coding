// 114083668	Apr/24/2021 12:41UTC+5.5	shamanthmuroor	758A - Holiday Of Equality	GNU C++17	Accepted	31 ms	0 KB

// 758 A - Holiday of Equality


#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, l;
    long long int a, maxi=0, sum=0;
    vector<long long int> arr;
    cin >> n;
    l = n;
    while(l--) {
        cin >> a;
        arr.push_back(a);
        maxi = max(maxi, a);
    }

    for(int i=0; i<n; i++) {
        sum += maxi-arr[i];
    }

    cout << sum << endl;

    return 0;
}