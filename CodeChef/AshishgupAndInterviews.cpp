// Problem: INTRVS Contest: PRACTICE(SCHOOL) User: shamanth38
// 04-05-2021 20:29:15 32 Lines 0.14 sec 14.9M Score: 100(100pts)

// Ashishgup and Interviews

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t; 
    cin >> t;
    while(t--) {
        int n, k, solved=0, val;
        bool slow=false, bot=true;
        cin >> n >> k;
        for(int i=0; i<n; i++) {
            cin >> val;
            if(val > k) slow=true;
            if(val > 1 || val == -1) bot=false;
            if(val >= 0) solved++;
        }
        if(solved < ceil((float)n/2)) {
            cout << "Rejected" << endl;
        }
        else if(slow) {
            cout << "Too Slow" << endl;
        }
        else if(bot) {
            cout << "Bot" << endl;
        }
        else
            cout << "Accepted" << endl;
    }
    return 0;
}