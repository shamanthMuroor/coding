// 112594922	Apr/11/2021 08:45UTC+5.5	shamanthmuroor	A - Spy Detected!	GNU C++17	Accepted	15 ms	0 KB

// 1512A - Spy Detected

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n;
    scanf("%d", &t);
    while(t--) {
        cin >> n;
        map<int, int> m; 
        int arr[n];
        for(int i=0; i<n; i++) {
            cin >> arr[i];
            m[arr[i]]++;
        }

        for(int i=0; i<n; i++) {
            if(m[arr[i]] == 1) {
                cout << i + 1 << endl;
                break;
            }
        }
    }
    return 0;
}