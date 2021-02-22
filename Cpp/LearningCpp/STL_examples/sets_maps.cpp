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

    // Unorderd Map
    unordered_map<int, int> um;
    um[1] = 5;
    um[3] = 14;
    um[2] = 7;
    um.erase(2);
    cout << um[1] << endl;
    cout << um.count(7) << endl;
    cout << um.count(1) << endl; 

    // Ordered Map
    map<int, int> m;
    m[3] = 6;
    m[11] = 11;
    m[10] = 491;
    cout << m.lower_bound(10)->first << " " << m.lower_bound(10) -> second << endl;
    cout << m.upper_bound(10)->first << " " << m.upper_bound(10) -> second << endl;
    m.erase(11);
    if(m.upper_bound(10) == m.end())
        cout << "End" << endl;
    return 0;
}