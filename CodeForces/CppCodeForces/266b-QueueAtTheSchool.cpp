//107119822	Feb/11/2021 16:51UTC+5.5	shamanthmuroor	266B - Queue at the School	GNU C++17	Accepted	62 ms	0 KB

// Problem 266b: Queue At the School

// The positions in the queue are sequentially numbered by integers 
// from 1 to n, at that the person in the position number 1 is 
// served first. Then, if at time x a boy stands on the i-th 
// position and a girl stands on the (i + 1)-th position, then 
// at time x + 1 the i-th position will have a girl and the 
// (i + 1)-th position will have a boy. The time is given in seconds.

// You've got the initial position of the children, at 
// the initial moment of time. Determine the way the queue 
// is going to look after t seconds. 

#include <iostream>

using namespace std;

int main() {
    int n, t;
    string s;
    char temp;
    cin >> n >> t;
    cin >> s;
    while(t--) {
        for(int i=0; i<n-1; i++) {
            if(s[i] == 'B' && s[i+1] == 'G') {
                temp = s[i];
                s[i] = s[i+1];
                s[i+1] = temp;
                i++;
            }
        }
    }
    cout << endl << s << endl;
    return 0;
}