// 110582617	Mar/21/2021 09:52UTC+5.5	shamanthmuroor	230B - T-primes	GNU C++17	Accepted	1246 ms	0 KB

// 230 B - T Primes

#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int n,a,x,i;
    cin >> n;
    while(n--) {
        scanf("%lld", &a);
        x = sqrt(a);

        // Check if x has divisor, having divisor then x is not prime
        for(i=2; i*i<x; i++) 
            if(x%i==0)
                break;
        // Check if break was executed  
        if(i*i>x && a>1 && x*x==a) 
            printf("YES\n");
        else    
            printf("NO\n");
    }
    return 0;
}


// TLE on codeforces(Bruteforce)

// int main() {
//     int n;
//     vector<int> a(n);
//     cin >> n;
//     for(int i=0; i<n; i++) {
//         cin >> a[i];
//         int count = 0;
//         for(int j=2; j<=a[i]/2; j++) {
//             if(a[i]%j == 0) {
//                 count++;
//                 if(count == 2)
//                     break;
//             }
//         }
//         if(count == 1)
//             cout << "YES" << endl;
//         else 
//             cout << "NO" << endl;
//     }
//     return 0;
// }