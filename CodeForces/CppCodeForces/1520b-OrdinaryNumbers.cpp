// 115336720	May/05/2021 22:50UTC+5.5	shamanthmuroor	B - Ordinary Numbers	GNU C++17	Accepted	62 ms	3600 KB

// 1520 B - Ordinary Numbers

#include <bits/stdc++.h> 
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,ans=0;
        cin>>n;
        for(long long i=1;i<=9;i++)
        {
            long long num=i;
            while(num<=n)
            {
                ans++;
                num=num*10+i;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}


// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while(t--) {
//         long long int n;
//         cin >> n;
//         int count = 0;
//         int x = n;
//         if(x<10) {
//             cout << x << endl;
//             continue;
//         }

//         while(x > 0) {
//             count++;
//             x/=10 ;
//         }
//         int firstDiv = 0;
//         while(count > 0) {
//             firstDiv = firstDiv*10 + 1;
//             count--;
//         }
//         int sum = 0;
//         if(firstDiv <= n) {
//             sum = sum + n/firstDiv;
//         }
//         firstDiv = firstDiv/10;

//         while(firstDiv>0){
//             sum = sum+9;
//             firstDiv = firstDiv/10;
//         }
//         cout << sum << endl;
//     }
//     return 0;
// }