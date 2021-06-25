#include <iostream>
// #include <algorithm>

using namespace std;

void sorti(int arr[], int size) {
    for(int i=0; i<size-1; i++) {
        for(int j=0; j<size-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int size = sizeof(arr)/sizeof(arr[0]);
    sorti(arr, size);
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }

    // sort(arr, arr+n);
    if(n< 3) {
        cout << endl << arr[n-1] << endl;
    }
    else {
        cout << endl << arr[n-3] << endl;
    }
    return 0;
}