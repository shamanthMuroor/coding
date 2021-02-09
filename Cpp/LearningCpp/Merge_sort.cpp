#include <iostream>

using namespace std;

void merge(int arr[], int l, int m, int r) {
    int n1 = m-l+1;
    int n2 = r-m;

    //Declare temp arrays
    int L[n1], R[n2];

    //Copy data to temp arrays
    for(int i=0; i<n1; i++)
        L[i] = arr[l+i];
    for(int j=0; j<n2; j++)
        R[j] = arr[m+1+j];

    int i=0;
    int j=0;
    int k=l;

    while(i<n1 && j<n2) {
        if(L[i]<=R[j])  {
            arr[k] = L[i++];
        }
        else
            arr[k] = R[j++];
        k++;
    }
    
    while(i<n1) {
        arr[k++] = L[i++];
    }

    while(j<n2) {
        arr[k++] = R[j++];
    }
}

void mergesort(int arr[], int l, int r) {
    //Base case
    if(l>=r) 
        return;

    int m = (l+r)/2;
    mergesort(arr, l, m);
    mergesort(arr, m+1, r);
    merge(arr, l, m, r);
}


void printArray(int arr[], int arr_size) {
    for(int i=0; i<arr_size; i++) {
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int arr_size = sizeof(arr)/sizeof(arr[0]);

    cout << "Given Array: ";
    printArray(arr, arr_size);
    
    mergesort(arr, 0, arr_size-1);

    cout << "Sorted Array: ";
    printArray(arr, arr_size);
    return 0;
}