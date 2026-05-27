#include <iostream>
using namespace std;

void printArr(int *arr, int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " , ";
    }
    cout << endl;
}

int main() {
    int arr[] = {5, 4, 3, 9, 2};
    int n  =  sizeof(arr) / sizeof(int);
     
    // with extra space
    int copyArr[n];
    for(int i= 0; i<n;  i++ ) {
        int j = n-i-1;
        copyArr[i] = arr[j];
    }

    for(int i=0; i<n; i++) {
        arr[i] = copyArr[i];
    }
 
    //without extra space
    int st = 0, ed = n-1;
    while(st<=ed) {
        swap(arr[st], arr[ed]);
        st++;
        ed--;
    }
    printArr(arr, n);
    return 1;
}