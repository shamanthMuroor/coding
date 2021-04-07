// 112248775	Apr/07/2021 22:58UTC+5.5	shamanthmuroor	1343A - Candies	GNU C++17	Accepted	31 ms	0 KB

// 1343-A Candies

#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int t, n, val;
    scanf("%lld", &t);
    while(t--){
        scanf("%lld", &n);
        for(int pw=2; pw<30; pw++) {
            val = pow(2,pw) - 1;
            if(n % val == 0) {
                printf("%lld\n", n/val);
                break;
            }
        }
    }
    return 0;
}