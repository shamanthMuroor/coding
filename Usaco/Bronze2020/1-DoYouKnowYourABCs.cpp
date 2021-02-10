/* Problem 1: Do you know your ABCs 
(2020 December Contest, Bronze)
Farmer Johns cows have been holding a daily online gathering on 
the 'mooZ' video meeting platform. For fun, they have invented a 
simple number game to play during the meeting to keep themselves 
entertained.
Elsie has three positive integers A, B, and C (A≤B≤C). These 
integers are supposed to be secret, so she will not directly 
reveal them to her sister Bessie. Instead, she gives Bessie seven 
(not necessarily distinct) integers in the range 1…10^9, claiming 
that they are A, B, C, A+B, B+C, C+A, and A+B+C in some order.

Given a list of these seven numbers, please help Bessie determine 
A, B, and C. It can be shown that the answer is unique.*/

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n=7;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+7);
    int a = arr[0];
    int b = arr[1];
    int c = arr[n-1] - a - b;
    cout << a << " " << b << " " << c << endl;
    return 0;
}