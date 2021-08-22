#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int k, ele;
    cin >> k;
    vector<int> cm;
    for(int i=0; i<12; i++) {
        cin >> ele;
        cm.push_back(ele);
    }
    // Sort
    sort(cm.begin(), cm.end());
    
    int total = 0, count=0;
    for(int i=0; i<12; i++) {
        total += cm[11-i];
        count++;
        if(total >= k) {
            if(k == 0) 
                count = 0;
            break;
        }
    }
    if(total >= k) {
        cout << count << endl;
    }
    else {
        cout << -1 << endl;
    }
}