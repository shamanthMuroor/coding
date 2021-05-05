// 115234446	May/05/2021 20:23UTC+5.5	shamanthmuroor	A - Do Not Be Distracted!	GNU C++17	Accepted	15 ms	148 KB

// 1520 A - Do not be Distracted

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        set<char> tasks;
        bool flag = false;
        char prev;
        prev = s[0];
        tasks.insert(prev);
        for(int i=1; i<n; i++) {
            if(s[i] == prev) {
                continue;
            }
            if(tasks.find(s[i]) != tasks.end()) {
                flag = true;
                break;
            }
            else {
                prev = s[i];
                tasks.insert(s[i]);
            }
        }
        if(flag) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }
    }
    return 0;
}