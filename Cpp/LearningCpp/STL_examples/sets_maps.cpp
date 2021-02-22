#include <bits/stdc++.h>

using namespace std;

int main() {
    //Unodered Sets
    unordered_set<int> us;
    us.insert(1);
    us.insert(4);
    us.insert(3);
    cout << us.count(1) << endl;
    us.erase(1);
    cout << us.count(5) << endl;

    for(int element : us) {
        cout << element << " ";
    }
    cout << endl;

    // Ordered Sets
    set<int> s;
    s.insert(1);
    s.insert(54);
    s.insert(120);
    s.insert(2);
    cout << *s.upper_bound(6) << endl;
    cout << *s.lower_bound(6) << endl;
    cout << *s.begin() << "\n";
    auto it = s.end();
    cout <<  *(--it) << endl;
    return 0;
}