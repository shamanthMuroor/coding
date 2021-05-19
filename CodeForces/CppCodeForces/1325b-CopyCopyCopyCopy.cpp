// 116677770	May/19/2021 22:14UTC+5.5	shamanthmuroor	1325B - CopyCopyCopyCopyCopy	GNU C++17	Accepted	249 ms	3200 KB

// 1325 B - CopyCopyCopyCopyCopyCopy

#include <iostream>
#include <set>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        long long int x;
        set<long long int> s;
        cin >> n;
        while(n--) {
            cin >> x;
            s.insert(x);
        }
        cout << s.size() << endl;
    }
    return 0;
}