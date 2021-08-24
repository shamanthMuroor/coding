// 126842047	Aug/24/2021 18:54UTC+5.5	shamanthmuroor	977B - Two-gram	GNU C++17	Accepted	31 ms	3800 KB

#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    int n; 
    cin >> n;
    string s;
    cin >> s;
    map<string, int> maxCount;

    int maxVal = 0;
    string maxItem;
    for(int i=0; i<n-1; i++) {
        string temp = s.substr(i,2);
        maxCount[temp] += 1;
        if(maxCount[temp] > maxVal) {
            maxVal = maxCount[temp];
            maxItem = temp;
        }
    }
    cout << maxItem;

    return 0;
}