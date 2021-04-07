// Solution to 2020 January USACO Bronze 
// Problem 1: Word Processor

#include <bits/stdc++.h>

using namespace std;

int main() {    
	freopen("word.in","r",stdin);
	freopen("word.out","w",stdout);
    int n, k, cnt=0;
    string s;
    scanf("%d %d", &n, &k);
    while(n--) {
        cin>>s;
        cnt += s.length();
        if(cnt > k) {
            cout << endl << s;
            cnt = s.length();
        }
        else {
            if(cnt > s.length()) {
                cout << " " << s;
            }
            else
                cout << s;
        }
    }
    return 0;
}