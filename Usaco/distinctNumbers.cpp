#include <iostream>
#include <set>

using namespace std;

int main() {
    int n, val;
    set<int> s;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> val;
        s.insert(val);
    }
    cout << s.size() << endl;
    return 0;
}