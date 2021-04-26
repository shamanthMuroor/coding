// 114273159	Apr/26/2021 16:58UTC+5.5	shamanthmuroor	1367B - Even Array	GNU C++17	Accepted	30 ms	200 KB

// 1367 B - Even Array

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n, inp, wrongOdd=0, wrongEven=0; 
        vector<int> arr;
        scanf("%d", &n);
        for(int i=0; i<n; i++) {
            scanf("%d", &inp);
            arr.push_back(inp);
            if( i%2 == 0 ) {
                if(inp % 2 != 0) {
                    wrongOdd++;
                }
            }
            else {
                if(inp % 2 == 0) {
                    wrongEven++;
                }
            }
        }
        if(wrongOdd == wrongEven) 
            printf("%d\n", wrongOdd);
        else   
            printf("-1\n");
    }
    return 0;
}