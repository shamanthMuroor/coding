// NOT COMPLETE

#include <iostream>

using namespace std;

int main() {
    int n, x, y; 
    cin >> n;
    while(n--){
    int count = 0;
        cin >> x >> y;
        for(int i=2; i<=x; i++) {
            for(int j=1; j<=y; j++) {
                if((i/j) == (i%j)) {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0; 
}