#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, inp, wrongOdd=0, wrongEven=0; 
    scanf("%d", &t);
    while(t--) {
        vector<int> arr;
        scanf("%d", &n);
        for(int i=0; i<n; i++) {
            scanf("%d", &inp);
            arr.push_back(inp);
            if( i%2 == 0 ) {
                cout << i << " " ;
                if(inp % 2 != 0)
                    cout << inp;
                    wrongOdd++;
            }
            else
                if(inp % 2 == 0)
                    wrongEven++;
        }
        if(wrongOdd == 0 && wrongEven ==0)
            printf("0\n");
        else if(wrongOdd == wrongEven && wrongOdd != 0 && wrongEven !=0 ) 
            printf("%d\n", wrongOdd);
        else   
            printf("-1\n");
    }
    return 0;
}