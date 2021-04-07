// 112246186	Apr/07/2021 22:25UTC+5.5	shamanthmuroor	479A - Expression	GNU C++17	Accepted	30 ms	0 KB

// 479_A - Expression

#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int a, b, c, max=0;
    scanf("%lld %lld %lld", &a,&b,&c);
    long long int ans = a+b+c;
    if((a+b)*c > ans)
        ans = (a+b)*c;
    if((a*b)+c > ans)
        ans = (a*b)+c;
    if(a*(b+c) > ans)
        ans = (a*(b+c));
    if(a+(b*c) > ans)
        ans = (a+(b*c));
    if(a*b*c > ans)
        ans = a*b*c;
    printf("%lld", ans);
    return 0;
}