// 108918623	Mar/02/2021 21:15UTC+5.5	shamanthmuroor	A - K-th Largest Value	GNU C++17	Accepted	77 ms	3900 KB

// 1491a Kth Largest Value

#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 5;
int n, q, a[N], cnt;
int main()
{
    scanf("%d%d",&n,&q);
	for(int i = 1; i <= n; ++i)
	{
    	scanf("%d",a+i);
		cnt += a[i];
	}
	while(q--)
	{
		int opt, x;
		scanf("%d%d",&opt,&x);
		if(opt == 1)
		{
			if(a[x]) cnt--;
			else cnt++;
			a[x] = 1 - a[x];
		}
		else
		{
			if(cnt >= x) puts("1");
			else puts("0");
		}
	}
	return 0;
}