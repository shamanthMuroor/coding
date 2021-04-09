// 112352173	Apr/09/2021 10:46UTC+5.5	shamanthmuroor	1343B - Balanced Array	GNU C++17	Accepted	46 ms	0 KB

// 1343 B - Balanced Array

#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int t, n;
    scanf("%lld", &t);
    while(t--) {
        scanf("%lld", &n);
        if((n/2)%2 == 0) {
            printf("YES\n");
            for(int i=1; i<=(n/2); i++) {
                printf("%d ", i*2);
            }
            for(int i=1; i<(n/2); i++) {
                printf("%d ", (i*2)-1);
            }
            printf("%lld\n", ((n/2)*2)+((n/2)-1));
        }
        else
            printf("NO\n");
    }
    return 0;
}