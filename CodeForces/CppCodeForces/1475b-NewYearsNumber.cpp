// 116662083	May/19/2021 19:34UTC+5.5	shamanthmuroor	1475B - New Year's Number	GNU C++17	Accepted	62 ms	0 KB

// 1475 B - New Year's Number

#include <iostream>

using namespace std;

int main() {
  int test;
  cin >> test;
  while (test--) {
    int n;
    cin >> n;
    int cnt2021 = n % 2020;
    int cnt2020 = (n - cnt2021) / 2020 - cnt2021;
    if (cnt2020 >= 0 && 2020 * cnt2020 + 2021 * cnt2021 == n) {
      cout << "YES\n";
    } 
    else {
      cout << "NO\n";
    }
  }
  return 0;
}