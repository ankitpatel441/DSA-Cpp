#include <bits/stdc++.h>
using namespace std;

void printArr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int *arr, int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    printArr(arr, n);
}

//Optimized Bubble Sort
void bubbleSort2(int arr[] , int n) {
    for(int i = 0; i <= n-1; i++) {
        bool swapped = false;
        for(int j=0; j<=n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped) {
        break;
        }

    }
    printArr(arr, n);
}

int main() {
    int arr[] = {5, 4, 1, 2, 3};
    int n = sizeof(arr) / sizeof(int);

    bubbleSort2(arr, n);

    return 0;
}