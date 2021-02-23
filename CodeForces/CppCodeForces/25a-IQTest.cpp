//108304900	Feb/23/2021 19:10UTC+5.5	shamanthmuroor	25A - IQ test	GNU C++17	Accepted	60 ms	0 KB

//Question 25A: IQ test

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, oddCnt=0, evenCnt=0, lastEvenIndex, lastOddIndex;
    int arr[100];
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    for(int i=0; i<n; i++) {
        if(arr[i] % 2 == 0) {
            evenCnt++;
            lastEvenIndex = i;
        }
        else{
            oddCnt++;
            lastOddIndex = i;
        }

        
        if(evenCnt>oddCnt && oddCnt == 1) {
            cout << lastOddIndex + 1;
            break;
        }
        else if(oddCnt>evenCnt && evenCnt == 1)
        {
            cout << lastEvenIndex+1;
            break;
        }
    }
    cout << endl;
    return 0;
}