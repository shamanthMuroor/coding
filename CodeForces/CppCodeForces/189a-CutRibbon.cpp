// 110751053	Mar/22/2021 21:16UTC+5.5	shamanthmuroor	189A - Cut Ribbon	GNU C++17	Accepted	31 ms	0 KB

// 189 A - Cut Ribbon

#include <bits/stdc++.h>

using namespace std;

int main() {
    int num[10000] = {0};
    int n, a, b, c;
    scanf("%d %d %d %d", &n, &a, &b, &c);
    
	for (int i = 0; i < n; ++i)
	{
		if (i == 0 || num[i] > 0)
		{
			num[i+a] = max(num[i+a], num[i] + 1);
			num[i+b] = max(num[i+b], num[i] + 1);
			num[i+c] = max(num[i+c], num[i] + 1);
		}
	}
	printf("%d", num[n]);
 
	return 0;
}