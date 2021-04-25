// // Time limit exceeded

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t; 
    while(t--) {
        bool flag = false;
        long long int n, k, val, mini, i, MINI, MAXI=0;    
        set<long long int> s;
        vector<long long int> temp;
        cin >> n >> k;
        for(int i=0; i<n; i++) {
            cin >> val;
            s.insert(val);
            MAXI = max(MAXI, val);
            temp.push_back(val);
        }

        while(k--) {
            // a = mex(s)
            sort(temp.begin(), temp.end());
            for(i=0; i<n+1; i++) {
                mini = *min_element(temp.begin(), temp.end());
                if(min(i, mini) == mini) {
                    if(mini == temp.back()) {
                        MINI = mini + 1;
                        flag = true;
                        break;
                    }
                    vector<long long int>::iterator iter = find(temp.begin(), temp.end(), mini);
                    temp.erase(iter);
                }
                else {
                    MINI = i;
                    break;
                }
            }

            // (a+b)/2
            s.insert(ceil((float)(MINI+MAXI)/2));
            if(flag) 
                break;
        }

            if(flag) {
                cout << s.size() + k << endl;
            }
            else
                cout << s.size() << endl;
    }
    return 0;
}


// // // Time limit exceeded

// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <cmath>

// using namespace std;

// int main() {
//     int t;
//     cin >> t; 
//     while(t--) {
//         bool flag = false;
//         long long int n, k, val, mini, b, i, a, ele;    
//         vector<long long int> s;
//         vector<long long int> temp;
//         cin >> n >> k;
//         for(int i=0; i<n; i++) {
//             cin >> val;
//             s.push_back(val);
//         }

//         while(k--) {
//             // a = mex(s)
//             temp = s;
//             sort(temp.begin(), temp.end());
//             for(i=0; i<1000000000; i++) {
//                 mini = *min_element(temp.begin(), temp.end());
//                 if(min(i, mini) == mini) {
//                     if(mini == temp.back()) {
//                         a = mini + 1;
//                         flag = true;
//                         // cout << "Extra: " << extra << endl;
//                         break;
//                     }
//                     vector<long long int>::iterator iter = find(temp.begin(), temp.end(), mini);
//                     temp.erase(iter);
//                 }
//                 else {
//                     a = i;
//                     break;
//                 }
//             }

//             // b = max(s)            
//             b = *max_element(s.begin(), s.end());
//             // (a+b)/2
//             s.push_back(ceil((float)(a+b)/2));
//             if(flag) 
//                 break;
//         }
//             sort(s.begin(), s.end());
//             auto last = unique(s.begin(), s.end());
//             s.erase(last, s.end());
//             if(flag) {
//                 cout << s.size() + k << endl;
//             }
//             else
//                 cout << s.size() << endl;
//     }
//     return 0;
// }