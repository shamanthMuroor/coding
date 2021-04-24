// Time limit exceeded


#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t; 
    while(t--) {
        long long int n, k, val, mini, b, i, a, ele;    
        vector<long long int> arr;
        vector<long long int> temp;
        cin >> n >> k;
        for(int i=0; i<n; i++) {
            cin >> val;
            arr.push_back(val);
        }

        while(k--) {
            // a = mex(s)
            temp = arr;
            for(i=0; i<1000000000; i++) {
                sort(temp.begin(), temp.end());
                mini = *min_element(temp.begin(), temp.end());
                if(min(i, mini) == mini) {
                    if(mini == temp.back()) {
                        a = mini + 1;
                        break;
                    }
                    vector<long long int>::iterator iter = find(temp.begin(), temp.end(), mini);
                    temp.erase(iter);
                }
                else {
                    a = i;
                    break;
                }
            }

            // b = max(s)            
            b = *max_element(arr.begin(), arr.end());
            // (a+b)/2
            ele = ceil((float)(a+b)/2);
            arr.push_back(ele);
        }
            sort(arr.begin(), arr.end());
            auto last = unique(arr.begin(), arr.end());
            arr.erase(last, arr.end());
            cout << arr.size() << endl;
    }
    return 0;
}












// // NOT SOLVED

// #include <bits/stdc++.h>

// using namespace std;

// #define mx 10e9

// void solve() {
//     int n, k, x;
//     set<int> s;
//     cin >> n >> k;
//     for(int i=0; i<n; ++i) {
//         cin >> x;
//         s.insert(x);
//     }
//     for(int i=0; i<k; ++i) {
//         int mn = 0;
//         for(int element : s) {
//             if(element - mn == 0)
//                 ++mn;
//             else   
//                 break;
//         }
//         s.insert((mn + *(s.end()))/2);
//     }
//     cout << s.size() << endl;
// }

// int main() {
//     int t;
//     cin >> t;
//     for(int i=0; i<t; i++) {
//         solve();
//     }
//     return 0;
// }