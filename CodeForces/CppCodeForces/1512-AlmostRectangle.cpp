#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n;
    char inp;
    vector<vector<char>> points;
    vector<char> a;
    vector<char> disp;
    vector<vector<char>> display;
    scanf("%d", &t); 
    while(t--) {
        bool first=true;
        cin >> n;
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=n; j++) {
                cin >> inp;
                a.push_back(i);
                a.push_back(j);
                if(inp == '*') {
                    if(first) {                    
                        iValue = i;
                        if(i != j) {
                            jValue = j;
                        }
                        first = false;
                        break;
                    }
                    else {
                        points.push_back(a);

                    }
                }
            }
            display.push_back(disp);
        }

        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++ ) {
                cout << points[i][j] << " ";
            }
        }
    }
    return 0;
}