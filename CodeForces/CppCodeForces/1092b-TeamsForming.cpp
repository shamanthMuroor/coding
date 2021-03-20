// 110559405	Mar/20/2021 22:22UTC+5.5	shamanthmuroor	1092B - Teams Forming	GNU C++17	Accepted	31 ms	0 KB

// 1092-B Teams Forming

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, probs = 0;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	for (int i = 0; i < n; i += 2) {
		probs += a[i + 1] - a[i];
	}
	cout << probs << endl;

	return 0;
}