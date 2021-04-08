// 112273590	Apr/08/2021 10:48UTC+5.5	shamanthmuroor	A - Déjà Vu	GNU C++17	Accepted	108 ms	1600 KB

// 1504 A - Deja Vu

#include <bits/stdc++.h>

using namespace std;

bool palindrome(const string &s) {
    for(int i=0; i<s.length(); i++) {
        if(s[i] != s[s.length()-i-1]) 
            return false;
    }
    return true;
}

int main() {
    int t;
    string s;
    scanf("%d", &t);
    while(t--) {
        cin >> s;
        if(!palindrome(s + 'a')) {
            cout << "YES\n" << s << 'a' << endl;
        }
        else if(!palindrome('a' + s)) {
            cout << "YES\n" << 'a' << s << endl;
        }
        else 
            printf("NO\n");
    }
    return 0;
}