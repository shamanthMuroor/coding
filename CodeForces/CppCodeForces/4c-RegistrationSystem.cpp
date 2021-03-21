// 110581018	Mar/21/2021 08:59UTC+5.5	shamanthmuroor	4C - Registration System	GNU C++17	Accepted	1372 ms	900 KB

// 4c - Registration System

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    string s;
    map<string, int> m;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> s;
        if(m.count(s) > 0) {
            cout << s << m[s] << endl;
            m[s] += 1;
        }
        else {
            m[s] = 1;
            cout << "OK" << endl;
        }
    }
    return 0;
}