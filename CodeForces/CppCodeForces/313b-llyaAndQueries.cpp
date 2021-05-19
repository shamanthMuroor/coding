// 116680236	May/19/2021 22:43UTC+5.5	shamanthmuroor	313B - Ilya and Queries	GNU C++17	Accepted	1092 ms	600 KB

// 313 B - llya And Queries

#include <iostream>

using namespace std;

int main() {
    string s;
    int m, count = 0, l,r;
    cin >> s >> m;
    int dp[100005];
    for(int i=1; i<s.size(); i++) {
        if(s[i-1] == s[i]) {
            count++;
        }
        dp[i] = count;
    }

    while(m--) {
        cin >> l >> r;
        cout << dp[r-1] - dp[l-1] << endl;
    }
    return 0;
}