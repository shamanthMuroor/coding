#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> puzzles;
    int ele;
    for(int i=0; i<m; i++) {
        cin >> ele;
        puzzles.push_back(ele);
    }
    sort(puzzles.begin(), puzzles.end());
    int mini = INT_MAX;
    // int mini = abs(puzzles[0] - puzzles[n-1]);
    for(int i=0; i<=m-n; i++) {
        mini = min(abs(puzzles[i] - puzzles[i+n-1]), mini);
    }
    cout << mini << "\n";

    return 0;
}