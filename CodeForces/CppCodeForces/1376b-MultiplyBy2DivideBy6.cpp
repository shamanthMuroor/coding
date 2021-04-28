// 114430088	Apr/28/2021 14:16UTC+5.5	shamanthmuroor	1374B - Multiply by 2, divide by 6	GNU C++17	Accepted	124 ms	0 KB

// 1376 B - Multiply by 2, Divide By 6

#include <iostream>

using namespace std;

int main() {
    long long t; 
    cin >> t;
    while(t--) {
        long long int n;
        int count = 0;
        cin >> n;
        while(n!=1) {
            count++;
            if(n%2 == 0 && n%3 == 0) {
                n=n/6;
            }
            else {
                if(n > 10000000000) {
                    count = -1;
                    break;
                }
                n=n*2;
            }
        }
        cout << count << endl;
    }

    return 0;
}






// 15116544
// divide by 6 and get 419904;
// divide by 6 and get 69984;
// divide by 6 and get 11664;
// divide by 6 and get 1944;
// divide by 6 and get 324;
// divide by 6 and get 54;
// divide by 6 and get 9;
// Multi 2 - 18
// divide by 6 and get 3;
// Multi 2 - 6
// divide by 6 and get 1;


// 387420489
// Multi 2 - 774840978
// divide by 774840978 and get 129140163;
// Multi 2 - 258280326
// divide by 258280326 and get 43046721;
// Multi 2 - 86093442
// divide by 86093442 and get 14348907;
// Multi 2 - 2,86,97,814
// divide by 2,86,97,814 and get 47,82,969;
// Multi 2 - 95,65,938
// divide by 95,65,938 and get 15,94,323;
// Multi 2 - 31,88,646
// divide by 31,88,646 and get 5,31,441;
// Multi 2 - 10,62,882
// divide by 10,62,882 and get 1,77,147;
// Multi 2 - 3,54,294
// divide by 3,54,294 and get 59,049;
// Multi 2 - 1,18,098
// divide by 1,18,098 and get 19,683;
// Multi 2 - 39,366
// divide by 39,366 and get 6,561;
// Multi 2 - 13,122
// divide by 13,122 and get 2,187;
// Multi 2 - 4,374
// divide by 4,374 and get 729;
// Multi 2 - 1,458
// divide by 1,458 and get 243;
// Multi 2 - 486
// divide by 486 and get 81;
// Multi 2 - 162
// divide by 162 and get 27;
// Multi 2 - 54
// divide by 54 and get 9;
// Multi 2 - 18
// divide by 18 and get 3;
// Multi 2 - 6
// divide by 6 and get 6;
